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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0f;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 8;
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
	var uLocal_128 = 8;
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
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	var uLocal_166 = 0;
	int iLocal_167[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
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
	struct<59> Local_214 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	struct<431> Local_217 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 20, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, 0, 0, 1101529088, 1096810496, 0, 12, 9, -1, 12, 1065353216, 0, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 4, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 2, 0, 0, 0, 0, -1, -1, 1, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0 } ;
	struct<542> Local_218 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	struct<20> Local_221 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_222[7];
	struct<21> Local_223[7];
	struct<24> Local_224 = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 5;
	var uLocal_227 = -1;
	var uLocal_228 = 3;
	var uLocal_229 = -1;
	var uLocal_230 = 0;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 3;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = -1;
	var uLocal_245 = 0;
	var uLocal_246 = -1;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = -1;
	var uLocal_254 = 3;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = 0;
	var uLocal_259 = -1;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = -1;
	var uLocal_267 = 3;
	var uLocal_268 = -1;
	var uLocal_269 = 0;
	var uLocal_270 = -1;
	var uLocal_271 = 0;
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = -1;
	var uLocal_280 = 3;
	var uLocal_281 = -1;
	var uLocal_282 = 0;
	var uLocal_283 = -1;
	var uLocal_284 = 0;
	var uLocal_285 = -1;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292[1] = { 0 };
	struct<7> Local_293 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = -1;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302[1] = { 0 };
	struct<2> Local_303[1];
	struct<2> Local_304 = { 0, 0 } ;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	struct<6> Local_307 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	struct<8> Local_310 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_311 = 0;
	struct<2> Local_312 = { -1, -1 } ;
	struct<12> Local_313 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	int iLocal_314[1] = { -1 };
	var uLocal_315 = 1;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319[1] = { -1 };
	struct<4> Local_320[1];
	int iLocal_321 = -1;
	struct<8> Local_322 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_323 = 0;
	int iLocal_324 = 20;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 20;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 20;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 20;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 20;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 20;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	struct<2> Local_492 = { 0, -1 } ;
	int iLocal_493 = 0;
	bool bLocal_494 = 0;
	bool bLocal_495 = 0;
	bool bLocal_496 = 0;
	var uLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	struct<3> Local_502 = { 0, 0, 0 } ;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	bool bLocal_505 = 0;
	bool bLocal_506 = 0;
	struct<2> Local_507 = { -1, -1 } ;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	var uLocal_510 = 3;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	var uLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	int iLocal_521 = 0;
	var uLocal_522 = 1;
	var uLocal_523 = 0;
	float fLocal_524 = 0f;
	float fLocal_525 = 0f;
	float fLocal_526 = 0f;
	float fLocal_527 = 0f;
	float fLocal_528 = 0f;
	int iLocal_529 = 0;
	int iLocal_530[1] = { 0 };
	var uLocal_531[1] = { 0 };
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	struct<16> Local_537 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<233> Local_538 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, -1, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_539 = 1;
	var uLocal_540 = 0;
	var uLocal_541 = -1;
	var uLocal_542 = -1;
	var uLocal_543 = -1;
	var uLocal_544 = 0;
	struct<38> Local_545[8];
	struct<5> Local_546 = { 0, 0, 0, 0, 0 } ;
	var uLocal_547 = 0;
	struct<21> Local_548 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_95 = 0f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_99 = 0f;
	fLocal_162 = 0.62f;
	fLocal_163 = 0.51f;
	fLocal_164 = 0.55f;
	fLocal_165 = 25f;
	iLocal_514 = -1;
	iLocal_515 = -1;
	iLocal_518 = -1;
	fLocal_524 = -1f;
	fLocal_525 = 99999f;
	fLocal_526 = 99999f;
	fLocal_527 = 99999f;
	fLocal_528 = 999999f;
	StringCopy(&Local_537, unk_0x05CBA41180F5D521(), 64);
	Local_537 = { Local_537 };
	Local_221 = { Local_221 };
	func_3523(0);
	if (unk_0x9315DBF7D972F07A())
	{
		if (bLocal_494)
		{
			if (!func_3471(ScriptParam_548))
			{
				func_3399(0, 1);
				func_3315();
			}
		}
		else
		{
			func_3315();
		}
	}
	else
	{
		func_3399(0, 1);
		func_3315();
	}
	func_3314(&(Local_538.f_203));
	func_3202();
	while (true)
	{
		func_3201();
		if (func_3194())
		{
			func_3399(0, 1);
			func_3315();
		}
		if (func_3185())
		{
			func_3399(0, 1);
			func_3315();
		}
		if (Local_218.f_97.f_4 != 0)
		{
			Call_Loc(Local_218.f_97.f_4);
			if (StackVal)
			{
				func_3399(0, 1);
				func_3315();
			}
		}
		func_3523(1);
		switch (func_3184())
		{
			case 0:
				switch (func_3183())
				{
					case 1:
						if (func_2918())
						{
							func_2917(1);
						}
						break;
					
					case 2:
					case 3:
						func_2917(3);
						break;
				}
				break;
			
			case 1:
				func_2874();
				func_2161();
				func_2160();
				if (func_3183() != 1)
				{
					func_2154();
					if (Local_218.f_97.f_5 != 0)
					{
						Call_Loc(Local_218.f_97.f_5);
					}
					func_2917(func_3183());
				}
				break;
			
			case 2:
				func_2874();
				func_1430();
				func_2160();
				func_1148();
				if (func_3183() > 2)
				{
					func_3399(func_1147(11), 0);
					func_2917(3);
				}
				break;
			
			case 3:
				func_3315();
				break;
		}
		if (bLocal_496)
		{
			switch (func_3183())
			{
				case 0:
					if (func_478())
					{
						func_477(1);
					}
					break;
				
				case 1:
					if (func_476() == 0)
					{
						func_6();
					}
					else
					{
						func_477(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_477(3);
					}
					break;
				
				case 3:
					func_3315();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_224.f_22++;
	if (Local_224.f_22 >= Local_217.f_38)
	{
		Local_224.f_22 = 0;
	}
}

int func_2()
{
	if (Local_218.f_3.f_2 != 0)
	{
		Call_Loc(Local_218.f_3.f_2);
	}
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_538.f_88), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0xE2D0C323A1AE5D85((*uParam0)[iVar1], iVar2);
}

bool func_5()
{
	return func_3(21);
}

void func_6()
{
	func_475();
	if (Local_218.f_3 != 0)
	{
		Call_Loc(Local_218.f_3);
	}
	func_424();
	func_414();
	func_145();
	func_126();
	func_34();
	func_27();
	func_26();
	func_25();
	func_22();
	func_14();
	func_7();
}

void func_7()
{
	if (!func_11())
	{
		return;
	}
	if (!func_9(func_10(), 0, 1) || !unk_0x976D40337FCB1481(func_10()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)
{
	if (!bLocal_496)
	{
		return;
	}
	Local_538.f_82 = iParam0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_10()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35;
}

int func_11()
{
	switch (func_13())
	{
		case 3:
			return !func_12(1);
		
		default:
	}
	return 1;
}

bool func_12(int iParam0)
{
	return func_4(&uLocal_522, iParam0);
}

int func_13()
{
	return Local_538.f_122;
}

void func_14()
{
	if (func_21() == -1)
	{
		return;
	}
	if (Local_218.f_77 == 0)
	{
		return;
	}
	Call_Loc(Local_218.f_77);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_218.f_77.f_1 != 0)
	{
		Call_Loc(Local_218.f_77.f_1);
		if (StackVal)
		{
			func_20(&(Local_538.f_106), 0, 0);
			func_18(5);
		}
	}
	if (!func_17(&(Local_538.f_106)))
	{
		func_16(&(Local_538.f_106), 0, 0);
	}
	else if (func_17(&(Local_538.f_106)))
	{
		if (func_15(&(Local_538.f_106), func_21(), 0))
		{
			if (Local_218.f_77.f_3 != 0)
			{
				Call_Loc(Local_218.f_77.f_3);
			}
			func_8(1);
		}
	}
}

int func_15(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_16(uParam0, bParam2, 0);
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

void func_16(var uParam0, bool bParam1, bool bParam2)
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

bool func_17(var uParam0)
{
	return uParam0->f_1;
}

void func_18(int iParam0)
{
	if (func_19(&(Local_538.f_88), iParam0))
	{
	}
}

int func_19(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0xE2D0C323A1AE5D85((*uParam0)[iVar1], iVar2))
	{
		unk_0xCED9E32812D6C7C7(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	if (Local_217.f_343 != -1)
	{
		return Local_217.f_343 * 60 * 1000;
	}
	return Local_217.f_343;
}

void func_22()
{
	int iVar0;
	
	if (func_24() == -1)
	{
		func_23(0);
		Call_Loc(Local_222[func_24() /*20*/].f_17);
		return;
	}
	while ((func_24() < iLocal_508 && iVar0 < Local_222[func_24() /*20*/].f_19) && Local_222[func_24() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_222[func_24() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_24() != Local_222[func_24() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_222[func_24() /*20*/].f_18);
				Local_538.f_86 = func_24();
				func_23(Local_222[func_24() /*20*/].f_1[iVar0 /*3*/]);
				unk_0xCED9E32812D6C7C7(&(Local_538.f_87), func_24());
				Call_Loc(Local_222[func_24() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	if (!bLocal_496)
	{
		return;
	}
	Local_538.f_85 = iParam0;
}

int func_24()
{
	return Local_538.f_85;
}

void func_25()
{
	Call_Loc(Local_218.f_508);
	if (StackVal)
	{
		if (!func_17(&(Local_538.f_228)))
		{
			Call_Loc(Local_218.f_508.f_1);
			if (StackVal)
			{
				func_16(&(Local_538.f_228), 0, 0);
			}
		}
		else
		{
			Stack.Push(&(Local_538.f_228));
			Call_Loc(Local_218.f_508.f_5);
			if (func_15(StackVal, StackVal, 0))
			{
			}
		}
	}
}

void func_26()
{
}

void func_27()
{
	if (!func_33())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_28(&(Local_538.f_63), &(Local_538.f_63.f_3)))
		{
			func_18(2);
		}
	}
}

int func_28(var uParam0, var uParam1)
{
	int iVar0[1];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (func_32(iVar2))
		{
			iVar0[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	if (iVar1 < func_31())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < func_31())
	{
		if (func_30())
		{
			if (iVar2 > 0)
			{
				(*uParam0)[iVar2] = (*uParam0)[(iVar2 - 1)];
			}
			else
			{
				iVar3 = unk_0x5853B15F78E1A265(0, iVar1);
				(*uParam0)[iVar2] = iVar0[iVar3];
				if (iVar0[iVar3] < 32)
				{
					unk_0xCED9E32812D6C7C7(uParam1, iVar0[iVar3]);
				}
				if (iVar2 < (func_31() - 1))
				{
					func_29(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
					iVar1 = (iVar1 - 1);
				}
			}
			iVar2++;
			return 1;
		}

void func_29(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_30()
{
	return 0;
}

int func_31()
{
	return Local_217.f_19;
}

int func_32(int iParam0)
{
	return 0;
}

int func_33()
{
	return 0;
}

void func_34()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < Local_217.f_38)
	{
		func_124(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_218.f_149.f_176 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_218.f_149.f_176);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_123(iVar5, 6);
				}
				else if (bVar3)
				{
					func_123(iVar5, 6);
				}
				else if (func_122(iVar5, iVar0))
				{
					func_123(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_121(iVar5))
				{
					func_123(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_119(iVar5))
					{
						func_118(iVar5);
						func_123(iVar5, 2);
					}
				}
				else
				{
					func_117(&(Local_538.f_22[iVar5 /*24*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_114(iVar5))
					{
						if (func_68(iVar5))
						{
							func_123(iVar5, 3);
							func_67(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_66(iVar5, iVar0))
					{
						func_123(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_44(iVar5);
						func_39(iVar5, iVar0, 1);
						if (func_38(iVar5))
						{
							func_123(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_37(iVar5, 8);
				if (bVar2)
				{
					if (func_66(iVar5, iVar0))
					{
						break;
					}
					if (func_38(iVar5))
					{
						func_123(iVar5, 4);
					}
				}
				if (func_36(iVar5))
				{
					func_117(&(Local_538.f_22[iVar5 /*24*/]));
					func_123(iVar5, 1);
				}
				if (func_476() == 0)
				{
					if (func_35(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			
			case 4:
				if (!func_35(iVar5, 14) && !unk_0x4A1EA713628C49D4(iVar0))
				{
					func_37(iVar5, 26);
					func_123(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_224.f_22;
	func_124(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_39(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_35(int iParam0, int iParam1)
{
	return func_4(&(Local_217.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_36(int iParam0)
{
	if (func_476() != 0)
	{
		return 0;
	}
	if (func_35(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_163);
		return StackVal;
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	if (func_19(&(Local_538.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

int func_38(int iParam0)
{
	if (Local_218.f_149.f_162 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_162);
		return StackVal;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_43(iParam0);
	if (func_42(iParam0) == -1)
	{
		func_41(iParam0, 0);
		if (Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (func_40(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_11);
	}
	while ((func_42(iParam0) < Local_224.f_23[iVar0 /*67*/] && iVar1 < Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_12) && Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_9);
			}
			func_41(iParam0, Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_224.f_23[iVar0 /*67*/].f_1[func_42(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	if (!bLocal_496)
	{
		return;
	}
	Local_538.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_42(int iParam0)
{
	return Local_538.f_22[iParam0 /*24*/].f_2;
}

int func_43(int iParam0)
{
	if (Local_218.f_149.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_1);
		return StackVal;
	}
	return 0;
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_62(iParam0))
	{
		return;
	}
	iVar0 = Local_217.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_224[iParam0 /*19*/].f_16)
	{
		if (Local_224[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_224[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				unk_0xCED9E32812D6C7C7(&(Local_538.f_62), iVar0);
				if (Local_218.f_149.f_168 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(iVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_218.f_149.f_168);
				}
				func_45(iParam0);
			}
		}
		iVar1++;
	}
}

void func_45(int iParam0)
{
	if (func_61(28))
	{
		return;
	}
	if (unk_0x90F6E2F6488B98BA(Local_538.f_22[iParam0 /*24*/]))
	{
		if (func_60(unk_0x8AF984152F749D80(Local_538.f_22[iParam0 /*24*/])))
		{
			func_46(func_58(), 1, 0);
		}
	}
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	if (func_56(1))
	{
		func_48(Local_507, func_49(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_48(Local_507, func_47(iLocal_498), iParam0, iParam1, iParam2);
	}
}

int func_47(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	struct<7> Var0;
	
	Var0 = -466522239;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = unk_0x48352343BC5A41AE();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 7, iParam1);
	}
}

int func_49(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_56(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = unk_0xA1087A6350CD9244(iVar1);
			if (func_9(iVar3, 0, 0))
			{
				if (func_54())
				{
					if (func_52(iVar3, unk_0x9E2D6C50374FCFA9(), bParam0))
					{
						unk_0xCED9E32812D6C7C7(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = func_51();
					if (iVar2 != func_50())
					{
						if (func_52(iVar3, iVar2, bParam0))
						{
							unk_0xCED9E32812D6C7C7(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_50()
{
	return -1;
}

int func_51()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_50())
	{
		if (!bParam2)
		{
			if (func_53(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_50())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam1 != func_50())
	{
		if (iParam0 != func_50())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_50())
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

bool func_54()
{
	return func_55(unk_0x9E2D6C50374FCFA9());
}

int func_55(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_50())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_56(bool bParam0)
{
	return func_57(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_57(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_55(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_50();
}

int func_58()
{
	int iVar0;
	
	iVar0 = func_59();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_59()
{
	Call_Loc(Local_218.f_60);
	return StackVal;
}

int func_60(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if ((unk_0xBE07513D5933D805(iParam0) == 6 || unk_0xBE07513D5933D805(iParam0) == 29) || unk_0xBE07513D5933D805(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_4(&(Local_217.f_16), iParam0);
}

int func_62(int iParam0)
{
	if (func_65(Local_217.f_38.f_1[iParam0 /*21*/].f_14))
	{
		if (func_15(&(Local_538.f_22[iParam0 /*24*/].f_13), Local_538.f_22[iParam0 /*24*/].f_15, 0) || func_63(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (((((func_64(iParam0, 1) || func_64(iParam0, 0)) || func_64(iParam0, 14)) || func_64(iParam0, 12)) || func_64(iParam0, 11)) || func_64(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

bool func_64(int iParam0, int iParam1)
{
	return func_4(&(Local_538.f_22[iParam0 /*24*/].f_3), iParam1);
}

bool func_65(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Local_538.f_62, iParam0);
}

int func_66(int iParam0, int iParam1)
{
	Stack.Push(Local_218.f_149.f_186 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_218.f_149.f_186);
	if (StackVal && StackVal)
	{
		if (Local_218.f_149.f_185 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_149.f_185);
		}
		func_117(&(Local_538.f_22[iParam0 /*24*/]));
		return 1;
	}
	return 0;
}

void func_67(int iParam0)
{
}

int func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	func_113(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_170);
	iVar0 = StackVal;
	if (func_112(iVar0))
	{
		iVar1 = Local_217.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_111(Local_538.f_47[iVar1 /*8*/]))
			{
				if (func_110(&(Local_538.f_22[iParam0 /*24*/]), Local_538.f_47[iVar1 /*8*/], 26, iVar0, Local_217.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_88(iParam0);
					unk_0xF1A23B343DFEDFD0(iVar0);
					func_87();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_149.f_171);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_86(Var2))
			{
				if (!func_85(iParam0) || func_70(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_538.f_22[iParam0 /*24*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_218.f_149.f_172);
					if (func_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_88(iParam0);
						func_87();
						unk_0xF1A23B343DFEDFD0(iVar0);
						return 1;
					}
				}
				else
				{
					func_87();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_69(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	iVar0 = unk_0xA8D58C3AADA2C41C(uParam1, uParam2, Param3, uParam4, iParam6, bParam5);
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

int func_70(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_79(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_71(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_71(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_9(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x987A5F1E1A67E3C0(func_76(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_9(iVar1, 1, 1))
		{
			if (!func_73(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_72(iVar1) || !bParam8) && !Global_2689156[iVar1 /*453*/].f_268)
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
								if (unk_0x987A5F1E1A67E3C0(func_76(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x987A5F1E1A67E3C0(func_76(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_72(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_73(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_74(-1, 0) == 8;
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

int func_74(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_75();
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

int func_75()
{
	return Global_1574907;
}

Vector3 func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_78() && Global_1853128[iVar0 /*888*/].f_858) && !func_86(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_77(iParam0);
}

Vector3 func_77(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

bool func_78()
{
	return Global_2714627.f_19;
}

int func_79(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam6 == 0)
		{
			if (func_9(iVar1, bParam2, bParam3))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam5 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_72(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam7) && bParam4) && func_80(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_77(iVar1), Param0, 1) < fParam1)
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

int func_80(int iParam0)
{
	if (func_84(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_83(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2783300))
	{
		return 1;
	}
	if (func_81(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_50())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_50())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_50();
}

struct<13> func_83(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_83(iParam0) };
		Global_2783313 = { func_83(iParam1) };
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

int func_85(int iParam0)
{
	if ((func_35(iParam0, 10) && func_64(iParam0, 8)) && !func_35(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

int func_86(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	if (Local_538.f_99 != -1)
	{
		Local_538.f_112 = { 0f, 0f, 0f };
		Local_538.f_121 = 0f;
		iLocal_517 = 0;
		Local_538.f_84 = -1;
		Local_538.f_99 = -1;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x8AF984152F749D80(Local_538.f_22[iParam0 /*24*/]);
	bVar1 = func_64(iParam0, 19);
	func_106(iParam0, iVar0);
	if (bVar1)
	{
		func_104(iParam0, iVar0);
	}
	else
	{
		func_94(iParam0, iVar0);
	}
	if (Local_218.f_149.f_174 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_218.f_149.f_174);
	}
	if (func_35(iParam0, 5))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
		{
			unk_0x5C65DDDC219B3AA5(iVar0, true);
		}
		unk_0xF160248D9083ED0C(iVar0, 101, 0);
		func_89(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (Local_217.f_38.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, -5f, 0f) };
				Var1 = { unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f) };
				unk_0xDB6AD61CE00E8A46(Var0, Var1, 25, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
				unk_0xDB6AD61CE00E8A46(Var1, Var0, 25, 1, joaat("weapon_assaultshotgun"), 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				unk_0xD6A76BAB45A4B460(iParam0, 227, bParam2);
			}
			unk_0xD6A76BAB45A4B460(iParam0, 115, bParam3);
		}
		else
		{
			Var2 = { unk_0x6B62510F212526DC(iParam0, 0) };
			func_92(Var2, &Var3, &Var4, 0);
			unk_0xDB6AD61CE00E8A46(Var3, Var4, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0xD6A76BAB45A4B460(iParam0, 227, bParam2);
			}
			unk_0xD6A76BAB45A4B460(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_90(iParam0, -1, 0);
		}
	}
}

void func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_91(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_91(iVar0, iParam0);
	}
}

void func_91(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8B65F723C8DD11A8(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0x8B65F723C8DD11A8(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0x8B65F723C8DD11A8(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0x8B65F723C8DD11A8(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0x8B65F723C8DD11A8(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0x8B65F723C8DD11A8(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0x8B65F723C8DD11A8(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0x8B65F723C8DD11A8(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0x8B65F723C8DD11A8(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0x8B65F723C8DD11A8(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0x8B65F723C8DD11A8(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
		
		case 11:
			unk_0x2D0C965C5964FC7A(uParam1, 1, 0.49f, 0.5f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x2D0C965C5964FC7A(uParam1, 1, 0.48f, 0.55f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x2D0C965C5964FC7A(uParam1, 1, 0.5f, 0.56f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.726f, 0.789f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.724f, 0.799f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.737f, 0.723f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.726f, 0.753f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.726f, 0.76f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.736f, 0.802f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.715f, 0.806f, 0f, 0.019f, 0, 140f, "BulletSmall");
			break;
		
		case 12:
			unk_0x2D0C965C5964FC7A(uParam1, 3, 0.401f, 0.1f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0x2D0C965C5964FC7A(uParam1, 3, 0.514f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0x2D0C965C5964FC7A(uParam1, 3, 0.62f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
		
		case 13:
			unk_0x2D0C965C5964FC7A(uParam1, 2, 0.41f, 0.229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
			unk_0x2D0C965C5964FC7A(uParam1, 4, 0.21f, 0.305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
			unk_0x2D0C965C5964FC7A(uParam1, 3, 0.495f, 0.124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			unk_0x2D0C965C5964FC7A(uParam1, 0, 0.37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			unk_0x2D0C965C5964FC7A(uParam1, 1, 0.667f, 0.571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			unk_0x2D0C965C5964FC7A(uParam1, 1, 0.343f, 0.79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			break;
	}
}

void func_92(struct<3> Param0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0.1f;
	iVar1 = unk_0x5853B15F78E1A265(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam3)
	{
		iVar5 = unk_0x5853B15F78E1A265(0, 5);
		fVar2 = (to_float(iVar5) / 10f);
		if (func_93())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0x5853B15F78E1A265(0, 2);
		fVar3 = (to_float(iVar5) / 15f);
		if (func_93())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0x5853B15F78E1A265(0, 6);
		fVar4 = (to_float(iVar5) / 10f);
		if (func_93())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam1 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 1:
			*uParam1 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 2:
			*uParam1 = { (Param0.x - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 3:
			*uParam1 = { (Param0.x - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 4:
			*uParam1 = { (Param0.x - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 5:
			*uParam1 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

int func_93()
{
	if (unk_0xE2D0C323A1AE5D85(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0x50274A7EACA3133A(iParam1, 1);
	unk_0xABC2CA6F28903308(iParam1, 1);
	unk_0xCACF57AD414ACC75(iParam1, 0);
	if (func_35(iParam0, 6))
	{
		unk_0xD6A76BAB45A4B460(iParam1, 146, false);
		unk_0x32BB80E6E576379A(iParam1, 1);
	}
	else
	{
		unk_0xD6A76BAB45A4B460(iParam1, 146, true);
		unk_0x32BB80E6E576379A(iParam1, 0);
	}
	unk_0xBC12D08EE7559CCD(iParam1, 43, 1);
	unk_0x71B502FC2E129665(iParam1, Local_217.f_38.f_1[iParam0 /*21*/].f_15);
	unk_0x395228F7A14C6543(iParam1, func_103());
	unk_0x348A212511C78DBF(iParam1, func_102(iParam0));
	unk_0xC97BA48BC273A1F3(iParam1, func_101());
	unk_0xBC12D08EE7559CCD(iParam1, 24, 0);
	unk_0x8FBB27C41710F120(iParam1, func_100());
	unk_0xF160248D9083ED0C(iParam1, func_100(), 0);
	unk_0xA5D600C274CC186F(iParam1, 1);
	if (func_99(iParam0))
	{
		unk_0x3124FCFD969B6839(iParam1, 1);
	}
	func_95(iParam0, iParam1);
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	if (func_64(iParam0, 19))
	{
		return;
	}
	if (Local_217.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f)
	{
		unk_0x1EE49ABA6B11E9CF(iParam1, unk_0x6B62510F212526DC(iParam1, 0), Local_217.f_38.f_1[iParam0 /*21*/].f_20, 0, 0);
		return;
	}
	else if (Local_217.f_38.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_217.f_38.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_217.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_217.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_97(iVar2, 4))
			{
				Var3 = { func_96(iVar2) };
				unk_0x0913ED93C4AB21CF(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, 0, 0);
			}
		}
		iVar1++;
	}
}

struct<9> func_96(int iParam0)
{
	struct<9> Var0;
	
	Var0 = 1;
	if (Local_218.f_447.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_447.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_217.f_365.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_217.f_365.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_217.f_365.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_217.f_365.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_97(int iParam0, int iParam1)
{
	struct<9> Var0;
	
	Var0 = { func_98(iParam0) };
	return func_4(&Var0, iParam1);
}

struct<9> func_98(int iParam0)
{
	return Local_217.f_365.f_1[iParam0 /*9*/];
}

int func_99(int iParam0)
{
	if (func_61(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_100()
{
	switch (Local_538.f_83)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		case 4:
			return 300;
		
		default:
	}
	return 200;
}

int func_101()
{
	switch (Local_538.f_83)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		case 4:
			return 100;
		
		default:
	}
	return 60;
}

int func_102(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_173);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_173);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_538.f_83)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		case 4:
			return 40;
		
		default:
	}
	return 10;
}

int func_103()
{
	switch (Local_538.f_83)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 2;
		
		default:
	}
	return 1;
}

void func_104(int iParam0, int iParam1)
{
	unk_0x99BB016876EFEC17(iParam1, 1f);
	unk_0x20EEEABBC2C25C15(iParam1, 1f);
	unk_0x9DC5CCC4C16546CB(iParam1, 17, 5f);
	unk_0xABC2CA6F28903308(iParam1, 1);
	unk_0xBC12D08EE7559CCD(iParam1, 2, 1);
	unk_0xD6A76BAB45A4B460(iParam1, 272, true);
	unk_0x157A3B02D5DED24B(iParam1, 1);
	unk_0xD6A76BAB45A4B460(iParam1, 42, true);
	unk_0x7F3313F2F80DD857(iParam1, 1f);
	unk_0x348A212511C78DBF(iParam1, func_102(iParam0));
	unk_0xC97BA48BC273A1F3(iParam1, func_101());
	unk_0x8FBB27C41710F120(iParam1, func_100());
	unk_0xF160248D9083ED0C(iParam1, func_100(), 0);
	unk_0x395228F7A14C6543(iParam1, func_103());
	unk_0xB11C0CF5CCDFE10A(iParam1, 3);
	if (func_105(iParam0))
	{
		unk_0xBC12D08EE7559CCD(iParam1, 52, 1);
		unk_0xBC12D08EE7559CCD(iParam1, 53, 1);
	}
}

int func_105(int iParam0)
{
	if (func_35(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_109(iParam0))
	{
		unk_0x229DD509EDB2FBD4(unk_0xF2D8DACFAEBD9629(Local_538.f_22[iParam0 /*24*/]), 1);
	}
	if (!func_60(iParam1))
	{
		unk_0xD6A76BAB45A4B460(iParam1, 324, true);
	}
	if (Local_217.f_38.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
	{
		switch (unk_0x5355BAA621C153CF(iParam1, 0))
		{
			case 0:
				unk_0xDB0D726EE9705C73(iParam1, -825996427);
				break;
			
			case 1:
				unk_0xDB0D726EE9705C73(iParam1, 1534454358);
				break;
			
			case 2:
				unk_0xDB0D726EE9705C73(iParam1, -1422042494);
				break;
			}
	}
	if (Local_217.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_37(iParam0, 2);
		unk_0xAA8C46C452582702(iParam1);
		unk_0x398C962F550CF3B4(iParam1, 1);
		unk_0x006574E87E6F1942(iParam1, 1, 1);
	}
	if (func_35(iParam0, 11))
	{
		unk_0x28271FBFA024090B(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_173);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x70D9EC5AF67D79C4(iParam1, 1);
		}
		else
		{
			unk_0x9521FB98DB6DDF50(iParam1, iVar0, 9999999, func_108(iParam0), 1);
		}
	}
	unk_0x25D0F99524B26091(iParam1, 1);
	unk_0x7DCB4594ACF18DA7(iParam1, 1);
	unk_0xE014FF3C785EEFB5(iParam1, Local_217.f_38.f_1[iParam0 /*21*/].f_17);
	unk_0xED676E22A51C1922(iParam1, Local_217.f_38.f_1[iParam0 /*21*/].f_18);
	unk_0x5C9D9A4EA475F37E(iParam1, Local_217.f_38.f_1[iParam0 /*21*/].f_19);
	unk_0xD6A76BAB45A4B460(iParam1, 392, true);
	iVar1 = func_107(iParam0);
	if (iVar1 != joaat("COP"))
	{
		unk_0xFF4BEB6CFF55A013(iParam1, iVar1);
	}
}

var func_107(int iParam0)
{
	return Local_217.f_38.f_23[Local_217.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_108(int iParam0)
{
	if (Local_218.f_149.f_187 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_187);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_2);
	Stack.Push(!unk_0xACC32B78196FBC2A(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_2);
	if (StackVal && unk_0x3C57C2F07FEE34D2(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_64(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (func_61(22))
	{
		return 1;
	}
	return 0;
}

int func_110(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
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

int func_111(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
	}
	return 0;
}

bool func_112(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

void func_113(int iParam0, var uParam1)
{
	if (Local_538.f_99 == -1)
	{
		Local_538.f_84 = iParam0;
		Local_538.f_99 = uParam1;
	}
}

int func_114(int iParam0)
{
	if (!func_116(0, iParam0))
	{
		return 0;
	}
	if (Local_217.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_115(Local_217.f_38.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (unk_0x6ECBF4AB299FABC8(iLocal_498))
	{
		return 0;
	}
	Stack.Push(Local_218.f_149.f_188 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_149.f_188);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	return Local_538.f_47[iParam0 /*8*/].f_1;
}

int func_116(int iParam0, int iParam1)
{
	if (Local_538.f_84 == -1)
	{
		return 1;
	}
	if (Local_538.f_84 == iParam0)
	{
		if (Local_538.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_117(var uParam0)
{
	var uVar0;
	
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0xEC548B5E95E61DF6(&uVar0);
	}
}

void func_118(int iParam0)
{
	func_41(iParam0, 0);
	if (Local_218.f_149.f_163.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_163.f_3);
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (Local_218.f_149.f_163.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_163.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_15(&(Local_538.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_120(&(Local_538.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

void func_120(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_121(int iParam0)
{
	if (Local_218.f_149.f_169 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_149.f_169);
		return StackVal;
	}
	return 1;
}

int func_122(int iParam0, int iParam1)
{
	return 0;
}

void func_123(int iParam0, int iParam1)
{
	if (!bLocal_496)
	{
		return;
	}
	Local_538.f_22[iParam0 /*24*/].f_1 = iParam1;
}

void func_124(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_125(iParam0);
	*bParam1 = unk_0x90F6E2F6488B98BA(Local_538.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = unk_0x8AF984152F749D80(Local_538.f_22[iParam0 /*24*/]);
		*bParam2 = unk_0xF68107C40359970C(*iParam3);
	}
}

int func_125(int iParam0)
{
	return Local_538.f_22[iParam0 /*24*/].f_1;
}

void func_126()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_217.f_84)
	{
		bVar3 = unk_0x90F6E2F6488B98BA(Local_538.f_56[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = unk_0xF2D8DACFAEBD9629(Local_538.f_56[iVar4 /*5*/]);
			bVar2 = unk_0x55B23FE400FCEA6B(iVar0, 0);
			if (Local_218.f_393.f_35 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_218.f_393.f_35);
			}
		}
		if (func_144(iVar4) > 1 && func_144(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_143(iVar4, 3);
				}
				else if (func_142(iVar4))
				{
					func_143(iVar4, 3);
				}
			}
			else
			{
				func_143(iVar4, 3);
			}
		}
		func_138(iVar4, iVar0);
		switch (func_144(iVar4))
		{
			case 0:
				if (func_137(iVar4))
				{
					func_143(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_136(iVar4)) && func_127(iVar4))
				{
					func_143(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_127(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (!unk_0x90F6E2F6488B98BA(Local_538.f_56[iParam0 /*5*/]))
	{
		Var1 = { func_135(iParam0) };
		Var2 = { func_134(iParam0) };
		if (func_86(Var1))
		{
			return 0;
		}
		iVar3 = Local_217.f_84.f_1[iParam0 /*12*/].f_3;
		if (!func_112(iVar3))
		{
			return 0;
		}
		if (func_132(&(Local_538.f_56[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_133(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0xE8BBC6CC2C60F24A(Local_538.f_56[iParam0 /*5*/]);
			unk_0x8CE3D365F064F69E(iVar0, Var2, 2, 1);
			func_128(iParam0, iVar0);
			unk_0xF1A23B343DFEDFD0(iVar3);
		}
	}
	if (unk_0x90F6E2F6488B98BA(Local_538.f_56[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	unk_0x75792F006B6DD7A3(unk_0xE8BBC6CC2C60F24A(Local_538.f_56[iParam0 /*5*/]), 300);
	unk_0xBED097BB6359F09C(iParam1, func_133(iParam0, 17), func_133(iParam0, 18), func_133(iParam0, 19), func_133(iParam0, 20), func_133(iParam0, 21), 0, 0, 0);
	func_130(iParam0, 0);
	if (func_133(iParam0, 32))
	{
		unk_0x9210F85E9CD785F1(iParam1, true);
		unk_0x1C2ED929474DC6FE(iParam1, false, 0);
		unk_0x5C65DDDC219B3AA5(iParam1, true);
		unk_0x959E1626CBC7D38A(iParam1, false, 0);
	}
	if (!func_133(iParam0, 1))
	{
		unk_0xE6A4C4B2E8DE36D3(unk_0xE8BBC6CC2C60F24A(Local_538.f_56[iParam0 /*5*/]));
	}
	if (func_133(iParam0, 2))
	{
		unk_0x16CB19EC6F57D920(Local_538.f_56[iParam0 /*5*/], 1, 1);
		unk_0x2B6A68D9ACFE718E(Local_538.f_56[iParam0 /*5*/], 1);
		unk_0x176A3F5786237102(iParam1, 1, 1);
	}
	if (func_133(iParam0, 3))
	{
		unk_0x959E1626CBC7D38A(iParam1, false, 0);
	}
	if (func_133(iParam0, 4))
	{
		unk_0xCE8331CB5040E4B2(iParam1, 1);
	}
	if (func_133(iParam0, 5))
	{
		unk_0x82B0E749922635BC(iParam1, 0);
	}
	if (func_133(iParam0, 6))
	{
		unk_0x4536AE3DABDE0C44(iParam1, 1);
	}
	if (func_133(iParam0, 7))
	{
		unk_0x3F6DE6DBA9A99FEA(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_133(iParam0, 15))
	{
		unk_0x7A93DEA53EFC3CF2(unk_0xE8BBC6CC2C60F24A(Local_538.f_56[iParam0 /*5*/]), 1200);
	}
	if (func_133(iParam0, 8))
	{
		unk_0x5C65DDDC219B3AA5(iParam1, true);
	}
	if (func_133(iParam0, 9))
	{
		unk_0xD1C117AEB22F08E1(unk_0xE8BBC6CC2C60F24A(Local_538.f_56[iParam0 /*5*/]), 1);
	}
	if (func_133(iParam0, 16))
	{
		unk_0xC64B6E13A6A7F517(iParam1, func_135(iParam0), 1, 0, 0, 1);
	}
	if (func_133(iParam0, 33))
	{
		unk_0x8CE3D365F064F69E(iParam1, func_134(iParam0), 2, 1);
	}
	if (func_133(iParam0, 10))
	{
		unk_0x9210F85E9CD785F1(iParam1, true);
	}
	if (func_133(iParam0, 11))
	{
		unk_0x60104A96124E0B12(iParam1, 1);
	}
	if (func_129(iParam0))
	{
		unk_0x229DD509EDB2FBD4(iParam1, 1);
	}
	if (func_133(iParam0, 13))
	{
		unk_0x1C2ED929474DC6FE(iParam1, false, 0);
	}
	if (func_133(iParam0, 14))
	{
		Stack.Push(Local_218.f_393.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_218.f_393.f_24);
		if (StackVal && StackVal)
		{
			unk_0x4637AE8FFD474A33(&uVar0, iParam1);
			unk_0x380313FF4CEF9B49(&uVar0, 1);
			unk_0xECE7B7EFD96CEBF4(&uVar0, &uVar1);
		}
	}
	if (Local_218.f_393.f_32 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_218.f_393.f_32);
	}
}

int func_129(int iParam0)
{
	if (func_133(iParam0, 12))
	{
		return 1;
	}
	if (func_61(22))
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0, int iParam1)
{
	if (func_131(&(Local_538.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (unk_0xE2D0C323A1AE5D85((*uParam0)[iVar1], iVar2))
	{
		unk_0xB0550BC91B0159D6(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_132(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x853FFA3D0A54864F(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0A7322C6D0E1A985(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0E536D72AB30F4C8(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x229DD509EDB2FBD4(unk_0xE8BBC6CC2C60F24A(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(*uParam0), false, 0);
		}
		if (unk_0xD64C90C3F536F963(unk_0xE8BBC6CC2C60F24A(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	return func_4(&(Local_217.f_84.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_134(int iParam0)
{
	struct<3> Var0;
	
	if (Local_218.f_393.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_393.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_86(Var0))
	{
		Var0 = { Local_217.f_84.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_135(int iParam0)
{
	struct<3> Var0;
	
	if (Local_218.f_393.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_393.f_36);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_86(Var0))
	{
		Var0 = { Local_217.f_84.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_136(int iParam0)
{
	if (unk_0x6ECBF4AB299FABC8(iLocal_498))
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0)
{
	if (Local_218.f_393.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_393.f_23);
		return StackVal;
	}
	return 1;
}

void func_138(int iParam0, int iParam1)
{
	if (Local_217.f_84.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_144(iParam0) > 1 && func_144(iParam0) < 3)
	{
		if (func_140(iParam0, iParam1))
		{
			func_139(iParam0, 8);
		}
		else
		{
			func_130(iParam0, 8);
		}
	}
}

void func_139(int iParam0, int iParam1)
{
	if (func_19(&(Local_538.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_140(int iParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam1))
	{
	}
	return func_141(iParam0, 8);
}

bool func_141(int iParam0, int iParam1)
{
	return func_4(&(Local_538.f_56[iParam0 /*5*/].f_2), iParam1);
}

int func_142(int iParam0)
{
	if (Local_218.f_393.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_393.f_26);
		return StackVal;
	}
	return 0;
}

void func_143(int iParam0, int iParam1)
{
	Local_538.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_144(int iParam0)
{
	return Local_538.f_56[iParam0 /*5*/].f_1;
}

void func_145()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_217.f_67)
	{
		bVar5 = unk_0x90F6E2F6488B98BA(Local_538.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = unk_0xA5677134B9672173(Local_538.f_47[iVar0 /*8*/]);
			bVar4 = func_412(Local_538.f_47[iVar0 /*8*/]);
			bVar6 = func_410(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_407(iVar0, 2);
			}
		}
		if (func_115(iVar0) > 2)
		{
			if (func_115(iVar0) != 5 && func_115(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_406(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_406(iVar0, 5);
				}
				else if (func_405(iVar0, iVar2))
				{
					func_406(iVar0, 5);
				}
			}
		}
		if (Local_218.f_338.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_218.f_338.f_46);
		}
		func_401(iVar0, iVar2);
		switch (func_115(iVar0))
		{
			case 0:
				if (func_400(iVar0))
				{
					func_406(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_399(iVar0))
					{
						func_406(iVar0, 2);
					}
				}
				else
				{
					func_117(&(Local_538.f_47[iVar0 /*8*/]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_398(iVar0))
					{
						if (func_154(iVar0))
						{
							func_406(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					if (func_153(iVar0, iVar2))
					{
						func_406(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_152(iVar0, iVar2);
						}
						break;
					
					case 5:
						if (func_151(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_153(iVar0, iVar2))
							{
							}
							else
							{
								if (func_151(iVar0, 23))
								{
									if (bVar5)
									{
										func_117(&(Local_538.f_47[iVar0 /*8*/]));
									}
								}
								if (func_150(iVar0))
								{
									func_117(&(Local_538.f_47[iVar0 /*8*/]));
									func_406(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar5 && func_148(iVar0, iVar2))
								{
									func_117(&(Local_538.f_47[iVar0 /*8*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar6)
						{
							func_147(iVar0, 13);
						}
						else
						{
							func_146(iVar0, 13);
						}
					}
					iVar0++;
				}

void func_146(int iParam0, int iParam1)
{
	if (func_131(&(Local_538.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_147(int iParam0, int iParam1)
{
	if (func_19(&(Local_538.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_148(int iParam0, int iParam1)
{
	if (func_151(iParam0, 23) || func_149(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_218.f_338.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_218.f_338.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0, int iParam1)
{
	return func_4(&(Local_538.f_47[iParam0 /*8*/].f_2), iParam1);
}

int func_150(int iParam0)
{
	if (func_476() != 0)
	{
		return 0;
	}
	if (func_151(iParam0, 13))
	{
		if (Local_218.f_338.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_338.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_151(int iParam0, int iParam1)
{
	return func_4(&(Local_217.f_67.f_1[iParam0 /*14*/]), iParam1);
}

void func_152(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (iParam0 != Local_217.f_67.f_16)
	{
		return;
	}
	Var0 = { unk_0x6B62510F212526DC(iParam1, 0) };
	fVar1 = 500f;
	if (func_86(Local_538.f_118))
	{
		Local_538.f_118 = { 5000f, 8500f, 0f };
	}
	if (vdist2(Var0, Local_538.f_118) > (550f * 550f))
	{
		if (Local_538.f_103 != -1)
		{
			unk_0xF63317D708095CE2(Local_538.f_103, 0);
		}
		Local_538.f_118 = { Var0 };
		Local_538.f_103 = unk_0x9C5E0D0887ECD76D(Local_538.f_118, fVar1, 1f, 0.02f, 0, 1);
	}
}

int func_153(int iParam0, int iParam1)
{
	Stack.Push(Local_218.f_338.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_218.f_338.f_52);
	if (StackVal && StackVal)
	{
		func_117(&(Local_538.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_113(1, iParam0);
	iVar0 = Local_217.f_67.f_1[iParam0 /*14*/].f_3;
	if (!func_112(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_86(Local_538.f_112))
	{
		if (func_149(iParam0, 15))
		{
		}
		else if (func_151(iParam0, 17))
		{
			if (!func_272(iParam0, &(Local_538.f_112), &(Local_538.f_121)))
			{
				bVar1 = false;
			}
		}
		else if (func_151(iParam0, 25))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_538.f_112));
			Stack.Push(&(Local_538.f_121));
			Call_Loc(Local_218.f_338.f_37);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_151(iParam0, 18))
		{
			if (!func_268(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_151(iParam0, 19))
		{
			if (!func_262(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_538.f_112 = { Local_217.f_67.f_1[iParam0 /*14*/].f_4 };
			Local_538.f_121 = Local_217.f_67.f_1[iParam0 /*14*/].f_7;
		}
	}
	if (bVar1)
	{
		if (!func_151(iParam0, 30))
		{
			func_241(Local_538.f_112, 30f, 0);
			unk_0x7A997A0A971D305F(Local_538.f_112, 30f, 0, 0, 0, 1);
		}
		if (func_238(&(Local_538.f_47[iParam0 /*8*/]), iVar0, Local_538.f_112, Local_538.f_121, 1, 1, 1, 0, 1, 1, 0, 0, Local_538.f_112.f_2 <= -100f, 0))
		{
			iVar2 = unk_0xA5677134B9672173(Local_538.f_47[iParam0 /*8*/]);
			func_155(iParam0, iVar2);
			func_87();
			return 1;
		}
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam1);
	if (!func_170(iParam0, iParam1))
	{
		func_169(iParam0, iParam1);
	}
	if (func_168(iParam0))
	{
		unk_0x229DD509EDB2FBD4(iParam1, 1);
	}
	unk_0x9210F85E9CD785F1(iParam1, func_151(iParam0, 10));
	unk_0x2706C6FAA25AB1B7(iParam1, func_151(iParam0, 3));
	unk_0x1B3814E11B085F5E(iParam1, func_151(iParam0, 3));
	unk_0x0BAE77E76EBD33D2(iParam1, func_151(iParam0, 5));
	if (unk_0xF4AD75B2D964D8AB(iVar0))
	{
		unk_0x0FF532F1F7D2BC7F(iParam1);
	}
	if (func_151(iParam0, 4))
	{
		unk_0x3B2646B62E7BBE11(iParam1, 7);
	}
	if (func_151(iParam0, 25))
	{
		unk_0xA539EDE8DA5BBC22(iParam1, Local_538.f_112, 0, 0, 1);
	}
	if (func_151(iParam0, 8))
	{
		unk_0xEA390390606DE844(iParam1, 2, 2);
		unk_0xEA390390606DE844(iParam1, 3, 2);
		unk_0x1F68E53A00B640E2(iParam1, 0);
	}
	if (func_151(iParam0, 28))
	{
		unk_0x16CB19EC6F57D920(Local_538.f_47[iParam0 /*8*/], 1, 1);
		unk_0x176A3F5786237102(iParam1, 1, 1);
	}
	if (func_149(iParam0, 14))
	{
		unk_0xF160248D9083ED0C(iParam1, 1000, 0);
		unk_0xAFE1B52F0DE91595(iParam1, 0);
		unk_0xFF74DEC3F62D3654(iParam1, 1);
		unk_0x252C1729E923ECD6(iParam1, 0);
		if (func_167(iParam0, iVar0))
		{
			unk_0x1AF469C927341A18(iParam1, 0);
			unk_0x083D28D7FA474397(iParam1, func_166(iParam0, iVar0));
		}
		if (unk_0xD6F7D32A98E07F93(iVar0))
		{
			unk_0x5BB40FEC6FAA468D(iParam1, 0);
			unk_0xFCF9858C931E0022(iParam1, 0f);
		}
		func_164(iParam1, iVar0);
		func_163(iParam1, 1);
		unk_0x31048E31EAAF3ABA(iParam1, 0);
		unk_0x52ED1CEB870C0A42(iParam1, func_151(iParam0, 7), 0);
		func_162(iParam0, iParam1);
		iVar1 = func_161(iParam0);
		if (iVar1 != -1 && func_160(iVar1) != -1)
		{
			func_159(unk_0xF2D8DACFAEBD9629(Local_538.f_47[iParam0 /*8*/]), Local_538.f_232.f_1[func_160(iVar1) /*5*/].f_1);
		}
	}
	if (func_151(iParam0, 11))
	{
		unk_0x5C65DDDC219B3AA5(iParam1, true);
	}
	if (func_151(iParam0, 32))
	{
		unk_0xE5283B3A324D3FB0(iParam1, 3);
		unk_0x7EEABC35FCFA08B7(iParam1, 1);
	}
	if (func_151(iParam0, 33))
	{
		unk_0xBF0DDDDACD98C554(iParam1, 1);
	}
	if (func_149(iParam0, 15))
	{
	}
	else
	{
		if (unk_0xD6F7D32A98E07F93(iVar0))
		{
			unk_0x3739DEED4A756E69(iParam1, 2);
		}
		if (unk_0xD2B5B1C8FC84FE0F(iVar0))
		{
			unk_0xAE2662F6A912F71E(iParam1, 1);
		}
	}
	if (func_149(iParam0, 15) || func_151(iParam0, 19))
	{
		if (unk_0x4262B4DCEADC2695(iVar0))
		{
			unk_0xBAAB64584D161C4D(iParam1);
			unk_0x371D594409A68A18(iParam1, 1, 1, 0);
			unk_0xAA8C46C452582702(iParam1);
			unk_0x4536AE3DABDE0C44(iParam1, 1);
		}
	}
	unk_0x28C1AA9789AB5554(iParam1, 1);
	unk_0x0CD9B67A70AAD552(iParam1, 1);
	if (!func_158())
	{
		unk_0x484CCFB803FCFD80(iParam1, 1);
	}
	unk_0x7A93DEA53EFC3CF2(iParam1, 1200);
	unk_0xF1A23B343DFEDFD0(iVar0);
	unk_0x9EA64D6BF7698FA0(iParam1, 1);
	func_156(iParam1);
	unk_0x6F6515F8D9C6F573(Local_538.f_47[iParam0 /*8*/], 1);
	if (Local_218.f_338.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_218.f_338.f_43);
	}
}

void func_156(int iParam0)
{
	int iVar0;
	
	func_157(iParam0);
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
		}
		unk_0xCED9E32812D6C7C7(&iVar0, 10);
		unk_0xCED9E32812D6C7C7(&iVar0, 11);
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", iVar0);
	}
}

void func_157(int iParam0)
{
	if (unk_0x6BD06F4780EAC5DD("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0xF2549FF74D64B720(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0x05B874E9ABFF72B4(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

int func_158()
{
	return 0;
}

void func_159(int iParam0, int iParam1)
{
	if (unk_0x6BD06F4780EAC5DD("FMDeliverableID", 3))
	{
		unk_0x05B874E9ABFF72B4(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_160(int iParam0)
{
	return Local_538.f_2.f_13[iParam0];
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (Local_538.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_162(int iParam0, int iParam1)
{
	if (unk_0x6BD06F4780EAC5DD("FMCVehicle", 2))
	{
		unk_0x2C8C3211219C37BD(iParam1, "FMCVehicle", 1);
	}
}

void func_163(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 13);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&iVar0, 13);
		}
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", iVar0);
	}
}

void func_164(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			unk_0xCD98C8CEA8A43820(iParam0, 0);
			break;
	}
	func_165(iParam0);
}

void func_165(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		unk_0xD045D56D95A3D704(iParam0, 0);
	}
}

float func_166(int iParam0, int iParam1)
{
	if (Local_218.f_338.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0.2f;
}

bool func_167(int iParam0, int iParam1)
{
	return func_166(iParam0, iParam1) != 1f;
}

int func_168(int iParam0)
{
	if (func_61(22))
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, int iParam1)
{
	if (Local_217.f_67.f_1[iParam0 /*14*/].f_8 != -1)
	{
		unk_0x58DAFDEB2F46A5EA(iParam1, Local_217.f_67.f_1[iParam0 /*14*/].f_8, Local_217.f_67.f_1[iParam0 /*14*/].f_8);
		unk_0x952B5201CC721090(iParam1, Local_217.f_67.f_1[iParam0 /*14*/].f_8, Local_217.f_67.f_1[iParam0 /*14*/].f_8);
	}
}

int func_170(var uParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_218.f_338.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_218.f_338.f_44);
		if (StackVal)
		{
			func_171(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_171(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if ((unk_0x9315DBF7D972F07A() && unk_0x3A8B0F5B0E3DE13A(iParam0)) || !unk_0x9315DBF7D972F07A())
		{
			if (unk_0x9E2D6C50374FCFA9() != func_50())
			{
				uParam1->f_100 = unk_0x9E2D6C50374FCFA9();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_225(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					unk_0xAFE1B52F0DE91595(iParam0, 1);
					unk_0x8C5DD298059D8BF8(iParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					unk_0xAFE1B52F0DE91595(iParam0, 0);
					unk_0x8C5DD298059D8BF8(iParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					unk_0xAFE1B52F0DE91595(iParam0, 1);
					unk_0x8C5DD298059D8BF8(iParam0, 1);
				}
			}
			if (func_224(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					unk_0x52ED1CEB870C0A42(iParam0, false, 1);
				}
				else
				{
					unk_0x52ED1CEB870C0A42(iParam0, true, 1);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x785A594EF1969952(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x2DAF1526EF0058EE(iParam0, uParam1->f_79);
			}
			if (func_223(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0x6DF92DB1542A3E0D(iParam0, uParam1->f_80);
			unk_0x63140C89AD7622EF(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0xCE01344F3CABBA9D(iParam0, uParam1->f_99);
			}
			if (func_222(iParam0))
			{
				func_216(iParam0, func_219(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x5E17421C6DDF16AF(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x9E56F3B30F9945A4(iParam0, uParam1->f_98);
			}
			if (unk_0xE2D0C323A1AE5D85(uParam1->f_95, 0))
			{
				func_187(iParam0, &(uParam1->f_81));
			}
			if ((!func_178(4) && !bParam4) && !unk_0x44859561F653DD4E())
			{
				func_175(iParam0);
			}
			if (func_174(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0x0CF999545677298A(iParam0, 16);
						break;
					
					case 1:
						unk_0x0CF999545677298A(iParam0, 16);
						if ((unk_0x7010991FDA59D3F2(iParam0, joaat("scarab")) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab2"))) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab3")))
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0x0CF999545677298A(iParam0, 16);
						if ((unk_0x7010991FDA59D3F2(iParam0, joaat("scarab")) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab2"))) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab3")))
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0x0CF999545677298A(iParam0, 16);
						if ((unk_0x7010991FDA59D3F2(iParam0, joaat("scarab")) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab2"))) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab3")))
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x0061B7C9351B41ED(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0x0CF999545677298A(iParam0, 16);
							if ((unk_0x7010991FDA59D3F2(iParam0, joaat("scarab")) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab2"))) || unk_0x7010991FDA59D3F2(iParam0, joaat("scarab3")))
							{
								unk_0x0061B7C9351B41ED(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x0061B7C9351B41ED(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_173(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						unk_0x1AF469C927341A18(iParam0, 0);
						unk_0xFF74DEC3F62D3654(iParam0, 1);
						if (uParam1->f_9[16] == 5)
						{
							unk_0x083D28D7FA474397(iParam0, (Global_262145.f_21538 + 0.05f));
						}
						else
						{
							unk_0x083D28D7FA474397(iParam0, Global_262145.f_21538);
						}
						unk_0xC6672A1A9FBE00A1(iParam0, 1);
						break;
					
					default:
						unk_0x1AF469C927341A18(iParam0, 0);
						unk_0x083D28D7FA474397(iParam0, 1f);
						unk_0xC6672A1A9FBE00A1(iParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xE2D0C323A1AE5D85(uParam1->f_95, 1) && unk_0xE2D0C323A1AE5D85(uParam1->f_95, 2))
					{
						if (unk_0xE2D0C323A1AE5D85(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x6BD06F4780EAC5DD("Player_Vehicle", 3))
					{
						unk_0x05B874E9ABFF72B4(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xE2D0C323A1AE5D85(uParam1->f_95, 1) && unk_0xE2D0C323A1AE5D85(uParam1->f_95, 2))
					{
						if (unk_0x6BD06F4780EAC5DD("Veh_Modded_By_Player", 3))
						{
							unk_0x05B874E9ABFF72B4(iParam0, "Veh_Modded_By_Player", unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()));
						}
					}
					else if (unk_0x6BD06F4780EAC5DD("Veh_Modded_By_Player", 3))
					{
						if (func_172(uParam1->f_81) && unk_0x20CD75CDFAF71FD3(&(uParam1->f_81)))
						{
							unk_0x05B874E9ABFF72B4(iParam0, "Veh_Modded_By_Player", unk_0x4AE7F6D227ED332C(unk_0xF6D95AC799EC5CE4(&(uParam1->f_81))));
						}
						else
						{
							unk_0x05B874E9ABFF72B4(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_172(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

bool func_173(int iParam0)
{
	return func_224(iParam0);
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_175(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19950)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0))
		{
			if (unk_0xD64C90C3F536F963(iParam0))
			{
				Var0.x = unk_0x15CAA6D7B11F1A7C(iParam0);
				Var0.f_1 = unk_0x2E87280918B16506(unk_0x80D16DB58890B7BC(iParam0));
				if (unk_0x6BD06F4780EAC5DD("RandomID", 3))
				{
					if (!unk_0xF2549FF74D64B720(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0x5853B15F78E1A265(0, 65535);
						unk_0x05B874E9ABFF72B4(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0xC3B76795ECBDEF41(iParam0, "RandomID");
					}
				}
				func_176(Var0);
			}
		}
	}
}

void func_176(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = -242781845;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = Param0.x;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0x2700C00F82C16BF0(1, &Var0, 5, func_177(1, 1));
}

int func_177(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_73(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (func_186())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_185(iVar0) == iParam0)
			{
				if (func_179(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_179(int iParam0)
{
	return func_180(iParam0, 6, 1);
}

int func_180(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xE2D0C323A1AE5D85(Global_100026.f_1392[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_184() == 0)
		{
			return unk_0xE2D0C323A1AE5D85(func_181(func_183(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_182(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_75();
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

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10851;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12597;
}

int func_184()
{
	return Global_31505;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_186()
{
	return Global_100026.f_376 > 0;
}

int func_187(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_197(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = unk_0x596E9EC72D8DEE73(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_195(iParam0))
		{
			iVar1 = unk_0xF6D95AC799EC5CE4(uParam1);
			if (func_190(&iParam0, iVar1))
			{
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
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_188(iParam0))
	{
	}
	return 0;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = unk_0x596E9EC72D8DEE73(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x9315DBF7D972F07A())
			{
				iVar1 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iVar1 = unk_0x320D1840B6DAA1CC();
			}
			iVar2 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(iVar1, Global_1577899));
			iVar3 = 20000;
			if (Global_1836580)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0xE08352579C33866C(iParam0);
				func_189(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_189(int iParam0)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(iVar0, 16))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 16);
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", iVar0);
	}
}

int func_190(int iParam0, int iParam1)
{
	func_194();
	if (Global_1574629.f_18 != 0 || unk_0x3EB9C70ED5B40F55(*iParam0))
	{
		Global_1946820.f_11 = unk_0x382B07F45AACD5BC(*iParam0);
		if (Global_1946820.f_11 < 0f)
		{
			Global_1946820.f_11 = 0f;
		}
	}
	func_192(*iParam0, &Global_1946820, &(Global_1946820.f_1), &(Global_1946820.f_4), &(Global_1946820.f_7), &(Global_1946820.f_10));
	Global_1946820.f_1.f_2 = (Global_1946820.f_1.f_2 - Global_1946820.f_11);
	if (Global_1946820.f_4.f_2 < 0f)
	{
		Global_1946820.f_12 = 1;
	}
	Global_1946820.f_13 = 200;
	if (unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("windsor") || unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("comet4"))
	{
		Global_1946820.f_13 = 255;
	}
	if (Global_1946820.f_12)
	{
		if (func_191(iParam0, iParam1, Global_1946820, Global_1946820.f_1, Global_1946820.f_4, Global_1946820.f_7, Global_1946820.f_10, 0, Global_1946820.f_13))
		{
			if (unk_0x9315DBF7D972F07A())
			{
				Global_1577899 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				Global_1577899 = unk_0x320D1840B6DAA1CC();
			}
			return 1;
		}
	}
	else
	{
		Global_1946820.f_14 = { Global_1946820.f_1 };
		Global_1946820.f_14 = (Global_1946820.f_14 * -1f);
		Global_1946820.f_17 = { Global_1946820.f_4 };
		Global_1946820.f_17 = (Global_1946820.f_17 * -1f);
		Global_1946820.f_20 = { Global_1946820.f_7 };
		Global_1946820.f_20.f_1 = (Global_1946820.f_20.f_1 * -1f);
		Global_1946820.f_20.f_2 = (Global_1946820.f_20.f_2 * -1f);
		if (!unk_0xA763B3F87DA3C316(*iParam0, 0))
		{
			Global_1946820.f_23 = unk_0x596E9EC72D8DEE73(*iParam0, 0);
		}
		else
		{
			Global_1946820.f_23 = 3;
		}
		Global_1946820.f_24 = unk_0x596E9EC72D8DEE73(*iParam0, 1);
		if (!unk_0xA763B3F87DA3C316(*iParam0, 1))
		{
			Global_1946820.f_24 = unk_0x596E9EC72D8DEE73(*iParam0, 1);
		}
		else
		{
			Global_1946820.f_24 = 3;
		}
		if (((Global_1946820.f_23 == 0 && func_191(iParam0, iParam1, Global_1946820, Global_1946820.f_1, Global_1946820.f_4, Global_1946820.f_7, Global_1946820.f_10, 0, Global_1946820.f_13)) || Global_1946820.f_23 != 0) && ((Global_1946820.f_24 == 0 && func_191(iParam0, iParam1, Global_1946820, Global_1946820.f_14, Global_1946820.f_17, Global_1946820.f_20, Global_1946820.f_10, 1, Global_1946820.f_13)) || Global_1946820.f_24 != 0))
		{
			if (unk_0x9315DBF7D972F07A())
			{
				Global_1577899 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				Global_1577899 = unk_0x320D1840B6DAA1CC();
			}
			return 1;
		}
	}
	return 0;
}

bool func_191(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8)
{
	return unk_0x288E8F521B7AB08D(*uParam0, unk_0x407E03586628E458(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_192(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x7F0054A115D66F44(iParam0, "chassis_dummy");
	if (((!func_193(Global_1946846, 0f, 0f, 0f, 0) && !func_193(Global_1946849, 0f, 0f, 0f, 0)) && !func_193(Global_1946852, 0f, 0f, 0f, 0)) && !Global_1946855 == 0f)
	{
		*uParam2 = { Global_1946846 };
		*uParam3 = { Global_1946849 };
		*uParam4 = { Global_1946852 };
		*uParam5 = Global_1946855;
		return 1;
	}
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x7F0054A115D66F44(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x7F0054A115D66F44(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0x7F0054A115D66F44(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("cypher"):
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1527436269:
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -915234475:
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -261346873:
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1532171089:
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -619930876:
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 359875117:
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 655665811:
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case 1141395928:
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 629969764:
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -670086588:
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case 461465043:
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1353120668:
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
		
		case 1993851908:
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 662793086:
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
	}
	return 1;
}

bool func_193(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_194()
{
	Global_1946820 = 0;
	Global_1946820.f_1 = { 0f, 0f, 0f };
	Global_1946820.f_4 = { 0f, 0f, 0f };
	Global_1946820.f_7 = { 0f, 0f, 0f };
	Global_1946820.f_10 = 0f;
	Global_1946820.f_11 = 0f;
	Global_1946820.f_12 = 0;
	Global_1946820.f_13 = 0;
	Global_1946820.f_14 = { 0f, 0f, 0f };
	Global_1946820.f_17 = { 0f, 0f, 0f };
	Global_1946820.f_20 = { 0f, 0f, 0f };
	Global_1946820.f_23 = 0;
	Global_1946820.f_24 = 0;
}

int func_195(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0xA763B3F87DA3C316(iParam0, 0) || func_196(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				return unk_0xE2D0C323A1AE5D85(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_197(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x66237ABAFDF8615A(uParam1, 13) && unk_0x20CD75CDFAF71FD3(uParam1))
	{
		iVar0 = unk_0xF6D95AC799EC5CE4(uParam1);
	}
	else
	{
		iVar0 = func_50();
	}
	bVar1 = false;
	if (iVar0 == unk_0x9E2D6C50374FCFA9())
	{
		if (func_208(15, 0))
		{
			bVar1 = true;
		}
		else if (func_204(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0)) || !unk_0x3A8B0F5B0E3DE13A(iParam0)) || !unk_0x3EE42535A14BA719(0, -1, 1)) || !((unk_0x66237ABAFDF8615A(uParam1, 13) && unk_0xF453DE81BDFDAE6F()) && unk_0x8C992447292D600F(uParam1))) || iVar0 == func_50()) || !func_9(iVar0, 0, 0)) || !bVar1) || func_198(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return 1;
	}
	if (func_200(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		if (func_199(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1946845)
	{
		return 1;
	}
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case -1444114309:
			return 1;
			break;
		
		case joaat("club"):
			if ((unk_0x0DD0BC46C4CFD6AD(iParam0, 7) == 0 || unk_0x0DD0BC46C4CFD6AD(iParam0, 7) == 1) || unk_0x0DD0BC46C4CFD6AD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x0DD0BC46C4CFD6AD(iParam0, 45) == 4 || unk_0x0DD0BC46C4CFD6AD(iParam0, 45) == 5) || unk_0x0DD0BC46C4CFD6AD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)
{
	if (unk_0x6BD06F4780EAC5DD("FMDeliverableID", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "FMDeliverableID"))
		{
			return unk_0xC3B76795ECBDEF41(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_200(int iParam0)
{
	if (func_203(iParam0) == 233)
	{
		return func_201(iParam0);
	}
	return -1;
}

int func_201(int iParam0)
{
	if (func_202(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	if (func_202(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

bool func_204(bool bParam0)
{
	return func_205(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_205(int iParam0, bool bParam1)
{
	return func_206(iParam0, bParam1, 1);
}

int func_206(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_50())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_207(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_50() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0, int iParam1)
{
	if (iParam0 != func_50())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_50())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_208(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_213(unk_0x9E2D6C50374FCFA9()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	iVar0 = func_210(iParam0);
	iVar1 = iParam0;
	return unk_0xE2D0C323A1AE5D85(iVar0, func_209(iVar1));
}

int func_209(int iParam0)
{
	return (iParam0 % 32);
}

int func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = func_181(func_211(iParam0), -1, 0);
	return iVar0;
}

int func_211(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_212(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_212(int iParam0)
{
	return (iParam0 / 32);
}

int func_213(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_214(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)
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

void func_216(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_218(iParam1);
	func_217(iVar1, &uVar0);
	unk_0xCE01344F3CABBA9D(iParam0, uVar0);
}

bool func_217(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x9315DBF7D972F07A() && func_220()) && Global_1576202)
	{
		if ((iParam0 == Global_1576203 && iParam1 == Global_1576204) && iParam2 == Global_1576205)
		{
			return 13;
		}
	}
	return 0;
}

int func_220()
{
	struct<13> Var0;
	
	if (unk_0xC65B603E7942D0DB())
	{
		if ((unk_0x20E4972CBF3DBE1B() && unk_0xAF5DBE95205A49D1()) && unk_0xCA8CDFE6F0F62C7F())
		{
			Var0 = { func_221() };
			if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_221()
{
	struct<13> Var0;
	
	unk_0x9EDEC39EE142C8D5(&Var0, 13);
	return Var0;
}

int func_222(int iParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_223(int iParam0, var uParam1)
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
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 1532171089:
		case -261346873:
		case -619930876:
		case 461465043:
		case -670086588:
		case -915234475:
			return 1;
			break;
	}
	return 0;
}

void func_225(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_236(iParam0))
		{
			if (unk_0x2E87280918B16506(&(uParam1->f_1)) != 0)
			{
				unk_0x2C2F2F6BEE7AC7E7(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xACF41D856B7CCB39())
			{
				unk_0xE56B65C6B89CFCF2(iParam0, *uParam1);
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
			if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar2)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar3)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar4)))
					{
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(4)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 10) != 0)
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_235(1));
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x077FDC1A202B9273(iParam0, 0);
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) != -1)
			{
				unk_0x077FDC1A202B9273(iParam0, 1);
			}
		}
		if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 13))
		{
			unk_0x401F3880D64CB7D9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x812006F6C16BBEA2(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 12))
		{
			unk_0x4A498F8F5DB5D526(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xD27CAD777BB60AE5(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x58DAFDEB2F46A5EA(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x952B5201CC721090(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xE2D0C323A1AE5D85(uParam1->f_77, 15) || func_234(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_233())
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
		unk_0xFEF0C9A733C7B609(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_232(uParam1->f_66))
		{
			unk_0x2EB7787881686751(iParam0, 0);
		}
		else
		{
			unk_0x2EB7787881686751(iParam0, 0);
			unk_0x2EB7787881686751(iParam0, uParam1->f_65);
		}
		if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 9))
		{
			unk_0xAFE1B52F0DE91595(iParam0, 0);
			unk_0x8C5DD298059D8BF8(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x3B2646B62E7BBE11(iParam0, uParam1->f_70);
		}
		unk_0x74FCADE93B81FD35(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xBE69E921963A86B7(iParam0, 2, unk_0xE2D0C323A1AE5D85(uParam1->f_77, 28));
		unk_0xBE69E921963A86B7(iParam0, 3, unk_0xE2D0C323A1AE5D85(uParam1->f_77, 29));
		unk_0xBE69E921963A86B7(iParam0, 0, unk_0xE2D0C323A1AE5D85(uParam1->f_77, 30));
		unk_0xBE69E921963A86B7(iParam0, 1, unk_0xE2D0C323A1AE5D85(uParam1->f_77, 31));
		unk_0x4FA753674D81BF2E(iParam0, unk_0xE2D0C323A1AE5D85(uParam1->f_77, 10));
		if (unk_0x8F0BC830FFCF7F2A(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE1F8DBCF9A6E205E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_231(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_231(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xA36A3AB3D2350CCD(iParam0, 1);
			}
			else
			{
				unk_0x47B16F33DD2893CF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_226(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x4262B4DCEADC2695(uParam1->f_66) && !unk_0xD2B5B1C8FC84FE0F(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, func_235(iVar5 + 1)))
				{
					if (!unk_0xC49329A4E58D025B(iParam0, iVar5 + 1))
					{
						unk_0x45A6EA15139A0C54(iParam0, iVar5 + 1, 0);
					}
				}
				else if (unk_0xC49329A4E58D025B(iParam0, iVar5 + 1))
				{
					unk_0x45A6EA15139A0C54(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("sheava") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("omnis")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("le7b"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 0) == -1)
			{
				unk_0x45A6EA15139A0C54(iParam0, 1, 0);
			}
		}
		if (((unk_0xD6F7D32A98E07F93(uParam1->f_66) && unk_0x03377F11051BC47F(iParam0)) && !unk_0x7010991FDA59D3F2(iParam0, joaat("avenger"))) && !((((Global_4718592.f_77711 == 6 || Global_4718592.f_77711 == 7) || Global_4718592.f_77711 == 18) || Global_4718592.f_77711 == 19) && Global_4718592.f_2 == 20))
		{
			if (!unk_0xE2D0C323A1AE5D85(uParam1->f_77, 23))
			{
				if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 22))
				{
					unk_0x3739DEED4A756E69(iParam0, 2);
				}
				else
				{
					unk_0x3739DEED4A756E69(iParam0, 3);
				}
			}
			else
			{
				unk_0x3739DEED4A756E69(iParam0, 4);
			}
		}
		if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 27))
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_226(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_230(unk_0x15CAA6D7B11F1A7C(*iParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*iParam0, 24) != func_229(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*iParam0, 24, func_229(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_228(iParam0);
	if (func_227(*iParam0))
	{
		unk_0xFF74DEC3F62D3654(*iParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
	}
	return 1;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAC1327F86AC1314A(iParam0, iVar1, unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1)), 32);
				iVar2 = unk_0x2E87280918B16506(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x2E87280918B16506("MNU_CAGE") || iVar2 == unk_0x2E87280918B16506("SABRE_CAG"))
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

void func_228(var uParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x0DD0BC46C4CFD6AD(*uParam0, 4) == 0)
			{
				unk_0x0061B7C9351B41ED(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x0CF999545677298A(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x0061B7C9351B41ED(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
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
		iVar0 = unk_0x6B83F5AE0478286F(iParam0, 38);
		iVar1 = unk_0x6B83F5AE0478286F(iParam0, 24);
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

int func_230(int iParam0, int iParam1)
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
			if (!Global_262145.f_14483)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14484)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14482)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14485)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14487)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14486)
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
			if (Global_262145.f_18935)
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
			if (Global_262145.f_18937)
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
			if (Global_262145.f_18941)
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
			if (Global_262145.f_18938)
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
			if (Global_262145.f_18945)
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
			if (Global_262145.f_18943)
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
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20893)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20894)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_231(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = unk_0x0DD0BC46C4CFD6AD(iParam0, 24);
		iVar1 = unk_0xCCEE7D38FC5D9FD6(iParam0, 24);
		unk_0xE19D99912C7661C6(iParam0, uParam1);
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tornado6") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x0CF999545677298A(iParam0, 24);
		}
		else
		{
			unk_0x0061B7C9351B41ED(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_233()
{
	return unk_0x014D8C5910A5B01B(-1691188696);
}

int func_234(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				}
				return unk_0xE2D0C323A1AE5D85(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_235(int iParam0)
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

int func_236(int iParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!func_237(unk_0x9E2D6C50374FCFA9(), -1))
		{
			iParam0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (func_200(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (func_199(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_9(iParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0);
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_238(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, fParam3, iParam5, iParam4, bParam12);
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
			unk_0x4FA753674D81BF2E(iVar1, bParam7);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam10)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_239(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_239(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_240(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
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

int func_240(int iParam0, struct<3> Param1, int iParam2)
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

void func_241(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_258(&(Global_76670.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x987A5F1E1A67E3C0(Param0, Global_76670.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_242(iVar0);
			}
		}
		iVar0++;
	}
}

void func_242(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_258(&(Global_76670.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_76670.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x55A0C756C4A8220C(Global_76670.f_139[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_76670.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x2D58A6131679D82C(Global_76670.f_139[iParam0], 1, 1);
				unk_0xD59CC8123FD1A789(&(Global_76670.f_139[iParam0]));
			}
		}
		Global_76670[iParam0] = 1;
		if (unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_257(iParam0, 0)) && Global_77579.f_66 == 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] != 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] > 3) && (!func_246(0, Global_76670.f_555[0 /*21*/].f_12) || !func_246(1, Global_76670.f_555[0 /*21*/].f_12)))
			{
				func_245(&(Global_112915.f_32749.f_69[Global_76670.f_555[0 /*21*/].f_14 /*78*/]), &Global_77579);
				Global_77657 = Global_112915.f_32749.f_5591;
			}
			func_243(iParam0, 0);
		}
	}
}

void func_243(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_257(iParam0, 0))
		{
			func_244(iParam0, 1, 0);
			func_244(iParam0, 2, 0);
			func_244(iParam0, 3, 0);
			func_244(iParam0, 4, 0);
			func_244(iParam0, 0, 1);
			Global_76670[iParam0] = 1;
		}
	}
	else
	{
		func_244(iParam0, 0, 0);
	}
}

void func_244(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_32749[iParam0]), iParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112915.f_32749[iParam0]), iParam1);
	}
}

void func_245(var uParam0, var uParam1)
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

int func_246(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_256(&(Global_112915.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_247(Global_112915.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_247(int iParam0, bool bParam1)
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
		if (!func_255())
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
		if ((((!func_254() && !func_253()) && !func_252()) && !func_251()) && !func_255())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3EBD3AF4E5D7A08C() || unk_0x8FE9914D4872D601()) || unk_0xA7384DAD7CF469DA())
		{
		}
		else if (!func_252())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_250(iParam0))
		{
			return 0;
		}
	}
	if (!func_248(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_248(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_249())
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

int func_249()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_250(int iParam0)
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

int func_251()
{
	return 0;
}

int func_252()
{
	return 1;
}

int func_253()
{
	return 1;
}

int func_254()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_255()
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
					uVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&uVar0, 0);
					unk_0x212EDDD868F364B5(uVar0);
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

int func_256(var uParam0)
{
	return *uParam0;
}

bool func_257(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_112915.f_32749[iParam0], iParam1);
}

int func_258(var uParam0, int iParam1)
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
			uParam0->f_4 = func_259(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_259(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_259(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_259(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_259(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_259(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_259(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_259(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_259(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
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
			if (func_255())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_255())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 0);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112915.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_193(Global_112915.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112915.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112915.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_9, 19))
	{
		if (!func_193(Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(uParam0->f_9, 20))
	{
		if (!func_193(Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_259(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_261(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_260(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_260(int iParam0, var uParam1, int iParam2)
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
			if (Global_112915.f_9085.f_99.f_58[128] && !Global_112915.f_9085.f_99.f_58[131])
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
					if (Global_112915.f_9085.f_99.f_58[119])
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
			else if (Global_112915.f_9085.f_99.f_58[118])
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

bool func_261(int iParam0)
{
	return iParam0 < 3;
}

int func_262(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if (func_265(iParam0, &Var2, &Var1, &uVar0))
	{
		if (func_264(iParam0, Var2, Var1, uVar0))
		{
			Local_538.f_112 = { Var2 };
			Local_538.f_121 = func_263(Var2, Var1);
			return 1;
		}
	}
	return 0;
}

float func_263(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xD12EFCAB87804BED((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_264(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	float fVar0;
	
	if (!func_70(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0x9CD4CBF2BBE10F00(Param1, &fVar0, 1, 0))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = unk_0x1ADA868DED581C1D(Param1.x, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_265(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_149(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_217.f_67.f_1[iParam0 /*14*/].f_4 };
	}
	*uParam1 = { func_267(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(iLocal_517) * 30f))), (fVar0 * cos((to_float(iLocal_517) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_266());
	iLocal_517++;
	if (iLocal_517 >= 12)
	{
		iLocal_517 = 0;
	}
	return 1;
}

float func_266()
{
	return 60f;
}

Vector3 func_267(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

int func_268(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	if (func_270(iParam0, &Var1, &Var2, &uVar4, &uVar0))
	{
		if (unk_0xED142878C9F94E2F(Var2, Var1, uVar4, &Var3))
		{
			if (func_269(iParam0, Var3, Var2, uVar0))
			{
				Local_538.f_112 = { Var3 };
				Local_538.f_121 = func_263(Var3, Var2);
				return 1;
			}
		}
	}
	return 0;
}

int func_269(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Local_218.f_338.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_218.f_338.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_70(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_270(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_149(iParam0, 15))
	{
	}
	else if (Local_218.f_338.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_217.f_67.f_1[iParam0 /*14*/].f_4 };
		*uParam2 = { Local_217.f_67.f_1[iParam0 /*14*/].f_4 };
	}
	if (iLocal_517 > 0)
	{
		func_271(uParam1);
	}
	if (!func_149(iParam0, 15) && Local_218.f_338.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_41);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 120f;
	}
	else
	{
		*uParam3 = 60f;
	}
	return 1;
}

void func_271(var uParam0)
{
	if (iLocal_517 < 5)
	{
		switch (iLocal_517)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_517 = 0;
	}
	iLocal_517++;
}

bool func_272(int iParam0, var uParam1, var uParam2)
{
	struct<35> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_338.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_273(Local_217.f_67.f_1[iParam0 /*14*/].f_4, Local_217.f_67.f_1[iParam0 /*14*/].f_4, Local_217.f_67.f_1[iParam0 /*14*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_273(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
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
	if (!func_395())
	{
		return 0;
	}
	if (func_394() && !Global_2667222.f_679 == unk_0x8142A6539DDC180F())
	{
		if (!Global_2667222.f_675 == 0)
		{
			Global_2667222.f_675 = 0;
			func_393();
			func_392();
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_674)
	{
		if (!Global_2667222.f_675 == 0)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_678) < func_391(0))
			{
				return 0;
			}
			else
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	else
	{
		if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_676) > 30000)
		{
			Global_2667222.f_675 = 0;
		}
		if (!Global_2667222.f_675 == 0)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_678) > func_391(1))
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_385(Param0))
		{
			if (func_384(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667222.f_675 == 0)
	{
		if (vdist(Global_2667222.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667222.f_697 != iParam2)
		{
			return 0;
		}
	}
	unk_0x2EE5FFF3E1E3400D((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2667222.f_675 == 0)
	{
		Global_2667222.f_681 = 0;
		Global_2667222.f_676 = unk_0xE75390F3CA208D5E();
		Global_2667222.f_674 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_678 = unk_0xE75390F3CA208D5E();
		Global_2667222.f_694 = { Param0 };
		Global_2667222.f_697 = iParam2;
		Global_2667222.f_680 = unk_0xE75390F3CA208D5E();
		func_383();
		func_393();
		if (!uParam6->f_27 || (((((((func_382(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2810287.f_924) && !Global_2810287.f_913) && !Global_2810287.f_921) && !Global_2810287.f_925) && !Global_2810287.f_933) && !Global_2810287.f_945))
		{
			func_363(Param0, iParam2);
		}
		if (func_349(Param0))
		{
			func_363(Param0, iParam2);
		}
		Global_2667222.f_675 = 2;
	}
	switch (Global_2667222.f_675)
	{
		case 2:
			if (unk_0xF8805443C3DB6256((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667222.f_682 = { Param0 };
				Global_2667222.f_685 = 0f;
				if (Global_2810287.f_924)
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
				if (((uParam6->f_3 && func_70(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_347(Param0, *uParam5, iParam2, unk_0x9E2D6C50374FCFA9(), 0))
				{
					Global_2667222.f_682 = { Param0 };
					Global_2667222.f_685 = *uParam5;
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
					if (uParam6->f_32 && Global_2667222.f_681 > 0)
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
					func_293(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var5);
				}
				func_291(Global_2667222.f_682, Global_2667222.f_685, iParam2, &(Global_2667222.f_672));
				Global_2667222.f_670 = 0;
				Global_2667222.f_671 = 0;
				Global_2667222.f_681++;
				Global_2667222.f_677 = unk_0xE75390F3CA208D5E();
				Global_2667222.f_676 = unk_0xE75390F3CA208D5E();
				Global_2667222.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2667222.f_670)
			{
				if (Global_2667222.f_672 == Global_2667222.f_673)
				{
					if (Global_2667222.f_671)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_290(Global_2667222.f_682, Global_2667222.f_685, iParam2, 1, 1036831949))
							{
								Global_2667222.f_675 = 4;
								Global_2667222.f_699 = unk_0xE75390F3CA208D5E();
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
						func_288(Global_2667222.f_682, 0);
						func_287(-1);
					}
				}
				else
				{
					Global_2667222.f_670 = 0;
					Global_2667222.f_671 = 0;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_677) > 3000)
			{
				func_287(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_699) < 10000)
				{
					if (unk_0xD0C6888814987992(Global_2667222.f_698))
					{
						if (unk_0x1C2607B54DDC8B70(Global_2667222.f_698))
						{
							if (!unk_0x39D52F5CDFC288E7(Global_2667222.f_698))
							{
								if (func_286(Global_2667222.f_682, Global_2667222.f_685, iParam2, unk_0x9E2D6C50374FCFA9(), 0) || func_275(Global_2667222.f_682, Global_2667222.f_685, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_288(Global_2667222.f_682, 0);
									func_287(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_288(Global_2667222.f_682, 0);
								func_287(-1);
							}
						}
					}
					else
					{
						func_287(-1);
					}
				}
				else
				{
					func_287(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2667222.f_682 = { Param0 };
			Global_2667222.f_685 = 0f;
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
			func_293(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var6);
			Global_2667222.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667222.f_694 = { Param0 };
	Global_2667222.f_697 = iParam2;
	Global_2667222.f_678 = unk_0xE75390F3CA208D5E();
	if (bVar0)
	{
		Global_2667222.f_515 = 0;
		*uParam4 = { Global_2667222.f_682 };
		*uParam5 = Global_2667222.f_685;
		func_274(1);
		return 1;
	}
	return 0;
}

void func_274(bool bParam0)
{
	Global_2667222.f_675 = 0;
	func_383();
	func_393();
	if (bParam0)
	{
		func_392();
	}
}

int func_275(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
		if ((iParam7 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam7 == 0)
		{
			if (func_9(iVar1, bParam3, bParam4))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam6 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_72(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && iParam8) && bParam5) && func_80(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar1), 0))
								{
									iVar3 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar1), 0);
									if (unk_0xE5965CDF24F93A9F(iVar3) && !unk_0x55B23FE400FCEA6B(iVar3, 0))
									{
										iVar4 = unk_0x15CAA6D7B11F1A7C(iVar3);
										Var5 = { unk_0x6B62510F212526DC(iVar3, 0) };
										fVar6 = unk_0x82FE2343F8BDFF0B(iVar3);
										if (func_285(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_276(func_77(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_276(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_284(iParam3, 1008981770))
	{
		func_277(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x5F8653E60ED2288E(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_277(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_283(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_278(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x48053974ED6F63CE((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x48053974ED6F63CE((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x48053974ED6F63CE((Var2.x - Var1.x));
}

void func_278(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x61ADF697DF551DA6(iParam0))
	{
		unk_0xB38EF75835FAF667(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_281(iParam0);
		if (iVar0 != 0)
		{
			func_279(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_279(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_280(iParam0, &Global_1577980);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x61ADF697DF551DA6(Global_1577980[iVar0]))
		{
			unk_0xB38EF75835FAF667(Global_1577980[iVar0], &(Global_1577984[iVar0 /*3*/]), &(Global_1577991[iVar0 /*3*/]));
		}
		if (vmag(Global_1577984[iVar0 /*3*/]) <= 0.01f || vmag(Global_1577991[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577984[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1577991[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577984[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1577991[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577984[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1577991[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1577998[iVar0] = (Global_1577991[iVar0 /*3*/] - Global_1577984[iVar0 /*3*/]);
		Global_1578001[iVar0] = (Global_1577991[iVar0 /*3*/].f_1 - Global_1577984[iVar0 /*3*/].f_1);
		Global_1578004[iVar0] = (Global_1577991[iVar0 /*3*/].f_2 - Global_1577984[iVar0 /*3*/].f_2);
		if (Global_1577998[iVar0] > Global_1578007)
		{
			Global_1578007 = Global_1577998[iVar0];
		}
		if (Global_1578004[iVar0] > Global_1578008)
		{
			Global_1578008 = Global_1578004[iVar0];
		}
		iVar0++;
	}
	Global_1578009 = (Global_1578007 * -0.5f);
	Global_1578012 = (Global_1578007 * 0.5f);
	Global_1578009.f_1 = ((((0.5f * Global_1578001[0]) + Global_1578001[1]) + Global_1577980.f_3) * -1f);
	Global_1578012.f_1 = (0.5f * Global_1578001[0]);
	Global_1578009.f_2 = (Global_1578004[0] * -0.5f);
	Global_1578012.f_2 = (Global_1578004[0] * 0.5f);
	*uParam1 = { Global_1578009 };
	*uParam2 = { Global_1578012 };
}

void func_280(int iParam0, var uParam1)
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

int func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_282(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_283(var uParam0, struct<3> Param1)
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

float func_284(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_278(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_285(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_276(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_277(Param0, fParam1, iParam2, &Global_1977108, &(Global_1977108.f_3), &(Global_1977108.f_6), 1036831949);
	func_277(Param3, fParam4, iParam5, &(Global_1977108.f_7), &(Global_1977108.f_10), &(Global_1977108.f_13), 1036831949);
	if (unk_0xC25227FFC64097FF(Global_1977108, Global_1977108.f_3, Global_1977108.f_6, Global_1977108.f_7, Global_1977108.f_10, Global_1977108.f_13))
	{
		return 1;
	}
	return 0;
}

int func_286(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_9(iVar1, 0, 1) && func_9(iParam3, 0, 1))
			{
				if (Global_2680195.f_261[iVar0])
				{
					if (func_276(Global_2680195.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_276(func_77(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680195.f_261[iVar0])
			{
				if (func_276(Global_2680195.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_9(iVar1, 0, 0))
			{
				if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
				{
					if (func_276(func_77(iVar1), Param0, fParam1, iParam2, 1036831949))
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

void func_287(int iParam0)
{
	if (Global_2667222.f_681 < 20 && unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667222.f_681 < iParam0))
		{
			Global_2667222.f_675 = 2;
		}
		else
		{
			Global_2667222.f_675 = 5;
		}
	}
	else
	{
		Global_2667222.f_675 = 5;
	}
}

void func_288(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_289(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2667222.f_2735[iParam1 /*3*/] };
		Global_2667222.f_2735[iParam1 /*3*/] = { Param0 };
		func_288(Var0, iParam1 + 1);
	}
}

int func_289(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2667222.f_2735[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_290(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x54E30A65F4FA4962())
	{
		return 0;
	}
	else
	{
		func_393();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2667222.f_686[iVar3] == -1 && unk_0x54E30A65F4FA4962())
			{
				func_277(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x48053974ED6F63CE((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2667222.f_686[iVar3] = unk_0x47DDB3F2BD4CB6FA(Var0, Var1, fParam4);
				Global_2667222.f_690[iVar3] = unk_0x69CE66B03B2184EB();
				Global_2667222.f_698 = Global_2667222.f_686[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_291(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_292(&Param0, &uParam1, &iParam2);
	Var0 = 2112408256;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0x2700C00F82C16BF0(1, &Var0, 8, func_177(1, 1));
}

int func_292(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x2E87280918B16506(&cVar0);
	return iVar1;
}

void func_293(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667222.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_342(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_294(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_294(var uParam0, var uParam1, var uParam2)
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
		if (func_338(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_333(uParam0, 1))
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
	Global_2674716.f_162 = 0;
	Global_2674716.f_163 = 0;
	Global_2674716.f_164 = -99;
	Global_2674716.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674716[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674716.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_281(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x67A3682C37778785(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x958AC759881D0B58(iVar6))
		{
			unk_0x1B54427560DFE3C3(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674716.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674716.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x535E2CA2F0DA34D4(iVar6)) || unk_0xA202F3522092063D(iVar6))
			{
				unk_0x4C1EEF24CF4B2752(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_326(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_323(Var1))
									{
										Var1 = { func_318(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_317(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_313(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_333(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_312(Var1, fVar2, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_338(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_311(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_70(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_70(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_275(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_303(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674716.f_162)
																										{
																											Global_2674716[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674716.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674716.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674716.f_162 == 0)
																									{
																										Global_2674716[0 /*3*/] = { Var1 };
																										Global_2674716.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674716.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2674716[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_302(Var1, fVar2, iVar14);
																													iVar14 = Global_2674716.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674716.f_162++;
																									if (Global_2674716.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674716[Global_2674716.f_162 /*3*/] = { Var1 };
																									Global_2674716.f_121[Global_2674716.f_162] = fVar2;
																									Global_2674716.f_162++;
																									if (func_313(Var1, uParam2))
																									{
																										Global_2674716.f_163++;
																									}
																									if (Global_2674716.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
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
				if (Global_2674716.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
						{
							func_300(0, uParam2);
						}
						iVar24 = unk_0x5853B15F78E1A265(0, Global_2674716.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674716[0 /*3*/] };
						uVar26 = Global_2674716.f_121[0];
						Global_2674716[0 /*3*/] = { Global_2674716[iVar24 /*3*/] };
						Global_2674716.f_121[0] = Global_2674716.f_121[iVar24];
						Global_2674716[iVar24 /*3*/] = { Var25 };
						Global_2674716.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
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
						func_299(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_338(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_333(&Var27, bVar29))
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
				func_295(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674716.f_164 = iVar6;
	}
	return 0;
}

void func_295(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_296(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9E2D6C50374FCFA9(), 0, 0))
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

int func_296(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_298(Param0, fParam1, iParam2, iParam3, 0) || func_297(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_297(struct<3> Param0, int iParam1, int iParam2)
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
				if (!Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_276(Param0, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam1, 0, 1))
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

int func_298(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_9(iVar1, 0, 1) && func_9(iParam2, 0, 1))
				{
					if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_9(iVar1, 0, 1) && func_9(iParam2, 0, 1))
				{
					if (Global_2680195.f_261[iVar0])
					{
						if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_77(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680195.f_261[iVar0])
				{
					if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_9(iVar1, 0, 1))
				{
					if (vdist(func_77(iVar1), Param0) < 1f)
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

void func_299(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x5853B15F78E1A265((1 + iParam0), (40 + iParam0));
		if (unk_0x15CEDAB46D800682(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (vmag(*uParam3) > 0f)
			{
				*uParam3 = { func_318(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_323(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_300(int iParam0, var uParam1)
{
	if (!func_313(Global_2674716[iParam0 /*3*/], uParam1))
	{
		Global_2674716.f_162 = (Global_2674716.f_162 - 1);
		func_301(iParam0);
		if (Global_2674716.f_162 > Global_2674716.f_163)
		{
			func_300(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_300(iParam0 + 1, uParam1);
	}
}

void func_301(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674716[iParam0 /*3*/] = { Global_2674716[iParam0 + 1 /*3*/] };
			Global_2674716.f_121[iParam0] = Global_2674716.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_302(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2674716[iParam2 /*3*/] };
	uVar1 = Global_2674716.f_121[iParam2];
	Global_2674716[iParam2 /*3*/] = { Param0 };
	Global_2674716.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674716.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_302(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_303(struct<3> Param0, float fParam1, float fParam2)
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
		if (func_304(iVar3))
		{
			Var1 = { func_77(iVar3) };
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

int func_304(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (!func_309(iParam0))
		{
			if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (!unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_306(unk_0x9E2D6C50374FCFA9(), 1, 0))
					{
						if (!func_305(unk_0x0E40F846A70BA3EC(iParam0), unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
				{
					if (!func_306(unk_0x9E2D6C50374FCFA9(), 1, 0))
					{
						if (!func_80(iParam0))
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

int func_305(int iParam0, int iParam1, int iParam2)
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

int func_306(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_307(iParam0))
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

bool func_307(int iParam0)
{
	return func_308(iParam0);
}

bool func_308(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

int func_309(int iParam0)
{
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	if (func_310())
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

bool func_310()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_311(struct<3> Param0, float fParam1, int iParam2)
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
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		fVar4 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_285(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xFE15FEB341652241(Param0, 30f, 0, iVar0);
	if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
	{
		iVar2 = unk_0x15CAA6D7B11F1A7C(iVar1);
		Var3 = { unk_0x6B62510F212526DC(iVar1, 0) };
		fVar4 = unk_0x82FE2343F8BDFF0B(iVar1);
		if (func_285(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_312(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_286(Param0, fParam1, iParam2, iParam3, iParam4) || func_347(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_313(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_316(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_314(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x5F8653E60ED2288E(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_314(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_315(&Param1, &Param2);
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

void func_315(var uParam0, var uParam1)
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

bool func_316(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
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

int func_317(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_306(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		if (Global_4980736.f_33237 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_33237)
			{
				if (Global_4980736.f_33238[iVar0 /*125*/].f_7 != 0)
				{
					if (func_276(Param0, Global_4980736.f_33238[iVar0 /*125*/], Global_4980736.f_33238[iVar0 /*125*/].f_6, Global_4980736.f_33238[iVar0 /*125*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*366*/].f_15 != 0)
				{
					if (func_276(Param0, Global_4980736.f_5742[iVar0 /*366*/], Global_4980736.f_5742[iVar0 /*366*/].f_3, Global_4980736.f_5742[iVar0 /*366*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_72860 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_72860)
			{
				if (Global_4980736.f_72864[iVar0 /*435*/].f_12 != 0)
				{
					if (func_276(Param0, Global_4980736.f_72864[iVar0 /*435*/], Global_4980736.f_72864[iVar0 /*435*/].f_3, Global_4980736.f_72864[iVar0 /*435*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_268)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058064.f_233[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058064.f_233[iVar0], 0))
				{
					if (func_276(Param0, unk_0x6B62510F212526DC(Global_1058064.f_233[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058064.f_233[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058064.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_266)
			{
				if (unk_0xE5965CDF24F93A9F(Global_1058064.f_119[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_1058064.f_119[iVar0], 0))
				{
					if (func_276(Param0, unk_0x6B62510F212526DC(Global_1058064.f_119[iVar0], 1), unk_0x82FE2343F8BDFF0B(Global_1058064.f_119[iVar0]), unk_0x15CAA6D7B11F1A7C(Global_1058064.f_119[iVar0]), 0.5f))
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

Vector3 func_318(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
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
			if (!func_321(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4C1EEF24CF4B2752(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x13FD00A258A58752(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
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
			if (unk_0x4262B4DCEADC2695(iParam7) && func_320(Param0))
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
					fVar10 = func_319(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_319(iParam7, 1.5f);
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
		if (!func_321(Param0, *uParam1, Param4))
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
	Var0 = { unk_0x6DB7FBD602C51670(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x3748F54B0AEC5219(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_319(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_319(iParam7, 1.5f);
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

float func_319(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_278(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_320(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x9CD4CBF2BBE10F00(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_321(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_283(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_322(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_322(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_323(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_325(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674423[iVar1])
	{
		if (func_324(Param0, &(Global_2673720[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674423[8])
	{
		if (func_324(Param0, &(Global_2673720[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_324(struct<3> Param0, var uParam1)
{
	return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_325(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2673711[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673711[1])
	{
		if (Param0 < Global_2673715[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673711[2])
	{
		if (Param0 < Global_2673715[1])
		{
			return 3;
		}
		else if (Param0 < Global_2673715[2])
		{
			return 4;
		}
		else if (Param0 < Global_2673715[3])
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

int func_326(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_332(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xC4EAB25A108C2429(0.01f, 360f);
			func_331(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 0, fVar2);
			if (func_327(Var1, &uVar0) || func_332(Var1))
			{
				Var1 = { *uParam0 };
				func_331(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_327(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_330())
	{
		return 0;
	}
	iVar1 = func_329();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_328(Param0, &(Global_2667222.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_328(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_316(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_314(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
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
				if (unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x5F8653E60ED2288E(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_329()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_330()
{
	return Global_1946934.f_518;
}

void func_331(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_283(&Var0, 0f, 0f, unk_0xC4EAB25A108C2429(0f, 360f));
		}
		else
		{
			func_283(&Var0, 0f, 0f, fParam5);
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

int func_332(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2667222.f_595 > 0f)
	{
		fVar0 = vdist(Param0, Global_2667222.f_592);
		if (fVar0 < Global_2667222.f_595)
		{
			return 1;
		}
	}
	return 0;
}

bool func_333(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667222.f_26.f_18)
	{
		switch (Global_2667222.f_26.f_17)
		{
			case 0:
				if (func_316(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_314(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x5F8653E60ED2288E(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_334(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, Global_2667222.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_334(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_331(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_337(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_335(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x29579BC5971CA4B6(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_316(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_314(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x5F8653E60ED2288E(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_335(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
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
	Var2 = { func_336(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x952F3FA2E7880565(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_322(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_322(Var2, Var1) >= 0f)
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
		Var2 = { func_336(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_336(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x952F3FA2E7880565(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_322(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_322(Var2, Var11) >= 0f)
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

Vector3 func_336(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_337(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

int func_338(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_385(Param0))
	{
		if (func_341(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_339(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_289(*uParam1, 1056964608))
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
				func_331(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_339(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_327(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_340(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_327(Var2, &uVar1) || func_332(Var2))
			{
				Var2 = { *uParam0 };
				func_340(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_340(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_334(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_334(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_334(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_331(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_337(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_335(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_341(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672163[iVar0 /*17*/].f_16))
			{
				if (func_328(*uParam0, &(Global_2672163[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672163[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672163[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_340(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_341(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_340(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_342(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2667222.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_338(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_333(uParam0, 1))
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
		Global_2674716.f_162 = 0;
		Global_2674716.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674716[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674716.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_345(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_344();
		}
		else
		{
			func_343();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667222.f_1753)
		{
			iVar2 = Global_2667222.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667222.f_1754[iVar2 /*4*/] };
				fVar4 = Global_2667222.f_1754[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_312(Var3, fVar4, uParam2->f_34, unk_0x9E2D6C50374FCFA9(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_338(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_311(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_70(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_70(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_275(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_303(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674716.f_162)
															{
																Global_2674716[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674716.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674716.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674716.f_162 == 0)
														{
															Global_2674716[0 /*3*/] = { Var3 };
															Global_2674716.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674716.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2674716[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_302(Var3, fVar4, iVar5);
																		iVar5 = Global_2674716.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
															}
														}
													}
													else
													{
														Global_2674716[Global_2674716.f_162 /*3*/] = { Var3 };
														Global_2674716.f_121[Global_2674716.f_162] = fVar4;
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
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
		if (Global_2674716.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
				{
					func_300(0, uParam2);
				}
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2674716.f_162);
				Var13 = { Global_2674716[0 /*3*/] };
				uVar14 = Global_2674716.f_121[0];
				Global_2674716[0 /*3*/] = { Global_2674716[iVar0 /*3*/] };
				Global_2674716.f_121[0] = Global_2674716.f_121[iVar0];
				Global_2674716[iVar0 /*3*/] = { Var13 };
				Global_2674716.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
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
			else if (uParam2->f_59 && Global_2667222.f_1753 > 0)
			{
				iVar0 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
				*uParam0 = { Global_2667222.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2667222.f_1754[iVar0 /*4*/].f_3;
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

void func_343()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_344()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		iVar1 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
		iVar2 = unk_0x5853B15F78E1A265(0, Global_2667222.f_1753);
		uVar3 = Global_2667222.f_2159[iVar1];
		Global_2667222.f_2159[iVar1] = Global_2667222.f_2159[iVar2];
		Global_2667222.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_345(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667222.f_1753)
	{
		uVar1 = func_346(Param0, fVar0, &fVar0);
		Global_2667222.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_346(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667222.f_1753)
	{
		fVar2 = vdist2(Param0, Global_2667222.f_1754[iVar3 /*4*/]);
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

int func_347(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_348(Param0, iParam2, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_285(Param0, fParam1, iParam2, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam3, 0, 1))
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

int func_348(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_284(iParam1, 1008981770);
	fVar1 = func_284(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_349(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2810287.f_924 && func_350(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_350(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_362(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_351(iVar1))
			{
				if (func_362(Global_1946934.f_532[iVar0 /*3*/], 0) == iVar2)
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

int func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_361(iParam0);
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_274 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
	if (iVar1 != func_50())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_274 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_360(unk_0x9E2D6C50374FCFA9(), 0) || (func_357(unk_0x9E2D6C50374FCFA9()) && func_215(func_356(unk_0x9E2D6C50374FCFA9())) == 12))
	{
		return 1;
	}
	if (func_355(unk_0x9E2D6C50374FCFA9()) || (func_357(unk_0x9E2D6C50374FCFA9()) && func_215(func_356(unk_0x9E2D6C50374FCFA9())) == 8))
	{
		return 1;
	}
	if (func_354(unk_0x9E2D6C50374FCFA9()) || (func_357(unk_0x9E2D6C50374FCFA9()) && func_215(func_356(unk_0x9E2D6C50374FCFA9())) == 5))
	{
		return 1;
	}
	if (func_353(unk_0x9E2D6C50374FCFA9()) || (func_357(unk_0x9E2D6C50374FCFA9()) && func_215(func_356(unk_0x9E2D6C50374FCFA9())) == 10))
	{
		return 1;
	}
	if (func_352(unk_0x9E2D6C50374FCFA9()) || (func_357(unk_0x9E2D6C50374FCFA9()) && func_215(func_356(unk_0x9E2D6C50374FCFA9())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_354(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_50())
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_50())
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	if (iParam0 != func_50() && func_9(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_357(int iParam0)
{
	if (iParam0 != func_50() && func_9(iParam0, 1, 1))
	{
		if (func_359(iParam0) && !func_358(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	if (iParam0 != func_50() && func_9(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_50() && func_9(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_360(int iParam0, bool bParam1)
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
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_50())
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
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

int func_362(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_328(Param0, &(Global_2672163[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_363(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2667222.f_45.f_318)
	{
		return;
	}
	if (!func_381())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_380(Param0);
		if (iVar1 > -1)
		{
			func_392();
			switch (iVar1)
			{
				case 0:
					func_379(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_379(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_379(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_379(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_379(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_379(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_379(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_379(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_379(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_379(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_379(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_379(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_379(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_379(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_379(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_379(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_379(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_379(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_379(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_379(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_379(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_379(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_379(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_379(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_379(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_379(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_379(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_379(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_379(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_379(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_379(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_379(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_379(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_379(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_379(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_379(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_379(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_379(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_379(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_379(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_379(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_379(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_379(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_379(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_379(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_379(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_379(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_379(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_379(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_379(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_379(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_379(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_379(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_377(78);
					break;
				
				case 11:
					func_377(79);
					break;
				
				case 12:
					func_377(82);
					break;
				
				case 13:
					func_377(81);
					break;
				
				case 14:
					func_377(73);
					break;
				
				case 15:
					func_379(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_379(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_379(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_379(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_377(75);
					break;
				
				case 17:
					func_377(76);
					break;
				
				case 18:
					func_377(77);
					break;
				
				case 19:
					func_379(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_379(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_379(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_379(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_377(80);
					break;
				
				case 21:
				case 25:
					func_377(87);
					break;
				
				case 22:
				case 26:
					func_377(88);
					break;
				
				case 23:
				case 27:
					func_377(89);
					break;
				
				case 24:
				case 28:
					func_377(90);
					break;
				
				case 29:
				case 30:
					if (func_376(iParam1))
					{
						func_377(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30);
					}
					break;
				
				case 31:
					func_379(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_379(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_379(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_379(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_379(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_379(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_379(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_379(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_379(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_379(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_379(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_379(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_379(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_379(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_379(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_379(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_379(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_379(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_379(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_379(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_379(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_379(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_379(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_379(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_379(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_379(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_379(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_379(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_379(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_379(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_379(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_379(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_379(-194.254f, -2018.756f, 26.62f, 75f);
					func_379(-186.956f, -2031.369f, 26.62f, 338f);
					func_379(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_379(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_379(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_379(-233.372f, -2089.601f, 26.62f, 304f);
					func_379(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_379(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_379(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_379(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_379(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_379(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_379(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_379(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_379(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_379(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_379(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_379(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_379(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_379(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_379(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_379(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_373(Param0, &iVar2, &iVar3) || (func_350(Param0, &(iVar2[0])) && (unk_0xD6F7D32A98E07F93(iParam1) || unk_0x4262B4DCEADC2695(iParam1))))
		{
			func_392();
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
					Global_2667222.f_515 = 1;
				}
				if (!iVar3[iVar0] && func_372(iVar2[iVar0], -1))
				{
					if (func_376(iParam1))
					{
						func_377(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_371(unk_0xE2D3D51028F0428A()) || func_370(unk_0xE2D3D51028F0428A())) && unk_0xD6F7D32A98E07F93(iParam1)) || unk_0x4262B4DCEADC2695(iParam1))
					{
						if (func_369(iParam1))
						{
							func_368(iVar2[iVar0]);
						}
						else if (func_367(iParam1))
						{
							func_366(iVar2[iVar0]);
							func_368(iVar2[iVar0]);
						}
						else
						{
							func_366(iVar2[iVar0]);
							func_368(iVar2[iVar0]);
						}
					}
					else
					{
						func_364(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_377(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_379(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_379(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_379(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_379(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_379(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_379(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_379(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_379(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_379(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_379(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_379(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_379(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_379(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_379(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_379(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_379(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_379(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_379(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_379(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_379(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_379(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_379(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_379(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_379(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_379(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_379(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_379(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_379(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_379(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_379(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_379(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_379(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_379(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_379(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_379(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_379(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_379(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_379(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_379(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_379(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_379(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_379(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_379(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_379(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_379(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_379(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_379(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_379(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_379(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_379(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_379(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_379(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_379(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_379(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_379(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_379(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_379(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_379(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_379(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_379(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_379(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_379(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_379(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_379(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_379(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_379(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_379(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_379(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_379(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_379(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_379(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_379(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_379(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_379(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_379(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_379(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_379(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_379(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_379(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_379(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_379(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_379(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_379(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_379(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_379(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_379(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_379(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_379(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_379(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_379(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_379(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_379(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_379(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_379(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_379(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_379(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_379(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_379(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_379(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_379(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_379(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_379(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_379(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_379(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_379(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_379(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_379(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_379(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_379(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_379(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_379(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_379(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_379(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_379(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_379(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_379(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_379(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_379(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_379(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_379(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_379(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_379(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_379(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_379(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_379(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_379(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_379(142.7427f, -2536.147f, 5f, 205.0002f);
			func_379(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_379(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_379(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_379(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_379(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_379(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_379(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_379(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_379(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_379(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_379(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_379(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_379(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_379(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_379(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_379(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_379(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_379(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_379(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_379(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_379(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_379(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_379(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_379(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_379(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_379(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_379(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_379(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_379(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_379(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_379(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_379(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_379(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_379(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_379(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_379(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_379(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_379(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_379(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_379(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_379(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_379(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_379(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_379(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_379(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_379(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_379(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_379(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_379(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_379(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_379(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_379(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_379(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_379(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_379(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_379(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_379(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_379(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_379(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_379(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_379(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_379(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_379(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_379(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_379(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_379(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_379(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_379(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_379(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_379(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_379(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_379(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_379(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_379(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_379(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_379(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_379(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_379(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_379(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_379(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_379(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_379(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_379(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_379(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_379(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_379(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_379(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_379(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_379(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_379(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_379(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_379(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_379(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_379(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_379(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_379(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_379(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_379(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_379(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_379(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_379(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_379(-1823.414f, 3092.762f, 31.843f, 330f);
			func_379(-1819.045f, 3100.435f, 31.845f, 330f);
			func_379(-1833.313f, 3075.722f, 31.838f, 330f);
			func_379(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_379(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_379(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_379(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_379(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_379(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_379(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_379(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_379(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_379(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_379(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_379(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_379(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_379(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_379(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_379(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_379(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_379(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_379(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_379(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_379(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_379(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_379(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_379(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_379(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_379(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_379(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_379(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_379(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_379(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_379(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_379(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_379(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_379(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_379(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_379(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_379(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_379(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_379(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_379(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_379(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_379(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_379(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_379(1231.279f, 2910.881f, 43.3085f, 12f);
				func_379(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_379(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_379(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_379(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_379(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_379(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_379(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_379(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_379(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_379(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_379(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_379(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_379(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_379(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_379(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_379(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_379(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_379(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_379(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_379(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_379(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_379(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_379(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_379(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_379(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_379(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_379(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_379(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_379(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_379(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_379(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_379(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_379(3.855f, 2672.388f, 78.437f, 319.2f);
				func_379(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_379(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_379(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_379(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_379(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_379(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_379(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_379(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_379(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_379(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_379(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_379(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_379(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_379(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_379(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_379(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_379(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_379(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_379(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_379(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_379(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_379(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_379(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_379(102.851f, 2688.009f, 51.732f, 224f);
				func_379(109.815f, 2681.012f, 51.112f, 224f);
				func_379(116.355f, 2674.26f, 50.529f, 224f);
				func_379(125.138f, 2665.98f, 49.8f, 224f);
				func_379(132.228f, 2659.865f, 49.26f, 228.4f);
				func_379(139.354f, 2653.536f, 48.737f, 228.4f);
				func_379(88.512f, 2702.995f, 53.042f, 224.199f);
				func_379(81.565f, 2710.357f, 53.67f, 224.199f);
				func_379(75.156f, 2716.981f, 54.223f, 224.199f);
				func_379(68.442f, 2723.806f, 54.775f, 226.199f);
				func_379(61.449f, 2730.606f, 55.308f, 226.199f);
				func_379(53.702f, 2738.167f, 55.855f, 226.199f);
				func_379(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_379(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_379(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_379(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_379(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_379(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_379(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_379(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_379(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_379(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_379(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_379(2714.633f, 3918.283f, 42.938f, 16f);
				func_379(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_379(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_379(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_379(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_379(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_379(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_379(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_379(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_379(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_379(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_379(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_379(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_379(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_379(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_379(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_379(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_379(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_379(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_379(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_379(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_379(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_379(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_379(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_379(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_379(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_379(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_379(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_379(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_379(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_379(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_379(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_379(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_379(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_379(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_379(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_379(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_379(3374.923f, 5520.177f, 20.3207f, 86f);
				func_379(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_379(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_379(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_379(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_379(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_379(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_379(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_379(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_379(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_379(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_379(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_379(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_379(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_379(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_379(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_379(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_379(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_379(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_379(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_379(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_379(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_379(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_379(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_379(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_379(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_379(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(43.848f, 6845.657f, 13.379f, 247.2f);
				func_379(50.379f, 6861.146f, 15.105f, 247.2f);
				func_379(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_379(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_379(55.806f, 6875.081f, 14.824f, 247.2f);
				func_379(11.616f, 6877.079f, 11.466f, 247.2f);
				func_379(18.954f, 6891.633f, 11.37f, 247.2f);
				func_379(26.68f, 6907.587f, 11.869f, 247.2f);
				func_379(7.479f, 6907.895f, 12.024f, 247.2f);
				func_379(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_379(35.591f, 6836.608f, 13.288f, 274.4f);
				func_379(36.028f, 6830.135f, 13.801f, 270.8f);
				func_379(35.114f, 6823.884f, 14.527f, 260.8f);
				func_379(48.779f, 6838.693f, 14.337f, 273.6f);
				func_379(56.738f, 6821.8f, 15.244f, 244.8f);
				func_379(48.377f, 6825.895f, 14.656f, 249.8f);
				func_379(49.11f, 6831.439f, 13.991f, 274.8f);
				func_379(53.544f, 6818.275f, 16.342f, 243f);
				func_379(46.162f, 6821.945f, 15.483f, 249.8f);
				func_379(60.129f, 6836.8f, 15.605f, 269.6f);
				func_379(40.88f, 6802.952f, 20.113f, 242.6f);
				func_379(48.203f, 6799.134f, 20.897f, 244.4f);
				func_379(70.449f, 6809.271f, 16.846f, 243f);
				func_379(61.436f, 6814.266f, 16.71f, 244.2f);
				func_379(56.142f, 6793.458f, 19.806f, 242.6f);
				func_379(65.759f, 6791.12f, 18.433f, 276.4f);
				func_379(77.305f, 6805.391f, 18.558f, 245.6f);
				func_379(85.893f, 6800.243f, 18.535f, 249.8f);
				func_379(56.85f, 6780.582f, 18.822f, 297.999f);
				func_379(65.636f, 6784.669f, 18.789f, 293.799f);
				func_379(74.121f, 6788.498f, 18.739f, 293.799f);
				func_379(97.779f, 6796.32f, 19.02f, 276.799f);
				func_379(106.76f, 6796.983f, 18.914f, 272.599f);
				func_379(112.387f, 6802.858f, 18.994f, 210.599f);
				func_379(117.58f, 6802.644f, 18.663f, 209.399f);
				func_379(122.481f, 6802.693f, 18.468f, 209.399f);
				func_379(127.182f, 6802.686f, 18.218f, 209.399f);
				func_379(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_379(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_379(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_379(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_379(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_379(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_379(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_379(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_379(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_379(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_379(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_379(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_379(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_379(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_379(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_379(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_379(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_379(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_379(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_379(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_379(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_379(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_379(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_379(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_379(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_379(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_379(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_379(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_379(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_379(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_379(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_379(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_379(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_379(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_379(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_379(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_379(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_379(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_379(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_379(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_379(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_379(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_379(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_379(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_379(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_379(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_379(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_379(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_379(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_379(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_379(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_379(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_379(30.027f, 3292.351f, 38.604f, 140.199f);
				func_379(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_379(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_379(23.897f, 3283.152f, 39.381f, 145.399f);
				func_379(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_379(18.723f, 3274.025f, 40.054f, 155.799f);
				func_379(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_379(36.958f, 3298.847f, 38.001f, 127.799f);
				func_379(54.165f, 3311.582f, 36.517f, 303.799f);
				func_379(61.607f, 3317.105f, 35.916f, 306.999f);
				func_379(68.994f, 3323.129f, 35.364f, 308.199f);
				func_379(76.266f, 3329.467f, 34.805f, 311.399f);
				func_379(82.757f, 3335.915f, 34.344f, 316.598f);
				func_379(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_379(14.664f, 3263.688f, 40.931f, 160.398f);
				func_379(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_379(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_379(89.575f, 3343.311f, 33.932f, 318.398f);
				func_379(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_379(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_379(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_379(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_379(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_379(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_379(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_379(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_379(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_379(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_379(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_379(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_379(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_379(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_379(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_379(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_379(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_379(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_379(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_379(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_379(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_379(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_379(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_379(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_379(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_379(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_379(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_379(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_379(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_379(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_379(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_379(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_379(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_379(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_379(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_379(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_379(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_379(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_379(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_379(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_379(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_379(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_59 == 0)
			{
				func_379(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_379(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_379(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_379(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_379(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_379(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_379(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_379(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_379(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_379(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_379(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_379(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_379(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_379(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_379(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_379(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_379(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_379(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_379(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_379(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_379(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_379(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_379(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_379(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_379(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_379(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_379(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_379(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_379(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_379(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_379(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_379(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_379(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_379(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_379(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_379(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_379(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_379(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_365(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_365(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_365(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_365(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_365(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_365(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_365(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_365(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_365(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_365(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_365(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_365(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_365(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_365(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_365(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_365(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_365(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_365(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_365(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_365(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_365(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_365(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_365(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_365(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_365(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_365(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_365(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_365(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_278(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x6DB7FBD602C51670(Param0, fParam1, Var3) };
		func_379(Var4, fParam1);
	}
	else
	{
		func_379(Param0, fParam1);
	}
}

void func_366(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_379(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_379(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_379(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_379(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_379(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_379(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_379(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_379(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_379(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_379(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_379(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_379(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_379(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_379(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_379(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_379(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_379(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_379(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_379(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_379(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_379(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_379(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_379(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_379(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_379(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_379(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_379(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_379(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_379(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_379(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_379(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_379(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_379(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_379(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_379(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_379(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_379(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_379(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_379(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_379(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_379(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_379(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_379(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_379(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_379(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_379(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_379(-1356.991f, -3242.228f, 12.945f, 330f);
			func_379(-1369.313f, -3234.758f, 12.945f, 330f);
			func_379(-1381.751f, -3227.408f, 12.945f, 330f);
			func_379(-1394.302f, -3220.021f, 12.945f, 330f);
			func_379(-1354.339f, -3223.129f, 12.945f, 330f);
			func_379(-1366.302f, -3215.809f, 12.945f, 330f);
			func_379(-1378.492f, -3208.645f, 12.945f, 330f);
			func_379(-1350.322f, -3203.405f, 12.945f, 330f);
			func_379(-1362.684f, -3196.451f, 12.945f, 330f);
			func_379(-1347.089f, -3182.69f, 12.945f, 330f);
			func_379(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_379(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_379(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_379(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_379(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_379(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_379(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_379(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_379(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_379(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_379(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_379(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_379(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_379(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_379(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_379(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_379(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_379(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_379(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_379(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_379(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_379(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_379(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_379(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_379(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_379(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_379(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_379(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_379(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_379(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_379(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_379(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_379(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_379(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_379(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_379(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_379(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_379(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_379(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_379(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_379(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_379(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_379(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_379(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_379(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_379(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_379(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_379(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_379(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_379(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_379(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_379(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_379(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_379(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_379(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_379(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_379(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_379(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_379(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_379(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_379(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_379(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_379(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_379(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_379(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_379(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_379(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_379(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_379(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_379(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_379(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_379(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_379(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_379(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_379(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_379(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_379(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_379(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_379(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_379(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_379(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_379(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_379(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_379(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_379(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_379(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_379(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_379(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_379(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_379(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_379(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_379(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_379(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_379(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_379(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_379(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_379(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_379(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_379(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_379(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_379(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_379(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_379(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_379(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_379(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_379(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_379(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_379(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_379(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_379(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_379(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_379(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_379(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_379(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_379(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_379(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_379(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_379(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_379(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_379(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_379(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_379(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_379(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_379(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_379(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_379(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_379(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_379(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_379(-2484.323f, 3249.294f, 31.828f, 151f);
			func_379(-2495.313f, 3255.746f, 31.828f, 151f);
			func_379(-2472.644f, 3242.684f, 31.828f, 151f);
			func_379(-2506.313f, 3262.27f, 31.823f, 151f);
			func_379(-2461.494f, 3235.93f, 31.828f, 151f);
			func_379(-2505.602f, 3238.049f, 31.828f, 151f);
			func_379(-2481.937f, 3224.8f, 31.828f, 151f);
			func_379(-2516.813f, 3244.266f, 31.823f, 151f);
			func_379(-2470.03f, 3217.899f, 31.828f, 151f);
			func_379(-2493.933f, 3231.308f, 31.828f, 151f);
			func_379(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_379(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_379(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_379(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_379(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_379(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_379(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_379(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_379(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_379(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_379(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_379(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_379(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_379(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_379(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_379(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_379(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_379(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_379(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_379(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_379(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_379(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_379(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_379(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_379(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_379(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_379(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_379(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_379(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_379(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_379(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_379(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_379(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_379(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_379(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_379(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_367(int iParam0)
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

void func_368(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_379(-947.712f, -3367.704f, 12.944f, 60f);
			func_379(-904.692f, -3293.072f, 12.944f, 60f);
			func_379(-863.71f, -3221.978f, 12.944f, 60f);
			func_379(-966.418f, -3162.773f, 12.944f, 60f);
			func_379(-1007.435f, -3233.93f, 12.944f, 60f);
			func_379(-1050.455f, -3308.559f, 12.944f, 60f);
			func_379(-1145.673f, -3253.456f, 12.944f, 60f);
			func_379(-1098.386f, -3181.428f, 12.944f, 60f);
			func_379(-1060.474f, -3108.903f, 12.944f, 60f);
			func_379(-1155.391f, -3053.632f, 12.944f, 60f);
			func_379(-1196.114f, -3125.146f, 12.948f, 60f);
			func_379(-1235.552f, -3201.86f, 12.944f, 60f);
			func_379(-1344.446f, -3139.177f, 12.944f, 60f);
			func_379(-1301.308f, -3064.341f, 12.944f, 60f);
			func_379(-1260.135f, -2992.912f, 12.944f, 60f);
			func_379(-1364.244f, -2932.9f, 12.98f, 60f);
			func_379(-1405.284f, -3004.108f, 12.96f, 60f);
			func_379(-1448.29f, -3078.72f, 12.95f, 60f);
			func_379(-1535.732f, -3028.318f, 12.945f, 60f);
			func_379(-1492.639f, -2953.558f, 12.945f, 60f);
			func_379(-1451.506f, -2882.2f, 12.944f, 60f);
			func_379(-1553.927f, -2823.12f, 13.002f, 60f);
			func_379(-1595.097f, -2894.571f, 12.944f, 60f);
			func_379(-1637.836f, -2968.714f, 12.945f, 60f);
			func_379(-1740.971f, -2911.484f, 12.944f, 330f);
			func_379(-1696.293f, -2833.978f, 12.944f, 330f);
			func_379(-1651.502f, -2756.273f, 12.945f, 330f);
			func_379(-1588.258f, -2647.575f, 12.944f, 330f);
			func_379(-1536.862f, -2681.378f, 12.945f, 330f);
			func_379(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_379(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_379(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_379(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_379(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_379(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_379(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_379(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_379(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_379(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_379(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_379(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_379(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_379(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_379(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_379(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_379(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_379(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_379(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_379(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_379(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_379(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_379(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_379(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_379(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_379(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_379(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_379(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_379(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_379(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_379(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_369(int iParam0)
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

int func_370(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x6B62510F212526DC(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x6B62510F212526DC(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
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

int func_373(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
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
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_351(iVar0))
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
			if (func_374(iVar0))
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
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
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

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_375(iParam0);
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_281 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
	if (iVar1 != func_50())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_281 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	if ((unk_0x6F0299ED3CEB4E5D(iParam0) || unk_0xCD8C08FA7D84C27E(iParam0)) || unk_0x532C99FAF70C652B(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_377(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_379(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_379(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_379(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_379(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_379(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_379(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_379(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_379(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_379(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_379(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_379(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_379(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_379(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_379(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_379(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_379(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_379(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_379(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_379(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_379(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_379(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_379(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_379(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_379(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_379(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_379(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_379(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_379(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_379(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_379(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_379(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_379(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_379(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_379(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_379(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_379(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_378())
			{
				func_379(-1608.297f, -556.875f, 33.406f, 310f);
				func_379(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_379(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_379(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_379(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_379(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_379(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_379(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_379(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_379(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_379(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_379(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_378())
			{
				func_379(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_379(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_379(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_379(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_379(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_379(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_379(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_379(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_379(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_379(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_379(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_379(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_378())
			{
				func_379(-102.737f, -597.379f, 35.053f, 160.999f);
				func_379(-97.793f, -589.568f, 35.082f, 134.799f);
				func_379(-110.357f, -619.402f, 35.055f, 160.599f);
				func_379(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_379(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_379(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_379(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_379(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_379(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_379(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_379(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_379(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_378())
			{
				func_379(-59.349f, -779.238f, 43.134f, 228.398f);
				func_379(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_379(-65.212f, -772.66f, 43.151f, 219.398f);
				func_379(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_379(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_379(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_379(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_379(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_379(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_379(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_379(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_379(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_379(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_379(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_379(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_379(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_379(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_379(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_379(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_379(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_379(-1464.5f, -927.9f, 9f, 296.7991f);
			func_379(-1466f, -926.1f, 9f, 296.7991f);
			func_379(-1467.9f, -924.7f, 9f, 296.7991f);
			func_379(-1469.7f, -923.7f, 9f, 296.7991f);
			func_379(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_379(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_379(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_379(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_379(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_379(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_379(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_379(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_379(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_379(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_379(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_379(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_379(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_379(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_379(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_379(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_379(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_379(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_379(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_379(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_379(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_379(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_379(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_379(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_379(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_379(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_379(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_379(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_379(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_379(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_379(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_379(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_379(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_379(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_379(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_379(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_379(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_379(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_379(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_379(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_379(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_379(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_379(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_379(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_379(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_379(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_379(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_379(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_379(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_379(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_379(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_379(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_379(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_379(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_379(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_379(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_379(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_379(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_379(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_379(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_379(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_379(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_379(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_379(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_379(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_379(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_379(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_379(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_379(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_379(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_379(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_379(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_379(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_379(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_379(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_379(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_379(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_379(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_379(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_379(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_379(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_379(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_379(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_379(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_378()
{
	return Global_2714627.f_17;
}

void func_379(struct<3> Param0, float fParam1)
{
	if (Global_2667222.f_1753 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/] = { Param0 };
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/].f_3 = fParam1;
		Global_2667222.f_1753++;
	}
}

int func_380(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2667222.f_2902, Param0) < Global_2667222.f_2910)
	{
		return Global_2667222.f_2905;
	}
	Global_2667222.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674477[iVar0 /*7*/].f_2 + Global_2674477[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_324(Param0, &(Global_2674477[iVar0 /*7*/])))
		{
			Global_2667222.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667222.f_2905 = -1;
	return -1;
}

int func_381()
{
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_13, 0) && !Global_2715542.f_6395)
	{
		return 0;
	}
	return 0;
}

int func_382(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
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
			if (func_351(iVar0))
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
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
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

void func_383()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667222.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_384(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674433[iVar0 /*7*/].f_2 + Global_2674433[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_324(Var1, &(Global_2674433[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_335(&Var1, Global_2674433[iVar0 /*7*/], Global_2674433[iVar0 /*7*/].f_3, Global_2674433[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_385(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667222.f_514 && !Global_2667222.f_515)
	{
		if (!Global_2667222.f_45.f_316)
		{
			if (!func_389(unk_0x9E2D6C50374FCFA9(), 1))
			{
				return 1;
			}
			if (!func_388(Param0, 1008981770))
			{
				if (!func_341(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_341(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_387(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_386(&(Global_2667222.f_45[iVar0 /*12*/])) };
					if (!func_341(&Var1, 0, 0, 0, 1))
					{
						if (!func_341(&Param0, 0, 0, 0, 1))
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

Vector3 func_386(var uParam0)
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

int func_387(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_328(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_388(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_328(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_389(int iParam0, bool bParam1)
{
	if (func_184() != 0)
	{
		return func_390(iParam0) != 0;
	}
	return func_306(iParam0, bParam1, 0);
}

int func_390(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_391(bool bParam0)
{
	if (unk_0xA829C9A2767AC8EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_392()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667222.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_1753 = 0;
}

void func_393()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x87C0DA419F19FF57(Global_2667222.f_690[iVar0]))
		{
			if (unk_0x69CE66B03B2184EB() == Global_2667222.f_690[iVar0])
			{
				if (!Global_2667222.f_686[iVar0] == -1)
				{
					if (unk_0xD0C6888814987992(Global_2667222.f_686[iVar0]))
					{
						unk_0x6E248B3E8CD8823C(Global_2667222.f_686[iVar0]);
						Global_2667222.f_686[iVar0] = -1;
					}
					else
					{
						Global_2667222.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667222.f_686[iVar0] == -1)
		{
			Global_2667222.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_394()
{
	if (!Global_2667222.f_605 == 0 && unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_610) < func_391(0))
	{
		return 1;
	}
	return 0;
}

int func_395()
{
	if (unk_0x04458B4E5D9E466A())
	{
		if (!unk_0xEEFB36B938654045() > 7 && !unk_0xEEFB36B938654045() == 5)
		{
			return 0;
		}
	}
	if (Global_2667222.f_516 == unk_0x8142A6539DDC180F())
	{
		return 0;
	}
	if (!func_397(unk_0x9E2D6C50374FCFA9()) && !func_396())
	{
		return 0;
	}
	return 1;
}

bool func_396()
{
	return Global_1575022;
}

int func_397(int iParam0)
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

int func_398(int iParam0)
{
	if (!func_116(1, iParam0))
	{
		return 0;
	}
	if (unk_0x6ECBF4AB299FABC8(iLocal_498))
	{
		return 0;
	}
	Stack.Push(Local_218.f_338.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_338.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_399(int iParam0)
{
	int iVar0;
	
	if (Local_218.f_338.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_15(&(Local_538.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_120(&(Local_538.f_47[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_400(int iParam0)
{
	if (Local_218.f_338.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_338.f_23);
		return StackVal;
	}
	return 1;
}

void func_401(int iParam0, int iParam1)
{
	if (Local_217.f_67.f_1[iParam0 /*14*/].f_9 == -1)
	{
		return;
	}
	if (func_115(iParam0) > 2 && func_115(iParam0) < 5)
	{
		if (func_402(iParam0, iParam1))
		{
			func_147(iParam0, 2);
		}
		else
		{
			func_146(iParam0, 2);
		}
	}
}

bool func_402(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam1))
	{
		iVar0 = func_404(iParam1);
		if (iVar0 != func_50() && unk_0x976D40337FCB1481(iVar0))
		{
			iVar1 = unk_0x32F47FD509BB6D38(iVar0);
			return func_403(iVar1, 2);
		}
	}
	return func_149(iParam0, 2);
}

bool func_403(int iParam0, int iParam1)
{
	return func_4(&(Local_545[iParam0 /*38*/].f_1), iParam1);
}

int func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0) && !unk_0x7158135695FAE89D(iParam0, -1, 0))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (!unk_0xF68107C40359970C(iVar0))
		{
			iVar1 = unk_0xFF65CDB0EB7ACE71(iVar0);
			if (iVar1 != func_50() && func_9(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_50();
}

int func_405(int iParam0, int iParam1)
{
	return 0;
}

void func_406(int iParam0, int iParam1)
{
	Local_538.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_409())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_19)
	{
		if (iParam0 == func_408(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_408(int iParam0)
{
	return Local_538.f_2.f_9[iParam0];
}

int func_409()
{
	return Local_217.f_19.f_5[0 /*13*/].f_11;
}

int func_410(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
	if (iParam4 || !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_411(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xE5965CDF24F93A9F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xE2D3D51028F0428A())
				{
				}
				else if (bParam2)
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						iVar3 = unk_0xFF65CDB0EB7ACE71(iVar2);
						if (((!unk_0xF68107C40359970C(iVar2) && iVar3 != func_50()) && func_9(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xC378B7F0D175A5B0(unk_0xFF65CDB0EB7ACE71(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_411(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x7158135695FAE89D(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, iParam1);
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x174CED88B97C78D9(iVar0, 451360105) == 1 || unk_0x174CED88B97C78D9(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x6B62510F212526DC(iParam0, 0), unk_0x6B62510F212526DC(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_412(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_413(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_413(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
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

void func_414()
{
	func_415();
}

void func_415()
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_423() > 0 && Local_313 > 0)
		{
			if (func_1147(53))
			{
				Var0 = { func_422(func_10()) };
				if (func_416(func_10(), Local_538.f_203, &Var0))
				{
					func_18(8);
				}
			}
		}
	}
}

int func_416(int iParam0, struct<3> Param1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_421(Param1))
	{
		return 0;
	}
	if (iParam0 == func_50())
	{
		return 0;
	}
	if (*uParam2 > 18)
	{
		return 0;
	}
	iVar0 = func_420(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam2)
		{
			if ((*uParam2)[iVar1] != 0)
			{
				iVar2 = func_419(iVar0, (*uParam2)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_418(Param1, Global_2681692.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!func_17(&(Global_1952863.f_5013)) || func_15(&(Global_1952863.f_5013), 10000, 0))
						{
							func_20(&(Global_1952863.f_5013), 0, 0);
							func_417(iParam0, Param1, uParam2);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_417(int iParam0, struct<3> Param1, var uParam2)
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_421(Param1))
	{
		return;
	}
	if (*uParam2 > 18)
	{
		return;
	}
	if (*uParam2 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0 = -615565347;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam2;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var0.f_6[iVar1] = (*uParam2)[iVar1];
		iVar1++;
	}
	iVar2 = func_177(1, 1);
	if (!iVar2 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 26, iVar2);
	}
}

int func_418(struct<3> Param0, struct<3> Param1)
{
	if (!func_421(Param0))
	{
		return 0;
	}
	if (Param0.x == Param1.x && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2681692.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_420(int iParam0)
{
	int iVar0;
	
	if (func_9(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681692.f_199.f_962[iVar0 /*75*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_421(struct<3> Param0)
{
	if (Param0.x == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_422(int iParam0)
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_55(iParam0))
	{
		return Var0;
	}
	if (func_9(iParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681692.f_199.f_962[iVar1 /*75*/] == iParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681692.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !func_421(Global_2681692.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681692.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

int func_423()
{
	int iVar0;
	
	iVar0 = (iVar0 + func_31());
	return iVar0;
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		func_436(iVar0);
		func_431(iVar0);
		iVar0++;
	}
	func_425();
}

void func_425()
{
	if (Local_217.f_19 <= 0)
	{
		return;
	}
	if (!func_430())
	{
		return;
	}
	Stack.Push(Local_218.f_108.f_36 != 0);
	Call_Loc(Local_218.f_108.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_429())
	{
		if (func_428())
		{
			func_8(5);
		}
	}
	else if (func_426())
	{
		func_8(5);
	}
}

int func_426()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (func_427(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_427(int iParam0, int iParam1)
{
	return func_4(&(Local_538.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_428()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (!func_427(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_429()
{
	return func_61(0);
}

int func_430()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (!func_427(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_431(int iParam0)
{
	if (func_427(iParam0, 29) && func_434(iParam0))
	{
		if (func_433(iParam0))
		{
			func_432(iParam0, 29);
		}
	}
}

void func_432(int iParam0, int iParam1)
{
	if (func_131(&(Local_538.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_433(int iParam0)
{
	int iVar0;
	
	if (func_434(iParam0))
	{
		iVar0 = func_408(iParam0);
		return (Local_538.f_47[iVar0 /*8*/].f_1 == 5 || func_427(iParam0, 0));
	}
	return 1;
}

bool func_434(int iParam0)
{
	return (func_435(iParam0) && func_409() == 2);
}

bool func_435(int iParam0)
{
	return Local_538.f_2.f_9[iParam0] != -1;
}

void func_436(int iParam0)
{
	if (Local_217.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_23);
		if (StackVal)
		{
			if (!func_427(iParam0, 6))
			{
				if (func_112(Local_217.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (unk_0xD5410F7A2DFBF144(1))
					{
						if (func_438(iParam0))
						{
							func_437(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_437(int iParam0, int iParam1)
{
	if (func_19(&(Local_538.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_438(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	
	if (!unk_0xCCDCD6672DAE6835(Local_538.f_2[iParam0]))
	{
		Var0 = { func_472(iParam0) };
		fVar1 = Local_217.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_217.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_86(Var0))
		{
			return 0;
		}
		Local_538.f_2[iParam0] = unk_0x2D0F5291E9305922(unk_0x9431D28BFC30340B(func_471(iParam0), Var0, !func_470(iParam0, 0), Local_217.f_19.f_5[iParam0 /*13*/].f_2));
		unk_0xBBF86885619695CE(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), fVar1);
		if (!func_86(Var2))
		{
			unk_0x8CE3D365F064F69E(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), Var2, 2, 1);
		}
		func_464(iParam0, Var0);
		if (Local_218.f_108.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_108.f_30);
		}
	}
	if (unk_0xCCDCD6672DAE6835(Local_538.f_2[iParam0]))
	{
		if (func_439(&(Local_538.f_2.f_13[iParam0]), 0, iParam0, func_463(iParam0), func_462(), func_461(iParam0), func_460(iParam0)))
		{
			func_159(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), Local_538.f_232.f_1[func_160(iParam0) /*5*/].f_1);
			Local_538.f_2.f_11[iParam0] = unk_0x48352343BC5A41AE();
			return 1;
		}
	}
	return 0;
}

int func_439(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_459();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_538.f_232 != iParam4)
	{
		Local_538.f_232 = iParam4;
	}
	if (Local_538.f_232.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_538.f_232.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_538.f_232.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (func_440(&(Local_538.f_232.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_538.f_232, &(Local_538.f_203), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar5;
	
	if (iParam1 == func_50())
	{
		return 0;
	}
	if (!func_421(*uParam4))
	{
		if (unk_0x54E30A65F4FA4962())
		{
			*uParam4 = { func_458() };
		}
		else
		{
			return 0;
		}
	}
	if (!func_418(*uParam4, Global_1952863.f_5015))
	{
		if ((unk_0x8142A6539DDC180F() - Global_1952863.f_5015.f_4) <= 90 || (func_17(&(Global_1952863.f_4840)) && !func_15(&(Global_1952863.f_4840), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_456();
			func_455(*uParam4);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1952863.f_5015.f_3, 31))
	{
		iVar1 = (Global_1952863.f_5015.f_4 - 1);
		if (unk_0x8142A6539DDC180F() == iVar1)
		{
			return 0;
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_1952863.f_5015.f_3), 31);
		}
	}
	if (Global_1952863.f_5015.f_4 == 0)
	{
		Global_1952863.f_5015.f_4 = unk_0x8142A6539DDC180F();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1952863.f_5020[iVar0] = -1;
			iVar2 = func_453(unk_0x9E2D6C50374FCFA9(), iVar0);
			if (func_452(iVar2))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1952863.f_5015.f_3), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = func_451(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (func_450(*uParam0))
	{
		Var4 = { func_448(*uParam0) };
		if ((Global_1952863.f_5015.f_4 == unk_0x8142A6539DDC180F() || func_447(*uParam0) != iParam3) || !func_418(*uParam4, Var4))
		{
			if (Global_1952863.f_5015.f_4 != unk_0x8142A6539DDC180F())
			{
				Global_1952863.f_5015.f_4 = unk_0x8142A6539DDC180F();
				if (Global_1952863.f_5020[iVar0] == uParam0->f_1)
				{
					Global_1952863.f_5020[iVar0] = -1;
				}
			}
			unk_0xCED9E32812D6C7C7(&(Global_1952863.f_5015.f_3), iParam2);
			unk_0xCED9E32812D6C7C7(&(Global_1952863.f_5015.f_3), 31);
			uParam0->f_1 = -1;
			Global_1952863.f_5015.f_4++;
			return 0;
		}
		else
		{
			func_442(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1952863.f_5020[iParam2] == -1)
	{
		Global_1952863.f_5020[iParam2] = uVar3;
	}
	if (!func_17(&(Global_1952863.f_4840)) || func_15(&(Global_1952863.f_4840), 1500, 0))
	{
		bVar5 = true;
		func_20(&(Global_1952863.f_4840), 0, 0);
	}
	if (!bVar5)
	{
		if (unk_0x8142A6539DDC180F() == Global_1952863.f_4842)
		{
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		func_441(*uParam0, iParam3, uParam5, *uParam4, uParam6);
		Global_1952863.f_4842 = unk_0x8142A6539DDC180F();
	}
	return 0;
}

void func_441(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4)
{
	struct<10> Var0;
	int iVar1;
	
	if (!func_421(Param3))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0 = 394024783;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam1;
	Var0.f_9 = uParam2;
	Var0.f_5 = uParam4;
	Var0.f_6 = { Param3 };
	iVar1 = func_177(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 10, iVar1);
	}
}

void func_442(struct<2> Param0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	
	bVar0 = false;
	if (bVar0)
	{
		if (unk_0xACC32B78196FBC2A(sParam1))
		{
			sParam1 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = func_446(Param0);
		bVar2 = func_450(Param0);
		uVar3 = func_447(Param0);
		iVar4 = func_445(Param0);
		uVar5 = func_443(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

int func_443(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_444(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_444(struct<2> Param0, struct<2> Param1)
{
	if (Param0.f_1 != -1 && Param1.f_1 != -1)
	{
		return (Param0 == Param1 && Param0.f_1 == Param1.f_1);
	}
	return 0;
}

int func_445(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_444(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_446(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_50());
}

int func_447(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_444(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_448(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_449(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2681692.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_449(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_444(Param0, Global_2681692.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_450(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_444(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1952863.f_5020[iParam1] != -1)
	{
		return Global_1952863.f_5020[iParam1];
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1952863.f_5015.f_3, iVar0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1952863.f_5015.f_3), iVar0);
			return func_453(iParam0, iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_452(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_454(iParam0);
	return (iVar0 + iParam1);
}

int func_454(int iParam0)
{
	return unk_0x2E87280918B16506(unk_0x61042CA2A97BBB69(iParam0));
}

void func_455(struct<3> Param0)
{
	Global_1952863.f_5015 = { Param0 };
}

void func_456()
{
	Global_1952863.f_5015.f_3 = 0;
	Global_1952863.f_5015.f_4 = 0;
	Global_1952863.f_5015 = { func_457() };
}

Vector3 func_457()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_458()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = unk_0x48352343BC5A41AE();
	Var0.x = unk_0x1307D54181723A6E();
	Var0.f_2 = unk_0x5C5CE5291FB79534();
	return Var0;
}

int func_459()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_446(Local_538.f_232.f_1[iVar1 /*5*/]))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_460(int iParam0)
{
	return 0;
}

int func_461(int iParam0)
{
	return 1;
}

int func_462()
{
	return 23;
}

int func_463(int iParam0)
{
	return func_10();
}

void func_464(int iParam0, struct<3> Param1)
{
	if (func_435(iParam0))
	{
		func_437(iParam0, 29);
		if (iParam0 != func_469(func_408(iParam0)))
		{
			func_437(iParam0, 40);
		}
	}
	else if (!func_470(iParam0, 7))
	{
		func_437(iParam0, 39);
	}
	unk_0x4C6E9D70687FCDCE(Local_538.f_2[iParam0], 1);
	unk_0x7A93DEA53EFC3CF2(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1200);
	unk_0xF160248D9083ED0C(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 50, 0);
	unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), true);
	unk_0xBED097BB6359F09C(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0x006574E87E6F1942(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), 1, 1);
	unk_0x398C962F550CF3B4(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), true);
	unk_0x41DB71DCE7894FAB(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1);
	unk_0x0321BBB2A2B3B1ED(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1);
	if (func_468())
	{
		unk_0x189AB741D56F49B9(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1);
	}
	if (func_467(iParam0))
	{
		unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), true);
	}
	else
	{
		func_437(iParam0, 28);
	}
	if (!func_470(iParam0, 1))
	{
		unk_0xE6A4C4B2E8DE36D3(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]));
	}
	if (func_470(iParam0, 2))
	{
		unk_0xC64B6E13A6A7F517(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_470(iParam0, 3))
	{
		unk_0xAA8C46C452582702(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]));
		unk_0xE987EFB3B3FAB187(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1);
	}
	if (func_470(iParam0, 4))
	{
		unk_0x4536AE3DABDE0C44(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), 1);
	}
	if ((func_470(iParam0, 6) || func_470(iParam0, 7)) || func_435(iParam0))
	{
		unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), false, 0);
	}
	if (Local_217.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_437(iParam0, 23);
	}
	if (func_466(iParam0))
	{
		unk_0x229DD509EDB2FBD4(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), 1);
	}
	if (func_470(iParam0, 9) || Local_218.f_108.f_38 != 0)
	{
		func_465(iParam0, 1, 0);
	}
}

void func_465(int iParam0, int iParam1, int iParam2)
{
	unk_0x8175B06ED630A82A(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), iParam1, iParam2);
}

int func_466(int iParam0)
{
	if (func_470(iParam0, 8))
	{
		return 1;
	}
	if (func_61(22))
	{
		return 1;
	}
	return 0;
}

bool func_467(int iParam0)
{
	if (func_427(iParam0, 29))
	{
		return 0;
	}
	return !func_470(iParam0, 5);
}

int func_468()
{
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_19)
	{
		if (Local_538.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_470(int iParam0, int iParam1)
{
	return func_4(&(Local_217.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_471(int iParam0)
{
	if (Local_218.f_108.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_28);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_472(int iParam0)
{
	if (func_474(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_434(iParam0))
	{
		return Local_217.f_67.f_1[func_408(iParam0) /*14*/].f_4 + func_473(iParam0, Local_217.f_67.f_1[func_408(iParam0) /*14*/].f_3);
	}
	return Local_217.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_473(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				
				case 1:
					return -1f, -2f, -0.1f;
				
				case 2:
					return 1f, -2f, -0.1f;
				
				case 3:
					return -1f, -2f, -0.1f;
				
				default:
			}
			break;
		
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				
				case 1:
					return -0.5f, 0f, -0.1f;
				
				case 2:
					return 0.5f, 0f, -0.1f;
				
				case 3:
					return -0.5f, 0f, -0.1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		
		case 1:
			return -1f, 0f, -0.1f;
		
		case 2:
			return 1f, 0f, -0.1f;
		
		case 3:
			return -1f, 0f, -0.1f;
		
		default:
	}
	return 0f, -1f, -0.1f;
}

bool func_474(var uParam0)
{
	struct<3> Var0;
	
	if (Local_218.f_108.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_218.f_108.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_86(Var0);
}

void func_475()
{
}

int func_476()
{
	return Local_538.f_82;
}

void func_477(int iParam0)
{
	Local_538.f_81 = iParam0;
}

int func_478()
{
	int iVar0;
	
	if (!func_1143(func_1146(), func_1144()))
	{
		return 0;
	}
	if (!func_493())
	{
		return 0;
	}
	func_492();
	func_489();
	Local_538.f_93 = unk_0x49A870E8DCC9A2C4(func_488(), -1, 0);
	func_487();
	func_484();
	func_483();
	func_481();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_538.f_63[iVar0] = -1;
		iVar0++;
	}
	Local_538.f_97 = unk_0x5853B15F78E1A265(0, 99999999);
	unk_0x034E89ED97681AC2(&(Local_538.f_90), &(Local_538.f_91));
	Global_1893548[iLocal_498 /*600*/].f_527 = Local_538.f_90;
	Global_1893548[iLocal_498 /*600*/].f_528 = Local_538.f_91;
	func_480();
	if (!func_479())
	{
		return 0;
	}
	Call_Loc(Local_218.f_1);
	return StackVal;
}

int func_479()
{
	int iVar0;
	
	switch (func_13())
	{
		case 2:
			switch (Global_2785471.f_7018.f_3)
			{
				case 0:
					iVar0 = 3;
					break;
				
				case 1:
					iVar0 = 5;
					break;
				
				case 2:
					iVar0 = 7;
					break;
				
				case 3:
					iVar0 = 9;
					break;
				
				case 4:
					iVar0 = 11;
					break;
			}
			if (Local_538.f_122.f_19 == -1)
			{
				Local_538.f_122.f_19 = iVar0;
			}
			break;
	}
	return 1;
}

void func_480()
{
	if (Local_538.f_98 == -1)
	{
		Local_538.f_98 = unk_0x48352343BC5A41AE();
	}
}

void func_481()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_38)
	{
		Local_538.f_22[iVar0 /*24*/].f_15 = func_482(iVar0);
		iVar0++;
	}
}

int func_482(int iParam0)
{
	if (Local_217.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_217.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_217.f_38));
		}
	}
	return unk_0x5853B15F78E1A265(0, Local_217.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_483()
{
	Local_538.f_83 = 2;
}

void func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_19)
	{
		Local_538.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	func_485();
}

void func_485()
{
	int iVar0;
	
	if (func_486())
	{
		if (func_28(&(Local_538.f_2.f_9), &(Local_538.f_63.f_3)))
		{
			func_18(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_217.f_19)
		{
			Local_538.f_2.f_9[iVar0] = Local_217.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_486()
{
	return 0;
}

void func_487()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_19)
	{
		iVar3 = Local_217.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_217.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_147(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_217.f_38)
	{
		iVar2 = Local_217.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_149(iVar2, 15))
		{
			func_37(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_217.f_376)
		{
			if (Local_217.f_376.f_1[iVar5 /*10*/] == iVar1)
			{
				func_37(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
}

char* func_488()
{
	switch (Global_2727578)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_489()
{
	Local_538.f_92 = func_490() + 1;
	Global_1893548[iLocal_498 /*600*/].f_11.f_391 = Local_538.f_92;
}

int func_490()
{
	if (func_51() == func_50())
	{
		return 0;
	}
	return func_491(func_51());
}

int func_491(int iParam0)
{
	if (func_82(iParam0) == func_50())
	{
		return 0;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_19;
}

void func_492()
{
}

int func_493()
{
	func_1142();
	func_509();
	if (!func_495())
	{
		return 0;
	}
	func_494();
	Stack.Push(Local_218 != 0);
	Call_Loc(Local_218);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_494()
{
}

int func_495()
{
	if (func_1147(12))
	{
		return 1;
	}
	if (!func_508())
	{
		return 0;
	}
	func_505();
	func_498();
	func_497();
	if (Local_218.f_13 != 0)
	{
		Call_Loc(Local_218.f_13);
	}
	func_496(12);
	return 1;
}

void func_496(int iParam0)
{
	if (func_19(&uLocal_510, iParam0))
	{
	}
}

void func_497()
{
}

void func_498()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_352)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_19)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_217.f_19.f_5[iVar0 /*13*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_38)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_217.f_38.f_1[iVar0 /*21*/].f_8)
		{
		}
		if (-1 != Local_217.f_38.f_1[iVar0 /*21*/].f_8)
		{
		}
		func_504(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_67)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_503(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_84)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_502(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_376)
	{
		iVar3 = 0;
		while (iVar3 < 1)
		{
			iVar3++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_86(Local_217.f_413[iVar0 /*8*/]))
		{
			func_500(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_217.f_365)
	{
		func_499(iVar0);
		iVar0++;
	}
}

void func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_97(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_501(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

bool func_501(int iParam0, int iParam1)
{
	return func_4(&(Local_217.f_413[iParam0 /*8*/].f_6), iParam1);
}

void func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_133(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_151(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_35(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_505()
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	func_507(Local_217.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_507(Local_217.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_507(Local_217.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
	func_507(Local_217.f_84, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_507(Local_217.f_376, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_507(Local_217.f_365, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_507(Local_217.f_352, 1, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
	func_507(func_506(), 1, "GET_NUM_PED_GROUPS", "MAX_NUM_PED_GROUPS");
}

int func_506()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_38)
	{
		if (Local_217.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_217.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_507(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (iParam0 <= iParam1)
	{
	}
}

int func_508()
{
	return 1;
}

void func_509()
{
	if (func_1147(21))
	{
		return;
	}
	func_510();
	func_496(21);
}

void func_510()
{
	switch (func_13())
	{
		case 0:
			func_1102();
			break;
		
		case 3:
			func_868();
			break;
		
		case 1:
			func_764();
			break;
		
		case 2:
			func_511();
			break;
	}
}

void func_511()
{
	Local_218.f_13 = 192574;
	Local_218.f_75.f_1 = 192540;
	Local_218.f_508.f_6 = 192512;
	Local_218.f_508.f_4 = 192490;
	Local_218.f_515.f_8 = 192481;
	Local_218.f_515.f_10 = 192374;
	Local_218.f_515.f_4 = 192326;
	Local_218.f_515.f_6 = 192244;
	Local_218.f_515.f_7 = 192208;
	Local_218.f_515.f_1 = 192147;
	Local_218.f_515.f_2 = 192133;
	Local_218.f_515.f_5 = 192082;
	Local_218.f_450 = 192014;
	Local_218.f_450.f_1 = 191854;
	Local_218.f_450.f_2 = 190811;
	Local_218 = 190802;
	Local_218.f_2 = 190758;
	Local_218.f_1 = 190689;
	Local_218.f_535 = 190673;
	Local_218.f_535.f_1 = 190632;
	Local_218.f_3.f_1 = 182836;
	Local_218.f_10 = 182806;
	Local_218.f_15.f_29 = 182792;
	Local_218.f_97 = 182773;
	Local_218.f_97.f_5 = 143585;
	Local_218.f_97.f_4 = 143477;
	Local_218.f_51.f_5 = 143390;
	Local_218.f_51 = 143358;
	Local_218.f_51.f_2 = 143326;
	Local_218.f_51.f_1 = 143288;
	Local_218.f_11 = 142958;
	Local_218.f_11.f_1 = 136722;
}

void func_512()
{
	func_550(0, 20, 142601);
	func_549(0, 1, 1);
	func_546(0, 142444);
	func_550(1, 43, 141423);
	func_534(1, 2, 141397);
	func_528(1, 141180);
	func_550(2, 44, 141423);
	func_549(2, 3, 3);
	func_550(3, 45, 141423);
	func_527(3, 4);
	func_528(3, 136868);
	func_550(4, 20, 141423);
	func_549(4, 5, 5);
	func_550(5, 48, 136860);
}

void func_513()
{
}

void func_514()
{
	Local_217.f_98 = Local_538.f_122.f_19;
	func_523();
	if (!unk_0xE2D0C323A1AE5D85(Global_2715542.f_3076.f_257, 1) && func_181(9879, -1, 0) < 3)
	{
		func_522("TSA_HT_H2_START", -1);
		func_518(9879, -1);
		unk_0xCED9E32812D6C7C7(&(Global_2715542.f_3076.f_257), 1);
	}
	func_515(iLocal_503, 0);
}

void func_515(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_12(6))
		{
			unk_0x399CFA9720CCDF92(iParam0, 1);
			func_517(6);
		}
	}
	else if (func_12(6))
	{
		unk_0x399CFA9720CCDF92(iParam0, 0);
		func_516(6);
	}
}

void func_516(int iParam0)
{
	if (func_131(&uLocal_522, iParam0))
	{
	}
}

void func_517(int iParam0)
{
	if (func_19(&uLocal_522, iParam0))
	{
	}
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_181(iParam0, func_182(iParam1), 0);
	iVar0++;
	if (!func_521(iParam0))
	{
		func_520(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_519(iParam0, iVar0, iParam1, 1);
	}
}

void func_519(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_182(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_182(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_182(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_182(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_182(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_182(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_182(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_182(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_182(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_182(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_182(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_182(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_182(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_182(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_182(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_182(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_182(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_182(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_182(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_182(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_182(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_182(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_182(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_182(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_182(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_182(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_182(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_182(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_182(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_182(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_182(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_182(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_182(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_182(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_182(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_182(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_182(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_182(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_182(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_182(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_182(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_182(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_182(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_182(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_182(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_182(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_182(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_182(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_182(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_182(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_182(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_182(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_182(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_182(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_182(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_521(int iParam0)
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

void func_522(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_523()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_217.f_98)
	{
		bVar1 = iVar0 == (Local_217.f_98 - 1);
		Local_217.f_98.f_1[iVar0 /*12*/] = { func_524(iVar0, bVar1) };
		Local_217.f_98.f_1[iVar0 /*12*/].f_3 = 21f;
		Local_217.f_98.f_1[iVar0 /*12*/].f_4 = 14f;
		iVar0++;
	}
	Local_217.f_98.f_1[(Local_217.f_98 - 1) /*12*/].f_8 = 38;
	Local_217.f_98.f_1[(Local_217.f_98 - 1) /*12*/].f_5 = 4;
}

Vector3 func_524(int iParam0, bool bParam1)
{
	switch (func_526())
	{
		case 2:
			if (bParam1)
			{
				return -1894.088f, 1148.891f, 24.666f;
			}
			if (!func_525(iLocal_500))
			{
				if (func_525(iParam0))
				{
					return -1853.649f, 1138.547f, 24.666f;
				}
				else
				{
					return -2116.602f, 1133.473f, 24.666f;
				}
			}
			else if (func_525(iParam0))
			{
				return -1853.649f, 1158.547f, 24.666f;
			}
			else
			{
				return -2116.602f, 1163.723f, 24.666f;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return -1894.088f, 1073.391f, 24.666f;
			}
			if (!func_525(iLocal_500))
			{
				if (func_525(iParam0))
				{
					return -1853.649f, 1063.797f, 24.666f;
				}
				else
				{
					return -2116.602f, 1059.723f, 24.666f;
				}
			}
			else if (func_525(iParam0))
			{
				return -1853.649f, 1084.297f, 24.666f;
			}
			else
			{
				return -2116.602f, 1088.723f, 24.666f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_525(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

int func_526()
{
	return Local_538.f_122.f_1;
}

void func_527(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_223[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_223[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_223[iParam0 /*21*/].f_19++;
}

void func_528(int iParam0, int iParam1)
{
	Local_223[iParam0 /*21*/].f_17 = iParam1;
}

void func_529()
{
	if (func_533())
	{
		func_531(func_177(0, 1));
	}
	func_530(0);
}

void func_530(int iParam0)
{
	Global_1952831 = iParam0;
}

void func_531(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_532(iParam0, 0);
}

void func_532(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.x = 1136389718;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	unk_0x2700C00F82C16BF0(1, &Var0, 3, iParam0);
}

bool func_533()
{
	return func_10() == unk_0x9E2D6C50374FCFA9();
}

void func_534(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_223[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_223[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_223[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_223[iParam0 /*21*/].f_19++;
}

bool func_535()
{
	return func_536() >= 2;
}

int func_536()
{
	return func_24();
}

void func_537()
{
	if (func_545())
	{
		func_538();
	}
}

void func_538()
{
	if (!func_544())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
	{
		return;
	}
	func_539();
}

void func_539()
{
	func_541();
	func_540(0);
}

void func_540(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574747 = 20;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	if (bVar0)
	{
		Global_1574747.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
	}
	StringCopy(&(Global_1574747.f_12), "", 16);
	StringCopy(&(Global_1574747.f_16), "", 64);
	StringCopy(&(Global_1574747.f_32), "", 64);
	Global_1574747.f_52 = 0;
	Global_1574747.f_53 = 0;
	Global_1574747.f_54 = 0;
	Global_1574747.f_55 = -1;
	Global_1574747.f_56 = 0;
	Global_1574747.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_541()
{
	if (!func_543())
	{
	}
	if (func_544())
	{
		unk_0x1419D7B938CBFF2E(&(Global_1574747.f_12));
		func_542();
		unk_0xF4666BA5B36DBCB2();
	}
}

void func_542()
{
	switch (Global_1574747)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			unk_0x2AE954BA77A66307(Global_1574747.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		default:
	}
}

int func_543()
{
	if (!func_544())
	{
		return 0;
	}
	unk_0x09684FD679B0E474(&(Global_1574747.f_12));
	func_542();
	return unk_0xD7AA4C82B5D00977();
}

int func_544()
{
	if (Global_1574747 == 20)
	{
		return 0;
	}
	return 1;
}

int func_545()
{
	if (!func_544())
	{
		return 0;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
	{
		return 0;
	}
	return 1;
}

void func_546(int iParam0, int iParam1)
{
	Local_223[iParam0 /*21*/].f_18 = iParam1;
}

void func_547()
{
	func_548(0);
	func_517(8);
}

void func_548(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_48), iParam0);
}

void func_549(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = Local_223[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_223[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_223[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_223[iParam0 /*21*/].f_19++;
}

void func_550(int iParam0, int iParam1, int iParam2)
{
	Local_223[iParam0 /*21*/] = iParam1;
	Local_223[iParam0 /*21*/].f_20 = iParam2;
	iLocal_509++;
}

void func_551()
{
	if (func_17(&(Local_538.f_122.f_9)))
	{
		func_537();
	}
	else
	{
		func_552("TSA_H2H_OT_WAIT", 0);
	}
}

void func_552(char* sParam0, bool bParam1)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return;
	}
	if (func_556(sParam0))
	{
		return;
	}
	func_539();
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	func_555();
	func_554(bParam1);
	func_553();
}

void func_553()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 1);
}

void func_554(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 0);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574747.f_59), 0);
}

void func_555()
{
	Global_1574747.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
}

bool func_556(char* sParam0)
{
	if (!func_544())
	{
		return 0;
	}
	if (Global_1574747 == 11)
	{
		return func_557(sParam0);
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12));
}

bool func_557(char* sParam0)
{
	if (!func_544())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_16));
}

void func_558()
{
	func_565(0, 20);
	func_562(0, 1, 143215);
	func_565(1, 43);
	func_562(1, 2, 143126);
	func_565(2, 44);
	func_560(2, 3);
	func_565(3, 45);
	func_562(3, 4, 143054);
	func_565(4, 20);
	func_562(4, 5, 143054);
	func_565(5, 48);
}

bool func_559()
{
	return func_3(19);
}

void func_560(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_222[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_222[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_222[iParam0 /*20*/].f_19++;
}

bool func_561()
{
	return func_3(20);
}

void func_562(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_222[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_222[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_222[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_222[iParam0 /*20*/].f_19++;
}

int func_563()
{
	if (func_564())
	{
		return func_15(&(Local_538.f_122.f_9), 10000, 0);
	}
	return 0;
}

bool func_564()
{
	return unk_0xD4538F501EDCD96C() >= 2;
}

void func_565(int iParam0, int iParam1)
{
	Local_222[iParam0 /*20*/] = iParam1;
	iLocal_508++;
}

var func_566()
{
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		return Global_262145.f_31301;
	}
	return Global_262145.f_31302;
}

int func_567()
{
	if (Local_538.f_122.f_17 != iLocal_501)
	{
		return Global_262145.f_30812;
	}
	return 0;
}

int func_568()
{
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		return Global_262145.f_30811;
	}
	return 0;
}

float func_569()
{
	switch (Local_538.f_122.f_19)
	{
		case 3:
			return 0.9f;
		
		case 5:
			return 1f;
		
		case 7:
			return 1.05f;
		
		case 9:
			return 1.1f;
		
		case 11:
			return 1.15f;
		
		default:
	}
	return 1f;
}

int func_570()
{
	if (func_536() != 0)
	{
		return 0;
	}
	return func_571(2);
}

bool func_571(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD4538F501EDCD96C() <= iParam0)
	{
		return 0;
	}
	iVar0 = 2147483647;
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar1);
		if (unk_0x81F82FFBED0CACCA(iVar2))
		{
			if (iVar1 < iVar0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	return iLocal_500 == iVar0;
}

void func_572()
{
	if (func_476() != 3)
	{
		return;
	}
	func_496(74);
	func_643(192);
	func_573(18, -1, -1, -1, 1065353216);
	func_573(7, -1, -1, -1, 1065353216);
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		func_573(23, 1, 2, -1, func_569());
	}
	else
	{
		func_573(23, 2, 2, -1, func_569());
	}
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	int iVar0;
	
	if (!func_642(iParam0))
	{
		return;
	}
	iVar0 = func_641(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_640(32249, -1))
			{
				func_639(32249, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 1:
			if (!func_640(32250, -1))
			{
				func_639(32250, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 2:
			if (!func_640(32251, -1))
			{
				func_639(32251, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 3:
			if (!func_640(32252, -1))
			{
				func_639(32252, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 4:
			if (!func_640(32253, -1))
			{
				func_639(32253, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 5:
			if (!func_640(32254, -1))
			{
				func_639(32254, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 6:
			if (!func_640(32255, -1))
			{
				func_639(32255, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 7:
			if (!func_640(32256, -1))
			{
				func_639(32256, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 8:
			if (!func_640(32257, -1))
			{
				func_639(32257, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 9:
			if (!func_640(32258, -1))
			{
				func_639(32258, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 10:
			if (func_640(32249, -1))
			{
				if (!func_640(32259, -1))
				{
					func_639(32259, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 11:
			if (func_640(32250, -1))
			{
				if (!func_640(32260, -1))
				{
					func_639(32260, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 12:
			if (func_640(32251, -1))
			{
				if (!func_640(32261, -1))
				{
					func_639(32261, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 13:
			if (func_640(32252, -1))
			{
				if (!func_640(32262, -1))
				{
					func_639(32262, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 14:
			if (func_640(32253, -1))
			{
				if (!func_640(32263, -1))
				{
					func_639(32263, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 15:
			if (!func_640(32264, -1))
			{
				func_639(32264, 1, -1);
				func_574(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		
		case 16:
			if (func_640(32254, -1))
			{
				if (!func_640(32265, -1))
				{
					func_639(32265, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 17:
			if (func_640(32255, -1))
			{
				if (!func_640(32266, -1))
				{
					func_639(32266, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 18:
			if (func_640(32256, -1))
			{
				if (!func_640(32267, -1))
				{
					func_639(32267, 1, -1);
					func_574(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_574(iVar0, iParam0, iParam3, fParam4);
			break;
		
		case 24:
		case 25:
		case 26:
			func_574(iVar0, iParam0, iParam3, 1065353216);
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_574(iVar0, iParam0, iParam3, 1065353216);
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
			func_574(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_574(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if ((((iParam0 <= 0 || unk_0x9E2D6C50374FCFA9() == func_50()) || Global_262145.f_30723) || func_638() >= func_636()) || !func_635(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = round((to_float(iParam0) * fParam3));
	}
	iVar0 = func_638();
	iVar1 = func_632(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = func_636();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = func_632(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	func_520(9833, iVar2, -1, 1, 0);
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471.f_1 = iVar2;
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471.f_2 = iVar5;
	func_624(iParam0, iVar5, bVar4, iParam1, uParam2);
	func_623(107, iVar5, -1);
	if (bVar4)
	{
		func_575(iVar1, iVar5);
	}
}

void func_575(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		func_622(&iVar1, &iVar2, iVar0);
		if (func_618(iVar1))
		{
			func_617(iVar1);
			func_598(iVar1, 1);
			func_597(iVar1);
		}
		if (func_618(iVar2))
		{
			func_617(iVar2);
			func_598(iVar2, 1);
			func_597(iVar2);
		}
		func_584(iVar0);
		func_579("CCR_INC_TCK", iVar0, 1);
		iVar0++;
	}
	func_576();
}

void func_576()
{
	int iVar0;
	
	iVar0 = func_578(30513, -1);
	if (!Global_1966339 && iVar0 < 3)
	{
		if (!unk_0xF847447D4467709D())
		{
			unk_0xB0550BC91B0159D6(&(Global_1946934.f_9), 1);
			func_577(30513, iVar0 + 1, -1);
			Global_1966339 = 1;
			func_522("CCR_INC_HT", -1);
		}
		else if (!unk_0xE2D0C323A1AE5D85(Global_1946934.f_9, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 1);
		}
	}
}

void func_577(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_75();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

int func_578(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

int func_579(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x150D8F58B26E9F70(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	if (bParam2)
	{
		func_580(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_580(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_580(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_583() || !unk_0x44859561F653DD4E()) || !func_73(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_581(iParam2);
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

int func_581(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_582(iVar0);
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

void func_582(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_583()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_584(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_596(iParam0);
	if (iVar0 != -1)
	{
		if (func_249())
		{
			func_585(1669058563, iVar0, &uVar1, 0, 0, 0);
		}
		else
		{
			unk_0x7710B3985F0DE8BF(iVar0);
		}
	}
}

void func_585(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_249())
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
				func_586(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_586(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_586(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_586(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_586(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_75()) || unk_0xBA5B5030B7954DAA())
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
			*uParam0 = func_593(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_592(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_587(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_587(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_588(iParam0);
	}
}

void func_588(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_249())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_591(iParam0))
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
		func_589(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_589(var uParam0)
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
	func_590(&(uParam0->f_14));
	func_590(&(uParam0->f_14.f_13));
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

void func_590(var uParam0)
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

int func_591(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_592(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_593(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_249())
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
				func_594(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_594(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_47(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_595();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_595()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

int func_596(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == Global_262145.f_31257)
	{
		iVar0 = Global_262145.f_31252;
	}
	else if (iParam0 >= Global_262145.f_31255 + 1 && iParam0 <= Global_262145.f_31256)
	{
		iVar0 = Global_262145.f_31251;
	}
	else if (iParam0 >= Global_262145.f_31254 + 1 && iParam0 <= Global_262145.f_31255)
	{
		iVar0 = Global_262145.f_31250;
	}
	else if (iParam0 >= Global_262145.f_31253 + 1 && iParam0 <= Global_262145.f_31254)
	{
		iVar0 = Global_262145.f_31249;
	}
	else if (iParam0 >= 2 && iParam0 <= Global_262145.f_31253)
	{
		iVar0 = Global_262145.f_31248;
	}
	return iVar0;
}

void func_597(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471), 1);
			break;
		
		case 18:
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471), 2);
			break;
		
		case 30:
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471), 3);
			break;
		
		case 36:
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_471), 4);
			break;
	}
}

void func_598(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_616(iParam0);
	if (!func_615(iVar0))
	{
		return;
	}
	bVar1 = !func_613();
	sVar2 = "";
	switch (iVar0)
	{
		case 7:
			iVar4 = unk_0x5853B15F78E1A265(0, 2);
			iVar3 = 14;
			if (iVar4 == 1)
			{
				iVar3 = 15;
			}
			func_610(iVar3);
			if (bParam1)
			{
				sVar2 = func_607(iParam0, bVar1, iVar4, 0);
				if (!unk_0xACC32B78196FBC2A(sVar2))
				{
					func_606("CCR_UNL_VD", sVar2, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			iVar5 = 0;
			if (func_599(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = func_607(iParam0, bVar1, -1, iVar5);
					if (!unk_0xACC32B78196FBC2A(sVar2))
					{
						func_606("CCR_UNL_TP", sVar2, 0, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			if (iParam0 == 12)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 16);
				func_522("CCR_INC_FA", -1);
			}
			break;
		
		case 2:
			if (iParam0 == 6)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 15);
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 18);
			}
			break;
		
		case 4:
			if (iParam0 == 24)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 17);
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_9), 19);
			}
			break;
	}
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[15];
	bool bVar3;
	int iVar4;
	int iVar5[15];
	int iVar6;
	int iVar7;
	
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = func_605(iVar0);
		uVar2[iVar0] = func_603(iVar1);
		if (!uVar2[iVar0])
		{
			bVar3 = false;
		}
		iVar0++;
	}
	if (bVar3)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = func_605(iVar0);
		if (!func_602(iVar1))
		{
			if (!func_601())
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = 1;
			}
		}
		else
		{
			iVar6 = 1;
		}
		if (!uVar2[iVar0] && iVar6)
		{
			iVar5[iVar0] = iVar4;
			iVar4++;
		}
		else
		{
			iVar5[iVar0] = -1;
		}
		iVar0++;
	}
	iVar7 = unk_0x5853B15F78E1A265(0, iVar4);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar5[iVar0] > -1 && iVar5[iVar0] == iVar7)
		{
			iVar1 = func_605(iVar0);
			func_600(iVar1);
			if (func_250(iVar1))
			{
				*iParam0 = iVar1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_600(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zr350"):
			func_639(31810, 1, -1);
			break;
		
		case joaat("comet6"):
			func_639(31811, 1, -1);
			break;
		
		case joaat("jester4"):
			func_639(31812, 1, -1);
			break;
		
		case joaat("vectre"):
			func_639(31813, 1, -1);
			break;
		
		case joaat("cypher"):
			func_639(31814, 1, -1);
			break;
		
		case joaat("growler"):
			func_639(31815, 1, -1);
			break;
		
		case joaat("calico"):
			func_639(31816, 1, -1);
			break;
		
		case joaat("remus"):
			func_639(31817, 1, -1);
			break;
		
		case joaat("dominator7"):
			func_639(31818, 1, -1);
			break;
		
		case joaat("futo2"):
			func_639(31819, 1, -1);
			break;
		
		case joaat("rt3000"):
			func_639(31820, 1, -1);
			break;
		
		case joaat("warrener2"):
			func_639(31821, 1, -1);
			break;
		
		case joaat("sultan3"):
			func_639(31822, 1, -1);
			break;
		
		case joaat("dominator8"):
			func_639(31823, 1, -1);
			break;
		
		case joaat("previon"):
			func_639(31824, 1, -1);
			break;
		
		default:
			break;
	}
}

int func_601()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar0 = func_605(iVar2);
		if (func_602(iVar0))
		{
			bVar1 = func_603(iVar0);
			if (!bVar1)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case joaat("euros"):
		case joaat("tailgater2"):
		case joaat("rt3000"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("calico"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("futo2"):
		case joaat("dominator8"):
			return 1;
			break;
	}
	return 0;
}

int func_603(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_635(unk_0x9E2D6C50374FCFA9());
		
		case joaat("tailgater2"):
			return func_604(unk_0x9E2D6C50374FCFA9());
		
		case joaat("zr350"):
			return func_640(31810, -1);
		
		case joaat("comet6"):
			return func_640(31811, -1);
		
		case joaat("jester4"):
			return func_640(31812, -1);
		
		case joaat("vectre"):
			return func_640(31813, -1);
		
		case joaat("cypher"):
			return func_640(31814, -1);
		
		case joaat("growler"):
			return func_640(31815, -1);
		
		case joaat("calico"):
			return func_640(31816, -1);
		
		case joaat("remus"):
			return func_640(31817, -1);
		
		case joaat("dominator7"):
			return func_640(31818, -1);
		
		case joaat("futo2"):
			return func_640(31819, -1);
		
		case joaat("rt3000"):
			return func_640(31820, -1);
		
		case joaat("warrener2"):
			return func_640(31821, -1);
		
		case joaat("sultan3"):
			return func_640(31822, -1);
		
		case joaat("dominator8"):
			return func_640(31823, -1);
		
		case joaat("previon"):
			return func_640(31824, -1);
		
		default:
	}
	return 0;
}

int func_604(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1977258[iParam0 /*55*/].f_1, 0);
	}
	return 0;
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("sultan3");
		
		case 1:
			return joaat("rt3000");
		
		case 2:
			return joaat("vectre");
		
		case 3:
			return joaat("zr350");
		
		case 4:
			return joaat("warrener2");
		
		case 5:
			return joaat("calico");
		
		case 6:
			return joaat("remus");
		
		case 7:
			return joaat("cypher");
		
		case 8:
			return joaat("dominator7");
		
		case 9:
			return joaat("jester4");
		
		case 10:
			return joaat("futo2");
		
		case 11:
			return joaat("dominator8");
		
		case 12:
			return joaat("previon");
		
		case 13:
			return joaat("growler");
		
		case 14:
			return joaat("comet6");
		
		default:
	}
	return 0;
}

int func_606(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		Global_2783300 = { func_83(unk_0x9E2D6C50374FCFA9()) };
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
	func_580(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_607(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 1:
			return func_609(iParam3);
		
		case 2:
			return func_608(bParam1, "CLO_TRM_PH_1_9", "CLO_TRF_PH_1_9");
		
		case 3:
			return func_608(bParam1, "CLO_TRM_F_1_12", "CLO_TRF_F_1_12");
		
		case 4:
			return func_608(bParam1, "CLO_TRM_U_11_6", "CLO_TRF_U_11_6");
		
		case 5:
			return func_609(iParam3);
		
		case 6:
			return "CCR_UNL_PS";
		
		case 7:
			return func_608(bParam1, "CLO_TRM_U_7_3", "CLO_TRF_U_7_3");
		
		case 8:
			return "SMOD5_WHL_21";
		
		case 9:
			return func_608(bParam1, "CLO_TRM_U_16_8", "CLO_TRF_U_15_8");
		
		case 10:
			return func_608(bParam1, "CLO_TRM_U_15_20", "CLO_TRF_U_14_20");
		
		case 11:
			return func_609(iParam3);
		
		case 12:
			return "CCR_UNL_QF";
		
		case 13:
			return func_608(bParam1, "CLO_TRM_U_8_3", "CLO_TRF_U_8_3");
		
		case 14:
			return "EUROS_LIV11";
		
		case 15:
			return func_608(bParam1, "CLO_TRM_D_16_0", "CLO_TRF_D_16_0");
		
		case 16:
			return func_608(bParam1, "CLO_TRM_U_9_10", "CLO_TRF_U_9_10");
		
		case 17:
			return func_609(iParam3);
		
		case 18:
			return "CCR_UNL_DV";
		
		case 19:
			return func_608(bParam1, "CLO_TRM_U_17_11", "CLO_TRF_U_16_11");
		
		case 20:
			return "FUTO2_LIV11";
		
		case 21:
			return func_608(bParam1, "CLO_TRM_PH_1_10", "CLO_TRF_PH_1_10");
		
		case 22:
			return func_608(bParam1, "CLO_TRM_F_1_4", "CLO_TRF_F_1_4");
		
		case 23:
			return func_609(iParam3);
		
		case 24:
			return "CCR_UNL_PT";
		
		case 25:
			return func_608(bParam1, "CLO_TRM_U_11_16", "CLO_TRF_U_11_16");
		
		case 26:
			return "SMOD5_WHL_22";
		
		case 27:
			return func_608(bParam1, "CLO_TRM_U_7_2", "CLO_TRF_U_7_2");
		
		case 28:
			return func_608(bParam1, "CLO_TRM_U_16_9", "CLO_TRF_U_15_9");
		
		case 29:
			return func_609(iParam3);
		
		case 30:
			return "CCR_UNL_ST";
		
		case 31:
			return func_608(bParam1, "CLO_TRM_U_15_19", "CLO_TRF_U_14_19");
		
		case 32:
			return "RT3000_LIV11";
		
		case 33:
			return func_608(bParam1, "CLO_TRM_U_8_2", "CLO_TRF_U_8_2");
		
		case 34:
			return func_608(bParam1, "CLO_TRM_D_11_0", "CLO_TRF_D_11_0");
		
		case 35:
			return func_609(iParam3);
		
		case 36:
			return "CCR_UNL_WM";
		
		case 37:
			return func_608(bParam1, "CLO_TRM_U_9_12", "CLO_TRF_U_9_12");
		
		case 38:
			return "JEST4_LIVERY11";
		
		case 39:
			return func_608(bParam1, "CLO_TRM_O_R3", "CLO_TRF_O_R3");
		
		case 40:
			return func_608(bParam1, "CLO_TRM_U_17_8", "CLO_TRF_U_16_8");
		
		case 41:
			return func_609(iParam3);
		
		case 42:
			return func_608(bParam1, "CLO_TRM_PH_1_12", "CLO_TRF_PH_1_12");
		
		case 43:
			return "SMOD5_WHL_23";
		
		case 44:
			return func_608(bParam1, "CLO_TRM_F_1_3", "CLO_TRF_F_1_3");
		
		case 45:
			return func_608(bParam1, "CLO_TRM_U_11_5", "CLO_TRF_U_11_5");
		
		case 46:
			return func_609(iParam3);
		
		case 47:
			return func_608(bParam1, "CLO_TRM_U_7_15", "CLO_TRF_U_7_15");
		
		case 48:
			return "ZR350_LIV11";
		
		case 49:
			return func_608(bParam1, "CLO_TRM_U_16_1", "CLO_TRF_U_15_1");
		
		case 50:
			return func_608(bParam1, "CLO_TRM_U_15_0", "CLO_TRF_U_14_0");
		
		case 51:
			return func_609(iParam3);
		
		case 52:
			return func_608(bParam1, "CLO_TRM_U_8_15", "CLO_TRF_U_8_15");
		
		case 53:
			return "WARR2_LIV11";
		
		case 54:
			return func_608(bParam1, "CLO_TRM_D_13_0", "CLO_TRF_D_13_0");
		
		case 55:
			return func_608(bParam1, "CLO_TRM_U_9_7", "CLO_TRF_U_9_7");
		
		case 56:
			return func_609(iParam3);
		
		case 57:
			return func_608(bParam1, "CLO_TRM_O_R2", "CLO_TRF_O_R2");
		
		case 58:
			return func_608(bParam1, "CLO_TRM_U_17_5", "CLO_TRF_U_16_5");
		
		case 59:
			return "SMOD5_WHL_24";
		
		case 60:
			return func_608(bParam1, "CLO_TRM_PH_1_7", "CLO_TRF_PH_1_7");
		
		case 61:
			return func_608(bParam1, "CLO_TRM_F_1_18", "CLO_TRF_F_1_18");
		
		case 62:
			return func_609(iParam3);
		
		case 63:
			return func_608(bParam1, "CLO_TRM_O_R4", "CLO_TRF_O_R4");
		
		case 64:
			return func_608(bParam1, "CLO_TRM_U_11_15", "CLO_TRF_U_11_15");
		
		case 65:
			return "CALICO_LIVERY11";
		
		case 66:
			return func_608(bParam1, "CLO_TRM_U_7_14", "CLO_TRF_U_7_14");
		
		case 67:
			return func_608(bParam1, "CLO_TRM_U_16_3", "CLO_TRF_U_15_3");
		
		case 68:
			return func_609(iParam3);
		
		case 69:
			return func_608(bParam1, "CLO_TRM_O_R5", "CLO_TRF_O_R5");
		
		case 70:
			return func_608(bParam1, "CLO_TRM_U_15_3", "CLO_TRF_U_14_3");
		
		case 71:
			return "REMUS_LIV11";
		
		case 72:
			return func_608(bParam1, "CLO_TRM_U_8_14", "CLO_TRF_U_8_14");
		
		case 73:
			return func_608(bParam1, "CLO_TRM_D_12_0", "CLO_TRF_D_12_0");
		
		case 74:
			return func_609(iParam3);
		
		case 75:
			return func_608(bParam1, "CLO_TRM_O_R1", "CLO_TRF_O_R1");
		
		case 76:
			return func_608(bParam1, "CLO_TRM_U_9_6", "CLO_TRF_U_9_6");
		
		case 77:
			return "SMOD5_WHL_25";
		
		case 78:
			return func_608(bParam1, "CLO_TRM_U_17_9", "CLO_TRF_U_16_9");
		
		case joaat("mpsv_lp0_31"):
			return func_608(bParam1, "CLO_TRM_PH_1_13", "CLO_TRF_PH_1_13");
		
		case 80:
			return func_609(iParam3);
		
		case 81:
			return func_608(bParam1, "CLO_TRM_O_R6", "CLO_TRF_O_R6");
		
		case 82:
			return func_608(bParam1, "CLO_TRM_F_1_19", "CLO_TRF_F_1_19");
		
		case 83:
			return "DOM8_LIV11";
		
		case 84:
			return func_608(bParam1, "CLO_TRM_U_11_19", "CLO_TRF_U_11_19");
		
		case 85:
			return func_608(bParam1, "CLO_TRM_U_7_8", "CLO_TRF_U_7_8");
		
		case 86:
			return func_609(iParam3);
		
		case 87:
			return func_608(bParam1, "CLO_TRM_O_R7", "CLO_TRF_O_R7");
		
		case 88:
			return func_608(bParam1, "CLO_TRM_U_16_0", "CLO_TRF_U_15_0");
		
		case 89:
			return "TGAIT2_LIV11";
		
		case 90:
			return func_608(bParam1, "CLO_TRM_U_15_4", "CLO_TRF_U_14_4");
		
		case 91:
			return func_608(bParam1, "CLO_TRM_U_8_8", "CLO_TRF_U_8_8");
		
		case 92:
			return "SMOD5_WHL_26";
		
		case 93:
			return func_608(bParam1, "CLO_TRM_D_10_0", "CLO_TRF_D_10_0");
		
		case 94:
			return "EUROS_LIV12";
		
		case 95:
			return func_608(bParam1, "CLO_TRM_U_9_3", "CLO_TRF_U_9_3");
		
		case 96:
			return func_608(bParam1, "CLO_TRM_U_17_2", "CLO_TRF_U_16_2");
		
		case 97:
			return "SMOD5_WHL_27";
		
		case 98:
			return func_608(bParam1, "CLO_TRM_PH_1_3", "CLO_TRF_PH_1_3");
		
		case 99:
			return "FUTO2_LIV12";
		
		case 100:
			return func_608(bParam1, "CLO_TRM_F_1_15", "CLO_TRF_F_1_15");
		
		case 101:
			return func_608(bParam1, "CLO_TRM_U_11_9", "CLO_TRF_U_11_9");
		
		case 102:
			return "SMOD5_WHL_28";
		
		case 103:
			return func_608(bParam1, "CLO_TRM_U_7_9", "CLO_TRF_U_7_9");
		
		case 104:
			return "RT3000_LIV12";
		
		case 105:
			return func_608(bParam1, "CLO_TRM_U_16_2", "CLO_TRF_U_15_2");
		
		case 106:
			return func_608(bParam1, "CLO_TRM_U_15_2", "CLO_TRF_U_14_2");
		
		case 107:
			return "SMOD5_WHL_29";
		
		case 108:
			return func_608(bParam1, "CLO_TRM_U_8_9", "CLO_TRF_U_8_9");
		
		case 109:
			return "JEST4_LIVERY12";
		
		case 110:
			return func_608(bParam1, "CLO_TRM_D_15_0", "CLO_TRF_D_15_0");
		
		case 111:
			return func_608(bParam1, "CLO_TRM_U_9_13", "CLO_TRF_U_9_13");
		
		case 112:
			return "SMOD5_WHL_30";
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return func_608(bParam1, "CLO_TRM_U_17_1", "CLO_TRF_U_16_1");
		
		case 114:
			return "ZR350_LIV12";
		
		case 115:
			return func_608(bParam1, "CLO_TRM_PH_1_4", "CLO_TRF_PH_1_4");
		
		case 116:
			return func_608(bParam1, "CLO_TRM_F_1_23", "CLO_TRF_F_1_23");
		
		case 117:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 118:
			return func_608(bParam1, "CLO_TRM_U_11_20", "CLO_TRF_U_11_20");
		
		case 119:
			return "WARR2_LIV12";
		
		case 120:
			return func_608(bParam1, "CLO_TRM_U_7_13", "CLO_TRF_U_7_13");
		
		case 121:
			return "CALICO_LIVERY12";
		
		case 122:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 123:
			return func_608(bParam1, "CLO_TRM_U_16_5", "CLO_TRF_U_15_5");
		
		case 124:
			return "REMUS_LIV12";
		
		case 125:
			return func_608(bParam1, "CLO_TRM_U_15_5", "CLO_TRF_U_14_5");
		
		case 126:
			return "DOM8_LIV12";
		
		case 127:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 128:
			return func_608(bParam1, "CLO_TRM_U_8_13", "CLO_TRF_U_8_13");
		
		case 129:
			return "TGAIT2_LIV12";
		
		case 130:
			return func_608(bParam1, "CLO_TRM_D_14_0", "CLO_TRF_D_14_0");
		
		case 131:
			return "EUROS_LIV13";
		
		case 132:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 133:
			return func_608(bParam1, "CLO_TRM_U_9_8", "CLO_TRF_U_9_8");
		
		case 134:
			return "FUTO2_LIV13";
		
		case 135:
			return func_608(bParam1, "CLO_TRM_U_17_4", "CLO_TRF_U_16_4");
		
		case 136:
			return "RT3000_LIV13";
		
		case 137:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 138:
			return func_608(bParam1, "CLO_TRM_PH_1_5", "CLO_TRF_PH_1_5");
		
		case 139:
			return "JEST4_LIVERY13";
		
		case 140:
			return func_608(bParam1, "CLO_TRM_F_1_20", "CLO_TRF_F_1_20");
		
		case 141:
			return "ZR350_LIV13";
		
		case 142:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 143:
			return func_608(bParam1, "CLO_TRM_U_11_10", "CLO_TRF_U_11_10");
		
		case 144:
			return "WARR2_LIV13";
		
		case 145:
			return func_608(bParam1, "CLO_TRM_U_7_12", "CLO_TRF_U_7_12");
		
		case 146:
			return "CALICO_LIVERY13";
		
		case 147:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 148:
			return func_608(bParam1, "CLO_TRM_U_16_4", "CLO_TRF_U_15_4");
		
		case 149:
			return "REMUS_LIV13";
		
		case 150:
			return func_608(bParam1, "CLO_TRM_U_15_8", "CLO_TRF_U_14_8");
		
		case 151:
			return "DOM8_LIV13";
		
		case 152:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 153:
			return func_608(bParam1, "CLO_TRM_U_8_12", "CLO_TRF_U_8_12");
		
		case 154:
			return "TGAIT2_LIV13";
		
		case 155:
			return func_608(bParam1, "CLO_TRM_D_9_0", "CLO_TRF_D_9_0");
		
		case 156:
			return "EUROS_LIV14";
		
		case 157:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 158:
			return func_608(bParam1, "CLO_TRM_U_9_9", "CLO_TRF_U_9_9");
		
		case 159:
			return "FUTO2_LIV14";
		
		case 160:
			return func_608(bParam1, "CLO_TRM_U_17_6", "CLO_TRF_U_16_6");
		
		case 161:
			return "RT3000_LIV14";
		
		case 162:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 163:
			return func_608(bParam1, "CLO_TRM_PH_1_6", "CLO_TRF_PH_1_6");
		
		case 164:
			return "JEST4_LIVERY14";
		
		case 165:
			return func_608(bParam1, "CLO_TRM_F_1_13", "CLO_TRF_F_1_13");
		
		case 166:
			return "ZR350_LIV14";
		
		case 167:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 168:
			return func_608(bParam1, "CLO_TRM_U_11_14", "CLO_TRF_U_11_14");
		
		case 169:
			return "WARR2_LIV14";
		
		case 170:
			return func_608(bParam1, "CLO_TRM_U_7_4", "CLO_TRF_U_7_4");
		
		case 171:
			return "CALICO_LIVERY14";
		
		case 172:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 173:
			return func_608(bParam1, "CLO_TRM_U_16_6", "CLO_TRF_U_15_6");
		
		case 174:
			return "REMUS_LIV14";
		
		case 175:
			return func_608(bParam1, "CLO_TRM_U_15_7", "CLO_TRF_U_14_7");
		
		case 176:
			return "DOM8_LIV14";
		
		case 177:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 178:
			return func_608(bParam1, "CLO_TRM_U_8_4", "CLO_TRF_U_8_4");
		
		case 179:
			return "TGAIT2_LIV14";
		
		case 180:
			return func_608(bParam1, "CLO_TRM_U_9_5", "CLO_TRF_U_9_5");
		
		case 181:
			return "EUROS_LIV15";
		
		case 182:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 183:
			return func_608(bParam1, "CLO_TRM_U_17_3", "CLO_TRF_U_16_3");
		
		case 184:
			return "FUTO2_LIV15";
		
		case 185:
			return func_608(bParam1, "CLO_TRM_PH_1_8", "CLO_TRF_PH_1_8");
		
		case 186:
			return "RT3000_LIV15";
		
		case 187:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 188:
			return func_608(bParam1, "CLO_TRM_F_1_14", "CLO_TRF_F_1_14");
		
		case 189:
			return "JEST4_LIVERY15";
		
		case 190:
			return func_608(bParam1, "CLO_TRM_U_11_17", "CLO_TRF_U_11_17");
		
		case 191:
			return "ZR350_LIV15";
		
		case 192:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 193:
			return func_608(bParam1, "CLO_TRM_U_7_5", "CLO_TRF_U_7_5");
		
		case 194:
			return "WARR2_LIV15";
		
		case 195:
			return func_608(bParam1, "CLO_TRM_U_15_15", "CLO_TRF_U_14_15");
		
		case 196:
			return "CALICO_LIVERY15";
		
		case 197:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 198:
			return func_608(bParam1, "CLO_TRM_U_8_5", "CLO_TRF_U_8_5");
		
		case 199:
			return "REMUS_LIV15";
		
		case 200:
			return func_608(bParam1, "CLO_TRM_U_9_4", "CLO_TRF_U_9_4");
		
		case 201:
			return "DOM8_LIV15";
		
		case 202:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 203:
			return func_608(bParam1, "CLO_TRM_U_17_10", "CLO_TRF_U_16_10");
		
		case 204:
			return "TGAIT2_LIV15";
		
		case 205:
			return func_608(bParam1, "CLO_TRM_PH_1_11", "CLO_TRF_PH_1_11");
		
		case 206:
			return func_608(bParam1, "CLO_TRM_F_1_8", "CLO_TRF_F_1_8");
		
		case 207:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 208:
			return func_608(bParam1, "CLO_TRM_U_11_13", "CLO_TRF_U_11_13");
		
		case 209:
			return func_608(bParam1, "CLO_TRM_U_7_10", "CLO_TRF_U_7_10");
		
		case 210:
			return func_608(bParam1, "CLO_TRM_U_15_9", "CLO_TRF_U_14_9");
		
		case 211:
			return func_608(bParam1, "CLO_TRM_U_8_10", "CLO_TRF_U_8_10");
		
		case 212:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return func_608(bParam1, "CLO_TRM_U_9_1", "CLO_TRF_U_9_1");
		
		case 214:
			return func_608(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 215:
			return func_608(bParam1, "CLO_TRM_F_1_1", "CLO_TRF_F_1_1");
		
		case 216:
			return func_608(bParam1, "CLO_TRM_U_11_18", "CLO_TRF_U_11_18");
		
		case 217:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 218:
			return func_608(bParam1, "CLO_TRM_U_7_11", "CLO_TRF_U_7_11");
		
		case 219:
			return func_608(bParam1, "CLO_TRM_U_15_12", "CLO_TRF_U_14_12");
		
		case 220:
			return func_608(bParam1, "CLO_TRM_U_8_11", "CLO_TRF_U_8_11");
		
		case 221:
			return func_608(bParam1, "CLO_TRM_U_9_0", "CLO_TRF_U_9_0");
		
		case 222:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 223:
			return func_608(bParam1, "CLO_TRM_F_1_0", "CLO_TRF_F_1_0");
		
		case 224:
			return func_608(bParam1, "CLO_TRM_U_11_1", "CLO_TRF_U_11_1");
		
		case 225:
			return func_608(bParam1, "CLO_TRM_U_7_1", "CLO_TRF_U_7_1");
		
		case 226:
			return func_608(bParam1, "CLO_TRM_U_15_10", "CLO_TRF_U_14_10");
		
		case 227:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 228:
			return func_608(bParam1, "CLO_TRM_U_8_1", "CLO_TRF_U_8_1");
		
		case 229:
			return func_608(bParam1, "CLO_TRM_U_9_11", "CLO_TRF_U_9_11");
		
		case 230:
			return func_608(bParam1, "CLO_TRM_F_1_2", "CLO_TRF_F_1_2");
		
		case 231:
			return func_608(bParam1, "CLO_TRM_U_11_7", "CLO_TRF_U_11_7");
		
		case 232:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 233:
			return func_608(bParam1, "CLO_TRM_U_7_0", "CLO_TRF_U_7_0");
		
		case 234:
			return func_608(bParam1, "CLO_TRM_U_15_6", "CLO_TRF_U_14_6");
		
		case 235:
			return func_608(bParam1, "CLO_TRM_U_8_0", "CLO_TRF_U_8_0");
		
		case 236:
			return func_608(bParam1, "CLO_TRM_U_9_14", "CLO_TRF_U_9_14");
		
		case 237:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 238:
			return func_608(bParam1, "CLO_TRM_F_1_5", "CLO_TRF_F_1_5");
		
		case 239:
			return func_608(bParam1, "CLO_TRM_U_11_2", "CLO_TRF_U_11_2");
		
		case 240:
			return func_608(bParam1, "CLO_TRM_U_7_6", "CLO_TRF_U_7_6");
		
		case 241:
			return func_608(bParam1, "CLO_TRM_U_15_13", "CLO_TRF_U_14_13");
		
		case 242:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 243:
			return func_608(bParam1, "CLO_TRM_U_8_6", "CLO_TRF_U_8_6");
		
		case 244:
			return func_608(bParam1, "CLO_TRM_F_1_22", "CLO_TRF_F_1_22");
		
		case 245:
			return func_608(bParam1, "CLO_TRM_U_11_8", "CLO_TRF_U_11_8");
		
		case 246:
			return func_608(bParam1, "CLO_TRM_U_15_16", "CLO_TRF_U_14_16");
		
		case 247:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 248:
			return func_608(bParam1, "CLO_TRM_F_1_21", "CLO_TRF_F_1_21");
		
		case 249:
			return func_608(bParam1, "CLO_TRM_U_11_3", "CLO_TRF_U_11_3");
		
		case 250:
			return func_608(bParam1, "CLO_TRM_U_15_17", "CLO_TRF_U_14_17");
		
		case 251:
			return func_608(bParam1, "CLO_TRM_F_1_7", "CLO_TRF_F_1_7");
		
		case 252:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 253:
			return func_608(bParam1, "CLO_TRM_U_11_11", "CLO_TRF_U_11_11");
		
		case 254:
			return func_608(bParam1, "CLO_TRM_U_15_18", "CLO_TRF_U_14_18");
		
		case 255:
			return func_608(bParam1, "CLO_TRM_F_1_6", "CLO_TRF_F_1_6");
		
		case 256:
			return func_608(bParam1, "CLO_TRM_U_11_4", "CLO_TRF_U_11_4");
		
		case 257:
			return func_608(bParam1, "CLO_TRM_U_15_14", "CLO_TRF_U_14_14");
		
		case 258:
			return func_608(bParam1, "CLO_TRM_F_1_11", "CLO_TRF_F_1_11");
		
		case 259:
			return func_608(bParam1, "CLO_TRM_U_15_11", "CLO_TRF_U_14_11");
		
		case 260:
			return func_608(bParam1, "CLO_TRM_F_1_17", "CLO_TRF_F_1_17");
		
		case 261:
			return func_608(bParam1, "CLO_TRM_F_1_16", "CLO_TRF_F_1_16");
		
		case 262:
			return func_608(bParam1, "CLO_TRM_F_1_10", "CLO_TRF_F_1_10");
		
		case 263:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 264:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 265:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 266:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 267:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 268:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 269:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 270:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 271:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 272:
			return func_608(bParam1, "CLO_TRM_F_1_9", "CLO_TRF_F_1_9");
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 274:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 275:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 276:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 277:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 278:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 279:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 280:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 281:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 282:
			return func_608(bParam1, "CLO_TRM_PH_1_2", "CLO_TRF_PH_1_2");
		
		case 283:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 284:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 285:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 286:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 287:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 288:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 289:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 290:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 291:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 292:
			return func_608(bParam1, "CLO_TRM_U_15_1", "CLO_TRF_U_14_1");
		
		case 293:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 294:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 295:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 296:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 297:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 298:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 299:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 300:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 301:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 302:
			return func_608(bParam1, "CLO_TRM_U_7_7", "CLO_TRF_U_7_7");
		
		case 303:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 304:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 305:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 306:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 307:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 308:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 309:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 310:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 311:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 312:
			return func_608(bParam1, "CLO_TRM_U_9_2", "CLO_TRF_U_9_2");
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 314:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 315:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 316:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 317:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 318:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 319:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 320:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 321:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 322:
			return func_608(bParam1, "CLO_TRM_U_11_12", "CLO_TRF_U_11_12");
		
		case 323:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 324:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 325:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 326:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 327:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 328:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 329:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 330:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 331:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 332:
			return func_608(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 333:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 334:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 335:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 336:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 337:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 338:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 339:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 340:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 341:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 342:
			return func_608(bParam1, "CLO_TRM_U_8_7", "CLO_TRF_U_8_7");
		
		case 343:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 344:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 345:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 346:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 347:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 348:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 349:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 350:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 351:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 352:
			return func_608(bParam1, "CLO_TRM_U_16_7", "CLO_TRF_U_15_7");
		
		case 353:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 354:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 355:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 356:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 357:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 358:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 359:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 360:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 361:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 362:
			return func_608(bParam1, "CLO_TRM_D_8_0", "CLO_TRF_D_8_0");
		
		case 363:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 364:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 365:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 366:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 367:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 368:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 369:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 370:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 371:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 372:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 373:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 374:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 375:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 376:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 377:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 378:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 379:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 380:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 381:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 382:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 383:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 384:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 385:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 386:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 387:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 388:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 389:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 390:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 391:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 392:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 393:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 394:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 395:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 396:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 397:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 398:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 399:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 400:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 401:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 402:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 403:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 404:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 405:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 406:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 407:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 408:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 409:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 410:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 411:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 412:
			return func_608(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 413:
			return func_608(bParam1, "CLO_TRM_O_R8", "CLO_TRF_O_R8");
		
		default:
	}
	return "";
}

char* func_608(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sultan3"):
			return "SULTAN3";
		
		case joaat("rt3000"):
			return "RT3000";
		
		case joaat("vectre"):
			return "VECTRE";
		
		case joaat("zr350"):
			return "ZR350";
		
		case joaat("warrener2"):
			return "WARRENER2";
		
		case joaat("calico"):
			return "CALICO";
		
		case joaat("remus"):
			return "REMUS";
		
		case joaat("cypher"):
			return "CYPHER";
		
		case joaat("dominator7"):
			return "DOMINATOR7";
		
		case joaat("jester4"):
			return "JESTER4";
		
		case joaat("futo2"):
			return "FUTO2";
		
		case joaat("dominator8"):
			return "DOMINATOR8";
		
		case joaat("previon"):
			return "PREVION";
		
		case joaat("growler"):
			return "GROWLER";
		
		case joaat("comet6"):
			return "COMET6";
		
		case joaat("euros"):
			return "EUROS";
		
		default:
	}
	return "";
}

void func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (iParam0 == 8)
	{
		func_639(129, 1, -1);
		return;
	}
	if (iParam0 == 9)
	{
		func_639(135, 1, -1);
		return;
	}
	if (iParam0 == 10)
	{
		func_639(136, 1, -1);
		return;
	}
	if (iParam0 == 11)
	{
		func_639(137, 1, -1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		func_520(8271, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = unk_0x48352343BC5A41AE();
		func_520(8272, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		func_520(8273, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = unk_0x48352343BC5A41AE();
		func_520(8274, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		func_520(8275, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = unk_0x48352343BC5A41AE();
		func_520(8276, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0))
		{
			bVar6 = true;
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_20564.f_471), iParam0);
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0) || !unk_0xE2D0C323A1AE5D85(Global_2359296[func_612() /*5559*/].f_675.f_10, iParam0))
	{
		bVar6 = true;
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20564.f_471), iParam0);
		unk_0xCED9E32812D6C7C7(&(Global_2359296[func_612() /*5559*/].f_675.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_STR");
		unk_0x26C23BE14F66F202(func_611(iParam0));
		unk_0x3B81B9627E7885CF(&cVar7, &cVar7, 1, 0, "", 0);
	}
}

char* func_611(int iParam0)
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

int func_612()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_613()
{
	return func_614(unk_0x9E2D6C50374FCFA9());
}

int func_614(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_615(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 8);
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 2;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 6;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 3;
		
		case 19:
			return 0;
		
		case 20:
			return 6;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 1;
		
		case 24:
			return 4;
		
		case 25:
			return 0;
		
		case 26:
			return 5;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 1;
		
		case 30:
			return 3;
		
		case 31:
			return 0;
		
		case 32:
			return 6;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 1;
		
		case 36:
			return 3;
		
		case 37:
			return 0;
		
		case 38:
			return 6;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 1;
		
		case 42:
			return 0;
		
		case 43:
			return 5;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 1;
		
		case 47:
			return 0;
		
		case 48:
			return 6;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		case 51:
			return 1;
		
		case 52:
			return 0;
		
		case 53:
			return 6;
		
		case 54:
			return 0;
		
		case 55:
			return 0;
		
		case 56:
			return 1;
		
		case 57:
			return 0;
		
		case 58:
			return 0;
		
		case 59:
			return 5;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 1;
		
		case 63:
			return 0;
		
		case 64:
			return 0;
		
		case 65:
			return 6;
		
		case 66:
			return 0;
		
		case 67:
			return 0;
		
		case 68:
			return 1;
		
		case 69:
			return 0;
		
		case 70:
			return 0;
		
		case 71:
			return 6;
		
		case 72:
			return 0;
		
		case 73:
			return 0;
		
		case 74:
			return 1;
		
		case 75:
			return 0;
		
		case 76:
			return 0;
		
		case 77:
			return 5;
		
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 0;
		
		case 80:
			return 1;
		
		case 81:
			return 0;
		
		case 82:
			return 0;
		
		case 83:
			return 6;
		
		case 84:
			return 0;
		
		case 85:
			return 0;
		
		case 86:
			return 1;
		
		case 87:
			return 0;
		
		case 88:
			return 0;
		
		case 89:
			return 6;
		
		case 90:
			return 0;
		
		case 91:
			return 0;
		
		case 92:
			return 5;
		
		case 93:
			return 0;
		
		case 94:
			return 6;
		
		case 95:
			return 0;
		
		case 96:
			return 0;
		
		case 97:
			return 5;
		
		case 98:
			return 0;
		
		case 99:
			return 6;
		
		case 100:
			return 0;
		
		case 101:
			return 0;
		
		case 102:
			return 5;
		
		case 103:
			return 0;
		
		case 104:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 0;
		
		case 107:
			return 5;
		
		case 108:
			return 0;
		
		case 109:
			return 6;
		
		case 110:
			return 0;
		
		case 111:
			return 0;
		
		case 112:
			return 5;
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return 0;
		
		case 114:
			return 6;
		
		case 115:
			return 0;
		
		case 116:
			return 0;
		
		case 117:
			return 7;
		
		case 118:
			return 0;
		
		case 119:
			return 6;
		
		case 120:
			return 0;
		
		case 121:
			return 6;
		
		case 122:
			return 7;
		
		case 123:
			return 0;
		
		case 124:
			return 6;
		
		case 125:
			return 0;
		
		case 126:
			return 6;
		
		case 127:
			return 7;
		
		case 128:
			return 0;
		
		case 129:
			return 6;
		
		case 130:
			return 0;
		
		case 131:
			return 6;
		
		case 132:
			return 7;
		
		case 133:
			return 0;
		
		case 134:
			return 6;
		
		case 135:
			return 0;
		
		case 136:
			return 6;
		
		case 137:
			return 7;
		
		case 138:
			return 0;
		
		case 139:
			return 6;
		
		case 140:
			return 0;
		
		case 141:
			return 6;
		
		case 142:
			return 7;
		
		case 143:
			return 0;
		
		case 144:
			return 6;
		
		case 145:
			return 0;
		
		case 146:
			return 6;
		
		case 147:
			return 7;
		
		case 148:
			return 0;
		
		case 149:
			return 6;
		
		case 150:
			return 0;
		
		case 151:
			return 6;
		
		case 152:
			return 7;
		
		case 153:
			return 0;
		
		case 154:
			return 6;
		
		case 155:
			return 0;
		
		case 156:
			return 6;
		
		case 157:
			return 7;
		
		case 158:
			return 0;
		
		case 159:
			return 6;
		
		case 160:
			return 0;
		
		case 161:
			return 6;
		
		case 162:
			return 7;
		
		case 163:
			return 0;
		
		case 164:
			return 6;
		
		case 165:
			return 0;
		
		case 166:
			return 6;
		
		case 167:
			return 7;
		
		case 168:
			return 0;
		
		case 169:
			return 6;
		
		case 170:
			return 0;
		
		case 171:
			return 6;
		
		case 172:
			return 7;
		
		case 173:
			return 0;
		
		case 174:
			return 6;
		
		case 175:
			return 0;
		
		case 176:
			return 6;
		
		case 177:
			return 7;
		
		case 178:
			return 0;
		
		case 179:
			return 6;
		
		case 180:
			return 0;
		
		case 181:
			return 6;
		
		case 182:
			return 7;
		
		case 183:
			return 0;
		
		case 184:
			return 6;
		
		case 185:
			return 0;
		
		case 186:
			return 6;
		
		case 187:
			return 7;
		
		case 188:
			return 0;
		
		case 189:
			return 6;
		
		case 190:
			return 0;
		
		case 191:
			return 6;
		
		case 192:
			return 7;
		
		case 193:
			return 0;
		
		case 194:
			return 6;
		
		case 195:
			return 0;
		
		case 196:
			return 6;
		
		case 197:
			return 7;
		
		case 198:
			return 0;
		
		case 199:
			return 6;
		
		case 200:
			return 0;
		
		case 201:
			return 6;
		
		case 202:
			return 7;
		
		case 203:
			return 0;
		
		case 204:
			return 6;
		
		case 205:
			return 0;
		
		case 206:
			return 0;
		
		case 207:
			return 7;
		
		case 208:
			return 0;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 211:
			return 0;
		
		case 212:
			return 7;
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return 0;
		
		case 214:
			return 0;
		
		case 215:
			return 0;
		
		case 216:
			return 0;
		
		case 217:
			return 7;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 222:
			return 7;
		
		case 223:
			return 0;
		
		case 224:
			return 0;
		
		case 225:
			return 0;
		
		case 226:
			return 0;
		
		case 227:
			return 7;
		
		case 228:
			return 0;
		
		case 229:
			return 0;
		
		case 230:
			return 0;
		
		case 231:
			return 0;
		
		case 232:
			return 7;
		
		case 233:
			return 0;
		
		case 234:
			return 0;
		
		case 235:
			return 0;
		
		case 236:
			return 0;
		
		case 237:
			return 7;
		
		case 238:
			return 0;
		
		case 239:
			return 0;
		
		case 240:
			return 0;
		
		case 241:
			return 0;
		
		case 242:
			return 7;
		
		case 243:
			return 0;
		
		case 244:
			return 0;
		
		case 245:
			return 0;
		
		case 246:
			return 0;
		
		case 247:
			return 7;
		
		case 248:
			return 0;
		
		case 249:
			return 0;
		
		case 250:
			return 0;
		
		case 251:
			return 0;
		
		case 252:
			return 7;
		
		case 253:
			return 0;
		
		case 254:
			return 0;
		
		case 255:
			return 0;
		
		case 256:
			return 0;
		
		case 257:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 0;
		
		case 260:
			return 0;
		
		case 261:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 7;
		
		case 264:
			return 7;
		
		case 265:
			return 7;
		
		case 266:
			return 7;
		
		case 267:
			return 7;
		
		case 268:
			return 7;
		
		case 269:
			return 7;
		
		case 270:
			return 7;
		
		case 271:
			return 7;
		
		case 272:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return 7;
		
		case 274:
			return 7;
		
		case 275:
			return 7;
		
		case 276:
			return 7;
		
		case 277:
			return 7;
		
		case 278:
			return 7;
		
		case 279:
			return 7;
		
		case 280:
			return 7;
		
		case 281:
			return 7;
		
		case 282:
			return 0;
		
		case 283:
			return 7;
		
		case 284:
			return 7;
		
		case 285:
			return 7;
		
		case 286:
			return 7;
		
		case 287:
			return 7;
		
		case 288:
			return 7;
		
		case 289:
			return 7;
		
		case 290:
			return 7;
		
		case 291:
			return 7;
		
		case 292:
			return 0;
		
		case 293:
			return 7;
		
		case 294:
			return 7;
		
		case 295:
			return 7;
		
		case 296:
			return 7;
		
		case 297:
			return 7;
		
		case 298:
			return 7;
		
		case 299:
			return 7;
		
		case 300:
			return 7;
		
		case 301:
			return 7;
		
		case 302:
			return 0;
		
		case 303:
			return 7;
		
		case 304:
			return 7;
		
		case 305:
			return 7;
		
		case 306:
			return 7;
		
		case 307:
			return 7;
		
		case 308:
			return 7;
		
		case 309:
			return 7;
		
		case 310:
			return 7;
		
		case 311:
			return 7;
		
		case 312:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return 7;
		
		case 314:
			return 7;
		
		case 315:
			return 7;
		
		case 316:
			return 7;
		
		case 317:
			return 7;
		
		case 318:
			return 7;
		
		case 319:
			return 7;
		
		case 320:
			return 7;
		
		case 321:
			return 7;
		
		case 322:
			return 0;
		
		case 323:
			return 7;
		
		case 324:
			return 7;
		
		case 325:
			return 7;
		
		case 326:
			return 7;
		
		case 327:
			return 7;
		
		case 328:
			return 7;
		
		case 329:
			return 7;
		
		case 330:
			return 7;
		
		case 331:
			return 7;
		
		case 332:
			return 0;
		
		case 333:
			return 7;
		
		case 334:
			return 7;
		
		case 335:
			return 7;
		
		case 336:
			return 7;
		
		case 337:
			return 7;
		
		case 338:
			return 7;
		
		case 339:
			return 7;
		
		case 340:
			return 7;
		
		case 341:
			return 7;
		
		case 342:
			return 0;
		
		case 343:
			return 7;
		
		case 344:
			return 7;
		
		case 345:
			return 7;
		
		case 346:
			return 7;
		
		case 347:
			return 7;
		
		case 348:
			return 7;
		
		case 349:
			return 7;
		
		case 350:
			return 7;
		
		case 351:
			return 7;
		
		case 352:
			return 0;
		
		case 353:
			return 7;
		
		case 354:
			return 7;
		
		case 355:
			return 7;
		
		case 356:
			return 7;
		
		case 357:
			return 7;
		
		case 358:
			return 7;
		
		case 359:
			return 7;
		
		case 360:
			return 7;
		
		case 361:
			return 7;
		
		case 362:
			return 0;
		
		case 363:
			return 7;
		
		case 364:
			return 7;
		
		case 365:
			return 7;
		
		case 366:
			return 7;
		
		case 367:
			return 7;
		
		case 368:
			return 7;
		
		case 369:
			return 7;
		
		case 370:
			return 7;
		
		case 371:
			return 7;
		
		case 372:
			return 7;
		
		case 373:
			return 7;
		
		case 374:
			return 7;
		
		case 375:
			return 7;
		
		case 376:
			return 7;
		
		case 377:
			return 7;
		
		case 378:
			return 7;
		
		case 379:
			return 7;
		
		case 380:
			return 7;
		
		case 381:
			return 7;
		
		case 382:
			return 7;
		
		case 383:
			return 7;
		
		case 384:
			return 7;
		
		case 385:
			return 7;
		
		case 386:
			return 7;
		
		case 387:
			return 7;
		
		case 388:
			return 7;
		
		case 389:
			return 7;
		
		case 390:
			return 7;
		
		case 391:
			return 7;
		
		case 392:
			return 7;
		
		case 393:
			return 7;
		
		case 394:
			return 7;
		
		case 395:
			return 7;
		
		case 396:
			return 7;
		
		case 397:
			return 7;
		
		case 398:
			return 7;
		
		case 399:
			return 7;
		
		case 400:
			return 7;
		
		case 401:
			return 7;
		
		case 402:
			return 7;
		
		case 403:
			return 7;
		
		case 404:
			return 7;
		
		case 405:
			return 7;
		
		case 406:
			return 7;
		
		case 407:
			return 7;
		
		case 408:
			return 7;
		
		case 409:
			return 7;
		
		case 410:
			return 7;
		
		case 411:
			return 7;
		
		case 412:
			return 7;
		
		case 413:
			return 0;
		
		default:
	}
	return -1;
}

void func_617(int iParam0)
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	char* sVar3;
	
	iVar0 = func_616(iParam0);
	if (!func_615(iVar0))
	{
		return;
	}
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "CCR_UNL_CLTH";
			break;
		
		case 1:
			sVar1 = "";
			break;
		
		case 2:
			sVar1 = "CCR_UNL_RC";
			break;
		
		case 3:
			sVar1 = "CCR_UNL_FA";
			break;
		
		case 4:
			sVar1 = "CCR_UNL_FT";
			break;
		
		case 5:
			sVar1 = "CCR_UNL_WS";
			break;
		
		case 6:
			sVar1 = "CCR_UNL_LIV";
			break;
		
		case 7:
			sVar1 = "";
			break;
	}
	bVar2 = !func_613();
	sVar3 = func_607(iParam0, bVar2, -1, 0);
	if (!unk_0xACC32B78196FBC2A(sVar1) && !unk_0xACC32B78196FBC2A(sVar3))
	{
		func_606(sVar1, sVar3, 0, 0, 0);
	}
}

int func_618(int iParam0)
{
	int iVar0;
	
	if (!func_621(iParam0))
	{
		return 0;
	}
	if (func_620(iParam0))
	{
		return 0;
	}
	iVar0 = func_619(iParam0);
	if (iVar0 == 513)
	{
		return 0;
	}
	func_639(iVar0, 1, -1);
	return 1;
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 31825;
		
		case 2:
			return 31826;
		
		case 3:
			return 31827;
		
		case 4:
			return 31828;
		
		case 5:
			return 31829;
		
		case 6:
			return 31829;
		
		case 7:
			return 31830;
		
		case 8:
			return 31831;
		
		case 9:
			return 31832;
		
		case 10:
			return 31833;
		
		case 11:
			return 31834;
		
		case 12:
			return 31834;
		
		case 13:
			return 31835;
		
		case 14:
			return 31836;
		
		case 15:
			return 31837;
		
		case 16:
			return 31838;
		
		case 17:
			return 31839;
		
		case 18:
			return 31839;
		
		case 19:
			return 31840;
		
		case 20:
			return 31841;
		
		case 21:
			return 31842;
		
		case 22:
			return 31843;
		
		case 23:
			return 31844;
		
		case 24:
			return 31844;
		
		case 25:
			return 31845;
		
		case 26:
			return 31846;
		
		case 27:
			return 31847;
		
		case 28:
			return 31848;
		
		case 29:
			return 31849;
		
		case 30:
			return 31849;
		
		case 31:
			return 31850;
		
		case 32:
			return 31851;
		
		case 33:
			return 31852;
		
		case 34:
			return 31853;
		
		case 35:
			return 31854;
		
		case 36:
			return 31854;
		
		case 37:
			return 31855;
		
		case 38:
			return 31856;
		
		case 39:
			return 31857;
		
		case 40:
			return 31858;
		
		case 41:
			return 31859;
		
		case 42:
			return 31860;
		
		case 43:
			return 31861;
		
		case 44:
			return 31862;
		
		case 45:
			return 31863;
		
		case 46:
			return 31864;
		
		case 47:
			return 31865;
		
		case 48:
			return 31866;
		
		case 49:
			return 31867;
		
		case 50:
			return 31868;
		
		case 51:
			return 31869;
		
		case 52:
			return 31870;
		
		case 53:
			return 31871;
		
		case 54:
			return 31872;
		
		case 55:
			return 31873;
		
		case 56:
			return 31874;
		
		case 57:
			return 31874;
		
		case 58:
			return 31875;
		
		case 59:
			return 31876;
		
		case 60:
			return 31877;
		
		case 61:
			return 31878;
		
		case 62:
			return 31879;
		
		case 63:
			return 31879;
		
		case 64:
			return 31880;
		
		case 65:
			return 31881;
		
		case 66:
			return 31882;
		
		case 67:
			return 31883;
		
		case 68:
			return 31884;
		
		case 69:
			return 31884;
		
		case 70:
			return 31885;
		
		case 71:
			return 31886;
		
		case 72:
			return 31887;
		
		case 73:
			return 31888;
		
		case 74:
			return 31889;
		
		case 75:
			return 31889;
		
		case 76:
			return 31890;
		
		case 77:
			return 31891;
		
		case 78:
			return 31892;
		
		case joaat("mpsv_lp0_31"):
			return 31893;
		
		case 80:
			return 31894;
		
		case 81:
			return 31894;
		
		case 82:
			return 31895;
		
		case 83:
			return 31896;
		
		case 84:
			return 31897;
		
		case 85:
			return 31898;
		
		case 86:
			return 31899;
		
		case 87:
			return 31899;
		
		case 88:
			return 31900;
		
		case 89:
			return 31901;
		
		case 90:
			return 31902;
		
		case 91:
			return 31903;
		
		case 92:
			return 31904;
		
		case 93:
			return 31905;
		
		case 94:
			return 31906;
		
		case 95:
			return 31907;
		
		case 96:
			return 31908;
		
		case 97:
			return 31909;
		
		case 98:
			return 31910;
		
		case 99:
			return 31911;
		
		case 100:
			return 31912;
		
		case 101:
			return 31913;
		
		case 102:
			return 31914;
		
		case 103:
			return 31915;
		
		case 104:
			return 31916;
		
		case 105:
			return 31917;
		
		case 106:
			return 31918;
		
		case 107:
			return 31919;
		
		case 108:
			return 31920;
		
		case 109:
			return 31921;
		
		case 110:
			return 31922;
		
		case 111:
			return 31923;
		
		case 112:
			return 31924;
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return 31925;
		
		case 114:
			return 31926;
		
		case 115:
			return 31927;
		
		case 116:
			return 31928;
		
		case 117:
			return 31929;
		
		case 118:
			return 31930;
		
		case 119:
			return 31931;
		
		case 120:
			return 31932;
		
		case 121:
			return 31933;
		
		case 122:
			return 31934;
		
		case 123:
			return 31935;
		
		case 124:
			return 31936;
		
		case 125:
			return 31937;
		
		case 126:
			return 31938;
		
		case 127:
			return 31939;
		
		case 128:
			return 31940;
		
		case 129:
			return 31941;
		
		case 130:
			return 31942;
		
		case 131:
			return 31943;
		
		case 132:
			return 31944;
		
		case 133:
			return 31945;
		
		case 134:
			return 31946;
		
		case 135:
			return 31947;
		
		case 136:
			return 31948;
		
		case 137:
			return 31949;
		
		case 138:
			return 31950;
		
		case 139:
			return 31951;
		
		case 140:
			return 31952;
		
		case 141:
			return 31953;
		
		case 142:
			return 31954;
		
		case 143:
			return 31955;
		
		case 144:
			return 31956;
		
		case 145:
			return 31957;
		
		case 146:
			return 31958;
		
		case 147:
			return 31959;
		
		case 148:
			return 31960;
		
		case 149:
			return 31961;
		
		case 150:
			return 31962;
		
		case 151:
			return 31963;
		
		case 152:
			return 31964;
		
		case 153:
			return 31965;
		
		case 154:
			return 31966;
		
		case 155:
			return 31967;
		
		case 156:
			return 31968;
		
		case 157:
			return 31969;
		
		case 158:
			return 31970;
		
		case 159:
			return 31971;
		
		case 160:
			return 31972;
		
		case 161:
			return 31973;
		
		case 162:
			return 31974;
		
		case 163:
			return 31975;
		
		case 164:
			return 31976;
		
		case 165:
			return 31977;
		
		case 166:
			return 31978;
		
		case 167:
			return 31979;
		
		case 168:
			return 31980;
		
		case 169:
			return 31981;
		
		case 170:
			return 31982;
		
		case 171:
			return 31983;
		
		case 172:
			return 31984;
		
		case 173:
			return 31985;
		
		case 174:
			return 31986;
		
		case 175:
			return 31987;
		
		case 176:
			return 31988;
		
		case 177:
			return 31989;
		
		case 178:
			return 31990;
		
		case 179:
			return 31991;
		
		case 180:
			return 31992;
		
		case 181:
			return 31993;
		
		case 182:
			return 31994;
		
		case 183:
			return 31995;
		
		case 184:
			return 31996;
		
		case 185:
			return 31997;
		
		case 186:
			return 31998;
		
		case 187:
			return 31999;
		
		case 188:
			return 32000;
		
		case 189:
			return 32001;
		
		case 190:
			return 32002;
		
		case 191:
			return 32003;
		
		case 192:
			return 32004;
		
		case 193:
			return 32005;
		
		case 194:
			return 32006;
		
		case 195:
			return 32007;
		
		case 196:
			return 32008;
		
		case 197:
			return 32009;
		
		case 198:
			return 32010;
		
		case 199:
			return 32011;
		
		case 200:
			return 32012;
		
		case 201:
			return 32013;
		
		case 202:
			return 32014;
		
		case 203:
			return 32015;
		
		case 204:
			return 32016;
		
		case 205:
			return 32017;
		
		case 206:
			return 32018;
		
		case 207:
			return 32019;
		
		case 208:
			return 32020;
		
		case 209:
			return 32021;
		
		case 210:
			return 32022;
		
		case 211:
			return 32023;
		
		case 212:
			return 32024;
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return 32025;
		
		case 214:
			return 32026;
		
		case 215:
			return 32027;
		
		case 216:
			return 32028;
		
		case 217:
			return 32029;
		
		case 218:
			return 32030;
		
		case 219:
			return 32031;
		
		case 220:
			return 32032;
		
		case 221:
			return 32033;
		
		case 222:
			return 32034;
		
		case 223:
			return 32035;
		
		case 224:
			return 32036;
		
		case 225:
			return 32037;
		
		case 226:
			return 32038;
		
		case 227:
			return 32039;
		
		case 228:
			return 32040;
		
		case 229:
			return 32041;
		
		case 230:
			return 32042;
		
		case 231:
			return 32043;
		
		case 232:
			return 32044;
		
		case 233:
			return 32045;
		
		case 234:
			return 32046;
		
		case 235:
			return 32047;
		
		case 236:
			return 32048;
		
		case 237:
			return 32049;
		
		case 238:
			return 32050;
		
		case 239:
			return 32051;
		
		case 240:
			return 32052;
		
		case 241:
			return 32053;
		
		case 242:
			return 32054;
		
		case 243:
			return 32055;
		
		case 244:
			return 32056;
		
		case 245:
			return 32057;
		
		case 246:
			return 32058;
		
		case 247:
			return 32059;
		
		case 248:
			return 32060;
		
		case 249:
			return 32061;
		
		case 250:
			return 32062;
		
		case 251:
			return 32063;
		
		case 252:
			return 32064;
		
		case 253:
			return 32065;
		
		case 254:
			return 32066;
		
		case 255:
			return 32067;
		
		case 256:
			return 32068;
		
		case 257:
			return 32069;
		
		case 258:
			return 32070;
		
		case 259:
			return 32071;
		
		case 260:
			return 32072;
		
		case 261:
			return 32073;
		
		case 262:
			return 32074;
		
		case 263:
			return 32075;
		
		case 264:
			return 32076;
		
		case 265:
			return 32077;
		
		case 266:
			return 32078;
		
		case 267:
			return 32079;
		
		case 268:
			return 32080;
		
		case 269:
			return 32081;
		
		case 270:
			return 32082;
		
		case 271:
			return 32083;
		
		case 272:
			return 32084;
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return 32085;
		
		case 274:
			return 32086;
		
		case 275:
			return 32087;
		
		case 276:
			return 32088;
		
		case 277:
			return 32089;
		
		case 278:
			return 32090;
		
		case 279:
			return 32091;
		
		case 280:
			return 32092;
		
		case 281:
			return 32093;
		
		case 282:
			return 32094;
		
		case 283:
			return 32095;
		
		case 284:
			return 32096;
		
		case 285:
			return 32097;
		
		case 286:
			return 32098;
		
		case 287:
			return 32099;
		
		case 288:
			return 32100;
		
		case 289:
			return 32101;
		
		case 290:
			return 32102;
		
		case 291:
			return 32103;
		
		case 292:
			return 32104;
		
		case 293:
			return 32105;
		
		case 294:
			return 32106;
		
		case 295:
			return 32107;
		
		case 296:
			return 32108;
		
		case 297:
			return 32109;
		
		case 298:
			return 32110;
		
		case 299:
			return 32111;
		
		case 300:
			return 32112;
		
		case 301:
			return 32113;
		
		case 302:
			return 32114;
		
		case 303:
			return 32115;
		
		case 304:
			return 32116;
		
		case 305:
			return 32117;
		
		case 306:
			return 32118;
		
		case 307:
			return 32119;
		
		case 308:
			return 32120;
		
		case 309:
			return 32121;
		
		case 310:
			return 32122;
		
		case 311:
			return 32123;
		
		case 312:
			return 32124;
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return 32125;
		
		case 314:
			return 32126;
		
		case 315:
			return 32127;
		
		case 316:
			return 32128;
		
		case 317:
			return 32129;
		
		case 318:
			return 32130;
		
		case 319:
			return 32131;
		
		case 320:
			return 32132;
		
		case 321:
			return 32133;
		
		case 322:
			return 32134;
		
		case 323:
			return 32135;
		
		case 324:
			return 32136;
		
		case 325:
			return 32137;
		
		case 326:
			return 32138;
		
		case 327:
			return 32139;
		
		case 328:
			return 32140;
		
		case 329:
			return 32141;
		
		case 330:
			return 32142;
		
		case 331:
			return 32143;
		
		case 332:
			return 32144;
		
		case 333:
			return 32145;
		
		case 334:
			return 32146;
		
		case 335:
			return 32147;
		
		case 336:
			return 32148;
		
		case 337:
			return 32149;
		
		case 338:
			return 32150;
		
		case 339:
			return 32151;
		
		case 340:
			return 32152;
		
		case 341:
			return 32153;
		
		case 342:
			return 32154;
		
		case 343:
			return 32155;
		
		case 344:
			return 32156;
		
		case 345:
			return 32157;
		
		case 346:
			return 32158;
		
		case 347:
			return 32159;
		
		case 348:
			return 32160;
		
		case 349:
			return 32161;
		
		case 350:
			return 32162;
		
		case 351:
			return 32163;
		
		case 352:
			return 32164;
		
		case 353:
			return 32165;
		
		case 354:
			return 32166;
		
		case 355:
			return 32167;
		
		case 356:
			return 32168;
		
		case 357:
			return 32169;
		
		case 358:
			return 32170;
		
		case 359:
			return 32171;
		
		case 360:
			return 32172;
		
		case 361:
			return 32173;
		
		case 362:
			return 32174;
		
		case 363:
			return 32175;
		
		case 364:
			return 32176;
		
		case 365:
			return 32177;
		
		case 366:
			return 32178;
		
		case 367:
			return 32179;
		
		case 368:
			return 32180;
		
		case 369:
			return 32181;
		
		case 370:
			return 32182;
		
		case 371:
			return 32183;
		
		case 372:
			return 32184;
		
		case 373:
			return 32185;
		
		case 374:
			return 32186;
		
		case 375:
			return 32187;
		
		case 376:
			return 32188;
		
		case 377:
			return 32189;
		
		case 378:
			return 32190;
		
		case 379:
			return 32191;
		
		case 380:
			return 32192;
		
		case 381:
			return 32193;
		
		case 382:
			return 32194;
		
		case 383:
			return 32195;
		
		case 384:
			return 32196;
		
		case 385:
			return 32197;
		
		case 386:
			return 32198;
		
		case 387:
			return 32199;
		
		case 388:
			return 32200;
		
		case 389:
			return 32201;
		
		case 390:
			return 32202;
		
		case 391:
			return 32203;
		
		case 392:
			return 32204;
		
		case 393:
			return 32205;
		
		case 394:
			return 32206;
		
		case 395:
			return 32207;
		
		case 396:
			return 32208;
		
		case 397:
			return 32209;
		
		case 398:
			return 32210;
		
		case 399:
			return 32211;
		
		case 400:
			return 32212;
		
		case 401:
			return 32213;
		
		case 402:
			return 32214;
		
		case 403:
			return 32215;
		
		case 404:
			return 32216;
		
		case 405:
			return 32217;
		
		case 406:
			return 32218;
		
		case 407:
			return 32219;
		
		case 408:
			return 32220;
		
		case 409:
			return 32221;
		
		case 410:
			return 32222;
		
		case 411:
			return 32223;
		
		case 412:
			return 32224;
		
		case 413:
			return 32224;
		
		default:
	}
	return 513;
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return Global_262145.f_31286;
		
		case 18:
			return Global_262145.f_31287;
		
		case 30:
			return Global_262145.f_31288;
		
		case 36:
			return Global_262145.f_31289;
		
		default:
	}
	return 0;
}

bool func_621(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 414);
}

void func_622(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	switch (iParam2)
	{
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			*uParam1 = 6;
			break;
		
		case 6:
			*uParam0 = 7;
			break;
		
		case 7:
			*uParam0 = 8;
			break;
		
		case 8:
			*uParam0 = 9;
			break;
		
		case 9:
			*uParam0 = 10;
			break;
		
		case 10:
			*uParam0 = 11;
			*uParam1 = 12;
			break;
		
		case 11:
			*uParam0 = 13;
			break;
		
		case 12:
			*uParam0 = 14;
			break;
		
		case 13:
			*uParam0 = 15;
			break;
		
		case 14:
			*uParam0 = 16;
			break;
		
		case 15:
			*uParam0 = 17;
			*uParam1 = 18;
			break;
		
		case 16:
			*uParam0 = 19;
			break;
		
		case 17:
			*uParam0 = 20;
			break;
		
		case 18:
			*uParam0 = 21;
			break;
		
		case 19:
			*uParam0 = 22;
			break;
		
		case 20:
			*uParam0 = 23;
			*uParam1 = 24;
			break;
		
		case 21:
			*uParam0 = 25;
			break;
		
		case 22:
			*uParam0 = 26;
			break;
		
		case 23:
			*uParam0 = 27;
			break;
		
		case 24:
			*uParam0 = 28;
			break;
		
		case 25:
			*uParam0 = 29;
			*uParam1 = 30;
			break;
		
		case 26:
			*uParam0 = 31;
			break;
		
		case 27:
			*uParam0 = 32;
			break;
		
		case 28:
			*uParam0 = 33;
			break;
		
		case 29:
			*uParam0 = 34;
			break;
		
		case 30:
			*uParam0 = 35;
			*uParam1 = 36;
			break;
		
		case 31:
			*uParam0 = 37;
			break;
		
		case 32:
			*uParam0 = 38;
			break;
		
		case 33:
			*uParam0 = 39;
			break;
		
		case 34:
			*uParam0 = 40;
			break;
		
		case 35:
			*uParam0 = 41;
			break;
		
		case 36:
			*uParam0 = 42;
			break;
		
		case 37:
			*uParam0 = 43;
			break;
		
		case 38:
			*uParam0 = 44;
			break;
		
		case 39:
			*uParam0 = 45;
			break;
		
		case 40:
			*uParam0 = 46;
			break;
		
		case 41:
			*uParam0 = 47;
			break;
		
		case 42:
			*uParam0 = 48;
			break;
		
		case 43:
			*uParam0 = 49;
			break;
		
		case 44:
			*uParam0 = 50;
			break;
		
		case 45:
			*uParam0 = 51;
			break;
		
		case 46:
			*uParam0 = 52;
			break;
		
		case 47:
			*uParam0 = 53;
			break;
		
		case 48:
			*uParam0 = 54;
			break;
		
		case 49:
			*uParam0 = 55;
			break;
		
		case 50:
			*uParam0 = 56;
			*uParam1 = 57;
			break;
		
		case 51:
			*uParam0 = 58;
			break;
		
		case 52:
			*uParam0 = 59;
			break;
		
		case 53:
			*uParam0 = 60;
			break;
		
		case 54:
			*uParam0 = 61;
			break;
		
		case 55:
			*uParam0 = 62;
			*uParam1 = 63;
			break;
		
		case 56:
			*uParam0 = 64;
			break;
		
		case 57:
			*uParam0 = 65;
			break;
		
		case 58:
			*uParam0 = 66;
			break;
		
		case 59:
			*uParam0 = 67;
			break;
		
		case 60:
			*uParam0 = 68;
			*uParam1 = 69;
			break;
		
		case 61:
			*uParam0 = 70;
			break;
		
		case 62:
			*uParam0 = 71;
			break;
		
		case 63:
			*uParam0 = 72;
			break;
		
		case 64:
			*uParam0 = 73;
			break;
		
		case 65:
			*uParam0 = 74;
			*uParam1 = 75;
			break;
		
		case 66:
			*uParam0 = 76;
			break;
		
		case 67:
			*uParam0 = 77;
			break;
		
		case 68:
			*uParam0 = 78;
			break;
		
		case 69:
			*uParam0 = 79;
			break;
		
		case 70:
			*uParam0 = 80;
			*uParam1 = 81;
			break;
		
		case 71:
			*uParam0 = 82;
			break;
		
		case 72:
			*uParam0 = 83;
			break;
		
		case 73:
			*uParam0 = 84;
			break;
		
		case 74:
			*uParam0 = 85;
			break;
		
		case 75:
			*uParam0 = 86;
			*uParam1 = 87;
			break;
		
		case 76:
			*uParam0 = 88;
			break;
		
		case 77:
			*uParam0 = 89;
			break;
		
		case 78:
			*uParam0 = 90;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam0 = 91;
			break;
		
		case 80:
			*uParam0 = 92;
			break;
		
		case 81:
			*uParam0 = 93;
			break;
		
		case 82:
			*uParam0 = 94;
			break;
		
		case 83:
			*uParam0 = 95;
			break;
		
		case 84:
			*uParam0 = 96;
			break;
		
		case 85:
			*uParam0 = 97;
			break;
		
		case 86:
			*uParam0 = 98;
			break;
		
		case 87:
			*uParam0 = 99;
			break;
		
		case 88:
			*uParam0 = 100;
			break;
		
		case 89:
			*uParam0 = 101;
			break;
		
		case 90:
			*uParam0 = 102;
			break;
		
		case 91:
			*uParam0 = 103;
			break;
		
		case 92:
			*uParam0 = 104;
			break;
		
		case 93:
			*uParam0 = 105;
			break;
		
		case 94:
			*uParam0 = 106;
			break;
		
		case 95:
			*uParam0 = 107;
			break;
		
		case 96:
			*uParam0 = 108;
			break;
		
		case 97:
			*uParam0 = 109;
			break;
		
		case 98:
			*uParam0 = 110;
			break;
		
		case 99:
			*uParam0 = 111;
			break;
		
		case 100:
			*uParam0 = 112;
			break;
	}
	switch (iParam2)
	{
		case 101:
			*uParam0 = 113;
			break;
		
		case 102:
			*uParam0 = 114;
			break;
		
		case 103:
			*uParam0 = 115;
			break;
		
		case 104:
			*uParam0 = 116;
			break;
		
		case 105:
			*uParam0 = 117;
			break;
		
		case 106:
			*uParam0 = 118;
			break;
		
		case 107:
			*uParam0 = 119;
			break;
		
		case 108:
			*uParam0 = 120;
			break;
		
		case 109:
			*uParam0 = 121;
			break;
		
		case 110:
			*uParam0 = 122;
			break;
		
		case 111:
			*uParam0 = 123;
			break;
		
		case 112:
			*uParam0 = 124;
			break;
		
		case 113:
			*uParam0 = 125;
			break;
		
		case 114:
			*uParam0 = 126;
			break;
		
		case 115:
			*uParam0 = 127;
			break;
		
		case 116:
			*uParam0 = 128;
			break;
		
		case 117:
			*uParam0 = 129;
			break;
		
		case 118:
			*uParam0 = 130;
			break;
		
		case 119:
			*uParam0 = 131;
			break;
		
		case 120:
			*uParam0 = 132;
			break;
		
		case 121:
			*uParam0 = 133;
			break;
		
		case 122:
			*uParam0 = 134;
			break;
		
		case 123:
			*uParam0 = 135;
			break;
		
		case 124:
			*uParam0 = 136;
			break;
		
		case 125:
			*uParam0 = 137;
			break;
		
		case 126:
			*uParam0 = 138;
			break;
		
		case 127:
			*uParam0 = 139;
			break;
		
		case 128:
			*uParam0 = 140;
			break;
		
		case 129:
			*uParam0 = 141;
			break;
		
		case 130:
			*uParam0 = 142;
			break;
		
		case 131:
			*uParam0 = 143;
			break;
		
		case 132:
			*uParam0 = 144;
			break;
		
		case 133:
			*uParam0 = 145;
			break;
		
		case 134:
			*uParam0 = 146;
			break;
		
		case 135:
			*uParam0 = 147;
			break;
		
		case 136:
			*uParam0 = 148;
			break;
		
		case 137:
			*uParam0 = 149;
			break;
		
		case 138:
			*uParam0 = 150;
			break;
		
		case 139:
			*uParam0 = 151;
			break;
		
		case 140:
			*uParam0 = 152;
			break;
		
		case 141:
			*uParam0 = 153;
			break;
		
		case 142:
			*uParam0 = 154;
			break;
		
		case 143:
			*uParam0 = 155;
			break;
		
		case 144:
			*uParam0 = 156;
			break;
		
		case 145:
			*uParam0 = 157;
			break;
		
		case 146:
			*uParam0 = 158;
			break;
		
		case 147:
			*uParam0 = 159;
			break;
		
		case 148:
			*uParam0 = 160;
			break;
		
		case 149:
			*uParam0 = 161;
			break;
		
		case 150:
			*uParam0 = 162;
			break;
		
		case 151:
			*uParam0 = 163;
			break;
		
		case 152:
			*uParam0 = 164;
			break;
		
		case 153:
			*uParam0 = 165;
			break;
		
		case 154:
			*uParam0 = 166;
			break;
		
		case 155:
			*uParam0 = 167;
			break;
		
		case 156:
			*uParam0 = 168;
			break;
		
		case 157:
			*uParam0 = 169;
			break;
		
		case 158:
			*uParam0 = 170;
			break;
		
		case 159:
			*uParam0 = 171;
			break;
		
		case 160:
			*uParam0 = 172;
			break;
		
		case 161:
			*uParam0 = 173;
			break;
		
		case 162:
			*uParam0 = 174;
			break;
		
		case 163:
			*uParam0 = 175;
			break;
		
		case 164:
			*uParam0 = 176;
			break;
		
		case 165:
			*uParam0 = 177;
			break;
		
		case 166:
			*uParam0 = 178;
			break;
		
		case 167:
			*uParam0 = 179;
			break;
		
		case 168:
			*uParam0 = 180;
			break;
		
		case 169:
			*uParam0 = 181;
			break;
		
		case 170:
			*uParam0 = 182;
			break;
		
		case 171:
			*uParam0 = 183;
			break;
		
		case 172:
			*uParam0 = 184;
			break;
		
		case 173:
			*uParam0 = 185;
			break;
		
		case 174:
			*uParam0 = 186;
			break;
		
		case 175:
			*uParam0 = 187;
			break;
		
		case 176:
			*uParam0 = 188;
			break;
		
		case 177:
			*uParam0 = 189;
			break;
		
		case 178:
			*uParam0 = 190;
			break;
		
		case 179:
			*uParam0 = 191;
			break;
		
		case 180:
			*uParam0 = 192;
			break;
		
		case 181:
			*uParam0 = 193;
			break;
		
		case 182:
			*uParam0 = 194;
			break;
		
		case 183:
			*uParam0 = 195;
			break;
		
		case 184:
			*uParam0 = 196;
			break;
		
		case 185:
			*uParam0 = 197;
			break;
		
		case 186:
			*uParam0 = 198;
			break;
		
		case 187:
			*uParam0 = 199;
			break;
		
		case 188:
			*uParam0 = 200;
			break;
		
		case 189:
			*uParam0 = 201;
			break;
		
		case 190:
			*uParam0 = 202;
			break;
		
		case 191:
			*uParam0 = 203;
			break;
		
		case 192:
			*uParam0 = 204;
			break;
		
		case 193:
			*uParam0 = 205;
			break;
		
		case 194:
			*uParam0 = 206;
			break;
		
		case 195:
			*uParam0 = 207;
			break;
		
		case 196:
			*uParam0 = 208;
			break;
		
		case 197:
			*uParam0 = 209;
			break;
		
		case 198:
			*uParam0 = 210;
			break;
		
		case 199:
			*uParam0 = 211;
			break;
		
		case 200:
			*uParam0 = 212;
			break;
	}
	switch (iParam2)
	{
		case 201:
			*uParam0 = 213;
			break;
		
		case 202:
			*uParam0 = 214;
			break;
		
		case 203:
			*uParam0 = 215;
			break;
		
		case 204:
			*uParam0 = 216;
			break;
		
		case 205:
			*uParam0 = 217;
			break;
		
		case 206:
			*uParam0 = 218;
			break;
		
		case 207:
			*uParam0 = 219;
			break;
		
		case 208:
			*uParam0 = 220;
			break;
		
		case 209:
			*uParam0 = 221;
			break;
		
		case 210:
			*uParam0 = 222;
			break;
		
		case 211:
			*uParam0 = 223;
			break;
		
		case 212:
			*uParam0 = 224;
			break;
		
		case 213:
			*uParam0 = 225;
			break;
		
		case 214:
			*uParam0 = 226;
			break;
		
		case 215:
			*uParam0 = 227;
			break;
		
		case 216:
			*uParam0 = 228;
			break;
		
		case 217:
			*uParam0 = 229;
			break;
		
		case 218:
			*uParam0 = 230;
			break;
		
		case 219:
			*uParam0 = 231;
			break;
		
		case 220:
			*uParam0 = 232;
			break;
		
		case 221:
			*uParam0 = 233;
			break;
		
		case 222:
			*uParam0 = 234;
			break;
		
		case 223:
			*uParam0 = 235;
			break;
		
		case 224:
			*uParam0 = 236;
			break;
		
		case 225:
			*uParam0 = 237;
			break;
		
		case 226:
			*uParam0 = 238;
			break;
		
		case 227:
			*uParam0 = 239;
			break;
		
		case 228:
			*uParam0 = 240;
			break;
		
		case 229:
			*uParam0 = 241;
			break;
		
		case 230:
			*uParam0 = 242;
			break;
		
		case 231:
			*uParam0 = 243;
			break;
		
		case 232:
			*uParam0 = 244;
			break;
		
		case 233:
			*uParam0 = 245;
			break;
		
		case 234:
			*uParam0 = 246;
			break;
		
		case 235:
			*uParam0 = 247;
			break;
		
		case 236:
			*uParam0 = 248;
			break;
		
		case 237:
			*uParam0 = 249;
			break;
		
		case 238:
			*uParam0 = 250;
			break;
		
		case 239:
			*uParam0 = 251;
			break;
		
		case 240:
			*uParam0 = 252;
			break;
		
		case 241:
			*uParam0 = 253;
			break;
		
		case 242:
			*uParam0 = 254;
			break;
		
		case 243:
			*uParam0 = 255;
			break;
		
		case 244:
			*uParam0 = 256;
			break;
		
		case 245:
			*uParam0 = 257;
			break;
		
		case 246:
			*uParam0 = 258;
			break;
		
		case 247:
			*uParam0 = 259;
			break;
		
		case 248:
			*uParam0 = 260;
			break;
		
		case 249:
			*uParam0 = 261;
			break;
		
		case 250:
			*uParam0 = 262;
			break;
		
		case 255:
			*uParam0 = 263;
			break;
		
		case 260:
			*uParam0 = 264;
			break;
		
		case 265:
			*uParam0 = 265;
			break;
		
		case 270:
			*uParam0 = 266;
			break;
		
		case 275:
			*uParam0 = 267;
			break;
		
		case 280:
			*uParam0 = 268;
			break;
		
		case 285:
			*uParam0 = 269;
			break;
		
		case 290:
			*uParam0 = 270;
			break;
		
		case 295:
			*uParam0 = 271;
			break;
		
		case 300:
			*uParam0 = 272;
			break;
	}
	switch (iParam2)
	{
		case 305:
			*uParam0 = 273;
			break;
		
		case 310:
			*uParam0 = 274;
			break;
		
		case 315:
			*uParam0 = 275;
			break;
		
		case 320:
			*uParam0 = 276;
			break;
		
		case 325:
			*uParam0 = 277;
			break;
		
		case 330:
			*uParam0 = 278;
			break;
		
		case 335:
			*uParam0 = 279;
			break;
		
		case 340:
			*uParam0 = 280;
			break;
		
		case 345:
			*uParam0 = 281;
			break;
		
		case 350:
			*uParam0 = 282;
			break;
		
		case 355:
			*uParam0 = 283;
			break;
		
		case 360:
			*uParam0 = 284;
			break;
		
		case 365:
			*uParam0 = 285;
			break;
		
		case 370:
			*uParam0 = 286;
			break;
		
		case 375:
			*uParam0 = 287;
			break;
		
		case 380:
			*uParam0 = 288;
			break;
		
		case 385:
			*uParam0 = 289;
			break;
		
		case 390:
			*uParam0 = 290;
			break;
		
		case 395:
			*uParam0 = 291;
			break;
		
		case 400:
			*uParam0 = 292;
			break;
		
		case 405:
			*uParam0 = 293;
			break;
		
		case 410:
			*uParam0 = 294;
			break;
		
		case 415:
			*uParam0 = 295;
			break;
		
		case 420:
			*uParam0 = 296;
			break;
		
		case 425:
			*uParam0 = 297;
			break;
		
		case 430:
			*uParam0 = 298;
			break;
		
		case 435:
			*uParam0 = 299;
			break;
		
		case 440:
			*uParam0 = 300;
			break;
		
		case 445:
			*uParam0 = 301;
			break;
		
		case 450:
			*uParam0 = 302;
			break;
		
		case 455:
			*uParam0 = 303;
			break;
		
		case 460:
			*uParam0 = 304;
			break;
		
		case 465:
			*uParam0 = 305;
			break;
		
		case 470:
			*uParam0 = 306;
			break;
		
		case 475:
			*uParam0 = 307;
			break;
		
		case 480:
			*uParam0 = 308;
			break;
		
		case 485:
			*uParam0 = 309;
			break;
		
		case 490:
			*uParam0 = 310;
			break;
		
		case 495:
			*uParam0 = 311;
			break;
		
		case 500:
			*uParam0 = 312;
			break;
	}
	switch (iParam2)
	{
		case 505:
			*uParam0 = 313;
			break;
		
		case 510:
			*uParam0 = 314;
			break;
		
		case 515:
			*uParam0 = 315;
			break;
		
		case 520:
			*uParam0 = 316;
			break;
		
		case 525:
			*uParam0 = 317;
			break;
		
		case 530:
			*uParam0 = 318;
			break;
		
		case 535:
			*uParam0 = 319;
			break;
		
		case 540:
			*uParam0 = 320;
			break;
		
		case 545:
			*uParam0 = 321;
			break;
		
		case 550:
			*uParam0 = 322;
			break;
		
		case 555:
			*uParam0 = 323;
			break;
		
		case 560:
			*uParam0 = 324;
			break;
		
		case 565:
			*uParam0 = 325;
			break;
		
		case 570:
			*uParam0 = 326;
			break;
		
		case 575:
			*uParam0 = 327;
			break;
		
		case 580:
			*uParam0 = 328;
			break;
		
		case 585:
			*uParam0 = 329;
			break;
		
		case 590:
			*uParam0 = 330;
			break;
		
		case 595:
			*uParam0 = 331;
			break;
		
		case 600:
			*uParam0 = 332;
			break;
		
		case 605:
			*uParam0 = 333;
			break;
		
		case 610:
			*uParam0 = 334;
			break;
		
		case 615:
			*uParam0 = 335;
			break;
		
		case 620:
			*uParam0 = 336;
			break;
		
		case 625:
			*uParam0 = 337;
			break;
		
		case 630:
			*uParam0 = 338;
			break;
		
		case 635:
			*uParam0 = 339;
			break;
		
		case 640:
			*uParam0 = 340;
			break;
		
		case 645:
			*uParam0 = 341;
			break;
		
		case 650:
			*uParam0 = 342;
			break;
		
		case 655:
			*uParam0 = 343;
			break;
		
		case 660:
			*uParam0 = 344;
			break;
		
		case 665:
			*uParam0 = 345;
			break;
		
		case 670:
			*uParam0 = 346;
			break;
		
		case 675:
			*uParam0 = 347;
			break;
		
		case 680:
			*uParam0 = 348;
			break;
		
		case 685:
			*uParam0 = 349;
			break;
		
		case 690:
			*uParam0 = 350;
			break;
		
		case 695:
			*uParam0 = 351;
			break;
		
		case 700:
			*uParam0 = 352;
			break;
		
		case 705:
			*uParam0 = 353;
			break;
		
		case 710:
			*uParam0 = 354;
			break;
		
		case 715:
			*uParam0 = 355;
			break;
		
		case 720:
			*uParam0 = 356;
			break;
		
		case 725:
			*uParam0 = 357;
			break;
		
		case 730:
			*uParam0 = 358;
			break;
		
		case 735:
			*uParam0 = 359;
			break;
		
		case 740:
			*uParam0 = 360;
			break;
		
		case 745:
			*uParam0 = 361;
			break;
		
		case 750:
			*uParam0 = 362;
			break;
		
		case 755:
			*uParam0 = 363;
			break;
		
		case 760:
			*uParam0 = 364;
			break;
		
		case 765:
			*uParam0 = 365;
			break;
		
		case 770:
			*uParam0 = 366;
			break;
		
		case 775:
			*uParam0 = 367;
			break;
		
		case 780:
			*uParam0 = 368;
			break;
		
		case 785:
			*uParam0 = 369;
			break;
		
		case 790:
			*uParam0 = 370;
			break;
		
		case 795:
			*uParam0 = 371;
			break;
		
		case 800:
			*uParam0 = 372;
			break;
		
		case 805:
			*uParam0 = 373;
			break;
		
		case 810:
			*uParam0 = 374;
			break;
		
		case 815:
			*uParam0 = 375;
			break;
		
		case 820:
			*uParam0 = 376;
			break;
		
		case 825:
			*uParam0 = 377;
			break;
		
		case 830:
			*uParam0 = 378;
			break;
		
		case 835:
			*uParam0 = 379;
			break;
		
		case 840:
			*uParam0 = 380;
			break;
		
		case 845:
			*uParam0 = 381;
			break;
		
		case 850:
			*uParam0 = 382;
			break;
		
		case 855:
			*uParam0 = 383;
			break;
		
		case 860:
			*uParam0 = 384;
			break;
		
		case 865:
			*uParam0 = 385;
			break;
		
		case 870:
			*uParam0 = 386;
			break;
		
		case 875:
			*uParam0 = 387;
			break;
		
		case 880:
			*uParam0 = 388;
			break;
		
		case 885:
			*uParam0 = 389;
			break;
		
		case 890:
			*uParam0 = 390;
			break;
		
		case 895:
			*uParam0 = 391;
			break;
		
		case 900:
			*uParam0 = 392;
			break;
		
		case 905:
			*uParam0 = 393;
			break;
		
		case 910:
			*uParam0 = 394;
			break;
		
		case 915:
			*uParam0 = 395;
			break;
		
		case 920:
			*uParam0 = 396;
			break;
		
		case 925:
			*uParam0 = 397;
			break;
		
		case 930:
			*uParam0 = 398;
			break;
		
		case 935:
			*uParam0 = 399;
			break;
		
		case 940:
			*uParam0 = 400;
			break;
		
		case 945:
			*uParam0 = 401;
			break;
		
		case 950:
			*uParam0 = 402;
			break;
		
		case 955:
			*uParam0 = 403;
			break;
		
		case 960:
			*uParam0 = 404;
			break;
		
		case 965:
			*uParam0 = 405;
			break;
		
		case 970:
			*uParam0 = 406;
			break;
		
		case 975:
			*uParam0 = 407;
			break;
		
		case 980:
			*uParam0 = 408;
			break;
		
		case 985:
			*uParam0 = 409;
			break;
		
		case 990:
			*uParam0 = 410;
			break;
		
		case 995:
			*uParam0 = 411;
			break;
		
		case 1000:
			*uParam0 = 412;
			*uParam1 = 413;
			break;
	}
}

void func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2862239[iParam0 /*3*/][func_182(iParam2)];
	unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
}

void func_624(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<9> Var0;
	
	Var0 = func_631(func_51());
	Var0.f_1 = func_630(func_51());
	Var0.f_2 = func_626(iParam3);
	Var0.f_3 = func_625(iParam3);
	Var0.f_4 = iParam0;
	Var0.f_5 = uParam4;
	Var0.f_7 = iParam1;
	Var0.f_8 = iParam2;
	switch (iParam3)
	{
		case 24:
			Var0.f_6 = 7;
			break;
		
		case 25:
			Var0.f_6 = 14;
			break;
		
		case 26:
			Var0.f_6 = 30;
			break;
		
		default:
			Var0.f_6 = -1;
			break;
	}
	unk_0x533E3FA298CC9B99(&Var0);
}

int func_625(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1266014249;
			break;
		
		case 1:
			iVar0 = 2091706301;
			break;
		
		case 2:
			iVar0 = -2039125155;
			break;
		
		case 3:
			iVar0 = 1291931399;
			break;
		
		case 4:
			iVar0 = 133342785;
			break;
		
		case 5:
			iVar0 = 2095721718;
			break;
		
		case 6:
			iVar0 = 754095229;
			break;
		
		case 7:
			iVar0 = -1833207774;
			break;
		
		case 8:
			iVar0 = -1266395441;
			break;
		
		case 9:
			iVar0 = 822911410;
			break;
		
		case 10:
			iVar0 = 1933323559;
			break;
		
		case 11:
			iVar0 = -1572440453;
			break;
		
		case 12:
			iVar0 = 144494192;
			break;
		
		case 13:
			iVar0 = 285462835;
			break;
		
		case 14:
			iVar0 = 1575988716;
			break;
		
		case 15:
			iVar0 = 1333235958;
			break;
		
		case 16:
			iVar0 = -2007722693;
			break;
		
		case 17:
			iVar0 = -657463068;
			break;
		
		case 18:
			iVar0 = -2033414814;
			break;
		
		case 19:
			iVar0 = 663759342;
			break;
		
		case 20:
			iVar0 = 452601691;
			break;
		
		case 21:
			iVar0 = -1908829608;
			break;
		
		case 22:
			iVar0 = -663198868;
			break;
		
		case 23:
			iVar0 = 846436668;
			break;
		
		case 24:
			iVar0 = -1348286410;
			break;
		
		case 25:
			iVar0 = 865206748;
			break;
		
		case 26:
			iVar0 = 353183058;
			break;
		
		case 27:
			iVar0 = 2126913071;
			break;
		
		case 28:
			iVar0 = -1887187680;
			break;
		
		case 29:
			iVar0 = -1625256047;
			break;
		
		case 30:
			iVar0 = 2016614022;
			break;
		
		case 31:
			iVar0 = 304806486;
			break;
		
		case 32:
			iVar0 = -1728187464;
			break;
		
		case 33:
			iVar0 = -767003637;
			break;
		
		case 34:
			iVar0 = -1220031650;
			break;
		
		case 35:
			iVar0 = 1335582571;
			break;
	}
	return iVar0;
}

int func_626(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			iVar0 = func_627();
			break;
	}
	return iVar0;
}

int func_627()
{
	if (func_629() == -1 || func_628() == -1)
	{
		return -1;
	}
	return (func_629() + func_628());
}

int func_628()
{
	if (Global_1944620.f_3 != 0)
	{
		return Global_1944620.f_3;
	}
	return -1;
}

int func_629()
{
	if (Global_1944620.f_2 != 0)
	{
		return Global_1944620.f_2;
	}
	return -1;
}

int func_630(int iParam0)
{
	if (iParam0 == func_50())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[1];
}

int func_631(int iParam0)
{
	if (iParam0 == func_50())
	{
		return -1;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_8[0];
}

int func_632(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_634(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (to_float(iParam0) - to_float(iVar0));
		iVar2 = floor((fVar1 / to_float(Global_262145.f_30722)));
		return (199 + iVar2);
	}
	fVar3 = (to_float(Global_262145.f_30721) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return floor(func_633(-fVar5, -fVar6, fVar7, 1));
}

float func_633(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_634(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (to_float(Global_262145.f_30721) / 2f);
	return round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

int func_635(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_460.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return func_181(9630, -1, 0) != 0;
		}
	}
	return 0;
}

int func_636()
{
	return (func_637(1001) - 1);
}

int func_637(int iParam0)
{
	if (iParam0 <= 1)
	{
		return 0;
	}
	else if (iParam0 >= 200)
	{
		return (((iParam0 - 199) * Global_262145.f_30722) + func_634(199));
	}
	return func_634(iParam0);
}

int func_638()
{
	return func_181(9833, -1, 0);
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_75();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

bool func_640(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_641(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = round((IntToFloat(Global_262145.f_31159) * Global_262145.f_31258));
			break;
		
		case 1:
			iVar0 = round((IntToFloat(Global_262145.f_31170) * Global_262145.f_31259));
			break;
		
		case 2:
			iVar0 = round((IntToFloat(Global_262145.f_31172) * Global_262145.f_31260));
			break;
		
		case 3:
			iVar0 = round((IntToFloat(Global_262145.f_31191) * Global_262145.f_31261));
			break;
		
		case 4:
			iVar0 = round((IntToFloat(Global_262145.f_31193) * Global_262145.f_31262));
			break;
		
		case 5:
			iVar0 = round((IntToFloat(Global_262145.f_31189) * Global_262145.f_31263));
			break;
		
		case 6:
			iVar0 = round((IntToFloat(Global_262145.f_31174) * Global_262145.f_31264));
			break;
		
		case 7:
			iVar0 = round((IntToFloat(Global_262145.f_31185) * Global_262145.f_31265));
			break;
		
		case 8:
			iVar0 = round((IntToFloat(Global_262145.f_31198) * Global_262145.f_31266));
			break;
		
		case 9:
			iVar0 = round((IntToFloat(Global_262145.f_31197) * Global_262145.f_31267));
			break;
		
		case 10:
			iVar0 = round((IntToFloat(Global_262145.f_31160) * Global_262145.f_31268));
			break;
		
		case 11:
			iVar0 = round((IntToFloat(Global_262145.f_31171) * Global_262145.f_31269));
			break;
		
		case 12:
			iVar0 = round((IntToFloat(Global_262145.f_31173) * Global_262145.f_31270));
			break;
		
		case 13:
			iVar0 = round((IntToFloat(Global_262145.f_31192) * Global_262145.f_31271));
			break;
		
		case 14:
			iVar0 = round((IntToFloat(Global_262145.f_31195) * Global_262145.f_31272));
			break;
		
		case 15:
			iVar0 = round((IntToFloat(Global_262145.f_31194) * Global_262145.f_31273));
			break;
		
		case 16:
			iVar0 = round((IntToFloat(Global_262145.f_31190) * Global_262145.f_31274));
			break;
		
		case 17:
			iVar0 = round((IntToFloat(Global_262145.f_31175) * Global_262145.f_31275));
			break;
		
		case 18:
			iVar0 = round((IntToFloat(Global_262145.f_31186) * Global_262145.f_31276));
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31161) * Global_262145.f_31277));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31165) * Global_262145.f_31277));
					}
					else if (iParam2 == 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31168) * Global_262145.f_31277));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31162) * Global_262145.f_31277));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31166) * Global_262145.f_31277));
					}
					else if (iParam2 == 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31169) * Global_262145.f_31277));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31163) * Global_262145.f_31277));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31167) * Global_262145.f_31277));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31164) * Global_262145.f_31277));
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31204) * Global_262145.f_31278));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31212) * Global_262145.f_31278));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31216) * Global_262145.f_31278));
					}
					break;
				
				case 2:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31205) * Global_262145.f_31278));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31213) * Global_262145.f_31278));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31217) * Global_262145.f_31278));
					}
					break;
				
				case 3:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31206) * Global_262145.f_31278));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31214) * Global_262145.f_31278));
					}
					break;
				
				case 4:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31207) * Global_262145.f_31278));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31215) * Global_262145.f_31278));
					}
					break;
				
				case 5:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31208) * Global_262145.f_31278));
					}
					break;
				
				case 6:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31209) * Global_262145.f_31278));
					}
					break;
				
				case 7:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31210) * Global_262145.f_31278));
					}
					break;
				
				case 8:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31211) * Global_262145.f_31278));
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31218) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31234) * Global_262145.f_31279));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31242) * Global_262145.f_31279));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31246) * Global_262145.f_31279));
					}
					break;
				
				case 2:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31219) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31235) * Global_262145.f_31279));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31243) * Global_262145.f_31279));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31247) * Global_262145.f_31279));
					}
					break;
				
				case 3:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31220) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31236) * Global_262145.f_31279));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31244) * Global_262145.f_31279));
					}
					break;
				
				case 4:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31221) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31237) * Global_262145.f_31279));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31245) * Global_262145.f_31279));
					}
					break;
				
				case 5:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31222) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31238) * Global_262145.f_31279));
					}
					break;
				
				case 6:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31223) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31239) * Global_262145.f_31279));
					}
					break;
				
				case 7:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31224) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31240) * Global_262145.f_31279));
					}
					break;
				
				case 8:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31225) * Global_262145.f_31279));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31241) * Global_262145.f_31279));
					}
					break;
				
				case 9:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31226) * Global_262145.f_31279));
					}
					break;
				
				case 10:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31227) * Global_262145.f_31279));
					}
					break;
				
				case 11:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31228) * Global_262145.f_31279));
					}
					break;
				
				case 12:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31229) * Global_262145.f_31279));
					}
					break;
				
				case 13:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31230) * Global_262145.f_31279));
					}
					break;
				
				case 14:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31231) * Global_262145.f_31279));
					}
					break;
				
				case 15:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31232) * Global_262145.f_31279));
					}
					break;
				
				case 16:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31233) * Global_262145.f_31279));
					}
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31176) * Global_262145.f_31280));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31180) * Global_262145.f_31280));
					}
					else if (iParam2 == 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31183) * Global_262145.f_31280));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31177) * Global_262145.f_31280));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31181) * Global_262145.f_31280));
					}
					else if (iParam2 == 2)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31184) * Global_262145.f_31280));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31178) * Global_262145.f_31280));
					}
					else if (iParam2 == 3)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31182) * Global_262145.f_31280));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = round((IntToFloat(Global_262145.f_31179) * Global_262145.f_31280));
					}
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 1:
					iVar0 = round((IntToFloat(Global_262145.f_31187) * Global_262145.f_31281));
					break;
				
				case 2:
					iVar0 = round((IntToFloat(Global_262145.f_31188) * Global_262145.f_31281));
					break;
			}
			break;
		
		case 24:
			iVar0 = round((IntToFloat(Global_262145.f_31200) * Global_262145.f_31282));
			break;
		
		case 25:
			iVar0 = round((IntToFloat(Global_262145.f_31201) * Global_262145.f_31282));
			break;
		
		case 26:
			iVar0 = round((IntToFloat(Global_262145.f_31202) * Global_262145.f_31282));
			break;
		
		case 27:
			iVar0 = round((IntToFloat(Global_262145.f_31199) * Global_262145.f_31283));
			break;
		
		case 28:
			iVar0 = round((IntToFloat(Global_262145.f_31196) * Global_262145.f_31284));
			break;
		
		case 29:
			iVar0 = round((IntToFloat(Global_262145.f_31294) * Global_262145.f_31296));
			break;
		
		case 30:
			iVar0 = round((IntToFloat(Global_262145.f_31295) * Global_262145.f_31297));
			break;
		
		case 31:
			iVar0 = round((IntToFloat(Global_262145.f_31203) * Global_262145.f_31285));
			break;
		
		case 32:
			iVar0 = round((IntToFloat(Global_262145.f_31307) * Global_262145.f_31311));
			break;
		
		case 33:
			iVar0 = round((IntToFloat(Global_262145.f_31308) * Global_262145.f_31312));
			break;
		
		case 34:
			iVar0 = round((IntToFloat(Global_262145.f_31309) * Global_262145.f_31313));
			break;
		
		case 35:
			iVar0 = round((IntToFloat(Global_262145.f_31310) * Global_262145.f_31314));
			break;
	}
	return iVar0;
}

bool func_642(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 36);
}

void func_643(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_612() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
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

bool func_644()
{
	return Local_538.f_122.f_17 == iLocal_501;
}

bool func_645()
{
	return func_536() >= 1;
}

void func_646()
{
	func_530(0);
	if (func_533())
	{
		func_531(func_177(0, 1));
	}
}

void func_647()
{
	func_729();
	func_718();
	if (func_717(iLocal_501, 1))
	{
		if (unk_0xD4538F501EDCD96C() == 2 || func_715() >= 2)
		{
			func_531(func_177(0, 1));
			func_714(1);
		}
	}
	switch (func_715())
	{
		case 0:
			func_712(&(Local_538.f_122.f_9), 10000);
			break;
		
		case 1:
			func_701();
			func_700();
			func_674();
			break;
		
		case 2:
			func_701();
			func_700();
			break;
	}
	func_668();
	func_648();
}

void func_648()
{
	if (!func_667())
	{
		return;
	}
	if (func_666())
	{
		func_649(func_657());
	}
}

void func_649(int iParam0)
{
	int iVar0;
	
	func_651(iParam0);
	iVar0 = func_650(iParam0);
	if (iVar0 == 1)
	{
		func_579("TSA_TIC_INVSNTs", iVar0, 0);
	}
	else
	{
		func_579("TSA_TIC_INVSNT", iVar0, 0);
	}
	func_120(&(Local_214.f_47));
}

int func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (unk_0xE2D0C323A1AE5D85(iParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_651(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = -1;
	iVar1 = -1;
	if (func_202(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = func_203(unk_0x9E2D6C50374FCFA9());
		iVar1 = func_201(unk_0x9E2D6C50374FCFA9());
	}
	else
	{
		iVar0 = func_655(unk_0x9E2D6C50374FCFA9());
		iVar1 = func_654();
	}
	iVar2 = func_653(iVar0, iVar1);
	if (iVar2 != -1)
	{
		func_652(iParam0, iVar2);
	}
}

void func_652(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.x = -1675759720;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	unk_0x2700C00F82C16BF0(1, &Var0, 3, iParam0);
}

int func_653(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 276:
			switch (iParam1)
			{
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_654()
{
	return Global_2810287.f_5193.f_344;
}

int func_655(int iParam0)
{
	if (func_656(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_32;
	}
	return -1;
}

int func_656(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_32 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_657()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = unk_0xA1087A6350CD9244(iVar2);
		if ((iVar1 != iLocal_498 && func_664(iVar1)) && func_658(iVar1))
		{
			unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
		}
		iVar2++;
	}
	return uVar0;
}

int func_658(int iParam0)
{
	if (!func_663(iParam0))
	{
		return 0;
	}
	if (!func_661(iLocal_498, iParam0, 1))
	{
		return 0;
	}
	if (func_660(iParam0) != 1)
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
	{
		if (!func_659(unk_0x407E03586628E458(iParam0), unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0), -1))
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

int func_659(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0) && !unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		if (unk_0x87B449F4C26E764A(iParam0, iParam1))
		{
			if (unk_0xAB793EA186AB8DAA(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_660(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

int func_661(int iParam0, int iParam1, bool bParam2)
{
	if (func_662(iParam0) && func_662(iParam1))
	{
		if (Global_2689156[iParam0 /*453*/].f_319.f_6 == Global_2689156[iParam1 /*453*/].f_319.f_6)
		{
			if (bParam2)
			{
				return Global_2680195.f_903.f_1[iParam0] == Global_2680195.f_903.f_1[iParam1];
			}
			return 1;
		}
	}
	return 0;
}

int func_662(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_9(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_664(int iParam0)
{
	if (!func_9(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_202(iParam0, 1))
	{
		return 0;
	}
	if (func_665(iParam0))
	{
		return 0;
	}
	if (func_73(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_665(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_58 != func_50();
}

int func_666()
{
	if (!func_15(&(Local_214.f_47), Global_262145.f_30813, 0))
	{
		return 0;
	}
	return 1;
}

int func_667()
{
	if (func_10() != iLocal_498)
	{
		return 0;
	}
	switch (func_715())
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

void func_668()
{
	int iVar0;
	struct<21> Var1;
	int iVar2;
	int iVar3;
	
	Var1.f_20 = 20;
	iVar3 = 0;
	while (iVar3 < unk_0x9418088815C89D59(1))
	{
		iVar0 = unk_0xB1D84E0EF6979085(1, iVar3);
		switch (iVar0)
		{
			case 153:
				if (!unk_0x92039F20B184AB4D(1, iVar3, &Var1, 56))
				{
					return;
				}
				iVar2 = 0;
				while (iVar2 < Var1.f_19)
				{
					if (Var1.f_20[iVar2] == unk_0x69CE66B03B2184EB())
					{
						func_670(func_673(), &Var1);
					}
					iVar2++;
				}
				break;
			
			case 154:
				if (!unk_0x92039F20B184AB4D(1, iVar3, &Var1, 56))
				{
					return;
				}
				iVar2 = 0;
				while (iVar2 < Var1.f_19)
				{
					if (Var1.f_20[iVar2] == unk_0x69CE66B03B2184EB())
					{
						func_670(func_669(), &Var1);
					}
					iVar2++;
				}
				break;
		}
		iVar3++;
	}
}

char* func_669()
{
	switch (func_13())
	{
		case 1:
			return "TSA_TIC_CD_LFT";
		
		case 2:
			return "TSA_TIC_HH_LFT";
		
		case 3:
			return "TSA_TIC_SR_LFT";
		
		default:
	}
	return "";
}

int func_670(char* sParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x150D8F58B26E9F70(sParam0);
	unk_0x76DB21247AE4E4E2(func_671(sParam1));
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	func_580(15, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_671(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_672(&cVar0);
}

var func_672(char[4] cParam0)
{
	return cParam0;
}

char* func_673()
{
	switch (func_13())
	{
		case 1:
			return "TSA_TIC_CD_JND";
		
		case 2:
			return "TSA_TIC_HH_JND";
		
		case 3:
			return "TSA_TIC_SR_JND";
		
		default:
	}
	return "";
}

void func_674()
{
	if (!func_403(iLocal_501, 23))
	{
		if (!func_1147(73))
		{
			if (func_699(2500))
			{
				if (func_686(func_698(), func_697(), 1, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					func_684(2500);
					func_496(73);
				}
			}
		}
		else if (func_676())
		{
			func_675(23);
		}
	}
}

void func_675(int iParam0)
{
	if (func_19(&(Local_545[iLocal_500 /*38*/].f_1), iParam0))
	{
	}
}

int func_676()
{
	func_701();
	func_700();
	unk_0x58699DA34F83B510(1);
	unk_0x3F606B4ABC46C107(0, 0, 1065353216);
	if (!func_17(&(Local_546.f_2)))
	{
		func_682();
	}
	else if (func_15(&(Local_546.f_2), func_681(), 0))
	{
		if (func_677())
		{
			return 1;
		}
	}
	return 0;
}

int func_677()
{
	if (!func_17(&(Local_546.f_4)))
	{
		func_679();
		unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
		func_16(&(Local_546.f_4), 0, 0);
	}
	else if (!unk_0x52522E25010580A1(Local_546.f_1) || func_15(&(Local_546.f_4), func_678() + 1000, 0))
	{
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

int func_678()
{
	return 5000;
}

void func_679()
{
	unk_0x588DDCB644C6486A(Local_546, 0);
	unk_0x588DDCB644C6486A(Local_546.f_1, 0);
	Local_546 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xDEE4F5F0B93BE664(Local_546, unk_0xCACAD935C0BEE14F(iLocal_503, -1.6f, -1.5f, func_680()));
	unk_0x98A99A554B458431(Local_546, iLocal_503, 0f, 0f, 0f, 1);
	unk_0x0A18C027350D3C19(Local_546, unk_0x372E271FE8A97311());
	Local_546.f_1 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xDEE4F5F0B93BE664(Local_546.f_1, unk_0xCB284F809B594322());
	unk_0x93150D31CE38FE75(Local_546.f_1, unk_0x9C0ED16B4F524508(2), 2);
	unk_0x0A18C027350D3C19(Local_546.f_1, unk_0x372E271FE8A97311());
	unk_0xDD786B89B15AA63F(Local_546, 1);
	unk_0x889B4F9D52E23DEE(Local_546.f_1, Local_546, 5000, 3, 1);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
	unk_0x9BAE3263D9B1FCB9(Local_546, "HAND_SHAKE", 0.3f);
}

float func_680()
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	
	if (iLocal_504 != 0)
	{
		func_278(iLocal_504, &uVar1, &Var2, 1086324736, 1080033280, 1077936128);
		fVar0 = Var2.f_2;
	}
	else
	{
		fVar0 = 0.5f;
	}
	return fVar0;
}

int func_681()
{
	return 6000;
}

void func_682()
{
	int iVar0;
	int iVar1;
	
	unk_0x588DDCB644C6486A(Local_546, 0);
	unk_0x588DDCB644C6486A(Local_546.f_1, 0);
	iVar1 = 3;
	iVar0 = unk_0x5853B15F78E1A265(0, iVar1);
	if (!unk_0x876B1078E90C91CB(Local_546))
	{
		Local_546 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!unk_0x876B1078E90C91CB(Local_546.f_1))
	{
		Local_546.f_1 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	unk_0x3FB84450A94CB528(Local_546, iLocal_499, func_683(1, iVar0, 1), 1);
	unk_0x98A99A554B458431(Local_546, iLocal_499, func_683(1, iVar0, 0), 1);
	unk_0x3FB84450A94CB528(Local_546.f_1, iLocal_499, func_683(2, iVar0, 1), 1);
	unk_0x98A99A554B458431(Local_546.f_1, iLocal_499, func_683(2, iVar0, 0), 1);
	unk_0x0A18C027350D3C19(Local_546, 34.9554f);
	unk_0x0A18C027350D3C19(Local_546.f_1, 34.9554f);
	unk_0xDD786B89B15AA63F(Local_546, 1);
	unk_0x889B4F9D52E23DEE(Local_546.f_1, Local_546, func_681(), 0, 1);
	unk_0x9BAE3263D9B1FCB9(Local_546, "HAND_SHAKE", 0.3f);
	unk_0x9BAE3263D9B1FCB9(Local_546.f_1, "HAND_SHAKE", 0.3f);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
	func_120(&(Local_546.f_2));
	func_16(&(Local_546.f_2), 0, 0);
}

Vector3 func_683(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			if (bParam2)
			{
				return 1.3015f, 5.2783f, 0.0878f;
			}
			else
			{
				return 0.5597f, 2.3777f, 0.2789f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return 2.7647f, 4.4739f, 0.6398f;
			}
			else
			{
				return 0.9114f, 2.115f, 0.6153f;
			}
		}
		else if (bParam2)
		{
			return -1.7122f, 6.1183f, 0.8633f;
		}
		else
		{
			return 1.9024f, 2.8556f, 1.2344f;
		}
	}
	else if (iParam1 == 0)
	{
		if (bParam2)
		{
			return -0.5811f, 4.4837f, 0.7696f;
		}
		else
		{
			return 0.4665f, 1.676f, 0.6287f;
		}
	}
	else if (iParam1 == 1)
	{
		if (bParam2)
		{
			return -1.3625f, 4.5793f, 0.6336f;
		}
		else
		{
			return 0.0291f, 1.9218f, 0.6077f;
		}
	}
	else if (bParam2)
	{
		return 1.3784f, 6.1317f, 0.8623f;
	}
	else
	{
		return 0.0428f, 2.4647f, 0.6911f;
	}
	return 0f, 0f, 0f;
}

int func_684(int iParam0)
{
	func_685(40);
	if (!unk_0xE9E8955A780DDA01())
	{
		if (!unk_0xECD40FEF3CF43BDB())
		{
			unk_0x5A7ACD1CDF509B0D(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_685(int iParam0)
{
	if (func_131(&uLocal_510, iParam0))
	{
	}
}

int func_686(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22691.f_6 = 1;
	if (Global_2703656.f_924 && Global_2703656.f_932)
	{
		func_693(0, bParam7);
		return 1;
	}
	if (unk_0x04458B4E5D9E466A() && !bParam7)
	{
		if (Global_2703656.f_924)
		{
			func_693(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x2981C54770E1D19C() && !bParam7) && !unk_0xBC4351060BEFB0D2())
	{
		return 0;
	}
	if (!func_396())
	{
		if (func_692(unk_0x9E2D6C50374FCFA9(), 1, 0) && !(func_691() || func_690()))
		{
			if (((bParam7 && func_9(unk_0x9E2D6C50374FCFA9(), 1, 0)) && unk_0x04458B4E5D9E466A()) && Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_231 == 1)
			{
			}
			else if (func_689() == 28)
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
	if (!Global_2703656.f_924 && !bParam9)
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if ((unk_0x48053974ED6F63CE((Var1.x - Param0.x)) < 0.2f && unk_0x48053974ED6F63CE((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x48053974ED6F63CE((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x48053974ED6F63CE(fVar2) < 1f)
			{
				Global_2703656.f_924 = 0;
				Global_2703656.f_925 = 0;
				if (unk_0xBC4351060BEFB0D2())
				{
					unk_0x093F334B2F3729DB();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2703656.f_926 || !Param0.f_1 == Global_2703656.f_926.f_1) || !Param0.f_2 == Global_2703656.f_926.f_2) || !fParam1 == Global_2703656.f_929)
	{
		if (Global_2703656.f_924 == 1)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2703656.f_930) < func_391(0))
			{
				return 0;
			}
			unk_0x093F334B2F3729DB();
			Global_2703656.f_925 = 1;
		}
		else
		{
			Global_2703656.f_925 = 0;
		}
		Global_2703656.f_926 = { Param0 };
		Global_2703656.f_929 = fParam1;
		Global_2703656.f_924 = 0;
	}
	if (bParam2)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2703656.f_924 && !unk_0xBC4351060BEFB0D2())
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
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_100026.f_1392[44], 16))
			{
				func_688(0);
			}
			if (!unk_0x0CC0416F24BE03FF(unk_0xE2D3D51028F0428A(), &(Global_2667222.f_501)))
			{
				Global_2667222.f_501 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if (unk_0x817B926B53C0589A(iVar0))
				{
					Global_2703656.f_931 = 0;
				}
			}
		}
		if (Global_2703656.f_931 > -1)
		{
			Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_924 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						if (unk_0x3A8B0F5B0E3DE13A(iVar0))
						{
							unk_0xC64B6E13A6A7F517(iVar0, Param0, 0, 1, 1, 1);
							unk_0xBBF86885619695CE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0x8CE3D365F064F69E(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xE7DD33D0E2A313F4(iVar0);
						}
					}
					else
					{
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam1);
					}
				}
				else
				{
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam1);
				}
				func_693(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x5639E771F6085BF6();
				unk_0x8A87922C72F578EC(unk_0x9E2D6C50374FCFA9(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_924 = 1;
		}
	}
	if (Global_2703656.f_924)
	{
		Global_22691.f_6 = 1;
		Global_2703656.f_930 = unk_0x0A89FDFA763DCAED();
		if (Global_2703656.f_931 > -1)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			}
			if (func_687(&(Global_2703656.f_931), Param0, fParam1, iVar0))
			{
				func_693(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Global_2703656.f_926) < 2f)
				{
					if (unk_0xBC4351060BEFB0D2())
					{
						unk_0x093F334B2F3729DB();
					}
					func_693(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0xBC4351060BEFB0D2())
			{
				if (fParam10 != 0f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						unk_0x8CE3D365F064F69E(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2703656.f_932 = 1;
						return 0;
					}
				}
				func_693(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_687(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(Global_2703656.f_933) && !unk_0x55B23FE400FCEA6B(Global_2703656.f_933, 0))
	{
		unk_0xE7DD33D0E2A313F4(Global_2703656.f_933);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703656.f_933 = iParam3;
			unk_0xE7DD33D0E2A313F4(Global_2703656.f_933);
			if (unk_0x3A8B0F5B0E3DE13A(Global_2703656.f_933))
			{
				if (!unk_0x55B23FE400FCEA6B(Global_2703656.f_933, 0))
				{
					unk_0xBBF86885619695CE(Global_2703656.f_933, fParam2);
					unk_0xC64B6E13A6A7F517(Global_2703656.f_933, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_688(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667222.f_2689;
	if ((unk_0xF1557162766FCDEB() && Global_2667222.f_2687 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667222.f_2686)
	{
		if (!unk_0xF5A00C1EB6E872B8())
		{
			Global_2667222.f_2686 = iVar0;
		}
	}
}

int func_689()
{
	return Global_1574980;
}

bool func_690()
{
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 12)) && Global_1965714 == 8);
}

bool func_691()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_692(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2689156[iParam0 /*453*/].f_231 == 99)
	{
		if ((iParam2 && Global_2689156[iParam0 /*453*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689156[iParam0 /*453*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_693(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x080C97B891E2F3AA(0f, 1065353216);
		unk_0x94953C3FF0664F66(0f);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
	}
	if (!bParam1)
	{
		unk_0x5639E771F6085BF6();
	}
	if (unk_0xBC4351060BEFB0D2())
	{
		unk_0x093F334B2F3729DB();
	}
	func_696();
	if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 14) && !func_695())
	{
		func_694();
	}
}

void func_694()
{
	Global_2819657.f_92 = 1;
}

int func_695()
{
	if (!unk_0x44859561F653DD4E() && !func_396())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_143910[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

void func_696()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

float func_697()
{
	return 270f;
}

Vector3 func_698()
{
	switch (func_526())
	{
		case 2:
			if (func_525(iLocal_500))
			{
				return -2127f, 1152.253f, 24.6659f;
			}
			return -2127f, 1144.98f, 24.6659f;
		
		case 3:
			if (func_525(iLocal_500))
			{
				return -2127f, 1078.99f, 24.663f;
			}
			return -2127f, 1069.415f, 24.686f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_699(int iParam0)
{
	func_496(40);
	if (!unk_0xA829C9A2767AC8EF())
	{
		if (!unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x859006DB870314C5(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_700()
{
	if (iLocal_504 == 0)
	{
		return;
	}
	unk_0x58699DA34F83B510(0);
	unk_0x5089DD830FA61D71(0, 1, 1);
	unk_0x5089DD830FA61D71(0, 2, 1);
	unk_0x5089DD830FA61D71(0, 26, 1);
	unk_0x5089DD830FA61D71(0, 79, 1);
	unk_0x5089DD830FA61D71(0, 286, 1);
	unk_0x5089DD830FA61D71(0, 287, 1);
	unk_0x5089DD830FA61D71(0, 86, 1);
	unk_0x5089DD830FA61D71(0, 65, 1);
	unk_0x5089DD830FA61D71(0, 101, 1);
	unk_0x5089DD830FA61D71(0, 81, 1);
	unk_0x5089DD830FA61D71(0, 82, 1);
	unk_0x5089DD830FA61D71(0, 71, 1);
	unk_0x5089DD830FA61D71(0, 0, 1);
	unk_0x5AD47D8CFC3A86AF();
	switch (iLocal_504)
	{
		case joaat("blazer5"):
			unk_0x7653D561C9574763(0, 101, 1);
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
			unk_0x7653D561C9574763(0, 357, 1);
			unk_0x7653D561C9574763(0, 101, 1);
			break;
	}
	unk_0x7653D561C9574763(0, 80, 1);
	unk_0x7653D561C9574763(0, 351, 1);
	func_515(iLocal_503, 1);
}

void func_701()
{
	func_709();
	unk_0xC43E67C9BA871ECB();
	func_702(0);
}

void func_702(int iParam0)
{
	if (func_708())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_707(0))
		{
			func_703(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_703(int iParam0)
{
	if (func_708())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_706())
		{
			func_705(1, 1);
		}
		else
		{
			func_705(0, 0);
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
	if (!func_704())
	{
		Global_19954.f_1 = 3;
	}
}

int func_704()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_705(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_707(0))
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

bool func_706()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_707(int iParam0)
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

bool func_708()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_709()
{
	func_711();
	func_710(6, -1);
	func_710(7, -1);
	func_710(3, -1);
	func_710(1, -1);
	func_710(2, -1);
	func_710(11, -1);
	func_710(13, -1);
	func_710(14, -1);
	func_710(16, -1);
}

void func_710(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1644209.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644209.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_711()
{
	Global_2810287.f_4599 = 0;
}

void func_712(var uParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Local_214.f_54, 0))
	{
		return;
	}
	if (!func_17(uParam0))
	{
		return;
	}
	if (func_713(*uParam0, (iParam1 - 5000), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
		unk_0xCED9E32812D6C7C7(&(Local_214.f_54), 0);
	}
}

int func_713(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x9315DBF7D972F07A() && !bParam3)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_714(int iParam0)
{
	if (func_131(&(Local_545[iLocal_500 /*38*/].f_30), iParam0))
	{
	}
}

int func_715()
{
	return func_716();
}

int func_716()
{
	return Local_545[iLocal_500 /*38*/];
}

bool func_717(int iParam0, int iParam1)
{
	return func_4(&(Local_545[iParam0 /*38*/].f_30), iParam1);
}

void func_718()
{
	if (!func_728())
	{
		return;
	}
	func_719();
}

void func_719()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xA1087A6350CD9244(iVar1);
		if (iVar0 == iLocal_498)
		{
		}
		else if (unk_0x0D01086B38EC256F(iVar0))
		{
			if (unk_0x976D40337FCB1481(iVar0))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_214.f_53, iVar1) && func_726(iVar0))
				{
					func_720(iVar0, func_725(6), 1, 0);
					unk_0xCED9E32812D6C7C7(&(Local_214.f_53), iVar1);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_214.f_53, iVar1) && func_726(iVar0))
			{
				func_720(iVar0, func_725(6), 0, 0);
				unk_0xB0550BC91B0159D6(&(Local_214.f_53), iVar1);
			}
		}
		iVar1++;
	}
}

void func_720(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_722(iParam0))
	{
		return;
	}
	if (func_721(&(Global_2678323.f_624[iParam0]), &(Global_2678323.f_987[iParam0]), &(Global_2678323.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_459[iParam0] = iParam1;
		}
	}
}

int func_721(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_722(int iParam0)
{
	if (iParam0 == func_50())
	{
		return 1;
	}
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_723())
	{
		return 1;
	}
	return 0;
}

int func_723()
{
	switch (func_184())
	{
		case 0:
			return func_724();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_724()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_725(int iParam0)
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

bool func_726(int iParam0)
{
	return func_727(&(Global_2678323.f_624[iParam0]));
}

int func_727(var uParam0)
{
	if (unk_0x87C0DA419F19FF57(*uParam0))
	{
		if (!*uParam0 == unk_0x69CE66B03B2184EB())
		{
			return 0;
		}
	}
	return 1;
}

int func_728()
{
	switch (func_715())
	{
		case 2:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

void func_729()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Local_218.f_508.f_5 == 0)
	{
		return;
	}
	if (iLocal_504 == 0)
	{
		return;
	}
	if (!func_17(&(Local_538.f_228)))
	{
		return;
	}
	iVar0 = 500;
	Call_Loc(Local_218.f_508.f_5);
	iVar1 = StackVal;
	if (func_15(&(Local_538.f_228), (iVar1 + iVar0), 0))
	{
		return;
	}
	if (func_15(&(Local_538.f_228), (iVar1 - iVar0), 0))
	{
		if (unk_0xF01464D7AF0B7347(0, 71))
		{
			iVar2 = 1400;
			iVar3 = round((to_float(iVar2) - to_float(iVar2)));
			Global_1574481 = 1;
			Global_1574481.f_1 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), (iVar3 * -1));
			Global_1574481.f_2 = 0f;
			if (unk_0x55A0C756C4A8220C(iLocal_503, 0))
			{
				Global_1574481.f_2 = unk_0x207D53F9E0190691(iLocal_503);
				if (unk_0x3A8B0F5B0E3DE13A(iLocal_503))
				{
					unk_0x888AC6FC97C7EBC7(iLocal_503, 1);
				}
			}
			Global_1574481.f_3 = 0;
			unk_0x9DCF157443EA30D6("RaceTurbo", 0, 0);
		}
	}
}

int func_730()
{
	if ((func_731() + unk_0xD4538F501EDCD96C()) < 2)
	{
		return 1;
	}
	return 0;
}

int func_731()
{
	return func_650(iLocal_493);
}

bool func_732()
{
	return func_10() == iLocal_498;
}

int func_733()
{
	func_649(func_657());
	func_735(1);
	Local_538.f_122.f_17 = func_734();
	return 1;
}

int func_734()
{
	return -1;
}

void func_735(int iParam0)
{
	if (func_19(&(Local_545[iLocal_500 /*38*/].f_30), iParam0))
	{
	}
}

int func_736()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_538.f_122.f_2[iVar0] = -1;
		iVar0++;
	}
	func_530(1);
	return 1;
}

int func_737()
{
	return 1;
}

void func_738(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 1:
			if (!func_717(unk_0x74BD5C0C45A40771(), 0))
			{
				func_746(Local_214.f_2, func_747(), 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_746(func_745(), func_747(), 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("FM_AE_TITL_2"), 64);
			func_740(func_744(Local_545[iLocal_500 /*38*/].f_37, 0, Local_217.f_98), Local_217.f_98, &Var0, 1, -1, 4, 1, 0, 0, 1, 0, func_743(), 0);
			func_739();
			break;
		
		case 0:
		case 2:
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_450.f_1);
			func_746(StackVal, Local_217.f_388[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_217.f_388[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
	}
}

void func_739()
{
	Global_1645739.f_1130 = 1;
}

void func_740(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_742(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_741(5, iVar0);
		Global_1645739.f_3663[iVar0] = uParam0;
		Global_1645739.f_3663.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1645739.f_3663.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1645739.f_3663.f_194[iVar0] = iParam3;
		Global_1645739.f_3663.f_183[iVar0] = iParam4;
		Global_1645739.f_3663.f_216[iVar0] = iParam5;
		Global_1645739.f_3663.f_227[iVar0] = iParam6;
		Global_1645739.f_3663.f_270[iVar0] = iParam7;
		Global_1645739.f_3663.f_281[iVar0] = iParam8;
		Global_1645739.f_3663.f_292[iVar0] = iParam9;
		Global_1645739.f_3663.f_303[iVar0] = iParam10;
		Global_1645739.f_3663.f_314[iVar0] = uParam11;
		Global_1645739.f_3663.f_325[iVar0] = iParam12;
	}
}

void func_741(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_742(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

int func_743()
{
	if (((unk_0xE2F2D76A4AA269FF() == 8 || unk_0xE2F2D76A4AA269FF() == 9) || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 12)
	{
		return 1;
	}
	return 0;
}

int func_744(int iParam0, int iParam1, int iParam2)
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

int func_745()
{
	return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_9);
}

void func_746(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_742(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_741(7, iVar0);
		Global_1645739.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1645739.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_4617.f_172[iVar0] = iParam2;
		Global_1645739.f_4617.f_216[iVar0] = iParam3;
		Global_1645739.f_4617.f_183[iVar0] = iParam4;
		Global_1645739.f_4617.f_194[iVar0] = iParam5;
		Global_1645739.f_4617.f_249[iVar0] = iParam6;
		Global_1645739.f_4617.f_260[iVar0] = iParam7;
		Global_1645739.f_4617.f_205[iVar0] = iParam8;
		Global_1645739.f_4617.f_314[iVar0] = iParam9;
		Global_1645739.f_4617.f_325[iVar0] = iParam10;
		Global_1645739.f_4617.f_357[iVar0] = iParam11;
		Global_1645739.f_4617.f_238[iVar0] = iParam12;
		Global_1645739.f_4617.f_271[iVar0] = iParam13;
		Global_1645739.f_4617.f_368[iVar0] = iParam14;
		Global_1645739.f_4617.f_379[iVar0] = iParam15;
		Global_1645739.f_4617.f_390[iVar0] = iParam16;
		Global_1645739.f_4617.f_227[iVar0] = iParam17;
	}
}

char* func_747()
{
	return "TSA_TIME";
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xD4538F501EDCD96C();
		
		case 2:
			return func_749(0, (10000 - func_750(&(Local_538.f_122.f_9), 0, 0)));
		
		default:
	}
	return func_750(&Local_214, 0, 0);
}

int func_749(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_750(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return (func_715() == 0 && func_17(&(Local_538.f_122.f_9)));
		
		case 1:
			return func_715() >= 3;
		
		default:
	}
	return 0;
}

void func_752(int iParam0)
{
	if (iParam0 == (Local_217.f_98 - 1))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Finish", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
	else
	{
		unk_0x91DFC8F68F6D9B05(-1, "Checkpoint", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
}

bool func_753(int iParam0)
{
	return func_754(iParam0);
}

bool func_754(int iParam0)
{
	if (func_3(19) || func_403(iLocal_501, 22))
	{
		return 0;
	}
	Call_Loc(Local_218.f_515);
	return (StackVal && iParam0 == Local_545[iLocal_500 /*38*/].f_35);
}

void func_755()
{
	Local_545[iLocal_500 /*38*/].f_35 = (Local_545[iLocal_500 /*38*/].f_35 + 1 % Local_217.f_98);
}

void func_756()
{
	if (func_717(unk_0x74BD5C0C45A40771(), 0))
	{
		Local_214.f_2 = func_745();
		if (Local_214.f_3 == 0 || Local_214.f_3 > Local_214.f_2)
		{
			Local_214.f_3 = Local_214.f_2;
		}
		func_714(0);
	}
	Local_545[iLocal_500 /*38*/].f_37 = 0;
	func_675(22);
}

void func_757()
{
	if (Local_545[iLocal_500 /*38*/].f_35 == 0)
	{
		if (!func_717(unk_0x74BD5C0C45A40771(), 0))
		{
			Local_214.f_9 = unk_0x0A89FDFA763DCAED();
			func_735(0);
		}
	}
}

void func_758(int iParam0)
{
	int iVar0;
	
	if (bLocal_496 && unk_0x81F82FFBED0CACCA(iParam0))
	{
		Local_538.f_122.f_17 = iParam0;
	}
	func_517(0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_538.f_122.f_2[iVar0] == iParam0)
		{
		}
		else if (Local_538.f_122.f_2[iVar0] == -1)
		{
			Local_538.f_122.f_2[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
}

int func_759()
{
	return 1;
}

void func_760()
{
	unk_0x91DFC8F68F6D9B05(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
}

void func_761(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x91DFC8F68F6D9B05(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

int func_762()
{
	switch (func_715())
	{
		case 2:
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_763()
{
	Local_217.f_343 = 60;
	Local_217.f_343.f_1 = 1;
	Local_217.f_430 = 1;
	Local_217.f_388[0 /*6*/] = 1;
	Local_217.f_388[0 /*6*/].f_2 = 2;
	Local_217.f_388[0 /*6*/].f_3 = 4;
	Local_217.f_388[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_217.f_388[1 /*6*/] = 4;
	Local_217.f_388[1 /*6*/].f_3 = 3;
	Local_217.f_388[2 /*6*/] = 4;
	Local_217.f_388[2 /*6*/].f_3 = 3;
	Local_217.f_388[2 /*6*/].f_1 = "TSA_HUD_START";
}

void func_764()
{
	Local_218.f_13 = 201817;
	Local_218.f_508.f_6 = 201789;
	Local_218.f_508.f_4 = 201761;
	Local_218.f_515.f_8 = 201752;
	Local_218.f_515.f_9 = 201532;
	Local_218.f_515.f_10 = 201493;
	Local_218.f_515.f_11 = 201472;
	Local_218.f_515.f_4 = 201438;
	Local_218.f_515.f_6 = 201422;
	Local_218.f_515.f_5 = 201087;
	Local_218.f_450 = 200977;
	Local_218.f_450.f_1 = 200822;
	Local_218.f_450.f_2 = 200422;
	Local_218.f_45.f_2.f_1 = 200389;
	Local_218.f_45.f_2.f_2 = 200356;
	Local_218.f_535 = 190673;
	Local_218.f_535.f_1 = 200330;
	Local_218.f_453.f_1 = 200283;
	Local_218.f_453 = 200251;
	Local_218.f_2 = 200203;
	Local_218.f_1 = 199794;
	Local_218.f_3.f_1 = 199382;
	Local_218.f_3 = 199239;
	Local_218.f_75.f_1 = 199205;
	Local_218.f_15.f_29 = 199191;
	Local_218.f_97.f_5 = 199087;
	Local_218.f_97.f_4 = 199062;
	Local_218.f_51 = 198977;
	Local_218.f_51.f_1 = 198658;
	Local_218.f_11 = 198524;
	Local_218.f_11.f_1 = 193065;
}

void func_765()
{
	func_550(0, 20, 198481);
	func_549(0, 1, 1);
	func_546(0, 198462);
	func_550(1, 44, 136860);
	func_549(1, 2, 2);
	func_546(1, 193172);
	func_550(2, 45, 193155);
	func_527(2, 3);
	func_550(3, 48, 136860);
}

void func_766()
{
	func_552("TSA_CD_COL", 0);
}

void func_767()
{
	func_768(86, "TSA_STSTART_CD", "TSA_STRAP_CD", 1, -1, 2, 1, 0);
	func_643(191);
	func_518(9877, -1);
}

int func_768(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_817(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_815(&(Var0.f_69), iParam7);
	}
	return func_769(&Var0);
}

int func_769(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_783(uParam0, uParam0->f_17);
	func_780(uParam0);
	if (func_78())
	{
		func_780(uParam0);
	}
	if (func_779(uParam0->f_1))
	{
		func_772();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_771(uParam0->f_69, 8192))
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
				func_772();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_815(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_771(uParam0->f_69, 128))
			{
				if (func_770(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_815(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_770(int iParam0)
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

bool func_771(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_772()
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
	func_773();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_773()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_777(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_774(&(Global_2703656.f_2738.f_1), 1);
}

void func_774(var uParam0, int iParam1)
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
				if (unk_0xA829C9A2767AC8EF() && !func_776(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_775(0);
}

void func_775(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_776(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_777(var uParam0)
{
	func_778(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_778(var uParam0)
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

int func_779(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_780(var uParam0)
{
	if (func_782(uParam0->f_1))
	{
		uParam0->f_72 = func_781();
	}
}

int func_781()
{
	return 21;
}

int func_782(int iParam0)
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

void func_783(var uParam0, int iParam1)
{
	if (func_782(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_50() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_770(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_784(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_784(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_309(iParam0) && !bParam4)
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
	if (((func_309(unk_0x9E2D6C50374FCFA9()) || (func_814() && func_813())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		iVar1 = func_812();
		if (unk_0xE5965CDF24F93A9F(iVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_9(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_810(iParam1, iParam0, 0);
							}
							else
							{
								return func_796(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_796(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_810(iParam1, iParam0, 0);
				}
				else
				{
					return func_785(0, -1, 0);
				}
			}
			else
			{
				return func_785(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_810(iParam1, iParam0, 0);
		}
		else
		{
			return func_796(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_796(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_785(bool bParam0, int iParam1, bool bParam2)
{
	return func_786(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_786(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_795() || (func_794() && func_792())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_791(iParam2, iVar0);
		}
		else
		{
			return func_791(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_305(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_790(1);
				}
				else
				{
					return func_790(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_787(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_787(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_790(1);
	}
	return func_790(0);
}

int func_787(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_789(iParam0, iParam1, iParam3);
	if (func_788(Global_4718592.f_86750, 1))
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

int func_788(int iParam0, bool bParam1)
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

int func_789(int iParam0, int iParam1, int iParam2)
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
			if (!func_305(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_790(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_789(iParam1, iParam0, 4);
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

bool func_792()
{
	if (func_793())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_793()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_794()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_795()
{
	if (func_793() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_796(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_802())
			{
				iVar3 = func_801(iParam0);
				if (!iVar3 == -1)
				{
					return func_799(iVar3);
				}
			}
			if ((func_798(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_305(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_790(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_797(1);
			}
			else
			{
				return func_786(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_790(1);
			}
			else
			{
				return func_786(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_801(iParam0);
	if (!iVar4 == -1)
	{
		return func_799(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_797(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_798(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_799(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_800(iParam0);
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

var func_800(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_801(int iParam0)
{
	if (!iParam0 == func_50())
	{
		if (func_57(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_82(iParam0)];
		}
	}
	return -1;
}

int func_802()
{
	if ((((((func_378() || func_809()) || func_78()) || func_808()) || func_807()) || func_805()) || func_803())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_803()
{
	return func_804(Global_4718592.f_86750);
}

int func_804(int iParam0)
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

int func_805()
{
	return func_806(Global_4718592.f_86750);
}

int func_806(int iParam0)
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

var func_807()
{
	return Global_2714627.f_24;
}

var func_808()
{
	return Global_2714627.f_21;
}

var func_809()
{
	return Global_2714627.f_18;
}

int func_810(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_802())
	{
		iVar2 = func_801(iParam1);
		if (!iVar2 == -1)
		{
			return func_799(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_50())
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
			iVar0 = func_786(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_811(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_305(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_797(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_811(int iParam0)
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

var func_812()
{
	return Global_2621446.f_2;
}

bool func_813()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_814()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

void func_815(var uParam0, int iParam1)
{
	func_816(uParam0, iParam1);
}

void func_816(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_817(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_50();
	uParam1->f_18 = func_50();
	uParam1->f_19 = func_50();
	uParam1->f_20 = func_50();
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

void func_818()
{
	func_548(0);
	func_517(8);
}

void func_819()
{
	if (func_17(&(Local_538.f_122.f_7)))
	{
		func_552("TSA_CD_STAR", 0);
	}
	else
	{
		func_552("TSA_CD_WIP", 0);
	}
}

void func_820()
{
	func_565(0, 20);
	func_562(0, 1, 198599);
	func_565(1, 44);
	func_560(1, 2);
	func_565(2, 45);
	func_562(2, 3, 198586);
	func_565(3, 48);
}

bool func_821()
{
	return func_12(0);
}

int func_822()
{
	if (func_823())
	{
		return func_15(&(Local_538.f_122.f_7), 30000, 0);
	}
	func_120(&(Local_538.f_122.f_7));
	return 0;
}

bool func_823()
{
	return unk_0xD4538F501EDCD96C() >= 2;
}

var func_824()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = Local_538.f_122.f_2[iVar1];
		if (iVar0 != -1 && unk_0x81F82FFBED0CACCA(iVar0))
		{
			switch (iVar1)
			{
				case 0:
					if (iVar0 == iLocal_501)
					{
						switch (unk_0xD4538F501EDCD96C())
						{
							case 2:
								return Global_262145.f_31183;
							
							case 3:
								return Global_262145.f_31180;
							
							case 4:
								return Global_262145.f_31176;
							}
						
						default:
					}
					break;
				
				case 1:
					if (iVar0 == iLocal_501)
					{
						switch (unk_0xD4538F501EDCD96C())
						{
							case 2:
								return Global_262145.f_31184;
							
							case 3:
								return Global_262145.f_31181;
							
							case 4:
								return Global_262145.f_31177;
							}
						
						default:
					}
					break;
				
				case 2:
					if (iVar0 == iLocal_501)
					{
						switch (unk_0xD4538F501EDCD96C())
						{
							case 3:
								return Global_262145.f_31182;
							
							case 4:
								return Global_262145.f_31178;
							}
						
						default:
					}
					break;
				
				case 3:
					if (iVar0 == iLocal_501)
					{
						switch (unk_0xD4538F501EDCD96C())
						{
							case 4:
								return Global_262145.f_31179;
							}
						
						default:
					}
					break;
				}
		}
		iVar1++;
	}
	return Global_262145.f_31179;
}

var func_825()
{
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		switch (unk_0xD4538F501EDCD96C())
		{
			case 2:
				return Global_262145.f_30809;
			
			case 3:
				return Global_262145.f_30808;
			
			case 4:
				return Global_262145.f_30807;
			}
		
		default:
	}
	return Global_262145.f_30810;
}

int func_826()
{
	if (func_716() > 0)
	{
		return 0;
	}
	return func_571(4);
}

void func_827()
{
	int iVar0;
	
	if (func_476() != 3)
	{
		return;
	}
	func_573(17, -1, -1, -1, 1065353216);
	func_573(6, -1, -1, -1, 1065353216);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_538.f_122.f_2[iVar0] == iLocal_501)
		{
			func_573(22, iVar0 + 1, unk_0xD4538F501EDCD96C(), -1, 1065353216);
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_828()
{
	return func_716() > 0;
}

int func_829()
{
	switch (func_716())
	{
		case 1:
		case 2:
			return 2;
		
		default:
	}
	return 1;
}

void func_830()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (func_716() < 2)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x5D79167FED95F0B0())
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar2)))
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!bVar0)
					{
						if (Local_538.f_122.f_2[iVar1] == func_734() || Local_538.f_122.f_2[iVar1] == unk_0x54F800F95142C750(iVar2))
						{
							Local_538.f_122.f_2[iVar1] = unk_0x54F800F95142C750(iVar2);
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						iVar2++;
					}

void func_831()
{
	if (unk_0xD4538F501EDCD96C() == 4 || func_716() >= 1)
	{
		if (func_717(iLocal_501, 1))
		{
			func_531(func_177(0, 1));
			func_714(1);
		}
	}
	if (func_716() == 0)
	{
		func_712(&(Local_538.f_122.f_7), 30000);
	}
	func_668();
	func_834();
	func_832();
}

void func_832()
{
	if (!func_833())
	{
		return;
	}
	func_719();
}

int func_833()
{
	switch (func_716())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_834()
{
	if (!func_837())
	{
		return;
	}
	if (func_666())
	{
		func_649(func_835());
	}
}

int func_835()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if ((iVar2 != iLocal_498 && func_664(iVar2)) && func_836(iVar2))
		{
			unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_836(int iParam0)
{
	if (!func_663(iParam0))
	{
		return 0;
	}
	if (!func_661(iLocal_498, iParam0, 1))
	{
		return 0;
	}
	if (func_660(iParam0) != 1)
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0) && !func_659(unk_0x407E03586628E458(iParam0), unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_837()
{
	if (func_10() != iLocal_498)
	{
		return 0;
	}
	switch (func_716())
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_838()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_538.f_122.f_2[iVar0] = func_734();
		iVar0++;
	}
	Local_538.f_122.f_17 = func_734();
	func_840();
	func_735(1);
	func_839();
	return 1;
}

void func_839()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3[100];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { -1850.687f, 998.052f, 24.666f };
	iVar1 = 30;
	iVar2 = 25;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar7 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	while (iVar6 < Local_217.f_98)
	{
		while (iVar4 == -1 || iVar5 == -1)
		{
			iVar4 = unk_0x5853B15F78E1A265(0, 10);
			iVar5 = unk_0x5853B15F78E1A265(0, 10);
			if (iVar6 > 0 && (unk_0x07141611FD632B59(((iVar3[(iVar6 - 1)] / 10) - iVar4)) < 3 && unk_0x07141611FD632B59(((iVar3[(iVar6 - 1)] % 10) - iVar5)) < 3))
			{
				iVar4 = -1;
				iVar5 = -1;
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < iVar6)
				{
					if (iVar3[iVar7] == (iVar4 * 10 + iVar5))
					{
						iVar4 = -1;
						iVar5 = -1;
					}
					else
					{
						iVar7++;
					}
				}
			}
		}
		iVar3[iVar6] = (iVar4 * 10 + iVar5);
		Local_538.f_122.f_20[iVar6 /*3*/] = { Var0 + Vector(0f, IntToFloat((iVar2 * iVar5)), IntToFloat((-iVar1 * iVar4))) };
		iVar4 = -1;
		iVar5 = -1;
		iVar6++;
	}
}

void func_840()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_835();
	func_651(func_835());
	iVar1 = func_650(iVar0);
	if (iVar1 == 1)
	{
		func_579("TSA_TIC_INVSNTs", iVar1, 0);
	}
	else
	{
		func_579("TSA_TIC_INVSNT", iVar1, 0);
	}
}

int func_841()
{
	Local_217.f_98.f_1[(Local_217.f_98 - 1) /*12*/].f_8 = 38;
	Local_217.f_98.f_1[(Local_217.f_98 - 1) /*12*/].f_5 = 4;
	return 1;
}

char* func_842(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_HT_CD_START";
		
		default:
	}
	return "";
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_716() == 2 && func_181(9877, -1, 0) <= 3);
		
		default:
	}
	return 0;
}

int func_844()
{
	if ((func_731() + unk_0xD4538F501EDCD96C()) < 4)
	{
		return 1;
	}
	return 0;
}

char* func_845(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "TSA_TICK_FRSTR";
		
		default:
	}
	return "";
}

char* func_846(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "TSA_TICK_FRST";
		
		default:
	}
	return "";
}

void func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	int iVar4;
	
	switch (iParam0)
	{
		case 1:
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_450.f_1);
			func_746(StackVal, Local_217.f_388[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_217.f_388[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar0 = Local_538.f_122.f_2[iVar4];
				if (iVar0 != -1 && unk_0x81F82FFBED0CACCA(iVar0))
				{
					switch (iVar4)
					{
						case 0:
							iVar2 = 109;
							StringCopy(&Var3, unk_0xAEF70623D03F7B02("TSA_FIRST"), 64);
							iVar1 = 7;
							break;
						
						case 1:
							iVar2 = 108;
							StringCopy(&Var3, unk_0xAEF70623D03F7B02("TSA_SECOND"), 64);
							iVar1 = 6;
							break;
						
						case 2:
							iVar2 = 107;
							StringCopy(&Var3, unk_0xAEF70623D03F7B02("TSA_THIRD"), 64);
							iVar1 = 5;
							break;
						
						case 3:
							iVar2 = 1;
							StringCopy(&Var3, unk_0xAEF70623D03F7B02("TSA_FOURTH"), 64);
							iVar1 = 4;
							break;
					}
					StringConCat(&Var3, ": ", 64);
					StringConCat(&Var3, unk_0x61042CA2A97BBB69(unk_0x6B01934FA503547F(iVar0)), 64);
					func_740(func_744(func_849(iVar0), 0, func_848()), func_848(), &Var3, iVar2, -1, iVar1, 1, 0, 0, iVar2, 0, func_743(), 0);
				}
				iVar4++;
			}
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_450.f_1);
			func_746(StackVal, "TSA_TIME", 0, 1, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_739();
			break;
	}
}

int func_848()
{
	return Local_217.f_98;
}

int func_849(int iParam0)
{
	if (iParam0 == -1)
	{
		func_849(iLocal_500);
	}
	return Local_545[iParam0 /*38*/].f_37;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xD4538F501EDCD96C();
		
		case 1:
			return func_749(0, func_852());
		
		case 2:
			return func_851();
		
		default:
	}
	return 0;
}

int func_851()
{
	if (func_716() == 2)
	{
		return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_9);
	}
	else if (func_716() > 2)
	{
		return Local_214.f_2;
	}
	return 0;
}

int func_852()
{
	if (func_17(&(Local_538.f_122.f_7)))
	{
		return (30000 - func_750(&(Local_538.f_122.f_7), 0, 0));
	}
	return 30000;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_716())
			{
				case 0:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (func_716())
			{
				case 0:
					return func_17(&(Local_538.f_122.f_7));
				
				default:
			}
			break;
		
		case 2:
			switch (func_716())
			{
				case 2:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_854(int iParam0)
{
	if (iParam0 == (Local_217.f_98 - 1))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Finish_Winner", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
	else
	{
		unk_0x91DFC8F68F6D9B05(-1, "Checkpoint", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
	if (func_849(iLocal_500) > func_849(Local_538.f_122.f_2[0]))
	{
		func_855();
	}
	if (iParam0 == (Local_217.f_98 - 1))
	{
		if (func_717(unk_0x74BD5C0C45A40771(), 0))
		{
			Local_214.f_2 = func_851();
			if (Local_214.f_3 == 0 || Local_214.f_3 > Local_214.f_2)
			{
				Local_214.f_3 = Local_214.f_2;
			}
		}
	}
}

void func_855()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = 0;
	func_856(5, &Var0);
}

void func_856(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = -1351718157;
	Var0.f_1 = iLocal_498;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *iParam1 };
	unk_0x2700C00F82C16BF0(1, &Var0, 5, func_857(1));
}

var func_857(int iParam0)
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
			if (func_9(iVar2, 0, 0))
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

void func_858()
{
	Local_214.f_2 = func_851();
}

void func_859()
{
	if (!func_717(unk_0x74BD5C0C45A40771(), 0))
	{
		Local_214.f_9 = unk_0x0A89FDFA763DCAED();
		func_735(0);
	}
}

Vector3 func_860(int iParam0)
{
	return Local_538.f_122.f_20[iParam0 /*3*/];
}

void func_861(int iParam0)
{
	if (bLocal_496 && unk_0x81F82FFBED0CACCA(iParam0))
	{
		Local_538.f_122.f_17 = iParam0;
	}
	func_517(0);
}

void func_862(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1[4];
	bool bVar2;
	bool bVar3;
	
	bVar2 = false;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_538.f_122.f_2[iVar0] != iParam0)
		{
			if (!bVar2)
			{
				if (iParam1 > func_849(Local_538.f_122.f_2[iVar0]) || !unk_0x81F82FFBED0CACCA(Local_538.f_122.f_2[iVar0]))
				{
					iVar1[iVar0] = iParam0;
					bVar2 = true;
				}
			}
			iVar1[((iVar0 + func_863(bVar2)) - func_863(bVar3))] = Local_538.f_122.f_2[iVar0];
		}
		else
		{
			bVar3 = true;
			if (!bVar2)
			{
				iVar1[iVar0] = iParam0;
				bVar2 = true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_538.f_122.f_2[iVar0] = iVar1[iVar0];
		iVar0++;
	}
}

int func_863(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_864()
{
	return 1;
}

void func_865()
{
	unk_0x91DFC8F68F6D9B05(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	func_496(74);
}

void func_866(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x91DFC8F68F6D9B05(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

void func_867()
{
	int iVar0;
	
	Local_217.f_343 = 60;
	Local_217.f_343.f_1 = 1;
	Local_217.f_98 = 20;
	iVar0 = 0;
	while (iVar0 < Local_217.f_98)
	{
		Local_217.f_98.f_1[iVar0 /*12*/] = { Local_538.f_122.f_20[iVar0 /*3*/] };
		Local_217.f_98.f_1[iVar0 /*12*/].f_3 = 21f;
		Local_217.f_98.f_1[iVar0 /*12*/].f_4 = 14f;
		iVar0++;
	}
	Local_217.f_430 = 1;
	Local_217.f_388[0 /*6*/] = 1;
	Local_217.f_388[0 /*6*/].f_2 = 4;
	Local_217.f_388[0 /*6*/].f_3 = 4;
	Local_217.f_388[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_217.f_388[1 /*6*/] = 4;
	Local_217.f_388[1 /*6*/].f_3 = 3;
	Local_217.f_388[1 /*6*/].f_1 = "TSA_HUD_START";
	Local_217.f_388[2 /*6*/] = 4;
}

void func_868()
{
	Local_218.f_13 = 219318;
	Local_218.f_11 = 218978;
	Local_218.f_11.f_1 = 217876;
	Local_218.f_89.f_3 = 217839;
	Local_218.f_89.f_3.f_1 = 217748;
	Local_218.f_89.f_3.f_2 = 217736;
	Local_218.f_89.f_3.f_3 = 217736;
	Local_218.f_450 = 217564;
	Local_218.f_450.f_2 = 216489;
	Local_218.f_450.f_1 = 216391;
	Local_218.f_515 = 216328;
	Local_218.f_515.f_8 = 216319;
	Local_218.f_515.f_5 = 216258;
	Local_218.f_515.f_10 = 216219;
	Local_218.f_515.f_14 = 216183;
	Local_218.f_10 = 214888;
	Local_218.f_508.f_6 = 214860;
	Local_218.f_508.f_4 = 214838;
	Local_218.f_453.f_3 = 214698;
	Local_218.f_453.f_1 = 214466;
	Local_218.f_453 = 214408;
	Local_218 = 214399;
	Local_218.f_1 = 214323;
	Local_218.f_535 = 190673;
	Local_218.f_535.f_1 = 214297;
	Local_218.f_3.f_1 = 206185;
	Local_218.f_3 = 205972;
	Local_218.f_97.f_5 = 203069;
	Local_218.f_97 = 203050;
	Local_218.f_97.f_4 = 202764;
	Local_218.f_75.f_1 = 202718;
	Local_218.f_15.f_23.f_1 = 202708;
	Local_218.f_15.f_23.f_2 = 202699;
	Local_218.f_15.f_23.f_3 = 202690;
	Local_218.f_15.f_23.f_4 = 202681;
	Local_218.f_15.f_29 = 202588;
	Local_218.f_51 = 202503;
	Local_218.f_51.f_1 = 202465;
}

var func_869()
{
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		return Global_262145.f_30784;
	}
	return Global_262145.f_30785;
}

var func_870()
{
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		switch (unk_0xD4538F501EDCD96C())
		{
			case 2:
				return Global_262145.f_30778;
			
			case 3:
				return Global_262145.f_30777;
			
			case 4:
				return Global_262145.f_30776;
			}
		
		default:
	}
	return Global_262145.f_30570;
}

int func_871()
{
	switch (func_873())
	{
		case 2:
			if (func_872(iLocal_501) != 0)
			{
				return 1;
			}
			break;
		
		case 3:
		case 4:
		case 5:
			return 1;
	}
	return 0;
}

int func_872(int iParam0)
{
	return Local_545[iParam0 /*38*/].f_32;
}

int func_873()
{
	return func_716();
}

int func_874()
{
	return 0;
}

int func_875()
{
	return 1;
}

int func_876()
{
	return 1;
}

int func_877()
{
	return 10;
}

int func_878()
{
	switch (func_879())
	{
		case 4:
		case 5:
			return 2;
		
		default:
	}
	return 1;
}

int func_879()
{
	return func_24();
}

int func_880()
{
	switch (func_873())
	{
		case 0:
		case 1:
			if (!func_882(iLocal_498))
			{
				return 1;
			}
			if (func_881(iLocal_500) > 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_881(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = (unk_0x5D79167FED95F0B0() - 1);
	while (iVar1 >= 0)
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			if (iVar1 == iParam0)
			{
			}
			else
			{
				iVar0++;
				iVar1 = (iVar1 + -1);
			}
			return iVar0;
		}

int func_882(int iParam0)
{
	if (!func_663(iParam0))
	{
		return 0;
	}
	if (func_660(iParam0) != 0)
	{
		return 0;
	}
	if (!func_635(iParam0))
	{
		return 0;
	}
	if (!func_884(iParam0) && !func_883(iParam0))
	{
		return 0;
	}
	if (!func_661(iLocal_498, iParam0, 1))
	{
		return 0;
	}
	return 1;
}

int func_883(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_200, 29))
	{
		return 1;
	}
	return 0;
}

int func_884(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_200, 27))
	{
		return 1;
	}
	return 0;
}

bool func_885()
{
	return Local_538.f_122.f_17 == iLocal_501;
}

void func_886()
{
	int iVar0;
	
	if (func_476() != 3)
	{
		return;
	}
	func_496(74);
	if (Local_538.f_122.f_17 == iLocal_501)
	{
		func_922(108, -1);
		func_893(3, 1);
		func_573(0, -1, -1, -1, 1065353216);
		func_573(10, -1, -1, -1, 1065353216);
	}
	iVar0 = 0;
	while (iVar0 < Local_214.f_18)
	{
		if (Local_214.f_4[iVar0] != -1 && Local_214.f_18.f_1[Local_214.f_4[iVar0] /*3*/] == iLocal_498)
		{
			func_573(19, iVar0 + 1, unk_0xD4538F501EDCD96C(), -1, 1065353216);
			func_573(0, -1, -1, -1, 1065353216);
			func_573(10, -1, -1, -1, 1065353216);
		}
		else
		{
			iVar0++;
		}
	}
	func_643(187);
	Local_214.f_32 = func_526();
	Local_214.f_32.f_1 = Local_538.f_122.f_18;
	Local_214.f_32.f_2 = unk_0xD4538F501EDCD96C();
	Local_214.f_32.f_4 = { func_888(iLocal_500) };
	Local_214.f_32.f_7 = { func_887() };
	Local_214.f_32.f_3 = Local_538.f_122.f_17 == iLocal_501;
}

Vector3 func_887()
{
	return 799.0592f, -1860.477f, 28.34921f;
}

Vector3 func_888(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_891(func_892(iParam0), 1085276160, 1091043328, 2) };
	return unk_0x6DB7FBD602C51670(func_890(), func_889(), Var0);
}

float func_889()
{
	return 90f;
}

Vector3 func_890()
{
	return 910.9156f, -1570.844f, 29.7857f;
}

Vector3 func_891(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 % iParam3);
	iVar1 = (iParam0 / iParam3);
	return (fParam1 * IntToFloat(iVar0)), (-fParam2 * IntToFloat(iVar1)), 0f;
}

int func_892(int iParam0)
{
	int iVar0;
	
	iVar0 = func_881(iParam0);
	if (iVar0 < Local_538.f_122.f_11 && Local_538.f_122.f_11[iVar0] != -1)
	{
		return Local_538.f_122.f_11[iVar0];
	}
	return iVar0;
}

void func_893(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_921(300, -1))
	{
		return;
	}
	iVar0 = 0;
	switch (Global_262145.f_30754)
	{
		case 0:
			if (iParam0 != 0)
			{
				return;
			}
			func_915(iParam0, iParam1, Global_262145.f_30755, &iVar0);
			func_912(Global_262145.f_30756);
			break;
		
		case 1:
			if (iParam0 != 1)
			{
				return;
			}
			func_915(iParam0, iParam1, Global_262145.f_30755, &iVar0);
			func_912(Global_262145.f_30756);
			break;
		
		case 2:
			if (iParam0 != 2)
			{
				return;
			}
			func_915(iParam0, iParam1, Global_262145.f_30755, &iVar0);
			func_912(Global_262145.f_30756);
			break;
		
		case 3:
			if (iParam0 != 3)
			{
				return;
			}
			func_898(iParam0, Global_262145.f_30755, &iVar0);
			func_912(Global_262145.f_30756);
			break;
		
		case 4:
			if (iParam0 != 0)
			{
				return;
			}
			func_894(iParam0, iParam1, Global_262145.f_30755);
			func_912(Global_262145.f_30756);
			break;
		
		case 5:
			if (iParam0 != 1)
			{
				return;
			}
			func_894(iParam0, iParam1, Global_262145.f_30755);
			func_912(Global_262145.f_30756);
			break;
		
		case 6:
			if (iParam0 != 2)
			{
				return;
			}
			func_894(iParam0, iParam1, Global_262145.f_30755);
			func_912(Global_262145.f_30756);
			break;
		
		case 7:
			if (iParam0 != 3)
			{
				return;
			}
			func_894(iParam0, iParam1, 1);
			func_912(Global_262145.f_30755);
			break;
	}
}

void func_894(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= iParam2)
	{
		func_895(iParam0, 0);
	}
}

void func_895(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		func_520(9886, unk_0x48352343BC5A41AE(), -1, 1, 0);
	}
	iVar0 = func_181(9885, -1, 0);
	func_520(9885, iVar0 + 1, -1, 1, 0);
	func_896(Global_262145.f_30754, iVar0 + 1, func_897());
}

void func_896(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_262145.f_30756;
	if (iParam0 == 7)
	{
		uVar0 = Global_262145.f_30755;
	}
	unk_0x3AD2A952DB41E956(iParam0, uParam1, uVar0, uParam2);
}

int func_897()
{
	return func_632(func_638());
}

void func_898(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_899())
	{
		return;
	}
	iVar0 = func_181(9903, -1, 0) + 1;
	func_520(9903, iVar0, -1, 1, 0);
	if (iVar0 >= iParam1)
	{
		func_520(9903, 0, -1, 1, 0);
		func_915(iParam0, 1, 1, iParam2);
	}
}

int func_899()
{
	struct<6> Var0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	
	if (func_181(9885, -1, 0) == 0)
	{
		return 0;
	}
	else
	{
		unk_0x2351AD81CE3040E7(func_181(9886, -1, 0), &Var0);
		func_904(&iVar1, Var0.f_5, Var0.f_4, Var0.f_3, Var0.f_2, (Var0.f_1 - 1), Var0);
		unk_0x2351AD81CE3040E7(unk_0x48352343BC5A41AE(), &Var2);
		func_904(&iVar3, Var2.f_5, Var2.f_4, Var2.f_3, Var2.f_2, (Var2.f_1 - 1), Var2);
		if ((func_902(iVar3) == func_902(iVar1) && func_901(iVar3) == func_901(iVar1)) && func_900(iVar3) == func_900(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_900(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_901(int iParam0)
{
	return iParam0 & 15;
}

int func_902(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_903(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_903(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_904(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_911(uParam0, iParam1);
	func_910(uParam0, iParam2);
	func_909(uParam0, iParam3);
	func_908(uParam0, iParam5);
	func_906(uParam0, iParam4);
	func_905(uParam0, iParam6);
}

void func_905(var uParam0, int iParam1)
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

void func_906(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_901(*uParam0);
	iVar1 = func_902(*uParam0);
	if (iParam1 < 1 || iParam1 > func_907(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_907(int iParam0, int iParam1)
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

void func_908(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_909(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_910(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_911(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_912(int iParam0)
{
	if (func_181(9885, -1, 0) >= iParam0)
	{
		func_520(9885, iParam0, -1, 1, 0);
		func_913(300, 1, -1, 1);
		Global_1966332 = 0;
	}
}

void func_913(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_914())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_182(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_914()
{
	return 1;
	return 0;
}

void func_915(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_920(iParam1, iParam2, iParam3))
	{
		func_895(iParam0, 1);
		func_917(1733209241, 3, 0);
	}
	else if (*iParam3)
	{
		func_916(iParam0);
		func_917(1733209241, 3, 0);
	}
}

void func_916(var uParam0)
{
	func_520(9885, 0, -1, 1, 0);
}

void func_917(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_919(iParam1, iParam2))
	{
		iVar0 = func_918();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_918()
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

int func_919(int iParam0, var uParam1)
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

int func_920(int iParam0, int iParam1, var uParam2)
{
	struct<6> Var0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 <= iParam1)
	{
		if (func_181(9885, -1, 0) == 0)
		{
			return 1;
		}
		else
		{
			unk_0x2351AD81CE3040E7(func_181(9886, -1, 0), &Var0);
			func_904(&iVar1, Var0.f_5, Var0.f_4, Var0.f_3, Var0.f_2, (Var0.f_1 - 1), Var0);
			unk_0x2351AD81CE3040E7(unk_0x48352343BC5A41AE(), &Var2);
			func_904(&iVar3, Var2.f_5, Var2.f_4, Var2.f_3, Var2.f_2, (Var2.f_1 - 1), Var2);
			if ((func_902(iVar3) == func_902(iVar1) && func_901(iVar3) == func_901(iVar1)) && func_900(iVar3) == func_900(iVar1))
			{
				return 0;
			}
			iVar4 = func_907(func_901(iVar1), func_902(iVar1));
			iVar5 = func_900(iVar1) + 1;
			iVar6 = func_901(iVar1);
			iVar7 = func_902(iVar1);
			if (iVar5 > iVar4)
			{
				iVar5 = 1;
				iVar8 = iVar6 + 1;
				if (iVar8 > 11)
				{
					iVar8 = 0;
					iVar7++;
				}
				iVar6 = iVar8;
			}
			func_904(&iVar9, 0, 0, 0, iVar5, iVar6, iVar7);
			if ((func_902(iVar3) == func_902(iVar9) && func_901(iVar3) == func_901(iVar9)) && func_900(iVar3) == func_900(iVar9))
			{
				return 1;
			}
			else
			{
				*uParam2 = 1;
				return 0;
			}
		}
	}
	return 0;
}

int func_921(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_182(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_922(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_923(iParam0, func_182(iParam1));
	iVar0++;
	func_623(iParam0, iVar0, iParam1);
}

int func_923(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2862239[iParam0 /*3*/][func_182(iParam1)];
	if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_924()
{
	func_925();
}

void func_925()
{
	if (!func_929())
	{
		return;
	}
	switch (func_928())
	{
		case 0:
			if (func_927(3))
			{
				func_926(1);
			}
			break;
		
		case 1:
			break;
	}
}

void func_926(int iParam0)
{
	if (!unk_0x54E30A65F4FA4962())
	{
		return;
	}
	Local_538.f_122.f_16 = iParam0;
}

int func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar1);
		if (unk_0x81F82FFBED0CACCA(iVar2) && func_872(iVar2) != iParam0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_928()
{
	return Local_538.f_122.f_16;
}

int func_929()
{
	switch (func_879())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_930()
{
	func_668();
	func_729();
	func_1003();
	func_993();
	func_991();
	func_989();
	func_987();
	func_986();
	func_984();
	func_940();
	func_937();
	func_934();
	func_932();
	func_931();
}

void func_931()
{
	if (func_879() == 1)
	{
		func_712(&(Local_538.f_122.f_9), 30000);
	}
}

void func_932()
{
	if (!func_933())
	{
		return;
	}
	func_719();
}

int func_933()
{
	switch (func_873())
	{
		case 4:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_934()
{
	if (!func_936())
	{
		return;
	}
	if ((unk_0xD132EDDA78FF4A51(iLocal_499, 889.3009f, -1544.985f, 28.41317f, 931.3111f, -1544.886f, 50.98301f, 75f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iLocal_499, 862.1058f, -1571.659f, 28.55759f, 890.2502f, -1571.614f, 49.84278f, 20f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iLocal_499, 910.5573f, -1585.089f, 28.42145f, 931.3018f, -1584.581f, 49.28521f, 5f, 0, 1, 0))
	{
		func_935(1);
	}
	else
	{
		func_935(0);
	}
}

void func_935(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!func_12(7))
		{
			unk_0xAC60FC9AB1B2CC70(1);
			iVar0 = unk_0x708A07BA6F801CE6();
			if (iVar0 != -1)
			{
				unk_0x344973F34EB71696(960.7706f, -1569.272f, 29.68589f, 941.351f, -1582.071f, 29.2727f, iVar0);
				Local_214.f_52 = iVar0;
			}
			func_517(7);
		}
	}
	else if (func_12(7))
	{
		unk_0xAC60FC9AB1B2CC70(0);
		if (Local_214.f_52 != -1)
		{
			unk_0xEF3F1764ED2DEE8A(Local_214.f_52);
			Local_214.f_52 = -1;
		}
		func_516(7);
	}
}

int func_936()
{
	switch (func_873())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_937()
{
	if (!func_939())
	{
		return;
	}
	if (func_666())
	{
		func_649(func_938());
	}
}

int func_938()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if ((iVar2 != iLocal_498 && func_664(iVar2)) && func_882(iVar2))
		{
			unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_939()
{
	if (func_10() != iLocal_498)
	{
		return 0;
	}
	switch (func_873())
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_940()
{
	if (!func_983())
	{
		if (func_982() != 0)
		{
			func_980();
		}
		return;
	}
	if (func_979())
	{
		func_978();
	}
	func_957(0);
	switch (func_982())
	{
		case 0:
			if (func_956())
			{
				func_16(&(Local_214.f_43), 0, 0);
				func_955(1);
			}
			else if (func_954())
			{
				func_942();
				func_955(2);
			}
			break;
		
		case 1:
			if (func_956())
			{
				if ((func_941() - 1000) > 1500)
				{
					func_496(46);
					func_957(1);
					func_955(3);
				}
			}
			else if (func_954())
			{
				func_942();
				func_955(2);
			}
			else
			{
				func_980();
			}
			break;
		
		case 2:
			if (func_15(&(Local_214.f_43), 1500, 0))
			{
				func_699(250);
				func_496(46);
				func_957(1);
				func_955(3);
			}
			break;
		
		case 3:
			if (!func_1147(46))
			{
				func_980();
			}
			break;
	}
}

int func_941()
{
	if (func_17(&(Local_214.f_43)))
	{
		return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_43);
	}
	return 0;
}

void func_942()
{
	unk_0x9DCF157443EA30D6("MP_race_crash", 0, 0);
	unk_0xC099DA307DD6BC62(iLocal_498, 1);
	unk_0x33021F68EDB8F06E(iLocal_499, 1750, 1750, 0, 0, 0, 1);
	func_943(1, 0, 0);
	unk_0x91DFC8F68F6D9B05(-1, "Hit", "RESPAWN_ONLINE_SOUNDSET", 1);
	func_20(&(Local_214.f_43), 0, 0);
	func_517(5);
}

void func_943(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_944(iLocal_498, 0, iParam1, iParam2);
		func_496(26);
	}
	else
	{
		func_944(iLocal_498, 1, iParam1, iParam2);
		func_685(26);
	}
}

void func_944(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_953())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = uParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_951())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_73(unk_0x9E2D6C50374FCFA9(), 0) && !func_310()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_948(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_947(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(iVar27, false);
					}
					unk_0x398C962F550CF3B4(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_946();
					func_696();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_947(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, true);
						}
					}
					if (func_945(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_945(int iParam0)
{
	return iParam0 == 17;
}

void func_946()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_947(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_948(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_950();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_73(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_949(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_950()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

int func_951()
{
	if (func_952() == 0)
	{
		return 1;
	}
	return 0;
}

int func_952()
{
	return Global_1574629.f_18;
}

int func_953()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_954()
{
	return (iLocal_504 == 0 || !unk_0x55A0C756C4A8220C(iLocal_503, 0));
}

void func_955(int iParam0)
{
	Local_214.f_42 = iParam0;
}

int func_956()
{
	if (!unk_0x4C1B8C5717647539(0, 75) && !unk_0x0DBA73788F6E3C5F(0, 75))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (iLocal_504 == 0)
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iLocal_503, 0))
	{
		return 0;
	}
	return 1;
}

void func_957(int iParam0)
{
	if ((unk_0x320D1840B6DAA1CC() - Local_214.f_51) > 5000 || iParam0)
	{
		func_971(func_975(), 0f, 1120403456, 1, 0, 0, 1, 0f, 1, 0, 0, 1, -1082130432);
		func_969(func_970());
		func_960(10, 0, 0, 0, 0);
		func_959(func_970(), 1, 0);
		Global_2667222.f_45.f_173 = func_958();
		Local_214.f_51 = unk_0x320D1840B6DAA1CC();
	}
}

int func_958()
{
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_724())
	{
		if (unk_0xCCDCD6672DAE6835(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_38) && unk_0x90F6E2F6488B98BA(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_38))
		{
			return unk_0xA5677134B9672173(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_38);
		}
	}
	return Global_2810287.f_298;
}

void func_959(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2667222.f_45.f_49 = { Param0 };
	Global_2667222.f_45.f_52 = iParam1;
	Global_2667222.f_45.f_53 = iParam2;
}

void func_960(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703656.f_1585.f_703.f_16 != func_50())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_2703656.f_1585.f_703.f_16 /*453*/].f_417, 0) && func_961())
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

int func_961()
{
	if ((((((func_203(unk_0x9E2D6C50374FCFA9()) == 229 || func_203(unk_0x9E2D6C50374FCFA9()) == 191) || func_968()) || func_967()) || func_966(unk_0x9E2D6C50374FCFA9())) || Global_2783990.f_227 == 1) || (Global_2667222.f_1752 && func_962(unk_0x9E2D6C50374FCFA9())))
	{
		return 0;
	}
	return 1;
}

int func_962(int iParam0)
{
	if (func_965(iParam0))
	{
		return 1;
	}
	if (func_963(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_963(int iParam0)
{
	return func_964(iParam0, 20);
}

bool func_964(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_965(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 7);
	}
	return 0;
}

int func_966(int iParam0)
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

var func_967()
{
	return Global_1836575;
}

int func_968()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_969(struct<3> Param0)
{
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	Global_2676143.f_18 = { Param0 };
}

Vector3 func_970()
{
	struct<3> Var0;
	
	Var0 = { Local_217.f_98.f_1[Local_545[iLocal_500 /*38*/].f_35 /*12*/] };
	return Var0;
}

void func_971(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	if (vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		Global_2676143.f_6 = unk_0x69CE66B03B2184EB();
	}
	Var0.f_6 = Global_2676143.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = iParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = iParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_972(unk_0x9E2D6C50374FCFA9()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676143 = { Var0 };
}

int func_972(int iParam0)
{
	if (((func_389(iParam0, 1) || func_974(iParam0)) || func_202(iParam0, 0)) || func_973(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_973(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2);
}

int func_974(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

Vector3 func_975()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { Local_214.f_58 - Local_214.f_55 };
	Var1 = { Local_502 - Local_214.f_58 };
	if (func_322(Var0, Var1) > 0f)
	{
		fVar2 = pow(50f, 2f);
		return func_976(Local_214.f_55, Local_214.f_58, (func_977(vdist2(Local_502, Local_214.f_58), 0f, fVar2) / fVar2));
	}
	return Local_214.f_55;
}

Vector3 func_976(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

float func_977(float fParam0, float fParam1, float fParam2)
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

void func_978()
{
	if (vdist2(Local_502, Local_214.f_58) > pow(50f, 2f))
	{
		Local_214.f_55 = { Local_214.f_58 };
		Local_214.f_58 = { Local_502 };
	}
}

int func_979()
{
	switch (func_982())
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_980()
{
	func_120(&(Local_214.f_43));
	if (func_12(5))
	{
		func_981();
	}
	func_955(0);
}

void func_981()
{
	unk_0x06A78BA0B756C754("MP_race_crash");
	unk_0xC099DA307DD6BC62(iLocal_498, 0);
	func_943(0, 0, 0);
	func_516(5);
}

int func_982()
{
	return Local_214.f_42;
}

int func_983()
{
	if (func_692(unk_0x9E2D6C50374FCFA9(), 0, 0) || !func_9(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		return 0;
	}
	switch (func_873())
	{
		case 5:
			return bLocal_494;
		
		default:
	}
	return 0;
}

void func_984()
{
	int iVar0;
	int iVar1;
	
	if (!func_985())
	{
		return;
	}
	Local_214.f_18 = 0;
	iVar0 = (unk_0x5D79167FED95F0B0() - 1);
	while (iVar0 >= 0)
	{
		iVar1 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar1))
		{
			Local_214.f_18.f_1[Local_214.f_18 /*3*/] = unk_0x6B01934FA503547F(iVar1);
			Local_214.f_18.f_1[Local_214.f_18 /*3*/].f_1 = Local_545[iVar0 /*38*/].f_35;
			Local_214.f_18.f_1[Local_214.f_18 /*3*/].f_2 = vdist2(func_77(Local_214.f_18.f_1[Local_214.f_18 /*3*/]), Local_217.f_98.f_1[Local_545[iVar0 /*38*/].f_35 /*12*/]);
			Local_214.f_18++;
			if (Local_214.f_18 == Local_214.f_18.f_1)
			{
			}
			else
			{
				iVar0 = (iVar0 + -1);
			}
		}

int func_985()
{
	switch (func_873())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_986()
{
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7653D561C9574763(0, 24, 1);
	unk_0x7653D561C9574763(0, 257, 1);
	unk_0x7653D561C9574763(0, 44, 1);
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x7653D561C9574763(0, 142, 1);
	unk_0x7653D561C9574763(0, 141, 1);
	unk_0x7653D561C9574763(0, 140, 1);
	unk_0x7653D561C9574763(0, 263, 1);
	unk_0x7653D561C9574763(0, 264, 1);
	unk_0x7653D561C9574763(0, 143, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 162, 1);
	unk_0x7653D561C9574763(0, 159, 1);
	unk_0x7653D561C9574763(0, 164, 1);
	unk_0x7653D561C9574763(0, 158, 1);
	unk_0x7653D561C9574763(0, 160, 1);
	unk_0x7653D561C9574763(0, 161, 1);
	unk_0x7653D561C9574763(0, 163, 1);
	unk_0x7653D561C9574763(0, 165, 1);
	unk_0x7653D561C9574763(0, 157, 1);
	unk_0x7653D561C9574763(0, 68, 1);
	unk_0x7653D561C9574763(0, 69, 1);
	unk_0x7653D561C9574763(0, 70, 1);
	unk_0x7653D561C9574763(0, 354, 1);
	unk_0x7653D561C9574763(0, 350, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 285, 1);
	unk_0x7653D561C9574763(0, 282, 1);
	unk_0x7653D561C9574763(0, 283, 1);
	unk_0x7653D561C9574763(0, 284, 1);
	unk_0x7653D561C9574763(0, 337, 1);
	unk_0x7653D561C9574763(0, 102, 1);
	unk_0x7653D561C9574763(0, 345, 1);
	unk_0x7653D561C9574763(0, 346, 1);
	unk_0x7653D561C9574763(0, 347, 1);
	unk_0x7653D561C9574763(0, 353, 1);
	unk_0x7653D561C9574763(0, 91, 1);
	unk_0x7653D561C9574763(0, 92, 1);
	unk_0x7653D561C9574763(0, 351, 1);
	unk_0x7653D561C9574763(0, 101, 1);
	unk_0x7653D561C9574763(0, 99, 1);
	unk_0x7653D561C9574763(0, 100, 1);
	unk_0x7653D561C9574763(0, 357, 1);
	unk_0x7653D561C9574763(0, 53, 1);
	unk_0x7653D561C9574763(0, 54, 1);
}

void func_987()
{
	if (!func_988())
	{
		return;
	}
	if (iLocal_504 != 0)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
}

int func_988()
{
	switch (func_873())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_989()
{
	if (!func_990())
	{
		return;
	}
	func_709();
	unk_0xC43E67C9BA871ECB();
	func_702(0);
}

int func_990()
{
	switch (func_873())
	{
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_991()
{
	if (!func_992())
	{
		return;
	}
	func_700();
}

int func_992()
{
	switch (func_873())
	{
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_993()
{
	if (!func_1002())
	{
		return;
	}
	if (func_994())
	{
		func_675(23);
	}
}

int func_994()
{
	if (!func_17(&(Local_214.f_12.f_2)))
	{
		func_684(250);
		func_1001();
		func_20(&(Local_214.f_12.f_2), 0, 0);
	}
	else
	{
		if (!func_12(3) && unk_0xE9E8955A780DDA01())
		{
			func_768(86, func_1000(), func_999(), 1, 8000, 2, 1, 128);
			func_517(3);
		}
		if (func_15(&(Local_214.f_12.f_2), 6000, 0) && func_995())
		{
			return 1;
		}
	}
	return 0;
}

int func_995()
{
	if (!func_17(&(Local_214.f_12.f_4)))
	{
		func_997();
		func_996();
		func_20(&(Local_214.f_12.f_4), 0, 0);
	}
	else if (!unk_0x52522E25010580A1(Local_214.f_12.f_1) || func_15(&(Local_214.f_12.f_4), 6000, 0))
	{
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_996()
{
	unk_0x889B4F9D52E23DEE(Local_214.f_12.f_1, Local_214.f_12, 5000, 0, 1);
	unk_0x9BAE3263D9B1FCB9(Local_214.f_12, "HAND_SHAKE", 0.3f);
}

void func_997()
{
	unk_0x588DDCB644C6486A(Local_214.f_12, 0);
	unk_0x588DDCB644C6486A(Local_214.f_12.f_1, 0);
	Local_214.f_12 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
	unk_0xDEE4F5F0B93BE664(Local_214.f_12, unk_0xCACAD935C0BEE14F(iLocal_503, -1.6f, -1.5f, func_998()));
	unk_0x98A99A554B458431(Local_214.f_12, iLocal_503, 0f, 0f, 0f, 1);
	unk_0x0A18C027350D3C19(Local_214.f_12, unk_0x372E271FE8A97311());
	Local_214.f_12.f_1 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xDEE4F5F0B93BE664(Local_214.f_12.f_1, unk_0xCB284F809B594322());
	unk_0x93150D31CE38FE75(Local_214.f_12.f_1, unk_0x9C0ED16B4F524508(2), 2);
	unk_0x0A18C027350D3C19(Local_214.f_12.f_1, unk_0x372E271FE8A97311());
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
}

float func_998()
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	
	if (iLocal_504 != 0)
	{
		func_278(iLocal_504, &uVar1, &Var2, 1086324736, 1080033280, 1077936128);
		fVar0 = Var2.f_2;
	}
	else
	{
		fVar0 = 0.5f;
	}
	return fVar0;
}

char* func_999()
{
	switch (func_13())
	{
		case 0:
			return "TSA_STSTART_TT";
		
		case 1:
			return "TSA_STSTART_CD";
		
		case 2:
			return "TSA_STSTART_HH";
		
		case 3:
			switch (func_526())
			{
				case 4:
					return "TSA_START_SR_0";
				
				case 5:
					return "TSA_START_SR_1";
				
				case 6:
					return "TSA_START_SR_2";
				
				case 7:
					return "TSA_START_SR_3";
				
				case 8:
					return "TSA_START_SR_4";
				
				case 9:
					return "TSA_START_SR_5";
				
				case 10:
					return "TSA_START_SR_6";
				
				default:
			}
			break;
	}
	return "";
}

char* func_1000()
{
	switch (func_13())
	{
		case 3:
			return "TSA_START_SR_T";
		
		default:
	}
	return "TSA_STSTART_T";
}

void func_1001()
{
	unk_0x889B4F9D52E23DEE(Local_214.f_12.f_1, Local_214.f_12, 6000, 3, 1);
	unk_0x9BAE3263D9B1FCB9(Local_214.f_12, "HAND_SHAKE", 0.3f);
	unk_0x9BAE3263D9B1FCB9(Local_214.f_12.f_1, "HAND_SHAKE", 0.3f);
}

int func_1002()
{
	switch (func_873())
	{
		case 3:
			return !func_403(iLocal_501, 23);
		
		default:
	}
	return 0;
}

void func_1003()
{
	if (!func_1017())
	{
		return;
	}
	switch (func_872(iLocal_501))
	{
		case 0:
			func_1016();
			func_517(1);
			func_1015(1);
			break;
		
		case 1:
			if (func_1014())
			{
				func_1013();
				func_516(1);
				func_496(26);
				func_496(40);
				func_1007(1);
				unk_0xC64B6E13A6A7F517(iLocal_503, func_888(iLocal_500), 0, 0, 0, 1);
				unk_0xBBF86885619695CE(iLocal_503, func_889());
				unk_0x5C65DDDC219B3AA5(iLocal_503, false);
				unk_0x3F606B4ABC46C107(0, 0, 1065353216);
				func_1005();
				func_1004(Local_502);
				func_1015(2);
			}
			break;
		
		case 2:
			if (func_15(&(Local_214.f_10), 8000, 0))
			{
				unk_0x9F65B3BAFA302A65(iLocal_503, 1084227584);
				func_1015(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_1004(struct<3> Param0)
{
	Local_214.f_55 = { Param0 };
	Local_214.f_58 = { Param0 };
}

void func_1005()
{
	int iVar0;
	
	unk_0x588DDCB644C6486A(Local_214.f_12, 0);
	unk_0x588DDCB644C6486A(Local_214.f_12.f_1, 0);
	iVar0 = unk_0x5853B15F78E1A265(0, 3);
	Local_214.f_12 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
	unk_0x3FB84450A94CB528(Local_214.f_12, iLocal_499, func_1006(0, iVar0, 1), 1);
	unk_0x98A99A554B458431(Local_214.f_12, iLocal_499, func_1006(0, iVar0, 0), 1);
	unk_0x0A18C027350D3C19(Local_214.f_12, 34.9554f);
	Local_214.f_12.f_1 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x3FB84450A94CB528(Local_214.f_12.f_1, iLocal_499, func_1006(1, iVar0, 1), 1);
	unk_0x98A99A554B458431(Local_214.f_12.f_1, iLocal_499, func_1006(1, iVar0, 0), 1);
	unk_0x0A18C027350D3C19(Local_214.f_12.f_1, 34.9554f);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
}

Vector3 func_1006(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						return 1.3015f, 5.2783f, 0.0878f;
					}
					else
					{
						return 0.5597f, 2.3777f, 0.2789f;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return 2.7647f, 4.4739f, 0.6398f;
					}
					else
					{
						return 0.9114f, 2.115f, 0.6153f;
					}
					break;
				
				default:
					if (bParam2)
					{
						return -1.7122f, 6.1183f, 0.8633f;
					}
					else
					{
						return 1.9024f, 2.8556f, 1.2344f;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						return -0.5811f, 4.4837f, 0.7696f;
					}
					else
					{
						return 0.4665f, 1.676f, 0.6287f;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -1.3625f, 4.5793f, 0.6336f;
					}
					else
					{
						return 0.0291f, 1.9218f, 0.6077f;
					}
					break;
				
				default:
					if (bParam2)
					{
						return 1.3784f, 6.1317f, 0.8623f;
					}
					else
					{
						return 0.0428f, 2.4647f, 0.6911f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1007(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!func_12(2))
		{
			func_1009(1, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 1);
			unk_0xB11C0CF5CCDFE10A(iLocal_499, 1);
			unk_0x027BDA95C9BD0667(iLocal_499, 0);
			iVar0 = func_958();
			if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0x3A8B0F5B0E3DE13A(iVar0))
			{
				unk_0x55B23FE400FCEA6B(iVar0, 0);
				if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar0)))
				{
					unk_0xCCA20449C6EF3927(iVar0, 1);
				}
				if (unk_0xA70B4EA2AD8D6806(iVar0))
				{
					unk_0x14544D8FD0820F1F(iVar0, 0);
				}
				unk_0x0E97FAE15BEE6379(iVar0, 1);
				unk_0xBD10A469F50E1A2A(iVar0, 0);
			}
			func_548(1);
			func_517(2);
		}
	}
	else if (func_12(2))
	{
		func_1009(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
		unk_0xB11C0CF5CCDFE10A(iLocal_499, 0);
		unk_0x027BDA95C9BD0667(iLocal_499, 1);
		iVar1 = func_958();
		if (unk_0xE5965CDF24F93A9F(iVar1) && unk_0x3A8B0F5B0E3DE13A(iVar1))
		{
			unk_0x55B23FE400FCEA6B(iVar1, 0);
			if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar1)))
			{
				unk_0xCCA20449C6EF3927(iVar1, 0);
			}
			if (unk_0xA70B4EA2AD8D6806(iVar1))
			{
				unk_0x14544D8FD0820F1F(iVar1, 1);
			}
			unk_0xBD10A469F50E1A2A(iVar1, 1);
		}
		func_1008(1);
		func_516(2);
	}
}

void func_1008(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_5193.f_48), iParam0);
}

void func_1009(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x51046EEE00E2BBDA(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2667222.f_45.f_65 = bParam0;
	Global_2667222.f_45.f_67 = iParam1;
	Global_2667222.f_45.f_68 = bParam2;
	Global_2667222.f_45.f_174 = iParam3;
	Global_2667222.f_45.f_66 = iParam4;
	Global_2667222.f_45.f_176 = bParam5;
	Global_2667222.f_45.f_177 = bParam7;
	Global_2667222.f_45.f_182 = iParam6;
	Global_2667222.f_45.f_178 = iParam8;
	Global_2667222.f_45.f_179 = iParam9;
	Global_2667222.f_45.f_180 = bParam10;
	Global_2667222.f_45.f_181 = iParam11;
	if (!bParam0)
	{
		func_1012();
	}
	if (bParam2)
	{
		iVar0 = func_1011();
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (!unk_0xA6A089369417736E(iVar0))
			{
				if (unk_0x58FDF0B505AA2260(iVar0))
				{
					unk_0x2D58A6131679D82C(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x930E64CB0285CAEC(iVar0, 1))
				{
					if (!unk_0x3A8B0F5B0E3DE13A(iVar0))
					{
						unk_0xC31EECA11005273C(unk_0xA08CC064DAC564A5(iVar0));
					}
				}
			}
			if (unk_0x3A8B0F5B0E3DE13A(iVar0))
			{
				if (bVar1)
				{
					unk_0x3D81769BEC61BFF8(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						unk_0xFF74DEC3F62D3654(iVar0, 1);
					}
				}
				if (bParam7)
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						unk_0xAFE1B52F0DE91595(iVar0, 0);
					}
				}
				if (iParam6 > -1)
				{
					unk_0x58DAFDEB2F46A5EA(iVar0, iParam6, iParam6);
					unk_0x952B5201CC721090(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_1010(iVar0);
				}
			}
		}
	}
}

void func_1010(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x3A8B0F5B0E3DE13A(iParam0))
		{
			if (Global_1958760 > -1)
			{
				if (unk_0x6BD06F4780EAC5DD("GBMissionFire", 3))
				{
					if (!unk_0xF2549FF74D64B720(iParam0, "GBMissionFire"))
					{
						unk_0x05B874E9ABFF72B4(iParam0, "GBMissionFire", Global_1958760);
					}
				}
			}
		}
	}
}

int func_1011()
{
	return Global_2667222.f_2667;
}

void func_1012()
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
	Global_2667222.f_45.f_69 = { Var0 };
	Global_2667222.f_45.f_172 = 0;
}

void func_1013()
{
	unk_0xB0550BC91B0159D6(&(Global_1946934.f_8), 15);
	unk_0xB0550BC91B0159D6(&(Global_1946934.f_8), 16);
}

bool func_1014()
{
	return unk_0xE2D0C323A1AE5D85(Global_1946934.f_8, 16);
}

void func_1015(int iParam0)
{
	Local_545[iLocal_500 /*38*/].f_32 = iParam0;
}

void func_1016()
{
	if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6 != 154)
	{
		return;
	}
	if (func_359(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_4521.f_1, 12))
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Global_1946934.f_8), 15);
	unk_0xB0550BC91B0159D6(&(Global_1946934.f_8), 16);
}

int func_1017()
{
	switch (func_873())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_1018()
{
	if ((func_731() + unk_0xD4538F501EDCD96C()) < 4)
	{
		return 1;
	}
	return 0;
}

int func_1019()
{
	Local_538.f_122.f_17 = func_734();
	func_649(func_938());
	Local_538.f_122.f_18 = func_1020();
	return 1;
}

int func_1020()
{
	char cVar0[16];
	
	StringIntConCat(&cVar0, unk_0x48352343BC5A41AE(), 16);
	StringConCat(&cVar0, "-", 16);
	StringIntConCat(&cVar0, iLocal_498, 16);
	return unk_0x2E87280918B16506(&cVar0);
}

int func_1021()
{
	return 1;
}

char* func_1022(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_SR_HT_INTRO";
		
		case 1:
			return "TSA_SR_HT_RSPWN";
		
		case 2:
			return "TSA_SR_HT_VHEXT";
		
		default:
	}
	return "";
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_873())
			{
				case 5:
					return func_12(4);
				
				default:
			}
			break;
		
		case 1:
			switch (func_873())
			{
				case 5:
					return func_1024(0);
				
				default:
			}
			break;
		
		case 2:
			switch (func_873())
			{
				case 5:
					if (iLocal_504 != 0)
					{
						if (unk_0xF01464D7AF0B7347(0, 75))
						{
							func_20(&(Local_214.f_45), 0, 0);
						}
						else if ((func_17(&(Local_214.f_45)) && !func_15(&(Local_214.f_45), 250, 0)) && unk_0x51844F589D928A86(0, 75))
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

bool func_1024(int iParam0)
{
	return func_1025(&uLocal_315, iParam0);
}

bool func_1025(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xE2D0C323A1AE5D85((*uParam0)[iVar0], iVar1);
}

void func_1026(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1027();
			break;
	}
}

void func_1027()
{
	int iVar0;
	
	iVar0 = func_181(9617, -1, 0);
	if (!unk_0xE2D0C323A1AE5D85(iVar0, 16))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 16);
	}
	else if (!unk_0xE2D0C323A1AE5D85(iVar0, 17))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 17);
	}
	else if (!unk_0xE2D0C323A1AE5D85(iVar0, 18))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 18);
	}
	func_520(9617, iVar0, -1, 1, 0);
	unk_0xCED9E32812D6C7C7(&(Global_2715542.f_3076.f_257), 0);
}

void func_1028()
{
	unk_0x91DFC8F68F6D9B05(-1, "Go", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
}

void func_1029(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x91DFC8F68F6D9B05(-1, "321", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
}

void func_1030()
{
	if (func_533())
	{
		func_531(func_177(0, 1));
	}
	if (Global_2810287.f_5193.f_765)
	{
		Global_2810287.f_5193.f_765 = 0;
	}
	func_1007(0);
	func_935(0);
	func_1048();
	func_1031();
	func_980();
}

void func_1031()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_24), &Global_2671504, 2);
	unk_0x049557638ADE4DF8(&(Global_2667222.f_26), &Global_2671506, 19);
	func_1046();
	func_1034(1, 1, 0);
	func_1032();
}

void func_1032()
{
	func_1033(0, 0);
}

void func_1033(int iParam0, int iParam1)
{
	Global_2667222.f_22 = iParam0;
	Global_2667222.f_23 = iParam1;
}

void func_1034(bool bParam0, bool bParam1, bool bParam2)
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
		func_1045();
	}
	if (!bParam2)
	{
		func_1037(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_1036(0);
	func_1035();
}

void func_1035()
{
	struct<6> Var0;
	
	if (Global_2667222.f_489.f_1 == unk_0x69CE66B03B2184EB())
	{
		Global_2667222.f_489 = { Var0 };
	}
}

void func_1036(bool bParam0)
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

void func_1037(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_1044())
		{
			func_1043();
		}
		Global_2667222.f_713.f_518 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_713.f_504 = iParam1;
		Global_2667222.f_713.f_505 = iParam2;
		Global_2667222.f_713.f_506 = iParam10;
		func_1041();
		func_960(8, 0, 0, 0, 0);
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
		func_1038();
	}
}

void func_1038()
{
	if (func_1044() && !func_1040())
	{
		func_1043();
	}
	if (func_1040())
	{
		func_1039();
	}
	else
	{
		func_1041();
		func_960(0, 0, 0, 0, 0);
		Global_2667222.f_1752 = 0;
		Global_2667222.f_1751 = 0;
	}
}

void func_1039()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_713), &(Global_2667222.f_1232), 519);
	Global_2667222.f_489 = { Global_2667222.f_495 };
	if (unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		Global_2667222.f_1751 = 0;
	}
}

int func_1040()
{
	if ((Global_2667222.f_1751 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_1232.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_1041()
{
	if (func_1044() && !func_1040())
	{
		func_1043();
	}
	func_1042();
	Global_2667222.f_713 = 0;
}

void func_1042()
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

void func_1043()
{
	if (func_1040())
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

int func_1044()
{
	if ((Global_2667222.f_1752 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_1045()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_367), &Global_2671847, 121);
}

void func_1046()
{
	func_1047();
}

void func_1047()
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

void func_1048()
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

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_1050(int iParam0)
{
	if (bLocal_496 && unk_0x81F82FFBED0CACCA(iParam0))
	{
		Local_538.f_122.f_17 = iParam0;
	}
	func_517(0);
}

void func_1051(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x91DFC8F68F6D9B05(-1, "Checkpoint", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
			break;
		
		case 1:
			unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Finish", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
			break;
	}
}

int func_1052()
{
	return 1;
}

int func_1053()
{
	if (func_1054() == 45 && !func_12(0))
	{
		return 1;
	}
	return 0;
}

int func_1054()
{
	if (func_716() != -1)
	{
		return Local_223[func_716() /*21*/];
	}
	return -1;
}

int func_1055(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xD4538F501EDCD96C();
		
		case 1:
			return func_749(0, (30000 - func_750(&(Local_538.f_122.f_9), 0, 0)));
		
		case 2:
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_9);
		
		case 3:
			return (func_941() - 1000);
		
		default:
	}
	return 0;
}

void func_1056(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_450.f_1);
			func_746(StackVal, Local_217.f_388[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_217.f_388[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			func_1057();
			Stack.Push(iParam0);
			Call_Loc(Local_218.f_450.f_1);
			func_746(StackVal, "TSA_TIME", 0, 1, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_739();
			break;
	}
}

void func_1057()
{
	int iVar0;
	
	if (Local_214.f_18 == 0)
	{
		return;
	}
	func_1067(&(Local_214.f_4), -1, -1);
	func_1065(&(Local_214.f_4), Local_214.f_18, 0);
	func_1062(&(Local_214.f_4), 0, (Local_214.f_18 - 1), 217270);
	iVar0 = 0;
	while (iVar0 < Local_214.f_18)
	{
		func_1058(unk_0x61042CA2A97BBB69(Local_214.f_18.f_1[Local_214.f_4[iVar0] /*3*/]), func_1061(iVar0), 1, 0, func_1060(iVar0), func_1059(iVar0), func_743(), 0);
		iVar0++;
	}
}

void func_1058(char* sParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_742(13, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_741(13, iVar0);
		StringCopy(&(Global_1645739.f_6348[iVar0 /*16*/]), sParam0, 64);
		StringCopy(&(Global_1645739.f_6348.f_161[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_6348.f_322[iVar0] = iParam2;
		Global_1645739.f_6348.f_333[iVar0] = iParam3;
		Global_1645739.f_6348.f_344[iVar0] = uParam4;
		Global_1645739.f_6348.f_355[iVar0] = uParam5;
		Global_1645739.f_6348.f_366[iVar0] = uParam6;
		Global_1645739.f_6348.f_377[iVar0] = iParam7;
	}
}

int func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
		
		case 1:
			return 108;
		
		case 2:
			return 107;
		
		default:
	}
	return 1;
}

int func_1060(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 6;
		
		case 2:
			return 5;
		
		default:
	}
	return 4;
}

char* func_1061(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_FIRST";
		
		case 1:
			return "TSA_SECOND";
		
		case 2:
			return "TSA_THIRD";
		
		default:
	}
	return "TSA_FOURTH";
}

void func_1062(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 < iParam2)
	{
		iVar0 = func_1063(uParam0, iParam1, iParam2, iParam3);
		func_1062(uParam0, iParam1, (iVar0 - 1), iParam3);
		func_1062(uParam0, iVar0 + 1, iParam2, iParam3);
	}
}

var func_1063(var uParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = (*uParam0)[iParam2];
	iVar1 = (iParam1 - 1);
	iVar3 = iParam1;
	while (iVar3 <= (iParam2 - 1))
	{
		Stack.Push((*uParam0)[iVar3]);
		Stack.Push(uVar0);
		Call_Loc(uParam3);
		iVar2 = StackVal;
		if (!iVar2 > 0)
		{
			iVar1++;
			func_29(uParam0[iVar1], uParam0[iVar3]);
		}
		iVar3++;
	}
	func_29(uParam0[iVar1 + 1], uParam0[iParam2]);
	return iVar1 + 1;
}

int func_1064(int iParam0, int iParam1)
{
	if (Local_214.f_18.f_1[iParam0 /*3*/].f_1 > Local_214.f_18.f_1[iParam1 /*3*/].f_1)
	{
		return -1;
	}
	if (Local_214.f_18.f_1[iParam0 /*3*/].f_1 < Local_214.f_18.f_1[iParam1 /*3*/].f_1)
	{
		return 1;
	}
	if (Local_214.f_18.f_1[iParam0 /*3*/].f_2 < Local_214.f_18.f_1[iParam1 /*3*/].f_2)
	{
		return -1;
	}
	if (Local_214.f_18.f_1[iParam0 /*3*/].f_2 > Local_214.f_18.f_1[iParam1 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_1065(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
	if (bParam2)
	{
		func_1066(uParam0, iParam1);
	}
}

void func_1066(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 < 2)
	{
		return;
	}
	iVar0 = (iParam1 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = unk_0x5853B15F78E1A265(0, iVar0 + 1);
		func_29(uParam0[iVar0], uParam0[iVar1]);
		iVar0 = (iVar0 + -1);
	}
}

void func_1067(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iParam2;
		iVar0++;
	}
}

int func_1068(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_873())
			{
				case 0:
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (func_873())
			{
				case 1:
					return !Global_262145.f_30779;
				
				default:
			}
			break;
		
		case 2:
			switch (func_873())
			{
				case 5:
					return 1;
				
				default:
			}
			break;
		
		case 3:
			switch (func_873())
			{
				case 5:
					switch (func_982())
					{
						case 1:
							if (func_941() > 1000)
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char* func_1069()
{
	return "TUNER_SPRINT_RACES_END";
}

char* func_1070(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0x5853B15F78E1A265(0, 4))
			{
				case 0:
					return "TUNER_SPRINT_RACES_START_A";
				
				case 1:
					return "TUNER_SPRINT_RACES_START_B";
				
				case 2:
					return "TUNER_SPRINT_RACES_START_C";
				
				case 3:
					return "TUNER_SPRINT_RACES_START_D";
				
				default:
			}
			break;
	}
	return "";
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_873() >= 3)
			{
				return 0;
			}
			break;
	}
	return -1;
}

void func_1072()
{
	func_550(0, 43, 218961);
	func_534(0, 1, 218947);
	func_549(0, 2, 2);
	func_528(0, 218906);
	func_550(1, 43, 218889);
	func_534(1, 0, 218875);
	func_549(1, 2, 2);
	func_528(1, 218856);
	func_546(1, 218815);
	func_550(2, 43, 141423);
	func_549(2, 3, 3);
	func_528(2, 218790);
	func_550(3, 43, 141423);
	func_549(3, 4, 4);
	func_546(3, 218696);
	func_550(4, 44, 141423);
	func_549(4, 5, 5);
	func_550(5, 45, 218190);
	func_528(5, 218077);
	func_549(5, 6, 6);
	func_550(6, 48, 136860);
}

void func_1073()
{
	Local_214.f_9 = unk_0x0A89FDFA763DCAED();
	func_515(iLocal_503, 0);
	func_1074();
}

void func_1074()
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(Global_2715542.f_3076.f_257, 0))
	{
		iVar0 = func_181(9617, -1, 0);
		if ((!unk_0xE2D0C323A1AE5D85(iVar0, 16) || !unk_0xE2D0C323A1AE5D85(iVar0, 17)) || !unk_0xE2D0C323A1AE5D85(iVar0, 18))
		{
			func_517(4);
		}
	}
}

void func_1075()
{
	if (Local_545[iLocal_500 /*38*/].f_35 == 0)
	{
		switch (func_526())
		{
			case 4:
				func_1076("TSA_SR_OT_RCTOt", "TSA_SR_LOC_OB", 12, 0);
				break;
			
			case 5:
				func_1076("TSA_SR_OT_RCTOt", "TSA_SR_LOC_KC", 12, 0);
				break;
			
			case 6:
				func_1076("TSA_SR_OT_RCTO", "TSA_SR_LOC_SC", 12, 0);
				break;
			
			case 7:
				func_1076("TSA_SR_OT_RCTOt", "TSA_SR_LOC_VS", 12, 0);
				break;
			
			case 8:
				func_1076("TSA_SR_OT_RCTO", "TSA_SR_LOC_EI", 12, 0);
				break;
			
			case 9:
				func_1076("TSA_SR_OT_RCTOt", "TSA_SR_LOC_PS", 12, 0);
				break;
			
			case 10:
				func_1076("TSA_SR_OT_RCTO", "TSA_SR_LOC_LS", 12, 0);
				break;
		}
	}
	else
	{
		func_552("TSA_SR_OT_RCCM", 0);
	}
}

void func_1076(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_1077(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574747 = 19;
		Global_1574747.f_56 = iParam2;
	}
}

int func_1077(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (func_1078(sParam0, sParam1) && Global_1574747.f_56 == Global_1574747.f_58)
	{
		return 0;
	}
	func_539();
	Global_1574747 = 3;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	StringCopy(&(Global_1574747.f_16), sParam1, 64);
	Global_1574747.f_58 = uParam3;
	Global_1574747.f_56 = uParam3;
	func_555();
	func_554(bParam2);
	func_553();
	return 1;
}

bool func_1078(char* sParam0, char* sParam1)
{
	if (!func_544())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (!unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12)))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam1) == unk_0x2E87280918B16506(&(Global_1574747.f_16));
}

void func_1079()
{
	func_1080();
	func_943(0, 0, 0);
}

void func_1080()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_815(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_1081()
{
	if (func_533())
	{
		func_531(func_177(0, 1));
	}
}

void func_1082()
{
	Global_2810287.f_5193.f_765 = 0;
	func_120(&(Local_538.f_122.f_9));
	func_548(0);
	func_517(8);
}

void func_1083()
{
	Global_2810287.f_5193.f_765 = 1;
}

bool func_1084()
{
	return func_879() == 0;
}

void func_1085()
{
	func_552("TSA_SR_OT_WTST", 0);
}

void func_1086()
{
	func_1087();
}

void func_1087()
{
	if (unk_0xE2D0C323A1AE5D85(Local_214.f_54, 0))
	{
		unk_0xB0550BC91B0159D6(&(Local_214.f_54), 0);
	}
}

bool func_1088()
{
	return func_879() == 1;
}

void func_1089()
{
	func_552("TSA_SR_OT_WTPT", 0);
}

void func_1090()
{
	func_565(0, 43);
	func_562(0, 1, 219304);
	func_565(1, 43);
	func_562(1, 0, 219290);
	func_562(1, 2, 219247);
	func_1096(1, 218815);
	func_565(2, 43);
	func_562(2, 3, 219214);
	func_1093(2, 219165);
	func_565(3, 43);
	func_562(3, 4, 219132);
	func_565(4, 44);
	func_560(4, 5);
	func_565(5, 45);
	func_562(5, 6, 219119);
	func_565(6, 48);
}

bool func_1091()
{
	return func_12(0);
}

bool func_1092()
{
	return func_3(20);
}

void func_1093(int iParam0, int iParam1)
{
	Local_222[iParam0 /*20*/].f_17 = iParam1;
}

void func_1094()
{
	func_1067(&(Local_538.f_122.f_11), -1, -1);
	func_1065(&(Local_538.f_122.f_11), func_744(unk_0xD4538F501EDCD96C(), 0, Local_538.f_122.f_11), 1);
}

bool func_1095()
{
	return func_928() == 1;
}

void func_1096(int iParam0, int iParam1)
{
	Local_222[iParam0 /*20*/].f_18 = iParam1;
}

int func_1097()
{
	if (func_15(&(Local_538.f_122.f_9), 30000, 0) || unk_0xD4538F501EDCD96C() == 4)
	{
		return 1;
	}
	return 0;
}

bool func_1098()
{
	return unk_0xD4538F501EDCD96C() < 2;
}

bool func_1099()
{
	return unk_0xD4538F501EDCD96C() >= 2;
}

void func_1100()
{
	Local_217.f_343 = 60;
	Local_217.f_343.f_1 = 1;
	Local_217.f_388[0 /*6*/] = 1;
	Local_217.f_388[0 /*6*/].f_2 = 4;
	Local_217.f_388[0 /*6*/].f_3 = 4;
	Local_217.f_388[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_217.f_388[1 /*6*/] = 4;
	Local_217.f_388[1 /*6*/].f_3 = 3;
	Local_217.f_388[1 /*6*/].f_1 = "TSA_HUD_START";
	Local_217.f_388[2 /*6*/] = 4;
	Local_217.f_388[3 /*6*/] = 2;
	Local_217.f_388[3 /*6*/].f_2 = 1500;
	Local_217.f_388[3 /*6*/].f_4 = 6;
	Local_217.f_388[3 /*6*/].f_3 = 8;
	Local_217.f_388[3 /*6*/].f_1 = "TSA_HUD_RESPAWN";
	Local_217.f_430 = 1;
	Local_217.f_98 = 2;
	Local_217.f_98.f_1[0 /*12*/] = { func_1101() };
	Local_217.f_98.f_1[0 /*12*/].f_3 = 21f;
	Local_217.f_98.f_1[0 /*12*/].f_4 = 14f;
	Local_217.f_98.f_1[1 /*12*/] = { func_887() };
	Local_217.f_98.f_1[1 /*12*/].f_8 = 38;
	Local_217.f_98.f_1[1 /*12*/].f_3 = 21f;
	Local_217.f_98.f_1[1 /*12*/].f_5 = 4;
	Local_217.f_98.f_1[1 /*12*/].f_4 = 14f;
}

Vector3 func_1101()
{
	switch (func_526())
	{
		case 4:
			return -408.3208f, 1184.441f, 324.5297f;
		
		case 5:
			return -2297.731f, 379.1689f, 173.4667f;
		
		case 6:
			return 54.1055f, 3734.029f, 38.7018f;
		
		case 7:
			return 744.1607f, 1199.426f, 325.4021f;
		
		case 8:
			return 231.6537f, -3326.992f, 4.7973f;
		
		case 9:
			return 2791.809f, 1518.259f, 23.5166f;
		
		case 10:
			return -1027.144f, -2714.697f, 12.8181f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1102()
{
	Local_218.f_13 = 222018;
	Local_218.f_508.f_6 = 221990;
	Local_218.f_508.f_4 = 221968;
	Local_218.f_515.f_4 = 221920;
	Local_218.f_515.f_5 = 221471;
	Local_218.f_515.f_6 = 221419;
	Local_218.f_515.f_7 = 221383;
	Local_218.f_515.f_1 = 221322;
	Local_218.f_515.f_2 = 221308;
	Local_218.f_515.f_3 = 221251;
	Local_218.f_515.f_12 = 221208;
	Local_218.f_515.f_13 = 221171;
	Local_218.f_450 = 221157;
	Local_218.f_450.f_1 = 221141;
	Local_218.f_450.f_2 = 221024;
	Local_218.f_453.f_1 = 220915;
	Local_218.f_453 = 220870;
	Local_218.f_45.f_2.f_1 = 220830;
	Local_218.f_97.f_5 = 220822;
	Local_218.f_2 = 220800;
	Local_218.f_3.f_1 = 220677;
	Local_218.f_10 = 220665;
	Local_218.f_11 = 220207;
	Local_218.f_11.f_1 = 220109;
}

void func_1103()
{
	func_550(0, 20, 136860);
	func_549(0, 1, 1);
	func_550(1, 44, 136860);
	func_549(1, 2, 2);
	func_550(2, 45, 136860);
	func_549(2, 3, 3);
	func_528(2, 220191);
	func_550(3, 48, 136860);
}

void func_1104()
{
	func_515(iLocal_503, 0);
}

void func_1105()
{
	func_565(0, 20);
	func_562(0, 1, 220290);
	func_565(1, 44);
	func_560(1, 2);
	func_1096(1, 220274);
	func_565(2, 45);
	func_560(2, 3);
	func_565(3, 48);
}

void func_1106()
{
	func_518(9878, -1);
}

bool func_1107()
{
	return (func_1108() && unk_0xF09A4F413B0D30EB(0, 51));
}

int func_1108()
{
	int iVar0;
	
	if (func_716() != 0 || !func_1112())
	{
		func_1110();
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(iLocal_499, 0))
	{
		func_1110();
		return 0;
	}
	iVar0 = unk_0xB3FF0049C1FD38EC(iLocal_499, 0);
	if (!unk_0x55A0C756C4A8220C(iVar0, 0))
	{
		func_1110();
		return 0;
	}
	if (!func_659(unk_0xE2D3D51028F0428A(), iVar0, -1))
	{
		func_1110();
		return 0;
	}
	if (func_707(0))
	{
		func_1110();
		return 0;
	}
	if (unk_0x207D53F9E0190691(iVar0) > 1f)
	{
		func_1109("TSA_TT_SLOW");
		return 0;
	}
	return 1;
}

void func_1109(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

void func_1110()
{
	if ((func_1111("TSA_TT_PRESS") || func_1111("TSA_TT_SLOW")) || func_1111("TSA_TT_NOPASSN"))
	{
		unk_0x3410421C60BF7143(1);
	}
}

bool func_1111(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_1112()
{
	if (unk_0xD5C6B5E3B93A5EDC(iLocal_499, 0))
	{
		return vdist(unk_0x6B62510F212526DC(unk_0xB3FF0049C1FD38EC(iLocal_499, 0), 1), Local_217.f_98.f_1[0 /*12*/]) < (Local_217.f_98.f_1[0 /*12*/].f_3 * 0.5f);
	}
	return vdist(Local_502, Local_217.f_98.f_1[0 /*12*/]) < (Local_217.f_98.f_1[0 /*12*/].f_3 * 0.5f);
}

void func_1113()
{
	func_1110();
}

void func_1114()
{
	func_729();
	if (func_716() == 1)
	{
		func_700();
	}
	if (func_716() < 2)
	{
		Local_217.f_98.f_1[0 /*12*/].f_8 = 38;
		Local_217.f_98.f_1[0 /*12*/].f_5 = 4;
		Local_217.f_98.f_1[0 /*12*/].f_3 = 21f;
	}
	else
	{
		Local_217.f_98.f_1[0 /*12*/].f_3 = 21f;
	}
	if (func_1108())
	{
		if (!func_1111("TSA_TT_PRESS"))
		{
			func_1109("TSA_TT_PRESS");
		}
	}
}

int func_1115()
{
	Local_214.f_3 = func_181(9857, -1, 0);
	return 1;
}

void func_1116()
{
}

char* func_1117(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TSA_TICK_BT";
			}
		
		default:
	}
	return "";
}

char* func_1118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_HT_START";
		
		case 1:
			return "TSA_HT_TT_START";
		
		default:
	}
	return "";
}

int func_1119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_716() == 0 && vdist(Local_502, Local_217.f_98.f_1[0 /*12*/]) >= ((Local_217.f_98.f_1[0 /*12*/].f_3 * 0.5f) + 1f));
		
		case 1:
			return (func_716() == 2 && func_181(9878, -1, 0) <= 3);
		
		default:
	}
	return 0;
}

void func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_746(Local_214.f_3, "TSA_TIMER_BT", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_739();
			break;
		
		case 1:
			func_746(func_1121(), "TSA_TIMER_CT", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_739();
			break;
	}
}

int func_1121()
{
	return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_9);
}

int func_1122(var uParam0)
{
	return func_750(&Local_214, 0, 0);
}

bool func_1123(var uParam0)
{
	return func_716() >= 2;
}

int func_1124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_716() < 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_716() < 2)
			{
				return "TSA_CC_START";
			}
			break;
	}
	return "TSA_CC_CHECK";
}

bool func_1126(int iParam0)
{
	if (Local_545[iLocal_500 /*38*/].f_35 == (Local_217.f_98 - 1) && iParam0 == 0)
	{
		return 1;
	}
	return Local_545[iLocal_500 /*38*/].f_35 == (iParam0 - 1);
}

bool func_1127(int iParam0)
{
	return func_1128(iParam0);
}

bool func_1128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_716() == 0)
			{
				return 1;
			}
			break;
	}
	Call_Loc(Local_218.f_515);
	return (StackVal && iParam0 == Local_545[iLocal_500 /*38*/].f_35);
}

void func_1129()
{
	Local_545[iLocal_500 /*38*/].f_35 = (Local_545[iLocal_500 /*38*/].f_35 + 1 % Local_217.f_98);
}

void func_1130()
{
	Local_545[iLocal_500 /*38*/].f_37 = 0;
	func_643(193);
	func_573(16, -1, -1, -1, 1065353216);
	func_573(5, -1, -1, -1, 1065353216);
}

void func_1131(int iParam0)
{
	if (Local_545[iLocal_500 /*38*/].f_37 > 0)
	{
		if (iParam0 == 0)
		{
			unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Lap", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
		}
		else
		{
			unk_0x91DFC8F68F6D9B05(-1, "Checkpoint", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
		}
	}
	if (iParam0 == 0)
	{
		if (func_717(unk_0x74BD5C0C45A40771(), 0))
		{
			Local_214.f_2 = func_1121();
			if (Local_214.f_3 == 0 || Local_214.f_3 > Local_214.f_2)
			{
				Local_214.f_3 = Local_214.f_2;
				func_520(9857, Local_214.f_3, -1, 1, 0);
				func_1132();
			}
			func_714(0);
		}
	}
}

void func_1132()
{
	struct<14> Var0;
	
	Var0.f_2 = -1248267178;
	Var0.f_10 = unk_0x9E2D6C50374FCFA9();
	Var0.f_3 = Local_214.f_3;
	Var0.f_5 = 2f;
	func_1134(Var0, func_1135());
	func_1133("TSA_TICK_BT", Local_214.f_3, 0);
}

int func_1133(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = -1;
	unk_0x150D8F58B26E9F70(sParam0);
	if (!bParam2)
	{
		unk_0x28594D0D61DB1278(iParam1, 7);
	}
	else
	{
		unk_0x28594D0D61DB1278(iParam1, 2055);
	}
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	func_580(17, sParam0, 1, &sVar1, iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1134(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 677240627;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam13 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam13);
	}
}

int func_1135()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if ((iVar2 != iLocal_498 && func_664(iVar2)) && func_1136(iVar2))
		{
			unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_1136(int iParam0)
{
	if (!func_663(iParam0))
	{
		return 0;
	}
	if (func_1137() != 1)
	{
		return 0;
	}
	return 1;
}

int func_1137()
{
	return func_660(unk_0x9E2D6C50374FCFA9());
}

void func_1138()
{
	if (Local_545[iLocal_500 /*38*/].f_35 == 1)
	{
		if (!func_717(unk_0x74BD5C0C45A40771(), 0))
		{
			Local_214.f_9 = unk_0x0A89FDFA763DCAED();
			func_735(0);
		}
	}
}

void func_1139()
{
	unk_0x91DFC8F68F6D9B05(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
}

void func_1140(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x91DFC8F68F6D9B05(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

void func_1141()
{
	int iVar0;
	
	Local_217.f_343 = 60;
	Local_217.f_343.f_1 = 1;
	Local_217.f_98 = 19;
	iVar0 = 0;
	while (iVar0 < Local_217.f_98)
	{
		Local_217.f_98.f_1[iVar0 /*12*/].f_3 = 21f;
		Local_217.f_98.f_1[iVar0 /*12*/].f_4 = 14f;
		iVar0++;
	}
	Local_217.f_98.f_1[15 /*12*/].f_3 = 23f;
	Local_217.f_98.f_1[0 /*12*/] = { -2088f, 1120.43f, 24.67f };
	Local_217.f_98.f_1[1 /*12*/] = { -2092.295f, 1063.031f, 24.666f };
	Local_217.f_98.f_1[2 /*12*/] = { -2117.462f, 1007.832f, 24.666f };
	Local_217.f_98.f_1[3 /*12*/] = { -2062.429f, 1005.882f, 24.666f };
	Local_217.f_98.f_1[4 /*12*/] = { -2047.25f, 1121.412f, 24.666f };
	Local_217.f_98.f_1[5 /*12*/] = { -2023.677f, 1026.208f, 24.666f };
	Local_217.f_98.f_1[6 /*12*/] = { -1849.711f, 1035.924f, 24.666f };
	Local_217.f_98.f_1[7 /*12*/] = { -1913.469f, 1061.543f, 24.666f };
	Local_217.f_98.f_1[8 /*12*/] = { -1853.693f, 1082.718f, 24.666f };
	Local_217.f_98.f_1[9 /*12*/] = { -1862.635f, 1224.53f, 24.666f };
	Local_217.f_98.f_1[10 /*12*/] = { -1887.603f, 1149.94f, 24.666f };
	Local_217.f_98.f_1[11 /*12*/] = { -1994.162f, 1142.102f, 24.666f };
	Local_217.f_98.f_1[12 /*12*/] = { -1991.9f, 1075.801f, 24.666f };
	Local_217.f_98.f_1[13 /*12*/] = { -1938.773f, 1082.35f, 24.666f };
	Local_217.f_98.f_1[14 /*12*/] = { -1949.693f, 1199.321f, 24.666f };
	Local_217.f_98.f_1[15 /*12*/] = { -2016.872f, 1172.227f, 24.666f };
	Local_217.f_98.f_1[16 /*12*/] = { -2057.99f, 1199.121f, 24.666f };
	Local_217.f_98.f_1[17 /*12*/] = { -2123.125f, 1211.668f, 24.666f };
	Local_217.f_98.f_1[18 /*12*/] = { -2089.228f, 1214.846f, 24.666f };
	Local_217.f_430 = 1;
	Local_217.f_388[0 /*6*/] = 4;
	Local_217.f_388[0 /*6*/].f_3 = 3;
	Local_217.f_388[1 /*6*/] = 4;
	Local_217.f_388[1 /*6*/].f_3 = 4;
	Local_217.f_388[2 /*6*/] = 4;
	Local_217.f_388[3 /*6*/] = 4;
}

void func_1142()
{
}

int func_1143(var uParam0, var uParam1)
{
	Local_538.f_122 = uParam0;
	Local_538.f_122.f_1 = uParam1;
	return 1;
}

int func_1144()
{
	return func_1145();
}

int func_1145()
{
	return Global_2810287.f_5193.f_345;
}

int func_1146()
{
	return func_654();
}

bool func_1147(int iParam0)
{
	return func_4(&uLocal_510, iParam0);
}

void func_1148()
{
	if (Local_218.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_218.f_3.f_2.f_1);
	}
	if (Local_218.f_97.f_6 != 0)
	{
		Call_Loc(Local_218.f_97.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (func_1429())
	{
		return;
	}
	if (func_1147(46))
	{
		return;
	}
	func_1294();
	func_1288();
	func_1284();
	func_1205();
	func_1152();
	func_1149();
}

void func_1149()
{
	if (!func_1147(30))
	{
		if (Local_218.f_86 != 0)
		{
			Call_Loc(Local_218.f_86);
			func_1150(StackVal);
		}
		func_496(30);
	}
}

void func_1150(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 55)
	{
		return;
	}
	func_1151(iParam0);
}

void func_1151(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_35[iVar0]), iVar1);
}

void func_1152()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_403(iLocal_501, 0))
	{
		return;
	}
	bVar2 = (func_1147(11) || func_1147(74));
	if (bVar2)
	{
		if (Local_218.f_51 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_218.f_51);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_218.f_51.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_218.f_51.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	func_1200(bVar2);
	func_1198(&iVar0, &iVar1);
	if (Local_218.f_51.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Call_Loc(Local_218.f_51.f_5);
		iVar0 = round((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Call_Loc(Local_218.f_51.f_5);
		iVar1 = round((StackVal * StackVal));
	}
	if (iVar0 > 0 || (iVar0 == 0 && func_1197()))
	{
		func_1196(iVar0);
		if (Local_217.f_349)
		{
			Global_2727434 = iVar0;
			func_20(&Global_2725690, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_217.f_349.f_1)
		{
			func_1195();
		}
		func_1153(0, iLocal_499, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	Local_310.f_5 = (Local_310.f_5 + iVar0);
	Local_310.f_6 = (Local_310.f_6 + iVar1);
	func_675(0);
}

int func_1153(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_1154(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1154(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1164(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				iVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_1160(unk_0x6EA486FF6D815B4B(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_1155(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_1155(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_1158(iParam0, 1) };
	if (iParam0 == func_1157(unk_0xE2D3D51028F0428A()))
	{
		func_1156(1);
	}
	func_1160(Var0, iParam1, 0, sParam2, iParam3);
}

void func_1156(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_1157(int iParam0)
{
	return iParam0;
}

Vector3 func_1158(int iParam0, bool bParam1)
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
	if (iParam0 == func_1159(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
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

int func_1159(int iParam0)
{
	return iParam0;
}

void func_1160(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_1163(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam1;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam2;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_1162();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_1161();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam4);
		}
	}
}

int func_1161()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_1162()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_1163(struct<3> Param0, var uParam1, var uParam2)
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

var func_1164(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_1165(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1165(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_1194(unk_0x9E2D6C50374FCFA9()) || func_1193(unk_0x9E2D6C50374FCFA9()))
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
	else if (func_1191() || func_1189(unk_0x9E2D6C50374FCFA9()))
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
	if (func_1188(sParam2))
	{
	}
	if (func_1187())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_1185(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_1184(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_1182(0, &iVar1);
					break;
				
				case 3:
					func_1182(1, &iVar1);
					break;
				
				case 1:
					func_1180(&iVar1);
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
			func_1179(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_1175((func_1178(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_2 != -1)
				{
					func_1179(1166, iVar1, -1);
				}
				func_1170(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_1166((func_1168(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_1166((func_1168(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1166(int iParam0)
{
	if (func_1187())
	{
		Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_5 = iParam0;
		func_1167(joaat("mpply_globalxp"), iParam0);
	}
}

void func_1167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_1168(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_1169(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_1169(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_1169(int iParam0)
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

void func_1170(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_83(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar1 = func_1173(func_1174(&Var0));
			if (iVar1 == 0)
			{
				func_1172(&Global_1655483, iParam0);
				func_1171(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar1 == 1)
			{
				func_1172(&Global_1655484, iParam0);
				func_1171(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar1 == 2)
			{
				func_1172(&Global_1655485, iParam0);
				func_1171(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar1 == 3)
			{
				func_1172(&Global_1655486, iParam0);
				func_1171(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar1 == 4)
			{
				func_1172(&Global_1655487, iParam0);
				func_1171(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_1171(int iParam0, int iParam1)
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

void func_1172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_1173(int iParam0)
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

int func_1174(var uParam0)
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

void func_1175(int iParam0, int iParam1, int iParam2)
{
	if (func_1187())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_182(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_182(-1)])
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
		if (func_397(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_6 = func_1176(iParam0, 1);
		}
		func_519(640, iParam0, -1, 1);
		func_520(641, func_1176(iParam0, 1), -1, 1, 0);
		Global_1655628[func_182(-1)] = iParam0;
		func_917(-1109644434, 7, 0);
	}
}

int func_1176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_1177(iParam0, 0);
}

int func_1177(int iParam0, int iParam1)
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

int func_1178(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_182(-1)];
			}
			else if (func_397(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_182(-1)];
	}
	return 0;
}

void func_1179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_181(iParam0, func_182(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_521(iParam0))
	{
		func_520(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_519(iParam0, iVar0, iParam2, 1);
	}
}

void func_1180(int iParam0)
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
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_305(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_84(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = round((func_1181(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_1181(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_1181(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_1182(bool bParam0, int iParam1)
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
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_84(unk_0x9E2D6C50374FCFA9(), iVar4))
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
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_1183(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_84(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = round((func_1181(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_1181(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_1183(int iParam0, int iParam1)
{
	return vdist(func_77(iParam0), func_77(iParam1));
	return 0f;
}

int func_1184(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_1181(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_1185(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_1178(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_1178(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_1186(8000, 0, 0) > 0)
	{
		if (func_1186(8000, 0, 0) < (iParam0 + func_1178(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_1186(8000, 0, 0) - func_1178(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_1186(int iParam0, bool bParam1, int iParam2)
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

int func_1187()
{
	return 1;
}

int func_1188(char* sParam0)
{
	if (unk_0xE8F6C1F695B25B91(sParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "") || unk_0x3C57C2F07FEE34D2(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_1189(int iParam0)
{
	return func_1190(func_203(iParam0));
}

int func_1190(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1191()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_78();
	}
	return func_1192(Global_4718592.f_86750);
}

int func_1192(int iParam0)
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

bool func_1193(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_1194(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_1195()
{
	Global_2726775 = 1;
}

void func_1196(int iParam0)
{
	int iVar0;
	
	if (func_249())
	{
		func_585(-1027218631, iParam0, &iVar0, 0, 1, 0);
		StringCopy(&(Global_4528329[iVar0 /*85*/].f_14.f_26), "tuner_sandbox_activity", 32);
	}
	else
	{
		unk_0x65A61C657AA4707E(iParam0, "tuner_sandbox_activity");
	}
}

int func_1197()
{
	return 0;
}

void func_1198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_1199(7))
	{
		return;
	}
	if (Local_218.f_51.f_2 != 0)
	{
		Call_Loc(Local_218.f_51.f_2);
		iVar0 = StackVal;
	}
	if (Local_218.f_51.f_3 != 0)
	{
		Call_Loc(Local_218.f_51.f_3);
		iVar1 = StackVal;
	}
	iVar2 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(Global_2810287.f_5193.f_269, unk_0x0A89FDFA763DCAED()));
	if (Local_218.f_51.f_4 != 0)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_218.f_51.f_4);
		if (StackVal > StackVal)
		{
			Call_Loc(Local_218.f_51.f_4);
			iVar2 = StackVal;
		}
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	iVar0 = (iVar3 * iVar0);
	iVar1 = (iVar3 * iVar1);
	*iParam0 = (*iParam0 + iVar0);
	*iParam1 = (*iParam1 + iVar1);
}

bool func_1199(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5193.f_47, iParam0);
}

void func_1200(bool bParam0)
{
	Stack.Push(Local_218.f_51.f_8 != 0);
	Call_Loc(Local_218.f_51.f_8);
	if (StackVal && StackVal)
	{
		if (bParam0)
		{
			if (func_1204(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				func_1203();
			}
			else
			{
				func_1202();
			}
		}
		else
		{
			func_1201();
		}
	}
}

void func_1201()
{
	if (func_54())
	{
		Global_2715542.f_3076.f_134 = 0;
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
	}
}

void func_1202()
{
	if (func_54())
	{
		if (Global_2715542.f_3076.f_134 < 10)
		{
			Global_2715542.f_3076.f_134++;
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
		}
	}
}

void func_1203()
{
	if (func_54())
	{
		if (Global_2715542.f_3076.f_134 > 0)
		{
			Global_2715542.f_3076.f_134 = (Global_2715542.f_3076.f_134 - 1);
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_427 = Global_2715542.f_3076.f_134;
		}
	}
}

int func_1204(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_28;
}

void func_1205()
{
	if (!func_1147(8))
	{
		if (func_1282())
		{
			if (func_1217(0, 1, 1) && func_1213())
			{
				func_1206();
				func_496(8);
			}
		}
		else
		{
			func_496(8);
		}
	}
}

void func_1206()
{
	switch (func_13())
	{
		case 0:
			switch (func_476())
			{
				case 1:
					func_768(88, "TSA_STQUIT_TT_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				default:
					func_1212(20, Local_214.f_3, "BM_PB", "BM_FAST_LAP", 1, -1, -1082130432, 2);
					unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					break;
			}
			break;
		
		case 1:
			switch (func_476())
			{
				case 1:
					func_768(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_768(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_768(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_538.f_122.f_17 == func_734())
					{
						func_1209(88, func_1211(), func_1210(), "TSA_STQUIT_CD_T", -1, -1, -1082130432, 0, 1, 2, 128);
					}
					else if (Local_538.f_122.f_17 == iLocal_501)
					{
						func_1212(20, Local_214.f_2, "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
						unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					else
					{
						func_1208(27, unk_0x6B01934FA503547F(Local_538.f_122.f_17), 0, "TSA_LOSER_STRP", "TSA_LOSER", 1, -1, 2, 0);
						unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					break;
			}
			break;
		
		case 3:
			switch (func_476())
			{
				case 1:
					func_768(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_768(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_768(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_538.f_122.f_17 != func_734())
					{
						if (Local_538.f_122.f_17 == iLocal_501)
						{
							func_1212(20, unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_214.f_9), "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
							unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
						}
						else
						{
							func_1208(27, unk_0x6B01934FA503547F(Local_538.f_122.f_17), 0, "TSA_STLOSE_SR", "TSA_LOSER", 1, -1, 2, 0);
							unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
						}
					}
					break;
			}
			break;
		
		case 2:
			switch (func_476())
			{
				case 1:
					func_768(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_768(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_768(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_538.f_122.f_17 == func_734())
					{
						func_1209(88, func_1211(), func_1210(), "TSA_STQUIT_HH_T", -1, -1, -1082130432, 0, 1, 2, 128);
					}
					else if (Local_538.f_122.f_17 == iLocal_501)
					{
						func_1212(20, Local_214.f_2, "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
						unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					else
					{
						func_1208(27, unk_0x6B01934FA503547F(Local_538.f_122.f_17), 0, "TSA_LOSER_H2H", "TSA_LOSER", 1, -1, 2, 0);
						unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					break;
			}
			break;
		
		default:
			func_1209(88, func_1211(), func_1210(), func_1207(), -1, -1, -1082130432, 0, 1, 2, 128);
			break;
	}
}

char* func_1207()
{
	return "TSA_STEND_T";
}

int func_1208(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_817(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_815(&(Var0.f_69), iParam8);
	}
	return func_769(&Var0);
}

int func_1209(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_817(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_815(&(Var0.f_69), iParam10);
	}
	return func_769(&Var0);
}

char* func_1210()
{
	return "";
}

char* func_1211()
{
	return "";
}

int func_1212(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_817(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_769(&Var0);
}

bool func_1213()
{
	return (func_1215() || func_1214());
}

int func_1214()
{
	return 0;
}

bool func_1215()
{
	return (func_403(iLocal_501, 3) || func_1216(iLocal_498));
}

bool func_1216(int iParam0)
{
	return func_963(iParam0);
}

bool func_1217(int iParam0, int iParam1, int iParam2)
{
	return ((!func_1275() && !func_1274()) && func_1218((iParam0 && func_1273()), 1, func_1272(), 0));
}

int func_1218(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1271(unk_0x9E2D6C50374FCFA9(), 29))
	{
		return 0;
	}
	if (func_1270(unk_0x9E2D6C50374FCFA9(), 21))
	{
		return 0;
	}
	if (func_1270(unk_0x9E2D6C50374FCFA9(), 25))
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
	if (!func_1269(unk_0x9E2D6C50374FCFA9()))
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
	if (func_1268(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_1267())
	{
		return 0;
	}
	if (func_1266())
	{
		return 0;
	}
	if (func_1265())
	{
		return 0;
	}
	if (func_1264())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_307(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_951())
	{
		return 0;
	}
	if (func_1270(unk_0x9E2D6C50374FCFA9(), 0) || func_1270(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if ((func_1270(unk_0x9E2D6C50374FCFA9(), 12) || func_1270(unk_0x9E2D6C50374FCFA9(), 14)) || func_1270(unk_0x9E2D6C50374FCFA9(), 13))
	{
		return 0;
	}
	if (func_1261(unk_0x9E2D6C50374FCFA9(), 0, -1))
	{
		if (!func_1226())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_186())
		{
			return 0;
		}
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_973(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_1225())
	{
		return 0;
	}
	if (func_1224(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((func_359(unk_0x9E2D6C50374FCFA9()) && func_356(unk_0x9E2D6C50374FCFA9()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1223())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (func_1222(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_966(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_963(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1221(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_1219())
	{
		return 0;
	}
	return 1;
}

bool func_1219()
{
	return func_1220() == 1;
}

int func_1220()
{
	return Global_1973362;
}

int func_1221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_1222(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1223()
{
	return Global_1946934.f_4583 != -1;
}

int func_1224(int iParam0)
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

int func_1225()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1226()
{
	int iVar0;
	
	iVar0 = func_203(unk_0x9E2D6C50374FCFA9());
	if (((func_1260(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30) || func_1259(unk_0x9E2D6C50374FCFA9())) || func_1258(unk_0x9E2D6C50374FCFA9())) || func_1253(unk_0x9E2D6C50374FCFA9()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1252(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1251(iVar0) || func_1250(iVar0))
		{
			return 1;
		}
	}
	if (func_1249(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1250(iVar0))
		{
			return 1;
		}
	}
	if (func_1248(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1247(iVar0))
		{
			return 1;
		}
	}
	if (func_1246(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1245(iVar0))
		{
			return 1;
		}
	}
	if (func_1244(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1190(iVar0))
		{
			return 1;
		}
	}
	if (func_1243(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1242(iVar0))
		{
			return 1;
		}
	}
	if (func_360(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_1241(iVar0))
		{
			if (func_1239(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
		}
	}
	if (func_1238(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1237(iVar0))
		{
			return 1;
		}
		if (func_1236(iVar0))
		{
			return 1;
		}
		if (func_1235())
		{
			return 1;
		}
	}
	if (func_1234(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1233())
		{
			return 1;
		}
	}
	if (func_1232(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1236(iVar0))
		{
			return 1;
		}
	}
	if (func_214(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1231(iVar0))
		{
			return 1;
		}
	}
	if (func_663(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1230(iVar0))
		{
			return 1;
		}
	}
	if (func_1229(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_1228(iVar0) || func_1227(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_1229(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_1232(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_50())
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_1233()
{
	return Global_2810287.f_6720;
}

int func_1234(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_1235()
{
	return Global_2810287.f_6719;
}

int func_1236(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_1238(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_1239(int iParam0)
{
	if (func_1240(iParam0) != func_50())
	{
		return func_1240(iParam0) == func_82(iParam0);
	}
	return 0;
}

int func_1240(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_1241(int iParam0)
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

int func_1242(int iParam0)
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

int func_1243(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_1244(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_1245(int iParam0)
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

int func_1246(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_1247(int iParam0)
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

int func_1248(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_1249(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_1250(int iParam0)
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

int func_1251(int iParam0)
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

int func_1252(int iParam0)
{
	if (func_372(Global_1853128[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_1253(int iParam0)
{
	if (func_1254(Global_1853128[iParam0 /*888*/].f_267.f_30, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1254(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1255(unk_0x9E2D6C50374FCFA9(), 0);
	}
	if (bParam1)
	{
		if (func_1255(unk_0x9E2D6C50374FCFA9(), 0))
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

bool func_1255(int iParam0, bool bParam1)
{
	if (Global_1852964 != func_50())
	{
		if (!func_1257(Global_1852964))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9E2D6C50374FCFA9() != Global_1852964)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_1852964 /*453*/].f_199, 24) || func_1256(Global_1852964))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 24);
}

int func_1256(int iParam0)
{
	if (iParam0 != func_50())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 9);
	}
	return 0;
}

int func_1257(int iParam0)
{
	if (iParam0 != func_50())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 2);
	}
	return 0;
}

int func_1258(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_1259(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_1260(int iParam0)
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

int func_1261(int iParam0, bool bParam1, int iParam2)
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
		if (iParam2 == -1 || func_215(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_1262(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_1262(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_50())
	{
		return iParam0;
	}
	if (func_1263(iParam0) != -1)
	{
		iVar0 = func_215(func_1263(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_57(iParam0, 0))
			{
				return func_82(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_50();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_50();
}

int func_1263(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_9(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_1264()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

bool func_1265()
{
	return Global_1575046;
}

bool func_1266()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

bool func_1267()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

int func_1268(int iParam0)
{
	if (func_306(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1269(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

bool func_1270(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_1271(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

bool func_1272()
{
	if (Local_218.f_45.f_5 != 0)
	{
		Call_Loc(Local_218.f_45.f_5);
		return StackVal;
	}
	if (func_1235())
	{
		return 0;
	}
	return !func_1147(3);
}

bool func_1273()
{
	return !func_1429();
}

int func_1274()
{
	return 0;
}

int func_1275()
{
	if ((func_964(unk_0x9E2D6C50374FCFA9(), 21) || func_964(unk_0x9E2D6C50374FCFA9(), 22)) || func_1281())
	{
		return 1;
	}
	if (func_1277())
	{
		func_1276(22);
		return 1;
	}
	return 0;
}

void func_1276(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_1277()
{
	if (func_202(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (((func_1280() && !func_1279()) || func_1270(unk_0x9E2D6C50374FCFA9(), 21)) || func_1270(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		else
		{
			func_1278(27);
		}
	}
	return 0;
}

void func_1278(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

bool func_1279()
{
	return Global_1574580.f_1;
}

bool func_1280()
{
	return Global_1574580;
}

bool func_1281()
{
	return func_921(424, -1);
}

int func_1282()
{
	if (func_476() == 2 && func_1283(Local_507) != 3)
	{
		return 0;
	}
	if (func_1147(11))
	{
		if (func_61(24) || func_61(23))
		{
			return 0;
		}
	}
	return 1;
}

int func_1283(int iParam0)
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

void func_1284()
{
	int iVar0;
	
	if (func_403(iLocal_501, 25))
	{
		return;
	}
	if (func_1286())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_423())
	{
		if (Local_538.f_232.f_1[iVar0 /*5*/].f_1 != -1)
		{
			func_1285(Local_538.f_232.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_675(25);
}

void func_1285(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1952863.f_4858[iVar0 /*2*/].f_1 == -1)
		{
			Global_1952863.f_4858[iVar0 /*2*/] = { Param0 };
			unk_0xCED9E32812D6C7C7(&Global_1952863, 1);
			return;
		}
		iVar0++;
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_1952863, 1))
	{
		unk_0xCED9E32812D6C7C7(&Global_1952863, 1);
	}
}

bool func_1286()
{
	return func_1287(unk_0x9E2D6C50374FCFA9());
}

int func_1287(int iParam0)
{
	if (iParam0 != func_50())
	{
		if (func_446(Global_1893548[iParam0 /*600*/].f_557.f_12) || unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_557, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_1288()
{
	char* sVar0;
	
	if (func_1147(11))
	{
		sVar0 = func_1292();
	}
	else
	{
		sVar0 = func_1290();
	}
	if (iLocal_321 != -1)
	{
		if (!unk_0xACC32B78196FBC2A(sVar0))
		{
			unk_0x1CF3F44FC2EB9F99(sVar0);
		}
	}
	func_1289(0);
}

void func_1289(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1147(34))
		{
			unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
			unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
			func_496(34);
		}
	}
	else if (func_1147(34))
	{
		unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
		func_685(34);
	}
}

var func_1290()
{
	if (Local_218.f_89.f_3.f_3 != 0)
	{
		Call_Loc(Local_218.f_89.f_3.f_3);
		return StackVal;
	}
	return func_1291();
}

char* func_1291()
{
	return "";
}

var func_1292()
{
	if (Local_218.f_89.f_3.f_2 != 0)
	{
		Call_Loc(Local_218.f_89.f_3.f_2);
		return StackVal;
	}
	return func_1293();
}

char* func_1293()
{
	return "";
}

void func_1294()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_217.f_19)
	{
		func_1428(iVar4);
		bVar0 = unk_0x90F6E2F6488B98BA(Local_538.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = unk_0xF2D8DACFAEBD9629(Local_538.f_2[iVar4]);
			bVar1 = unk_0x55B23FE400FCEA6B(iVar3, 0);
			if (Local_218.f_108.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_218.f_108.f_34);
			}
			if (!bVar1)
			{
				func_1423(iVar4, iVar3);
				func_1422(iVar4, iVar3);
				func_1405(iVar4, iVar3, &bVar2, &iVar5);
				func_1400(iVar4, iVar3);
				func_1388(iVar4, iVar3, bVar2);
				func_1383(iVar4, iVar3);
			}
			func_1382(iVar4);
			func_1369(iVar4, Local_313.f_11);
			func_1346(iVar4);
		}
		else
		{
			Local_293[iVar4 /*7*/].f_1 = 99999f;
			Local_293[iVar4 /*7*/].f_2 = 99999f;
			Local_293[iVar4 /*7*/].f_3 = 99999f;
		}
		func_1337(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		func_1336(1);
	}
	else
	{
		func_1332(0, 0);
		func_1336(0);
	}
	func_1322();
	func_1296();
	iLocal_529++;
	if (iLocal_529 >= func_31())
	{
		iLocal_529 = 0;
		func_1295();
	}
}

void func_1295()
{
	if (func_15(&(Local_293.f_12), 5000, 0) && Local_293.f_14)
	{
		func_120(&(Local_293.f_12));
		Local_293.f_14 = 0;
	}
}

void func_1296()
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	
	if (unk_0x90F6E2F6488B98BA(Local_538.f_2[iLocal_529]))
	{
		iVar2 = unk_0xF2D8DACFAEBD9629(Local_538.f_2[iLocal_529]);
		bVar1 = unk_0x55B23FE400FCEA6B(iVar2, 0);
		Var0 = { unk_0x6B62510F212526DC(iVar2, 0) };
		if (!bVar1)
		{
			func_1315(iLocal_529, Var0);
			if (func_15(&(Local_293.f_12), 5000, 0))
			{
				if (iLocal_529 == 0)
				{
					Local_293.f_14 = 1;
				}
				func_1297(iLocal_529, iVar2, Var0);
			}
		}
	}
}

void func_1297(int iParam0, int iParam1, struct<3> Param2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = func_1313(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_1302(iVar0, 0) };
	iVar2 = unk_0x63AC7EFB770FCB6F(Var1, func_1300(iVar0));
	iVar3 = unk_0x6D7EE245AD1E10B0(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (unk_0xE85F749F6D5C809E(iParam1))
		{
			return;
		}
		if (!func_1299(Local_538.f_2[iParam0]))
		{
			return;
		}
		if (func_1298(iVar0, &Var1, &uVar4))
		{
			Var1 = { Var1.x, Var1.f_1, (Var1.f_2 + 5f) };
			unk_0xC64B6E13A6A7F517(iParam1, Var1, 1, 0, 0, 1);
			if (unk_0x0086095F1731DE17(iParam1))
			{
				unk_0xE6A4C4B2E8DE36D3(unk_0x1AA24836EA881D77(iParam1));
			}
			unk_0xBBF86885619695CE(iParam1, uVar4);
			unk_0x3C46BE5CFF0F7003(iParam1);
		}
	}
}

bool func_1298(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_193(*uParam1, 0f, 0f, 0f, 0);
}

int func_1299(var uParam0)
{
	if (unk_0x07B2F8356DC13CF4(uParam0) || (!unk_0x3BA0A79B368FAA6D(uParam0) && unk_0x54E30A65F4FA4962()))
	{
		if (func_111(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1300(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1301(Global_102098);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
	}
	return "";
}

char* func_1301(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1137() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_1302(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_1312(Global_102098);
			break;
		
		case 46:
			if (Global_1852965 != func_50())
			{
				if (func_1311(Global_1852965))
				{
					return func_1304(2, 2);
				}
				else if (func_1303(Global_1852965))
				{
					return func_1304(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966296;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_1303(int iParam0)
{
	if (iParam0 != func_50())
	{
		if ((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 0) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 1)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1304(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1852965 != func_50())
	{
		if (iParam1 == 3)
		{
			if (func_1305(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[Global_1852965 /*888*/].f_267.f_269, 4))
			{
				if (func_1305(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_1853128[Global_1852965 /*888*/].f_267.f_269, 5))
			{
				if (func_1305(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_1305(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_1310(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1310(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_1308(iParam0) };
	}
	else
	{
		Var2 = { func_1307(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_1306(Var3, -Var0.f_3.f_2) };
	Var3 = { func_1306(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0x6DB7FBD602C51670(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_1306(struct<3> Param0, float fParam1)
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

struct<6> func_1307(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_1308(int iParam0)
{
	return func_1309(iParam0);
}

struct<6> func_1309(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_1310(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_1311(int iParam0)
{
	if (iParam0 != func_50())
	{
		if ((unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 3) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 4)) || unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_269, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1312(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_1137() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_1313(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_185(iVar0))
		{
			if (!bParam3 || func_1314(iVar0))
			{
				fVar1 = unk_0x987A5F1E1A67E3C0(Param0, func_1302(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_1314(int iParam0)
{
	return func_180(iParam0, 0, 0);
}

void func_1315(int iParam0, struct<3> Param1)
{
	Local_293[iParam0 /*7*/].f_1 = unk_0x987A5F1E1A67E3C0(Param1, Local_502, func_1321(iParam0));
	Local_293[iParam0 /*7*/].f_2 = unk_0x987A5F1E1A67E3C0(Param1, func_1316(), func_1321(iParam0));
	Local_293[iParam0 /*7*/].f_3 = unk_0x987A5F1E1A67E3C0(Param1, Local_217.f_19.f_5[iParam0 /*13*/].f_3, func_1321(iParam0));
}

Vector3 func_1316()
{
	if (Local_218.f_461.f_4.f_2 != 0)
	{
		Call_Loc(Local_218.f_461.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_1317(func_1320());
}

Vector3 func_1317(int iParam0)
{
	struct<3> Var0;
	
	if (bLocal_495 && unk_0xD5C6B5E3B93A5EDC(iLocal_499, 0))
	{
		Var0 = { func_1319(iParam0) };
		if (!func_86(Var0))
		{
			return Var0;
		}
	}
	return func_1318(iParam0);
}

Vector3 func_1318(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952863.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_1319(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952863.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_1320()
{
	if (Local_218.f_461.f_4.f_1 != 0)
	{
		Call_Loc(Local_218.f_461.f_4.f_1);
		return StackVal;
	}
	if (iLocal_500 != -1)
	{
		return Local_313.f_1[Local_545[iLocal_500 /*38*/].f_14 /*4*/];
	}
	return 0;
}

int func_1321(int iParam0)
{
	if (Local_218.f_108.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_29);
	}
	return 1;
}

void func_1322()
{
	if (func_1329(iLocal_498, 1) && func_1328())
	{
		if (func_1324())
		{
			if (!func_1147(35))
			{
				func_522(func_1323(), -1);
				func_496(35);
			}
		}
	}
	else
	{
		if (func_1147(35))
		{
			func_685(35);
		}
		if (func_1111(func_1323()))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

char* func_1323()
{
	return "BHH_HELD";
}

int func_1324()
{
	if (((((((((!func_1327() && !func_1326()) && !unk_0xF1EC2C71FD1371B8()) && !unk_0xB7B9FCC926422B4B()) && bLocal_495) && !func_1325()) && func_1147(9)) && !unk_0xA829C9A2767AC8EF()) && !unk_0xCB1EF1E7B77ADF4C()) && !unk_0xECD40FEF3CF43BDB())
	{
		return 1;
	}
	return 0;
}

bool func_1325()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

bool func_1326()
{
	return Global_75021;
}

bool func_1327()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_1328()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (unk_0x90F6E2F6488B98BA(Local_538.f_2[iVar0]))
		{
			if (iLocal_530[iVar0] != iLocal_501)
			{
				if (!unk_0xE85F749F6D5C809E(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iVar0])))
				{
					if (Local_293[iVar0 /*7*/].f_1 < 2f)
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

int func_1329(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if (func_1330(iParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1330(int iParam0, int iParam1, bool bParam2)
{
	if (Local_293[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_427(iParam1, 4) || func_1331(iParam1, iLocal_501, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_1331(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_545[iParam1 /*38*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_1332(bool bParam0, int iParam1)
{
	if (!func_158())
	{
		return;
	}
	if (bParam0)
	{
		if (func_427(iParam1, 32))
		{
			func_1335(24);
		}
		func_1334(Local_217.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		func_1333(24);
		func_1334(0);
	}
}

void func_1333(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_6), iParam0);
}

void func_1334(int iParam0)
{
	if (Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_179 != iParam0)
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_179 = iParam0;
	}
}

void func_1335(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_6), iParam0);
}

void func_1336(bool bParam0)
{
	if (bParam0)
	{
		func_1335(22);
		func_1335(23);
	}
	else
	{
		func_1333(22);
		func_1333(23);
	}
}

void func_1337(int iParam0, bool bParam1)
{
	if (!func_1345(iParam0))
	{
		return;
	}
	if (bParam1 && func_1299(Local_538.f_2[iParam0]))
	{
		func_1344(&(Local_538.f_2[iParam0]));
	}
	func_1339(iParam0);
	func_1338(iParam0);
}

void func_1338(int iParam0)
{
	if (unk_0x90F6E2F6488B98BA(Local_538.f_2.f_15[iParam0]) && func_1299(Local_538.f_2.f_15[iParam0]))
	{
		func_1344(&(Local_538.f_2.f_15[iParam0]));
		func_117(&(Local_538.f_2.f_15[iParam0]));
	}
}

void func_1339(int iParam0)
{
	var uVar0;
	
	if (!func_427(iParam0, 4) || !func_1341(iParam0))
	{
		return;
	}
	uVar0 = func_1340(iParam0);
	if (!func_61(33) && unk_0xE85F749F6D5C809E(unk_0xF2D8DACFAEBD9629(func_1340(iParam0))))
	{
		unk_0xE6451C2F193342C7(unk_0xF2D8DACFAEBD9629(func_1340(iParam0)), 1, 1);
	}
	if (func_61(11))
	{
		if (!unk_0x3F1009A1E4E10C6A(unk_0xF2D8DACFAEBD9629(func_1340(iParam0))))
		{
			unk_0xB970266897BDB48D(unk_0xF2D8DACFAEBD9629(func_1340(iParam0)), 1, 1);
		}
		if (!unk_0x2B5F4FBAF644BEC8(unk_0xF2D8DACFAEBD9629(func_1340(iParam0))))
		{
			func_1344(&uVar0);
		}
	}
	else if (func_61(12))
	{
		func_117(&uVar0);
	}
	else if (!func_61(32))
	{
		func_1344(&uVar0);
	}
}

var func_1340(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!func_435(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_408(iParam0);
	switch (func_409())
	{
		case 2:
			return Local_538.f_47[iVar1 /*8*/];
		
		case 1:
			return Local_538.f_22[iVar1 /*24*/];
		
		default:
	}
	return uVar0;
}

int func_1341(int iParam0)
{
	if (!func_435(iParam0))
	{
		return 0;
	}
	if (!unk_0x90F6E2F6488B98BA(func_1340(iParam0)))
	{
		return 0;
	}
	if ((func_427(iParam0, 35) || func_427(iParam0, 36)) || func_427(iParam0, 37))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(unk_0xF2D8DACFAEBD9629(func_1340(iParam0)), 0))
	{
		return 0;
	}
	switch (func_409())
	{
		case 2:
			if (func_1342(func_1343(iParam0), 0, 1))
			{
				return 0;
			}
			break;
	}
	if (!func_1299(func_1340(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1342(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xADD893BD545BE5FC(uParam0) + 1;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x7158135695FAE89D(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xAB793EA186AB8DAA(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xE5965CDF24F93A9F(iVar2))
					{
						if (unk_0x65FAB09725E2FE75(iVar2))
						{
							if (!bParam2 && func_81(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						if (!bParam2 && func_81(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1343(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_1340(iParam0);
	if (unk_0x90F6E2F6488B98BA(uVar1))
	{
		return unk_0xA5677134B9672173(uVar1);
	}
	return uVar0;
}

void func_1344(var uParam0)
{
	var uVar0;
	
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		if (!unk_0x07B2F8356DC13CF4(*uParam0))
		{
		}
	}
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0x531055A66E7A812C(&uVar0);
	}
}

int func_1345(int iParam0)
{
	if ((((func_427(iParam0, 19) || (func_427(iParam0, 3) && func_15(&(Local_538.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_427(iParam0, 4)) || func_427(iParam0, 25)) || func_427(iParam0, 33))
	{
		return (func_427(iParam0, 4) || func_427(iParam0, 3));
	}
	return 0;
}

void func_1346(int iParam0)
{
	if (func_1362(iParam0))
	{
		func_1348(iParam0);
	}
	else
	{
		func_1347(iParam0);
	}
}

void func_1347(int iParam0)
{
	if (unk_0x12DD4A0B247D9B4D(Local_293[iParam0 /*7*/]))
	{
		unk_0xFFD8EB5462B07B59(&(Local_293[iParam0 /*7*/]));
	}
}

void func_1348(int iParam0)
{
	if (!unk_0x12DD4A0B247D9B4D(Local_293[iParam0 /*7*/]))
	{
		if (unk_0x90F6E2F6488B98BA(Local_538.f_2[iParam0]))
		{
			Local_293[iParam0 /*7*/] = unk_0xEFD6451BF0F3352F(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]));
			if (func_1359(func_1360(iParam0)))
			{
				unk_0x1A5B5BA56167D412(Local_293[iParam0 /*7*/], func_1360(iParam0));
			}
			unk_0x293A9399E902A33B(Local_293[iParam0 /*7*/], func_1357(iParam0));
			unk_0xA582EE8380437B1B(Local_293[iParam0 /*7*/], func_1355(iParam0, 0));
			unk_0xAF62582F3EA39095(Local_293[iParam0 /*7*/], func_1353(iParam0));
			unk_0x7A610B2EC5DA34E7(Local_293[iParam0 /*7*/], 12);
			if (func_1352(iParam0))
			{
				unk_0x3430966AC4550BB9(Local_293[iParam0 /*7*/], 1);
			}
			if (!func_1331(iParam0, iLocal_501, 46))
			{
				func_1351(&(Local_293[iParam0 /*7*/]), 1);
				func_1350(iParam0, 46);
			}
		}
	}
	else
	{
		unk_0xA582EE8380437B1B(Local_293[iParam0 /*7*/], func_1355(iParam0, 0));
		if (unk_0xF33CD92713FC4E3A(Local_293[iParam0 /*7*/]) != func_1360(iParam0) && func_1359(func_1360(iParam0)))
		{
			unk_0x1A5B5BA56167D412(Local_293[iParam0 /*7*/], func_1360(iParam0));
			unk_0xAF62582F3EA39095(Local_293[iParam0 /*7*/], func_1353(iParam0));
		}
		if (unk_0xCA3605134E97DB2B(Local_293[iParam0 /*7*/]) != func_1355(iParam0, 0))
		{
			unk_0xA582EE8380437B1B(Local_293[iParam0 /*7*/], func_1355(iParam0, 0));
		}
		if (func_408(iParam0) > -1 && func_409() == 2)
		{
			if (func_1349(iParam0))
			{
				if (unk_0x90F6E2F6488B98BA(Local_538.f_47[func_408(iParam0) /*8*/]) && !unk_0x55B23FE400FCEA6B(unk_0xF2D8DACFAEBD9629(Local_538.f_47[func_408(iParam0) /*8*/]), 0))
				{
					unk_0xB02954D4F69B7A25(Local_293[iParam0 /*7*/], round(unk_0x82FE2343F8BDFF0B(unk_0xF2D8DACFAEBD9629(Local_538.f_47[func_408(iParam0) /*8*/]))));
				}
			}
		}
	}
}

int func_1349(int iParam0)
{
	if (Local_218.f_108.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_18);
		return StackVal;
	}
	return 0;
}

void func_1350(int iParam0, int iParam1)
{
	if (func_19(&(Local_545[iLocal_500 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_1351(var uParam0, bool bParam1)
{
	unk_0x9705014C37E60003(*uParam0, 1);
	unk_0x1209F9274AFF1A3D(*uParam0, 250);
	unk_0xE5D4469DCCFB5170(*uParam0, 7000);
	if (bParam1)
	{
		unk_0xC70E97154CC5B243();
	}
}

bool func_1352(int iParam0)
{
	if (Local_218.f_108.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_14);
		return StackVal;
	}
	return Local_217.f_19.f_1.f_3;
}

var func_1353(int iParam0)
{
	if (Local_218.f_108.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_13);
		return StackVal;
	}
	return func_1354();
}

char* func_1354()
{
	return "FMC_BLIP_ME";
}

int func_1355(int iParam0, bool bParam1)
{
	if (Local_218.f_108.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_5);
		return func_725(StackVal);
	}
	if (!bParam1)
	{
		if (func_1331(iParam0, iLocal_501, 12))
		{
			return 1;
		}
	}
	else if (func_1054() == 23 && func_1331(iParam0, iLocal_501, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_293[iParam0 /*7*/].f_4 != func_50())
	{
		return func_725(func_1356(Local_293[iParam0 /*7*/].f_4));
	}
	if (func_434(iParam0))
	{
		if (!func_61(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1356(int iParam0)
{
	int iVar0;
	
	iVar0 = func_801(iParam0);
	if (iVar0 != -1)
	{
		return func_799(iVar0);
	}
	return 1;
}

var func_1357(int iParam0)
{
	if (Local_218.f_108.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_6);
		return StackVal;
	}
	return func_1358();
}

var func_1358()
{
	return Local_217.f_19.f_1.f_2;
}

int func_1359(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_1360(int iParam0)
{
	if (Local_218.f_108.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_4);
		return StackVal;
	}
	if (Local_217.f_19.f_1 != -1)
	{
		return Local_217.f_19.f_1;
	}
	return func_1361();
}

int func_1361()
{
	return 478;
}

int func_1362(int iParam0)
{
	if (!bLocal_506)
	{
		return 0;
	}
	if (func_1368(iParam0, 1))
	{
		return 0;
	}
	if (Local_293[iParam0 /*7*/].f_4 != func_50() && func_409() != 1)
	{
		return 0;
	}
	if (func_470(iParam0, 10) && !func_427(iParam0, 7))
	{
		return 0;
	}
	if (func_1331(iParam0, iLocal_501, 14))
	{
		return 0;
	}
	if ((func_470(iParam0, 16) && func_427(iParam0, 23)) && !func_403(iLocal_501, 2))
	{
		return 0;
	}
	if (func_427(iParam0, 23) && func_1367(iLocal_498))
	{
		return 0;
	}
	if (func_427(iParam0, 29) && func_427(iParam0, 40))
	{
		return 0;
	}
	if (func_1363())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_108);
	return StackVal;
}

int func_1363()
{
	if (unk_0xC378B7F0D175A5B0(iLocal_498) < 1 && unk_0x161C7B2E8D844C6C(iLocal_498) < 1)
	{
		return 0;
	}
	if (func_1366())
	{
		return 1;
	}
	if (func_1365())
	{
		if (func_1364(iLocal_498, 0, 1, 0) || func_1329(iLocal_498, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1364(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_31())
	{
		if ((((iParam1 || !func_427(iVar0, 4)) && (iParam2 || !func_1331(iVar0, unk_0x32F47FD509BB6D38(iParam0), 1))) && (iParam3 || !func_1331(iVar0, unk_0x32F47FD509BB6D38(iParam0), 12))) && func_1331(iVar0, unk_0x32F47FD509BB6D38(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1365()
{
	if (Local_218.f_60.f_11 != 0)
	{
		Call_Loc(Local_218.f_60.f_11);
		return StackVal;
	}
	return 1;
}

int func_1366()
{
	if (Local_218.f_60.f_10 != 0)
	{
		Call_Loc(Local_218.f_60.f_10);
		return StackVal;
	}
	return 0;
}

int func_1367(int iParam0)
{
	if ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9) && !(unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7))) || ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7)) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

int func_1368(int iParam0, bool bParam1)
{
	if (func_427(iParam0, 4) || func_427(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_1331(iParam0, iLocal_501, 6) || func_1331(iParam0, iLocal_501, 9))
		{
			return 1;
		}
	}
	return 0;
}

void func_1369(int iParam0, int iParam1)
{
	if (Local_293[iParam0 /*7*/].f_4 == iLocal_498)
	{
		if (iParam1 != 5)
		{
			if (!func_1380(func_160(iParam0)))
			{
				func_1378(func_160(iParam0));
				if (Local_218.f_108.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_218.f_108.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952863.f_4851 && !func_1377(iLocal_498)) && !func_1286())
		{
			if (func_1380(func_160(iParam0)))
			{
				func_1370(func_160(iParam0));
			}
		}
	}
}

void func_1370(int iParam0)
{
	if (!func_1374(iParam0))
	{
		return;
	}
	func_1371(Local_538.f_232.f_1[iParam0 /*5*/]);
}

void func_1371(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_446(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/]) && func_444(Param0, Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1373(unk_0x9E2D6C50374FCFA9()) <= 0)
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557), 0);
		func_1372();
	}
}

void func_1372()
{
	Global_1952863.f_5006.f_3 = 0;
	Global_1952863.f_5006 = -1;
	Global_1952863.f_5006.f_2 = -1000;
}

int func_1373(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_50())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_446(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_1374(int iParam0)
{
	if ((iParam0 == -1 || func_1376(iParam0) == -1) || func_1375(iParam0) == -1)
	{
		return 0;
	}
	return func_446(Local_538.f_232.f_1[iParam0 /*5*/]);
}

int func_1375(int iParam0)
{
	return Local_538.f_232.f_1[iParam0 /*5*/].f_3;
}

int func_1376(int iParam0)
{
	return Local_538.f_232.f_1[iParam0 /*5*/].f_2;
}

int func_1377(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_50() && (func_9(iParam0, 1, 1) || Global_2667222.f_2678))
	{
		bVar0 = unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 1);
		return bVar0;
	}
	return 0;
}

void func_1378(int iParam0)
{
	if (!func_1374(iParam0))
	{
		return;
	}
	func_1379(Local_538.f_232.f_1[iParam0 /*5*/]);
}

void func_1379(struct<2> Param0)
{
	int iVar0;
	
	if (!func_446(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_446(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557), 0);
	func_442(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1380(int iParam0)
{
	if (!func_1374(iParam0))
	{
		return 0;
	}
	return func_1381(Local_538.f_232.f_1[iParam0 /*5*/]);
}

int func_1381(struct<2> Param0)
{
	int iVar0;
	
	if (!func_446(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_446(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/]) && func_444(Param0, Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1382(int iParam0)
{
	if (iLocal_530[iParam0] != func_734())
	{
		if (uLocal_531[iParam0] != iLocal_530[iParam0])
		{
			uLocal_531[iParam0] = iLocal_530[iParam0];
		}
	}
}

void func_1383(int iParam0, int iParam1)
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_470(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_293[iParam0 /*7*/].f_1 < func_1387(iParam0))
	{
		bVar0 = true;
		if (func_1386(iParam0) && !unk_0xD936DBC1D824A1BE(iLocal_499, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_1385(iParam0) != -1f)
		{
			Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
			if (unk_0x48053974ED6F63CE((Var1.f_2 - Local_502.f_2)) > func_1385(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_218.f_108.f_35 != 0)
		{
			if (!func_1331(iParam0, iLocal_501, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_218.f_108.f_35);
			}
		}
		func_1350(iParam0, 35);
		func_1350(iParam0, 0);
	}
	else
	{
		func_1384(iParam0, 0);
	}
}

void func_1384(int iParam0, int iParam1)
{
	if (func_131(&(Local_545[iLocal_500 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_1385(int iParam0)
{
	if (Local_218.f_108.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_26);
		return StackVal;
	}
	return -1f;
}

int func_1386(int iParam0)
{
	if (Local_218.f_108.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_25);
		return StackVal;
	}
	return 0;
}

float func_1387(int iParam0)
{
	if (Local_218.f_108.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_24);
		return StackVal;
	}
	if (func_434(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_1388(int iParam0, int iParam1, bool bParam2)
{
	if (!func_158())
	{
		return;
	}
	if (!func_427(iParam0, 32) && !func_1331(iParam0, iLocal_501, 24))
	{
		if (func_1396(iParam0))
		{
			if (func_1299(Local_538.f_2[iParam0]))
			{
				unk_0x229DD509EDB2FBD4(iParam1, 0);
				unk_0x4C6E9D70687FCDCE(Local_538.f_2[iParam0], 1);
				unk_0xC6E2D6B7217F48AC(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1);
				func_1395(Local_507, 0, 0);
				func_1350(iParam0, 24);
			}
		}
	}
	else
	{
		func_1389(iParam1, &(Local_293[iParam0 /*7*/].f_5), func_1394(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_1332(bParam2, iParam0);
	}
}

void func_1389(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x9E2D6C50374FCFA9() == func_10())
	{
		if ((unk_0xE5965CDF24F93A9F(iParam0) && !bParam2) && !func_1393())
		{
			if (func_15(uParam1, 1000, 0))
			{
				func_1392(unk_0x6B62510F212526DC(iParam0, 1), iParam3);
				func_120(uParam1);
			}
		}
		else
		{
			func_1390(iParam3);
		}
	}
}

void func_1390(int iParam0)
{
	if (!func_193(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_151[iParam0 /*3*/], func_1391(), 0))
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_151[iParam0 /*3*/] = { func_1391() };
	}
	if (!func_193(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_126[iParam0 /*3*/], func_1391(), 0))
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_126[iParam0 /*3*/] = { func_1391() };
	}
}

Vector3 func_1391()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1392(struct<3> Param0, int iParam1)
{
	if (!func_193(Param0, Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_151[iParam1 /*3*/], 0))
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_126[iParam1 /*3*/] = { Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_151[iParam1 /*3*/] };
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_151[iParam1 /*3*/] = { Param0 };
	}
}

int func_1393()
{
	int iVar0;
	
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4629, 2))
	{
		if (func_57(unk_0x9E2D6C50374FCFA9(), 1))
		{
			iVar0 = func_82(unk_0x9E2D6C50374FCFA9());
			if (iVar0 != func_50())
			{
				if (Global_2689156[iVar0 /*453*/].f_209)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1394(int iParam0)
{
	if ((func_427(iParam0, 3) || func_427(iParam0, 4)) || Local_293[iParam0 /*7*/].f_4 != func_50())
	{
		return 1;
	}
	return 0;
}

void func_1395(var uParam0, bool bParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = -1678006840;
	Var0.f_10 = unk_0x9E2D6C50374FCFA9();
	Var0.f_11 = func_51();
	Var0.f_4 = uParam0;
	if (bParam1)
	{
		iVar1 = func_47(unk_0x9E2D6C50374FCFA9());
	}
	else if (bParam2)
	{
		iVar1 = func_49(1);
	}
	else
	{
		iVar1 = func_177(1, 1);
	}
	func_1134(Var0, iVar1);
}

int func_1396(int iParam0)
{
	if (!func_1399(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_218.f_108.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (func_15(&(Local_538.f_2.f_18), func_1397(), 0))
	{
		return 1;
	}
	return 0;
}

int func_1397()
{
	if (Local_218.f_108.f_39.f_1 != 0)
	{
		Call_Loc(Local_218.f_108.f_39.f_1);
		return StackVal;
	}
	return func_1398();
}

int func_1398()
{
	return 20000;
}

bool func_1399(int iParam0)
{
	return func_427(iParam0, 1);
}

void func_1400(int iParam0, int iParam1)
{
	if (func_427(iParam0, 29) || !func_1404(iParam0))
	{
		return;
	}
	func_1401(iParam1, iParam0);
}

void func_1401(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (unk_0x2B5F4FBAF644BEC8(iParam0))
	{
		fVar0 = func_1403(iParam1);
		if (unk_0xD8F9DF94CD871327(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		unk_0x2F046C9381D8E91B(18, &uVar2, &uVar3, &uVar4, &uVar5);
		func_1402(iParam0, uVar2, uVar3, uVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

void func_1402(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, int iParam7, int iParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		iVar5 = unk_0x28AA31872A651BC7(iParam0);
		if (!unk_0xF68107C40359970C(iVar5))
		{
			if (unk_0xD5C6B5E3B93A5EDC(iVar5, 0) && !unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(iVar5, 0))))
			{
				iParam0 = unk_0xB3FF0049C1FD38EC(iVar5, 0);
			}
		}
	}
	fVar3 = 0.5f;
	iVar4 = unk_0x15CAA6D7B11F1A7C(iParam0);
	unk_0xB38EF75835FAF667(iVar4, &Var0, &Var1);
	fVar6 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar7 = (Var1.f_2 - fVar6);
	if (fVar3 <= (fVar7 + 0.1f))
	{
		fVar3 = ((fVar7 + fParam4) - 0.1f);
	}
	switch (iVar4)
	{
		case joaat("seven70"):
		case joaat("raptor"):
		case joaat("issi3"):
		case joaat("comet3"):
		case joaat("specter2"):
		case joaat("hermes"):
		case joaat("dominator3"):
		case joaat("jugular"):
		case joaat("remus"):
		case joaat("tailgater2"):
		case joaat("mesa3"):
			fVar3 = (fVar3 + 0.25f);
			break;
		
		case joaat("insurgent2"):
			fVar3 = (fVar3 + 0.75f);
			break;
	}
	fVar3 = (fVar3 + fParam5);
	fVar8 = 0f;
	if (bParam6)
	{
		Var2 = { unk_0x6B62510F212526DC(iParam0, 1) - Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar3), 0f, 0f) };
		fVar8 = 180f;
	}
	else
	{
		Var2 = { unk_0x6B62510F212526DC(iParam0, 1) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar3), 0f, 0f) };
	}
	if (iVar4 == joaat("imp_prop_impexp_boxpile_02"))
	{
		Var2 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iParam0, 1), unk_0x82FE2343F8BDFF0B(iParam0), -1.45f, 0.5f, 0f) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar3), 0f, 0f) };
	}
	else if (iVar4 == joaat("tr_prop_tr_break_dev_01a"))
	{
		Var2 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iParam0, 1), unk_0x82FE2343F8BDFF0B(iParam0), 0f, -0.3f, (Var1.f_2 + 0.17f)) };
	}
	if (fParam9 != 0f)
	{
		Var2 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(iParam0, 1), unk_0x82FE2343F8BDFF0B(iParam0), 0f, fParam9, Var1.f_2) };
	}
	unk_0x578727D52EACADA6(2, Var2, 0f, 0f, 0f, 180f, fVar8, iParam8, fParam4, fParam4, fParam4, uParam1, uParam2, uParam3, 100, 1, iParam7, 2, 0, 0, 0, 0);
}

float func_1403(var uParam0)
{
	if (Local_218.f_108.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_218.f_108.f_20);
		return StackVal;
	}
	return 0.3f;
}

int func_1404(int iParam0)
{
	return 0;
}

void func_1405(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_470(iParam0, 9) || Local_218.f_108.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_218.f_108.f_38);
		if (StackVal)
		{
			if (!func_427(iParam0, 31))
			{
				if (func_1299(Local_538.f_2[iParam0]))
				{
					func_465(iParam0, 0, 0);
					func_1350(iParam0, 22);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		iVar0 = unk_0x4F78F44087496A64(iParam1);
		if (iVar0 != -1)
		{
			if (unk_0x9044EDB8A7BF67B4(iVar0))
			{
				iVar1 = unk_0x28AA31872A651BC7(iVar0);
				if (unk_0x65FAB09725E2FE75(iVar1))
				{
					iVar2 = unk_0xFF65CDB0EB7ACE71(iVar1);
					if (iVar2 == iLocal_498)
					{
						if (unk_0x07B2F8356DC13CF4(Local_538.f_2[iParam0]))
						{
							unk_0xD649C4FD90F64861(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 0);
							unk_0x9210F85E9CD785F1(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), true);
							unk_0x5C65DDDC219B3AA5(unk_0xF2D8DACFAEBD9629(Local_538.f_2[iParam0]), false);
							func_1350(iParam0, 1);
							if (!func_427(iParam0, 1))
							{
								func_1350(iParam0, 18);
							}
							*uParam2 = 1;
							func_1413();
							*iParam3 = iParam0;
						}
					}
					else if (!unk_0x976D40337FCB1481(iVar2))
					{
						func_1350(iParam0, 12);
					}
				}
				else if (!unk_0xF68107C40359970C(iVar1))
				{
					if (unk_0x611AD675982BEBCC(iVar1))
					{
						if (unk_0x2F52E009BBC0AFCE(iVar1, uLocal_309))
						{
							func_1350(iParam0, 1);
							if (!func_427(iParam0, 1))
							{
								func_1350(iParam0, 18);
							}
							*uParam2 = 1;
							func_1413();
							*iParam3 = iParam0;
						}
					}
				}
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					if (unk_0xB3FF0049C1FD38EC(iVar1, 0) == iLocal_503)
					{
						func_1350(iParam0, 14);
					}
				}
			}
			else if (unk_0x04D9F44466CBF3CA(iVar0))
			{
				iVar3 = unk_0x31EB55FAEEE9C0F5(iVar0);
				if (unk_0x55A0C756C4A8220C(iVar3, 0) && !func_1412())
				{
					iVar4 = func_408(iParam0);
					if (!func_1411(Local_217.f_67.f_1[iVar4 /*14*/].f_3) || unk_0xE2ED785E8DB4D3FF(iVar0))
					{
						if (!func_1411(iLocal_504))
						{
							func_1350(iParam0, 21);
							if (unk_0xD5C6B5E3B93A5EDC(iLocal_499, 0))
							{
								if (unk_0xB3FF0049C1FD38EC(iLocal_499, 0) == iVar3)
								{
									if (func_1410(iLocal_499, 0) == -1)
									{
										func_1350(iParam0, 1);
										if (!func_427(iParam0, 1))
										{
											func_1350(iParam0, 18);
											func_1413();
										}
										*uParam2 = 1;
										func_1413();
										*iParam3 = iParam0;
									}
									func_1350(iParam0, 14);
								}
								else
								{
									func_1409(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_476() == 0)
				{
					func_1406(iParam0);
				}
			}
		}
	}
}

void func_1406(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (func_1299(Local_538.f_2[iParam0]))
	{
		unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1, 1);
		unk_0x3FF6DDE9123AEA35(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1, 0);
		unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), true, 0);
		func_1408(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]));
		func_1350(iParam0, 45);
		Var0 = { unk_0x6B62510F212526DC(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), 1) };
		Var1 = { unk_0x7F65C587E17DEF5D(Var0, 1067030938, 1069547520) };
		if (Var1.x == Var0.x && Var1.f_1 == Var0.f_1)
		{
			iVar2 = func_408(iParam0);
			if (iVar2 != -1)
			{
				uVar3 = Local_538.f_47[iVar2 /*8*/];
				if (unk_0x90F6E2F6488B98BA(uVar3))
				{
					Var1 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(uVar3), 0) };
				}
			}
		}
		fVar4 = func_1407(unk_0x15CAA6D7B11F1A7C(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0])));
		Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
		unk_0xC64B6E13A6A7F517(unk_0xE8BBC6CC2C60F24A(Local_538.f_2[iParam0]), Var1, 1, 0, 0, 1);
	}
}

float func_1407(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_278(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x48053974ED6F63CE((Var0.f_2 - Var1.f_2));
}

void func_1408(int iParam0)
{
	unk_0xE987EFB3B3FAB187(uParam0, 1);
	unk_0xAA8C46C452582702(uParam0);
	unk_0x189AB741D56F49B9(iParam0, 1);
}

void func_1409(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (((unk_0xE5965CDF24F93A9F(iLocal_503) && func_1410(iLocal_499, 0) == -1) && unk_0x099CAD293190F449(iParam0, iLocal_503)) && unk_0x04D9F44466CBF3CA(iParam0))
	{
		if (unk_0x7158135695FAE89D(iParam0, -1, 0) || unk_0x817B926B53C0589A(iLocal_503))
		{
			func_1350(iParam1, 1);
			if (!func_427(iParam1, 1))
			{
				func_1350(iParam1, 18);
			}
			*uParam2 = 1;
			func_1413();
			*uParam3 = iParam1;
		}
	}
}

int func_1410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_1411(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_1412()
{
	return 0;
}

void func_1413()
{
	if (!bLocal_505)
	{
		return;
	}
	if (!func_1216(iLocal_498))
	{
		func_1414(0);
	}
}

void func_1414(int iParam0)
{
	if (!func_963(unk_0x9E2D6C50374FCFA9()))
	{
		if (iParam0 || func_1417(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			func_1276(20);
			func_643(func_1415());
			if (func_974(unk_0x9E2D6C50374FCFA9()))
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 8))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 8);
				}
			}
		}
	}
}

int func_1415()
{
	int iVar0;
	
	iVar0 = func_203(unk_0x9E2D6C50374FCFA9());
	if (func_1283(iVar0) == 0 || func_1283(iVar0) == 3)
	{
		return -1;
	}
	if (func_1416(iVar0))
	{
		return 65;
	}
	if (func_1251(iVar0))
	{
		return 66;
	}
	if (func_1241(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_1416(int iParam0)
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

int func_1417(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_974(iParam0) && !func_1421(iParam0)) && !unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_963(iParam0);
	uVar3 = func_1280();
	bVar4 = func_1275();
	if ((bVar1 && (func_965(iParam0) || func_1420(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_1419(iParam0)) && !func_1418(iParam0)))
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

bool func_1418(int iParam0)
{
	return func_964(iParam0, 19);
}

int func_1419(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_964(iParam0, 9);
	}
	return 0;
}

int func_1420(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

bool func_1421(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 2);
}

void func_1422(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((!func_470(iParam0, 7) || func_427(iParam0, 39)) || func_1331(iParam0, iLocal_501, 32))
	{
		return;
	}
	iVar0 = func_50();
	if (Local_218.f_108.f_37 != 0)
	{
		iVar1 = 0;
		while (iVar1 < unk_0x5D79167FED95F0B0())
		{
			iVar2 = unk_0x54F800F95142C750(iVar1);
			Stack.Push(unk_0x81F82FFBED0CACCA(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_218.f_108.f_37);
			if (StackVal && StackVal)
			{
				iVar0 = unk_0x6B01934FA503547F(iVar2);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (func_9(iVar0, 1, 1))
	{
		if (iVar0 == iLocal_498 && func_111(Local_538.f_2[iParam0]))
		{
			if (!unk_0x508CDC652F5361B5(iParam1))
			{
				unk_0xA4DC05DFB08A8957(unk_0x1AA24836EA881D77(iParam1), iLocal_499);
			}
			unk_0x1C2ED929474DC6FE(iParam1, true, 0);
			func_1350(iParam0, 32);
		}
	}
	else if (func_1299(Local_538.f_2[iParam0]))
	{
		unk_0x1C2ED929474DC6FE(iParam1, true, 0);
		func_1350(iParam0, 32);
	}
}

void func_1423(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if ((!func_435(iParam0) || func_427(iParam0, 39)) || func_1331(iParam0, iLocal_501, 36))
	{
		return;
	}
	uVar0 = func_1427(iParam0);
	if (unk_0x90F6E2F6488B98BA(uVar0) && func_111(uVar0))
	{
		iVar1 = unk_0xF2D8DACFAEBD9629(uVar0);
		if (!unk_0x55B23FE400FCEA6B(iVar1, 0) && func_1299(Local_538.f_2[iParam0]))
		{
			if (func_1425(iParam1, iVar1, func_1426(iParam0, unk_0x15CAA6D7B11F1A7C(iVar1)), 0f, 0f, 90f, 0, 0))
			{
				func_1424(iVar1);
				func_1350(iParam0, 36);
			}
		}
	}
}

void func_1424(int iParam0)
{
	var uVar0;
	
	switch (func_409())
	{
		case 2:
			uVar0 = unk_0x31EB55FAEEE9C0F5(iParam0);
			unk_0x085065FB04601E74(uVar0, 1);
			break;
	}
}

int func_1425(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5)
{
	if (!unk_0x099CAD293190F449(uParam0, iParam1))
	{
		switch (func_409())
		{
			case 2:
				unk_0x9A97DC6DBC7B223D(iParam0, iParam1, unk_0x7F0054A115D66F44(iParam1, "chassis_dummy"), Param2, Param3, iParam4, 0, iParam5, 0, 2, 1);
				break;
			
			case 1:
				unk_0xA4DC05DFB08A8957(unk_0x1AA24836EA881D77(iParam0), unk_0x28AA31872A651BC7(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1426(int iParam0, int iParam1)
{
	switch (func_409())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("insurgent3"):
				case joaat("limo2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						
						case 1:
							return -1f, -2f, -0.1f;
						
						case 2:
							return 1f, -2f, -0.1f;
						
						case 3:
							return -1f, -2f, -0.1f;
						
						default:
					}
					break;
				
				case joaat("issi3"):
				case joaat("panto"):
				case joaat("raptor"):
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						
						case 1:
							return -0.5f, 0f, -0.1f;
						
						case 2:
							return 0.5f, 0f, -0.1f;
						
						case 3:
							return -0.5f, 0f, -0.1f;
						
						default:
					}
					break;
				
				case joaat("faggio"):
					return 0f, -0.65f, 0.5f;
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				
				case 1:
					return -1f, 0f, -0.1f;
				
				case 2:
					return 1f, 0f, -0.1f;
				
				case 3:
					return -1f, 0f, -0.1f;
				
				default:
			}
			return 0f, -1f, -0.1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_1427(int iParam0)
{
	var uVar0;
	
	switch (func_409())
	{
		case 2:
			return Local_538.f_47[func_408(iParam0) /*8*/];
		
		case 1:
			return Local_538.f_22[func_408(iParam0) /*24*/];
		
		default:
	}
	return uVar0;
}

void func_1428(int iParam0)
{
	func_1384(iParam0, 1);
	func_1384(iParam0, 21);
	func_1384(iParam0, 14);
}

bool func_1429()
{
	return Local_322 != -1;
}

void func_1430()
{
	func_2099();
	func_1431();
}

void func_1431()
{
	if (!func_1147(46))
	{
		return;
	}
	if (!func_2098())
	{
		func_685(46);
		return;
	}
	if (!func_1147(26))
	{
		if (func_699(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_218.f_15.f_23);
			func_943(StackVal, StackVal, 0);
			if (unk_0x2981C54770E1D19C())
			{
				unk_0xEE3A19A84A10F8B9();
			}
		}
	}
	else
	{
		Call_Loc(Local_218.f_15.f_23.f_1);
		Stack.Push(0);
		Call_Loc(Local_218.f_15.f_23.f_2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_218.f_15.f_23.f_3);
		Call_Loc(Local_218.f_15.f_23.f_4);
		Stack.Push(3000);
		Stack.Push(1);
		Stack.Push(1);
		Call_Loc(Local_218.f_15.f_23.f_5);
		if (func_1432(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 1, 0))
		{
			func_684(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_218.f_15.f_23);
			func_943(StackVal, StackVal, 0);
			func_685(46);
		}
	}
}

int func_1432(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_2097();
	if (func_692(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		if (((bParam4 && func_9(unk_0x9E2D6C50374FCFA9(), 1, 0)) && unk_0x04458B4E5D9E466A()) && Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_231 == 1)
		{
		}
		else if (func_689() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 150, 1);
		if (!Global_2667222.f_701 == iParam0)
		{
			if (bParam15 && Global_2667222.f_701 == 37)
			{
			}
			else if (!Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 0)
			{
				if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_702) < func_391(0))
				{
					return 0;
				}
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 0)
		{
			Global_2667222.f_701 = iParam0;
			Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 2;
			if (bParam2)
			{
				if (!func_2096())
				{
					bParam2 = false;
				}
			}
			Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 2;
			Global_2667222.f_2477 = 0;
			Global_2667222.f_2478 = 0;
			Global_2667222.f_2476 = 0;
			Global_2667222.f_2876 = 0;
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667222.f_701 == 11)
			{
				Global_2667222.f_705 = { Global_2676143 };
				Global_2667222.f_708 = Global_2676143.f_5;
				Global_2667222.f_2896 = Global_2676143.f_26;
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 3;
			}
			else if (func_1839(&(Global_2667222.f_705), &(Global_2667222.f_708), Global_2667222.f_701, bVar3, iParam3, uParam5, iParam6, uParam8, uParam12, 0, bParam13, iParam17))
			{
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 3;
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
						func_1834(&iVar2);
					}
					else
					{
						iVar2 = func_1011();
						func_1833(&iVar2);
					}
					if (func_2096())
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
						{
							if (!unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) == Global_2667222.f_45.f_67)
							{
								iVar4 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
								if (iVar4 == Global_2667222.f_45.f_173)
								{
									func_1831();
								}
								unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
							}
						}
					}
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 4;
					}
					else
					{
						iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0x3A8B0F5B0E3DE13A(iVar2))
						{
							func_1813(iVar2);
							func_1812(1);
							Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 6;
						}
						else
						{
							unk_0xE7DD33D0E2A313F4(iVar2);
						}
					}
				}
				else
				{
					func_1812(1);
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 6;
				}
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 4)
		{
			if (func_1810())
			{
				if (Global_2667222.f_45.f_65)
				{
					if (func_1676(Global_2667222.f_705, Global_2667222.f_705.f_1, func_1806(Global_2667222.f_45.f_67), Global_2667222.f_708, 0))
					{
						Global_2667222.f_703 = unk_0x0A89FDFA763DCAED();
						Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 5;
					}
				}
				else if (func_1675(Global_2667222.f_45.f_67) || Global_2667222.f_45.f_67 == 0)
				{
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 6;
				}
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 5)
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 150, 1);
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 6;
				if (Global_2667222.f_45.f_175)
				{
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_236 = 1;
				}
				else
				{
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_236 = 0;
				}
			}
			else if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_703) > 5000)
			{
				unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 4;
			}
			else if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), -1794415470) == 7)
			{
				if (unk_0xE5965CDF24F93A9F(Global_2667222.f_45.f_173) && unk_0x55A0C756C4A8220C(Global_2667222.f_45.f_173, 0))
				{
					func_1477(unk_0xE2D3D51028F0428A(), Global_2667222.f_45.f_173, -1, 0);
				}
				else
				{
					unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 4;
				}
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 6)
		{
			Global_2667222.f_702 = unk_0x0A89FDFA763DCAED();
			if (Global_2667222.f_711)
			{
				Global_2667222.f_704 = unk_0x0A89FDFA763DCAED();
				Global_2667222.f_711 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2667222.f_704)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836580)
			{
				func_1471(Global_2667222.f_705);
			}
			if (bParam7 && !Global_2703656.f_924)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0xE5965CDF24F93A9F(iVar2))
					{
						if ((unk_0x55B23FE400FCEA6B(iVar2, 0) || !unk_0x55A0C756C4A8220C(iVar2, 0)) || func_413(iVar2))
						{
							unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_686(Global_2667222.f_705, Global_2667222.f_708, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2667222.f_2896))
				{
					if (bParam15)
					{
						Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 7;
						return 0;
					}
					else
					{
						func_1467();
					}
				}
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 7)
		{
			if ((Global_2667222.f_701 == 8 && Global_2667222.f_713.f_507) && Global_2667222.f_2876)
			{
				func_1467();
			}
			else if (func_1461(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0)) || func_1460())
			{
				if (Global_2667222.f_701 == 8 && !Global_2667222.f_2876)
				{
					Global_2667222.f_2876 = 1;
				}
				else
				{
					Global_2667222.f_701 = 37;
				}
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 2;
				Global_2667222.f_2477 = 0;
				Global_2667222.f_2478 = 0;
				Global_2667222.f_2476 = 0;
			}
			else
			{
				func_1467();
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 10)
		{
			if (vdist(Global_2676143, Global_2667222.f_705) > 0.1f)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar2)) || unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(iVar2)))
					{
						unk_0x9CD4CBF2BBE10F00(Global_2667222.f_705, Global_2667222.f_705.f_1, Global_2667222.f_705.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2667222.f_705.f_2 - fVar0) > 1.5f)
						{
							if (vdist(Global_2676143, Global_2667222.f_705) > 15f)
							{
								Global_2667222.f_705 = { Global_2676143 };
								if (unk_0x3A8B0F5B0E3DE13A(iVar2))
								{
									unk_0xC64B6E13A6A7F517(iVar2, Global_2667222.f_705, Global_2667222.f_705.f_1, (fVar0 + func_1407(unk_0x15CAA6D7B11F1A7C(iVar2))), 1, 0, 0, 1);
									unk_0x9F65B3BAFA302A65(iVar2, 1084227584);
								}
								Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
							}
							else
							{
								Global_2667222.f_705.f_2 = (Global_2667222.f_705.f_2 + 1f);
							}
						}
						else
						{
							if (unk_0x3A8B0F5B0E3DE13A(iVar2))
							{
								unk_0xC64B6E13A6A7F517(iVar2, Global_2667222.f_705, Global_2667222.f_705.f_1, (fVar0 + func_1407(unk_0x15CAA6D7B11F1A7C(iVar2))), 1, 0, 0, 1);
								unk_0x9F65B3BAFA302A65(iVar2, 1084227584);
							}
							Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
						}
					}
					else
					{
						Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
					}
				}
				else
				{
					Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
				}
			}
			else
			{
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
			}
		}
		if (Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 11)
		{
			if (!bParam14)
			{
				if (unk_0xE5965CDF24F93A9F(Global_2667222.f_45.f_173) && unk_0x3A8B0F5B0E3DE13A(Global_2667222.f_45.f_173))
				{
					unk_0x1C2ED929474DC6FE(Global_2667222.f_45.f_173, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_1452(iParam9, 0, 0);
				}
			}
			func_1450(func_77(unk_0x9E2D6C50374FCFA9()), 0, 0);
			if (unk_0xE5965CDF24F93A9F(Global_2667222.f_45.f_173))
			{
				func_1831();
			}
			if (!(func_1675(Global_2667222.f_45.f_67) || Global_2667222.f_45.f_67 == 0) && !Global_2667222.f_489.f_5)
			{
				func_1449(0, 0);
			}
			func_1448(0, 0);
			if (bParam10)
			{
				func_1447();
			}
			func_1446();
			func_1433();
			if (bParam13)
			{
				func_393();
			}
			func_946();
			return 1;
		}
	}
	else if (!Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 == 0)
	{
		unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
		func_1833(&(Global_2667222.f_45.f_173));
		func_946();
	}
	Global_2667222.f_702 = unk_0x0A89FDFA763DCAED();
	return 0;
}

void func_1433()
{
	int iVar0;
	
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_270.f_20 = -1;
	Global_2667222.f_2873 = -1f;
	iVar0 = 0;
	while (iVar0 < 42)
	{
		func_1435(iVar0);
		iVar0++;
	}
	if (func_1434(unk_0x9E2D6C50374FCFA9(), 0))
	{
		Global_2819657.f_89 = 1;
		Global_2819657.f_90 = unk_0x0A89FDFA763DCAED();
	}
}

int func_1434(int iParam0, bool bParam1)
{
	if (func_9(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2689156[iParam0 /*453*/].f_270.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2689156[iParam0 /*453*/].f_270.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_1435(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (Global_2689156[iVar0 /*453*/].f_270.f_14 != -1)
	{
		if (func_1445(Global_2689156[iVar0 /*453*/].f_270.f_14))
		{
			if (!func_1441(unk_0x9E2D6C50374FCFA9(), Global_2689156[iVar0 /*453*/].f_270.f_14, 0, 0))
			{
				Global_2689156[iVar0 /*453*/].f_270.f_14 = -1;
			}
		}
		else
		{
			Global_2689156[iVar0 /*453*/].f_270.f_14 = -1;
		}
	}
	if (Global_2689156[iVar0 /*453*/].f_270.f_16 != -1)
	{
		if (func_1445(Global_2689156[iVar0 /*453*/].f_270.f_16))
		{
			if (!func_1441(unk_0x9E2D6C50374FCFA9(), Global_2689156[iVar0 /*453*/].f_270.f_16, 0, 1))
			{
				Global_2689156[iVar0 /*453*/].f_270.f_16 = -1;
			}
		}
		else
		{
			Global_2689156[iVar0 /*453*/].f_270.f_16 = -1;
		}
	}
	if (Global_2689156[iVar0 /*453*/].f_270.f_15 != -1)
	{
		if (!func_1441(unk_0x9E2D6C50374FCFA9(), Global_2689156[iVar0 /*453*/].f_270.f_15, 0, 0))
		{
			Global_2689156[iVar0 /*453*/].f_270.f_15 = -1;
		}
	}
	if (func_1445(iParam0))
	{
		if (func_1441(unk_0x9E2D6C50374FCFA9(), iParam0, 0, 0))
		{
			if (!Global_2689156[iVar0 /*453*/].f_270.f_14 == iParam0)
			{
				Global_2689156[iVar0 /*453*/].f_270.f_14 = iParam0;
			}
		}
		if (func_1441(unk_0x9E2D6C50374FCFA9(), iParam0, 0, 1))
		{
			if (!Global_2689156[iVar0 /*453*/].f_270.f_16 == iParam0)
			{
				Global_2689156[iVar0 /*453*/].f_270.f_16 = iParam0;
			}
		}
		iVar2 = floor((to_float(iParam0) / 32f));
		if (func_1437(unk_0x9E2D6C50374FCFA9(), iParam0, 1120403456))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689156[iVar0 /*453*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_2689156[iVar0 /*453*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = vdist(func_1436(iParam0), func_77(unk_0x9E2D6C50374FCFA9()));
		if (iParam0 == Global_2689156[iVar0 /*453*/].f_270.f_20)
		{
			Global_2667222.f_2873 = fVar1;
		}
		else if (fVar1 < Global_2667222.f_2873 || Global_2667222.f_2873 <= 0f)
		{
			Global_2667222.f_2873 = fVar1;
			Global_2689156[iVar0 /*453*/].f_270.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2689156[iVar0 /*453*/].f_270.f_20)
	{
		Global_2689156[iVar0 /*453*/].f_270.f_20 = -1;
		Global_2667222.f_2873 = -1f;
	}
	if (func_1441(unk_0x9E2D6C50374FCFA9(), iParam0, 0, 0))
	{
		if (!Global_2689156[iVar0 /*453*/].f_270.f_15 == iParam0)
		{
			Global_2689156[iVar0 /*453*/].f_270.f_15 = iParam0;
		}
	}
}

Vector3 func_1436(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

int func_1437(int iParam0, int iParam1, float fParam2)
{
	if (func_695())
	{
		return 1;
	}
	if (func_1440(iParam1))
	{
		if (unk_0xE5965CDF24F93A9F(func_1439()))
		{
			if (func_1438(unk_0x6B62510F212526DC(func_1439(), 1), iParam1, fParam2) && Global_1912810[unk_0x9E2D6C50374FCFA9() /*257*/].f_93 == 8)
			{
				return 1;
			}
		}
		return func_1438(func_77(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_1438(struct<3> Param0, int iParam1, float fParam2)
{
	if (func_1440(iParam1))
	{
		if (vdist2(Param0, func_1436(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1439()
{
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		return Global_1958920.f_20;
	}
	return -1;
}

int func_1440(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 42)
	{
		return 1;
	}
	return 0;
}

int func_1441(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1440(iParam1))
	{
		if (!bParam3)
		{
			return func_1442(func_77(iParam0), iParam1, fParam2);
		}
		else if (func_1442(func_77(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_1442(func_77(iParam0), iParam1, 15f))
		{
			if (func_9(iParam0, 1, 1))
			{
				iVar0 = unk_0x407E03586628E458(iParam0);
				if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iVar0, 0))
				{
					if (unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
					{
						iVar1 = unk_0xD9BD5965B9552645(iVar0);
						if (unk_0xE5965CDF24F93A9F(iVar1) && !unk_0x55B23FE400FCEA6B(iVar1, 0))
						{
							if (unk_0xF2549FF74D64B720(iVar1, "PYV_Yacht"))
							{
								iVar2 = unk_0xC3B76795ECBDEF41(iVar1, "PYV_Yacht");
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

int func_1442(struct<3> Param0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (func_1440(iParam1))
	{
		func_1443(iParam1, &Var0, &Var1, &fVar2, fParam2);
		return unk_0x5F8653E60ED2288E(Param0, Var0, Var1, fVar2, 0, 1);
	}
	return 0;
}

void func_1443(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	
	Var0 = { func_1436(iParam0) };
	fVar1 = func_1444(iParam0);
	Var2 = { 0f, 1f, 0f };
	func_283(&Var2, 0f, 0f, fVar1);
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	*uParam1 = { Var0 + Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_1444(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

int func_1445(int iParam0)
{
	if (func_1440(iParam0))
	{
		return Global_2819657.f_2[iParam0];
	}
	return 0;
}

void func_1446()
{
	Global_1889632 = -1;
	Global_1889638 = 0;
	Global_1889633 = -1;
}

void func_1447()
{
	Global_2667222.f_5 = 1;
}

void func_1448(float fParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!func_1265() || iParam1)
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0x04458B4E5D9E466A())
		{
			if (!unk_0x94398B6170DCA18C())
			{
				Var0 = { func_77(unk_0x9E2D6C50374FCFA9()) };
				if (Var0.f_2 > -80f)
				{
					unk_0x080C97B891E2F3AA(0f, 1065353216);
					unk_0x94953C3FF0664F66(fParam0);
				}
			}
		}
	}
}

void func_1449(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xE85F749F6D5C809E(unk_0xE2D3D51028F0428A()))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667222.f_709)));
		if (unk_0x9CD4CBF2BBE10F00(Var0, &fVar1, 0, 0))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((unk_0x48053974ED6F63CE(fVar2) > 0f && unk_0x48053974ED6F63CE(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (unk_0x2981C54770E1D19C())
					{
						unk_0xEE3A19A84A10F8B9();
					}
				}
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var0.x, Var0.f_1, fVar1, 0, 1, 0, 1);
				Global_2667222.f_709 = 0;
			}
		}
		else if (Global_2667222.f_709 < 3)
		{
			Global_2667222.f_709++;
			func_1449(0, 0);
		}
		else
		{
			Global_2667222.f_709 = 0;
		}
	}
}

void func_1450(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	bVar2 = true;
	if (Global_2783722 && unk_0xBCC73B466E2B2350(unk_0xA0F62C1038208492(Param0)))
	{
		bVar2 = false;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		fVar1 = func_1451(unk_0x15CAA6D7B11F1A7C(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		if (bVar2)
		{
			unk_0x7A997A0A971D305F(Param0, fVar1, 1, 0, 0, bParam1);
		}
		unk_0x02B222EADC9DC566(Param0, fVar1, 1, 0, 1, 1, bParam1, 0, iParam2);
		unk_0x85050CAC8798CDD0(Param0, 6f);
	}
	else
	{
		uVar7 = unk_0x53DFE85FC69724BD(Param0.x, Param0.f_1, (Param0.f_2 - 2f), Param0.x, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
		unk_0xB2D581BD7446BBE9(uVar7, &iVar3, &uVar4, &uVar5, &uVar6);
		unk_0x7A997A0A971D305F(Param0, 0.7f, 1, 0, 0, bParam1);
		if (!iVar3 == 0)
		{
			unk_0x02B222EADC9DC566(Param0, 6f, 1, 0, 1, 1, bParam1, 0, 0);
			if (bVar2)
			{
				if (bParam1)
				{
					unk_0xDC226C748C3C868D(Param0, 6f, 17);
				}
				else
				{
					unk_0xDC226C748C3C868D(Param0, 6f, 16);
				}
			}
		}
		unk_0x85050CAC8798CDD0(Param0, 2.5f);
	}
}

float func_1451(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_278(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x48053974ED6F63CE((Var0.f_1 - Var1.f_1));
}

void func_1452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_1459())
	{
		iVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_1457(iVar1, &iVar0))
		{
			func_1453(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x3D81769BEC61BFF8(&iVar1);
			}
		}
	}
}

void func_1453(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x1D03F9BF5CF8CA0A(iParam0);
	if (unk_0xCCDCD6672DAE6835(uVar0))
	{
		if (Global_1836574 && unk_0x7010991FDA59D3F2(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x1DA01BA2F8B68B2C(uVar0, 1, 1, func_1456());
			return;
		}
		else if (func_1455())
		{
			func_1454(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x1DA01BA2F8B68B2C(uVar0, iParam2, 1, func_1456());
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
			{
				unk_0x49F5A737E649BB72(iParam2);
			}
		}
		else
		{
			unk_0x1DA01BA2F8B68B2C(uVar0, iParam1, 1, func_1456());
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
			{
				unk_0x49F5A737E649BB72(iParam1);
			}
		}
	}
}

int func_1454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			unk_0xFA88A0A3E965437C(iVar1, 1);
			if (iParam1 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x6870FB27B885E344(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0x3A8B0F5B0E3DE13A(iParam0))
	{
		unk_0xE06A9B86C360E754(iParam0, 1);
		return 1;
	}
	else
	{
		unk_0xE7DD33D0E2A313F4(iParam0);
	}
	return 0;
}

bool func_1455()
{
	return Global_1836592;
}

int func_1456()
{
	if (func_184() != 0)
	{
		return 0;
	}
	if (!func_397(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_1457(int iParam0, int iParam1)
{
	if (func_1458(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1458(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1459()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) == unk_0xE2D3D51028F0428A())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1460()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	Var3 = { func_77(unk_0x9E2D6C50374FCFA9()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_9(iVar1, 1, 1))
		{
			if (unk_0x3C7ED37A9FE7C585(unk_0x407E03586628E458(iVar1)))
			{
				if (!iVar1 == unk_0x9E2D6C50374FCFA9())
				{
					if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
					{
						fVar2 = vmag(func_77(iVar1) - Var3);
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

int func_1461(struct<3> Param0)
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
	
	iVar0 = unk_0xA0547B659F4E7B59(&Global_1578015);
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar5 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (!unk_0x55B23FE400FCEA6B(iVar5, 0))
		{
			iVar6 = unk_0x15CAA6D7B11F1A7C(iVar5);
			Var7 = { unk_0x6B62510F212526DC(iVar5, 1) };
			fVar8 = unk_0x82FE2343F8BDFF0B(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (unk_0xE5965CDF24F93A9F(Global_1578015[iVar4]))
		{
			if (!unk_0x55B23FE400FCEA6B(Global_1578015[iVar4], 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_1578015[iVar4], 0))
			{
			}
			else if (func_1466(Global_1578015[iVar4]))
			{
			}
			else if (!func_1462(Global_1578015[iVar4]))
			{
				Var1 = { unk_0x6B62510F212526DC(Global_1578015[iVar4], 0) };
				fVar2 = unk_0x82FE2343F8BDFF0B(Global_1578015[iVar4]);
				iVar3 = unk_0x15CAA6D7B11F1A7C(Global_1578015[iVar4]);
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (func_285(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_276(Param0, Var1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_1462(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7158135695FAE89D(iParam0, -1, 0))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x65FAB09725E2FE75(iVar0))
			{
				iVar1 = unk_0xFF65CDB0EB7ACE71(iVar0);
				if (func_9(iVar1, 0, 0))
				{
					if (func_1463(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1463(int iParam0)
{
	if (func_1465())
	{
		if (func_1464(unk_0x4AE7F6D227ED332C(iParam0), &(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_353.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1464(int iParam0, var uParam1)
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

int func_1465()
{
	if (Global_2667222.f_2877 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1466(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0xCD52E82290C8C97A(iVar0, &iVar1))
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

void func_1467()
{
	if (!Global_2667222.f_711)
	{
		Global_2667222.f_711 = 1;
	}
	func_1812(0);
	if (Global_2667222.f_2671)
	{
		func_1468();
		Global_2667222.f_2671 = 0;
	}
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 11;
}

void func_1468()
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
	
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if ((!Global_2667222.f_45.f_52 && !Global_2667222.f_45.f_53) && !Global_2667222.f_2672)
		{
			if (unk_0xDFCBBD9528DC1828(Var1, &Var2, 1, 1077936128, 0))
			{
				Var2.f_2 = (Var2.f_2 + 1f);
				bVar3 = true;
				if (!vdist(Var1, Var2) < 50f || Global_2667222.f_45.f_52)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_2667222.f_2672)
		{
			Global_2667222.f_2672 = 0;
		}
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			fVar4 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
		}
		fVar5 = 3f;
		Var6 = { unk_0x63BEA94AB58D4E6D(unk_0xE2D3D51028F0428A()) };
		Var6 = { Var6 / FtoV(vmag(Var6)) };
		Var6 = { Var6 * Vector(fVar5, fVar5, fVar5) };
		Var7 = { Var6 };
		func_283(&Var7, 0f, 0f, -45f);
		Var8 = { Var6 };
		func_283(&Var8, 0f, 0f, -90f);
		Var9 = { Var6 };
		func_283(&Var9, 0f, 0f, 45f);
		Var10 = { Var6 };
		func_283(&Var10, 0f, 0f, 90f);
		if (bVar3)
		{
			Var11 = { Var2 - Var1 };
			Var12 = { func_336(Var11, 0f, 0f, 1f) };
			Var12 = { Var12 / FtoV(vmag(Var12)) };
			Var12 = { Var12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		Var13 = { Var1 + Var6 };
		Var14 = { Var1 + Var7 };
		Var15 = { Var1 + Var8 };
		Var16 = { Var1 + Var9 };
		Var17 = { Var1 + Var10 };
		uVar18 = unk_0x9D2C476A7D8D9385(Var1, Var13, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		uVar19 = unk_0x9D2C476A7D8D9385(Var1, Var14, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		uVar20 = unk_0x9D2C476A7D8D9385(Var1, Var15, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		uVar21 = unk_0x9D2C476A7D8D9385(Var1, Var16, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		uVar22 = unk_0x9D2C476A7D8D9385(Var1, Var17, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		if (bVar3)
		{
			uVar23 = unk_0x9D2C476A7D8D9385(Var1, Var2, 0.2f, 257, unk_0xE2D3D51028F0428A(), 7);
		}
		iVar33 = unk_0xB2D581BD7446BBE9(uVar18, &iVar24, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xB2D581BD7446BBE9(uVar19, &iVar25, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xB2D581BD7446BBE9(uVar20, &iVar26, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xB2D581BD7446BBE9(uVar21, &iVar27, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0xB2D581BD7446BBE9(uVar22, &iVar28, &uVar30, &uVar31, &uVar32);
		if (bVar3)
		{
			iVar33 = unk_0xB2D581BD7446BBE9(uVar23, &iVar29, &uVar30, &uVar31, &uVar32);
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
			fVar4 = unk_0xD12EFCAB87804BED(Var11.x, Var11.f_1);
			func_1470(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2667222.f_45.f_52)
		{
			Var42 = { Global_2667222.f_45.f_49 - Var1 };
			fVar43 = func_322(Var42, Var15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_1470(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_1470(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_1470(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1470(fVar4);
					return;
				}
				else
				{
					func_1469(iVar41, fVar4, Var11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_1470(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1470(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_1470(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1470(fVar4);
				return;
			}
			else
			{
				func_1469(iVar41, fVar4, Var11);
			}
		}
		else
		{
			iVar0 = unk_0x5853B15F78E1A265(0, 2);
			if (iVar0 == 0)
			{
				if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_1470(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1470(fVar4);
					return;
				}
				else
				{
					func_1469(iVar41, fVar4, Var11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1470(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1470(fVar4);
				return;
			}
			else
			{
				func_1469(iVar41, fVar4, Var11);
			}
		}
	}
}

void func_1469(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_1470(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_1470(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_1470(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_1470(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0xD12EFCAB87804BED(Param2, Param2.f_1);
			func_1470(fParam1);
			return;
			break;
	}
}

void func_1470(float fParam0)
{
	if (!unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
	{
		unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam0);
	}
	func_1448(0f, 1);
}

void func_1471(struct<3> Param0)
{
	Global_2667222.f_45.f_301 = 1;
	Global_2667222.f_45.f_298 = { Param0 };
	Global_2667222.f_45.f_317 = unk_0x35DE445E5254AFED(unk_0xE75390F3CA208D5E(), -9999);
	func_1472(1);
}

void func_1472(bool bParam0)
{
	float fVar0;
	
	if (Global_1836580 || Global_2667222.f_45.f_302)
	{
		if (Global_2667222.f_45.f_301)
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (Global_1836584)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0x177106D5E97D1958(unk_0xE2D3D51028F0428A())) && ((vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Global_2667222.f_45.f_298) < fVar0 || func_1476(unk_0x9E2D6C50374FCFA9())) || func_692(unk_0x9E2D6C50374FCFA9(), 0, 0)))
				{
					if ((func_1475() || func_1474()) || func_1473())
					{
						if (unk_0x4C1B8C5717647539(0, 351))
						{
							Global_2667222.f_45.f_317 = unk_0xE75390F3CA208D5E();
							func_1452(1000, 0, 1);
						}
						else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(Global_2667222.f_45.f_317, unk_0xE75390F3CA208D5E())) > 2000)
						{
							func_1452(2500, 0, bParam0);
							Global_2667222.f_45.f_317 = unk_0xE75390F3CA208D5E();
						}
					}
					else
					{
						Global_2667222.f_45.f_317 = unk_0xE75390F3CA208D5E();
						func_1452(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2667222.f_45.f_298 = { 0f, 0f, 0f };
					Global_2667222.f_45.f_301 = 0;
				}
			}
		}
	}
}

int func_1473()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1474()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1475()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1476(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_216 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1477(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	bVar0 = false;
	if (unk_0x3A8B0F5B0E3DE13A(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1674(iParam0, iParam1, bVar0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam0, 0) };
		Var2 = { unk_0x6B62510F212526DC(iParam1, 0) };
		if (!vdist(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.x = (Var2.x + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			unk_0xC64B6E13A6A7F517(iParam0, Var2, 0, 0, 0, 1);
		}
		unk_0x51BB443B279E4104(iParam0);
		unk_0x959E1626CBC7D38A(iParam0, true, 0);
		unk_0x5C65DDDC219B3AA5(iParam0, false);
		unk_0xC252F409BDE7A700(unk_0xE2D3D51028F0428A(), 0);
		unk_0x3E3D339BAD67F6F2(iParam0, 150, 1);
		unk_0x3E3D339BAD67F6F2(iParam0, 151, 1);
		if (bParam3)
		{
			unk_0xA9F390242F9EB2E1(iParam0, iParam1, iParam2);
		}
		else
		{
			unk_0xB486640392EC50BB(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		unk_0xEB087B19F63AB053(iParam0, 0, 0);
		unk_0x3E3D339BAD67F6F2(iParam0, 150, 1);
		if (Global_1836580)
		{
			if (func_1671(unk_0x15CAA6D7B11F1A7C(iParam1)))
			{
				func_1478(0);
			}
		}
	}
}

void func_1478(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
	{
		if (Global_4718592.f_138153 == 0)
		{
			if ((Global_2667222.f_2697 == -99 || Global_2667222.f_2697 == 0) || !func_1670(unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()), 14, Global_2667222.f_2697, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_181(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667222.f_2697;
			}
			Var0 = { func_1627(func_1669(), 14, iVar1, -1) };
			func_1626(unk_0xE2D3D51028F0428A(), 14, iVar1);
			func_1479(unk_0xE2D3D51028F0428A(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1479(unk_0xE2D3D51028F0428A(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 380, true);
		}
	}
}

int func_1479(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
	
	if (!unk_0x9315DBF7D972F07A())
	{
		if ((Global_1574979 != 4 && Global_1574979 != 5) && Global_1574979 != 7)
		{
			return 0;
		}
	}
	if (unk_0xF68107C40359970C(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0xE2D3D51028F0428A() && Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77660;
	}
	Global_77661++;
	iVar5 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
		if (!func_1625(iParam3))
		{
			Global_77661 = (Global_77661 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77661 > 1)
		{
		}
		else
		{
			func_1620(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2883588;
		uVar14 = Global_2883589;
		unk_0x9C726995FD3F93EB(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77706 };
		}
		else
		{
			uVar15 = { func_1616(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77663[1 /*14*/] = { func_1627(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xE3752B10DC995E95(iParam0, func_1615(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_1615(iVar0)));
					}
					else
					{
						unk_0xE3752B10DC995E95(iParam0, func_1615(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
					{
						func_1620(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77663[1 /*14*/] = { func_1627(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_77723 };
							}
							else
							{
								uVar16 = { func_1612(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77663[1 /*14*/] = { func_1627(iVar5, 14, uVar16[iVar1], -1) };
								func_1611(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
								if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
								{
									func_1620(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0xE3752B10DC995E95(iParam0, func_1615(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_1615(iVar0)));
								}
								else
								{
									unk_0xE3752B10DC995E95(iParam0, func_1615(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1479(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
							{
								func_1620(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77663[1 /*14*/] = { func_1627(iVar5, iVar0, func_1607(iParam0, iVar0, -1), -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_1616(iVar5, 0) };
					func_1479(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xE3752B10DC995E95(iParam0, 1, unk_0x5355BAA621C153CF(iParam0, 1), unk_0xF1050E548C37F4A5(iParam0, 1), 0);
		Global_2883588 = uVar13;
		Global_2883589 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_1606();
			if (iVar18 != -1)
			{
				func_1604(iVar18, 0, iParam10);
			}
			func_1600(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_1612(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77663[1 /*14*/] = { func_1627(iVar5, 14, uVar19[iVar1], -1) };
			func_1611(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
			if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
			{
				func_1620(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77661 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1598(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_1611(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
		if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
		{
			func_1620(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77663[1 /*14*/].f_12 == 0)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6) && unk_0x036D1EA7243F2CCC(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar20 = unk_0x748EF68A43BBBC6C(iParam0, 1, unk_0x5355BAA621C153CF(iParam0, 1), unk_0xF1050E548C37F4A5(iParam0, 1));
				if (unk_0x036D1EA7243F2CCC(iVar20, joaat("HAIR_SHRINK"), 0))
				{
					func_1479(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77663[1 /*14*/].f_12 == 0)
		{
			func_1592(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77661 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1479(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar21 = func_1615(iParam1);
		if (unk_0x5355BAA621C153CF(iParam0, iVar21) != Global_77663[1 /*14*/].f_3 || unk_0xF1050E548C37F4A5(iParam0, iVar21) != Global_77663[1 /*14*/].f_4)
		{
			iVar22 = unk_0x748EF68A43BBBC6C(iParam0, 8, unk_0x5355BAA621C153CF(iParam0, 8), unk_0xF1050E548C37F4A5(iParam0, 8));
			iVar23 = unk_0x748EF68A43BBBC6C(iParam0, 7, unk_0x5355BAA621C153CF(iParam0, 7), unk_0xF1050E548C37F4A5(iParam0, 7));
			if (((iParam1 == 11 && unk_0x036D1EA7243F2CCC(iVar23, 307252627, 0)) || (iParam1 == 8 && unk_0x036D1EA7243F2CCC(iVar23, 1552218390, 0))) || (iParam1 == 4 && unk_0x036D1EA7243F2CCC(iVar23, -2095729091, 0)))
			{
				unk_0xE3752B10DC995E95(iParam0, 7, 0, 0, unk_0x272AB65A4E7277B4(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x036D1EA7243F2CCC(iVar22, 307252627, 0)) || (iParam1 == 4 && unk_0x036D1EA7243F2CCC(iVar22, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0xE3752B10DC995E95(iParam0, 8, 15, 0, unk_0x272AB65A4E7277B4(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0xE3752B10DC995E95(iParam0, 8, 2, 0, unk_0x272AB65A4E7277B4(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar24 = -1;
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6) && unk_0x036D1EA7243F2CCC(Global_2883588, joaat("CREW_COL"), 11))
				{
					unk_0x891B421A88AEB58D(iParam0, Global_1576203, Global_1576204, Global_1576205, 0);
					unk_0x891B421A88AEB58D(iParam0, Global_1576203, Global_1576204, Global_1576205, 1);
					unk_0x891B421A88AEB58D(iParam0, Global_1576203, Global_1576204, Global_1576205, 2);
					unk_0x891B421A88AEB58D(iParam0, Global_1576203, Global_1576204, Global_1576205, 3);
				}
				iVar25 = func_1590(iParam0, 11);
				iVar26 = func_1590(iParam0, 8);
				iVar27 = func_1590(iParam0, 4);
				iVar8 = unk_0x748EF68A43BBBC6C(iParam0, 8, unk_0x5355BAA621C153CF(iParam0, 8), unk_0xF1050E548C37F4A5(iParam0, 8));
				if (unk_0x036D1EA7243F2CCC(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar24 = func_1589(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar24 = func_1589(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x036D1EA7243F2CCC(iVar24, joaat("SILK_ROBE"), 0) || unk_0x036D1EA7243F2CCC(iVar24, joaat("SILK_PYJAMAS"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("SMOKING_JACKET"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, -826135203, 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("MORPH_SUIT"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("GORKA_SUIT"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_1590(iParam0, 8);
					}
				}
				iVar28 = unk_0x748EF68A43BBBC6C(iParam0, 3, unk_0x5355BAA621C153CF(iParam0, 3), 0);
				if (unk_0x036D1EA7243F2CCC(iVar28, joaat("GLOVES"), 0))
				{
					iVar29 = func_1588(iVar5, iVar26, iVar25, iVar27);
					if (iVar29 == -99)
					{
						iVar29 = func_1598(iParam0, iVar5, 11, iVar25, 3, 0);
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
							iVar24 = func_1589(iVar5, iParam2, 11, 4);
							if (!unk_0x036D1EA7243F2CCC(iVar24, joaat("DRESS"), 0))
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
							if (func_1587(iVar5, iVar29, iVar30) == iVar28)
							{
								iVar11 = iVar30;
								iVar12 = unk_0xF1050E548C37F4A5(iParam0, 3);
							}
							iVar30++;
						}
					}
				}
				iVar24 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x036D1EA7243F2CCC(func_1589(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar25 = func_1590(iParam0, 11);
					if (iVar25 >= 256)
					{
						iVar24 = func_1589(iVar5, iVar25, 11, 4);
					}
					if (iVar25 >= 256 && unk_0x036D1EA7243F2CCC(iVar24, joaat("VEST_SHIRT"), 0))
					{
						iVar31 = func_1585(iVar5, iVar25, iParam2, unk_0xF1050E548C37F4A5(iParam0, 11));
						if (iVar31 != -99)
						{
							func_1479(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1584(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar25 >= 237)
						{
							iVar24 = func_1589(iVar5, iVar25, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar25 >= 256)
						{
							iVar24 = func_1589(iVar5, iVar25, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1584(iVar5, iVar25, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && (unk_0x036D1EA7243F2CCC(iVar24, joaat("VEST"), 0) || unk_0x036D1EA7243F2CCC(iVar24, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && ((((((((unk_0x036D1EA7243F2CCC(iVar24, joaat("HEIST_DRAW_5"), 0) || unk_0x036D1EA7243F2CCC(iVar24, joaat("HEIST_DRAW_6"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("HEIST_DRAW_7"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("HEIST_DRAW_11"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("HEIST_DRAW_12"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, -872449705, 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("APART_DRAW_9"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("STUNT_DRAW_4"), 0)) || unk_0x036D1EA7243F2CCC(iVar24, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar32 = func_1583(iParam0, iParam2);
							iVar33 = func_1585(iVar5, iVar25, iParam2, unk_0xF1050E548C37F4A5(iParam0, 11));
							if (iVar33 != -99)
							{
								func_1479(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar32 != -99 && (iParam0 == unk_0xE2D3D51028F0428A() || iParam0 == Global_4532821))
							{
								func_1479(iParam0, 8, iVar32, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar34 = func_1581(iVar5, 11, -1);
									Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar34, -1) };
									iVar33 = func_1585(iVar5, iVar34, iParam2, Global_77663[1 /*14*/].f_4);
									iVar35 = func_1589(iVar5, iParam2, 11, 3);
									if ((iVar33 == -99 || unk_0x036D1EA7243F2CCC(iVar35, joaat("BIKER_VEST"), 0)) || unk_0x036D1EA7243F2CCC(iVar35, 1170568373, 0))
									{
										iVar33 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x036D1EA7243F2CCC(func_1589(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar33 = 120;
									}
									else
									{
										iVar33 = 48;
									}
								}
								func_1479(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar25, -1) };
						iVar36 = Global_77663[1 /*14*/].f_3;
						Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iParam2, -1) };
						iVar37 = Global_77663[1 /*14*/].f_3;
						if (iVar36 != iVar37)
						{
							iVar39 = func_1583(iParam0, iParam2);
							Global_77663[1 /*14*/] = { func_1627(iVar5, 8, iVar26, -1) };
							iVar38 = Global_77663[1 /*14*/].f_4;
							iVar40 = func_1580(iVar5, iVar26, iVar38);
							if (iVar39 != -99 && (iParam0 == unk_0xE2D3D51028F0428A() || iParam0 == Global_4532821))
							{
								iVar41 = iVar39;
							}
							else if (iVar40 == -99)
							{
								iVar41 = iVar26;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar42 = func_1589(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1579(iVar42) == 6) || unk_0x036D1EA7243F2CCC(iVar42, joaat("BIKER_VEST"), 0))
									{
										iVar40 = func_1581(iVar5, 11, -1);
										Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar40, -1) };
										iVar41 = func_1585(iVar5, iVar40, iParam2, Global_77663[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar26 == 32 || iVar26 == 33) || iVar26 == 119))
								{
									if (!unk_0x036D1EA7243F2CCC(func_1589(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar40 = func_1581(iVar5, 11, -1);
										Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar40, -1) };
										iVar41 = func_1585(iVar5, iVar40, iParam2, Global_77663[1 /*14*/].f_4);
									}
								}
								iVar43 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar43 = func_1589(iVar5, iVar26, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar43 = func_1589(iVar5, iVar26, 8, 4);
								}
								if (unk_0x036D1EA7243F2CCC(iVar43, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar40 = func_1581(iVar5, 11, -1);
									Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar40, -1) };
									iVar41 = func_1585(iVar5, iVar40, iParam2, Global_77663[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar41 = func_1585(iVar5, iVar40, iParam2, iVar38);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x036D1EA7243F2CCC(func_1589(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1578(iVar5, func_1590(iParam0, 4), iVar40))
										{
											iVar41 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x036D1EA7243F2CCC(func_1589(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1578(iVar5, func_1590(iParam0, 4), iVar40))
										{
											iVar41 = 48;
										}
									}
								}
							}
							if (iVar41 != -99)
							{
								func_1479(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar40 = func_1581(iVar5, 11, -1);
								Global_77663[1 /*14*/] = { func_1627(iVar5, 11, iVar40, -1) };
								iVar41 = func_1585(iVar5, iVar40, iParam2, Global_77663[1 /*14*/].f_4);
								if (iVar41 == -99)
								{
									iVar41 = 240;
								}
								func_1479(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1479(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1575(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0xE3752B10DC995E95(iParam0, 10, 0, 0, unk_0x272AB65A4E7277B4(iParam0, 10));
				}
			}
			func_1600(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, func_1607(iParam0, 8, -1), iParam2, func_1607(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_181(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_181(2160, iParam10, 0);
				}
				unk_0x549D1C729F88A5F3(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar44 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar44 = func_1573(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar44 = func_1571(iParam2);
					}
					if (iVar44 != -99 && iParam2 != iVar44)
					{
						iParam2 = iVar44;
					}
				}
				func_1531(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar45 = unk_0x748EF68A43BBBC6C(iParam0, 3, unk_0x5355BAA621C153CF(iParam0, 3), 0);
			if (unk_0x036D1EA7243F2CCC(iVar45, joaat("GLOVES"), 0))
			{
				iVar46 = func_1590(iParam0, 11);
				iVar47 = func_1590(iParam0, 4);
				iVar48 = func_1588(iVar5, iParam2, iVar46, iVar47);
				if (iVar48 == -99)
				{
					iVar48 = func_1598(iParam0, iVar5, 11, iVar46, 3, 0);
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
						iVar49 = func_1589(iVar5, iParam2, 11, 4);
						if (!unk_0x036D1EA7243F2CCC(iVar49, joaat("DRESS"), 0))
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
						if (func_1587(iVar5, iVar48, iVar50) == iVar45)
						{
							iVar11 = iVar50;
							iVar12 = unk_0xF1050E548C37F4A5(iParam0, 3);
						}
						iVar50++;
					}
				}
			}
			func_1600(iParam0, iParam1, iParam2, iParam6, 0);
			iVar51 = func_1590(iParam0, 11);
			if (func_1584(iVar5, iVar51, -1))
			{
				iVar52 = func_1580(iVar5, iParam2, Global_77663[1 /*14*/].f_4);
				func_1575(iVar5, iVar52);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, iParam2, func_1590(iParam0, 11), func_1590(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar53 = func_1590(iParam0, 7);
				if (!func_1528(iVar5, iVar53, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0xE3752B10DC995E95(iParam0, func_1615(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x036D1EA7243F2CCC(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x036D1EA7243F2CCC(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar54 = func_181(2100, iParam10, 0);
				iVar55 = func_181(2101, iParam10, 0);
				iVar56 = func_181(2102, iParam10, 0);
				uVar57 = func_1527(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x58AEC6E61E9195C4(iParam0, 0, 0, 0, iVar54, iVar55, iVar56, 0f, uVar57, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x58AEC6E61E9195C4(iParam0, 21, 0, 0, iVar54, iVar55, iVar56, 0f, fVar57, 0f, false);
				}
				iVar58 = 0;
				while (iVar58 < 20)
				{
					unk_0x00A45035A743B400(iParam0, iVar58, 0f);
					iVar58++;
				}
			}
			else
			{
				func_1513(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar59 = func_1590(iParam0, 11);
			iVar60 = func_1590(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x036D1EA7243F2CCC(func_1589(iVar5, iVar59, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1578(iVar5, iParam2, func_1580(iVar5, iVar60, 0)))
					{
						func_1479(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x036D1EA7243F2CCC(func_1589(iVar5, iVar59, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1578(iVar5, iParam2, func_1580(iVar5, iVar60, 0)))
					{
						func_1479(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77663[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, func_1590(iParam0, 8), func_1590(iParam0, 11), iParam2);
			}
			iVar61 = unk_0x748EF68A43BBBC6C(iParam0, 3, unk_0x5355BAA621C153CF(iParam0, 3), 0);
			if (unk_0x036D1EA7243F2CCC(iVar61, joaat("GLOVES"), 0))
			{
				iVar62 = func_1588(iVar5, iVar60, iVar59, iParam2);
				if (iVar62 == -99)
				{
					iVar62 = func_1598(iParam0, iVar5, 11, iVar59, 3, 0);
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
						iVar63 = func_1589(iVar5, iParam2, 11, 4);
						if (!unk_0x036D1EA7243F2CCC(iVar63, joaat("DRESS"), 0))
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
						if (func_1587(iVar5, iVar62, iVar64) == iVar61)
						{
							iVar11 = iVar64;
							iVar12 = unk_0xF1050E548C37F4A5(iParam0, 3);
						}
						iVar64++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0xE3752B10DC995E95(iParam0, func_1615(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_1615(iParam1)));
		}
		else
		{
			unk_0xE3752B10DC995E95(iParam0, func_1615(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_77661 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
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
								iVar6 = func_1588(iVar5, iVar3, func_1590(iParam0, 11), func_1590(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1479(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1512(iParam0))
				{
					iVar65 = func_1510(iParam0, iVar5, iParam1, iParam2);
					if (iVar65 > 0)
					{
						iVar65 = (iVar65 + unk_0xF1050E548C37F4A5(iParam0, 9));
						if (!func_1504(iParam0, 9, iVar65))
						{
							func_1479(iParam0, 9, iVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1479(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x748EF68A43BBBC6C(iParam0, 8, unk_0x5355BAA621C153CF(iParam0, 8), unk_0xF1050E548C37F4A5(iParam0, 8));
					if (unk_0x036D1EA7243F2CCC(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_1479(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar66 = func_181(2042, -1, 0);
				if (unk_0x5355BAA621C153CF(iParam0, 5) != 0)
				{
					unk_0xE3752B10DC995E95(iParam0, 5, func_1498(iParam0, iVar66), func_1497(iParam0, iVar66), func_1496(iParam0, iVar66));
				}
				if (iParam0 == unk_0xE2D3D51028F0428A())
				{
					unk_0x5663081CF61457EB(unk_0x9E2D6C50374FCFA9(), 5, func_1498(unk_0xE2D3D51028F0428A(), iVar66), func_1497(unk_0xE2D3D51028F0428A(), iVar66), 0);
					unk_0x6A9DA6A45B05CBAC(unk_0x9E2D6C50374FCFA9(), func_1496(unk_0xE2D3D51028F0428A(), iVar66));
					func_1495(unk_0x9E2D6C50374FCFA9(), iVar66);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1479(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar67 = func_1607(iParam0, 4, -1);
					iVar68 = iParam2;
				}
				else
				{
					iVar67 = iParam2;
					iVar68 = func_1607(iParam0, 11, -1);
				}
				if (func_1494(iVar5, 11, iVar68, -1))
				{
					if (!func_1493(iVar5, 4, iVar67, -1))
					{
						if (func_1492(iVar5, 4, iVar67, &uVar69))
						{
							func_1479(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1493(iVar5, 4, iVar67, -1))
				{
					if (func_1491(iVar5, 4, iVar67, &uVar69))
					{
						func_1479(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar70 = unk_0x5355BAA621C153CF(iParam0, 6);
				iVar71 = unk_0xF1050E548C37F4A5(iParam0, 6);
				iVar72 = unk_0x748EF68A43BBBC6C(iParam0, 6, iVar70, iVar71);
				iVar73 = unk_0x5355BAA621C153CF(iParam0, 4);
				iVar74 = unk_0xF1050E548C37F4A5(iParam0, 4);
				iVar75 = unk_0x748EF68A43BBBC6C(iParam0, 4, iVar73, iVar74);
				iVar76 = func_1590(iParam0, 4);
				iVar77 = func_1590(iParam0, 6);
				if (func_1490(iVar5, iVar72))
				{
					if (unk_0x036D1EA7243F2CCC(iVar72, joaat("ALT_FEET"), 0) != func_1489(iVar5, iVar76, iVar72))
					{
						iVar78 = unk_0x9DCC12E44DDA0A36(iVar72);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0x0225613F2AC9E3C8(iVar72, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 6)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar77 = func_1486(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_1479(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_1486(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_1479(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x036D1EA7243F2CCC(iVar75, joaat("ALT_LEGS"), 0) != func_1485(iVar5, iVar77, iVar75))
					{
						iVar78 = unk_0x9DCC12E44DDA0A36(iVar75);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0x0225613F2AC9E3C8(iVar75, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 4)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar76 = func_1486(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_1479(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_1486(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_1479(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
				}
				if (func_1490(iVar5, iVar75))
				{
					if (unk_0x036D1EA7243F2CCC(iVar75, joaat("ALT_LEGS"), 0) != func_1485(iVar5, iVar77, iVar75))
					{
						iVar78 = unk_0x9DCC12E44DDA0A36(iVar75);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0x0225613F2AC9E3C8(iVar75, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 4)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar76 = func_1486(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_1479(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_1486(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_1479(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x036D1EA7243F2CCC(iVar72, joaat("ALT_FEET"), 0) != func_1489(iVar5, iVar76, iVar72))
					{
						iVar78 = unk_0x9DCC12E44DDA0A36(iVar72);
						iVar79 = 0;
						while (iVar79 < iVar78)
						{
							unk_0x0225613F2AC9E3C8(iVar72, iVar79, &iVar80, &uVar81, &iVar82);
							if (iVar82 == 6)
							{
								if (iVar80 != 0 && iVar80 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar77 = func_1486(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_1479(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_1486(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_1479(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1592(iParam0);
				iVar83 = unk_0x5355BAA621C153CF(iParam0, 1);
				iVar84 = unk_0xF1050E548C37F4A5(iParam0, 1);
				iVar85 = unk_0x748EF68A43BBBC6C(iParam0, 1, iVar83, iVar84);
				if (unk_0x036D1EA7243F2CCC(iVar85, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1479(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1598(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1479(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1480(iParam0, &uVar4))
		{
			func_1479(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1479(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_1479(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1479(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar86 = func_1587(iVar5, func_1607(iParam0, 3, -1), iVar11);
		if (iVar86 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_1486(iVar5, iVar86, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_1486(iVar5, iVar86, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_1479(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_77661 = (Global_77661 - 1);
	return 1;
}

int func_1480(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1607(unk_0xE2D3D51028F0428A(), 2, -1);
	if (func_181(754, Global_77660, 0) != -99 && func_1482())
	{
		if (func_1481() == 4)
		{
			return 1;
		}
		if (func_181(754, Global_77660, 0) == 0 && func_181(755, Global_77660, 0) == 0)
		{
			if (func_921(161, Global_77660))
			{
				if (func_181(2053, Global_77660, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_181(753, Global_77660, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_181(754, Global_77660, 0);
		iVar1 = func_181(755, Global_77660, 0);
		if (!func_1504(iParam0, iVar1, iVar0))
		{
			if (func_921(161, Global_77660))
			{
				*uParam1 = func_181(2053, Global_77660, 0);
			}
			else
			{
				*uParam1 = func_181(753, Global_77660, 0);
			}
			func_520(754, -99, Global_77660, 1, 0);
			func_520(755, 2, Global_77660, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1481()
{
	return Global_1574979;
}

int func_1482()
{
	if (func_1484() && func_1483(0))
	{
		return 1;
	}
	return 0;
}

var func_1483(int iParam0)
{
	return Global_1574536[iParam0];
}

var func_1484()
{
	return func_1483(func_75() + 1);
}

int func_1485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1589(iParam0, iParam1, 6, 3);
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, 1137160120, 0))
			{
				if (unk_0x036D1EA7243F2CCC(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x036D1EA7243F2CCC(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x036D1EA7243F2CCC(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x036D1EA7243F2CCC(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x036D1EA7243F2CCC(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1589(iParam0, iParam1, 6, 4);
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, 1137160120, 0))
			{
				if (unk_0x036D1EA7243F2CCC(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x036D1EA7243F2CCC(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_1486(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return (func_1488(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_1615(iParam2));
		iVar1 = unk_0x8F3F503BADA161ED(iParam1);
		if (iVar1 != -1)
		{
			return (func_1487(iParam0, func_1615(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_1487(int iParam0, int iParam1)
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

int func_1488(int iParam0)
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

int func_1489(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_1589(iParam0, iParam1, 4, 3);
				iVar1 = func_1579(iVar0);
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x036D1EA7243F2CCC(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x036D1EA7243F2CCC(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("SKINNY"), 0)) || (unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x036D1EA7243F2CCC(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0)))
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
				if (((unk_0x036D1EA7243F2CCC(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x036D1EA7243F2CCC(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x036D1EA7243F2CCC(iVar0, 1137160120, 0))
				{
					if (unk_0x036D1EA7243F2CCC(iParam2, -2005216901, 0))
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
				iVar0 = func_1589(iParam0, iParam1, 4, 4);
				iVar1 = func_1579(iVar0);
			}
			if (unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x036D1EA7243F2CCC(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x036D1EA7243F2CCC(iVar0, 1137160120, 0))
				{
					if (unk_0x036D1EA7243F2CCC(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x036D1EA7243F2CCC(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x036D1EA7243F2CCC(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x036D1EA7243F2CCC(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, -430330349, 0)) || unk_0x036D1EA7243F2CCC(iVar0, -1103045158, 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("DUNGAREES"), 0)) || unk_0x036D1EA7243F2CCC(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_1490(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x036D1EA7243F2CCC(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x036D1EA7243F2CCC(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x036D1EA7243F2CCC(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x036D1EA7243F2CCC(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1491(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1589(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x9DCC12E44DDA0A36(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0225613F2AC9E3C8(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x036D1EA7243F2CCC(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1486(iParam0, iVar3, iParam1, 4);
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

int func_1492(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1589(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x9DCC12E44DDA0A36(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0225613F2AC9E3C8(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x036D1EA7243F2CCC(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1486(iParam0, iVar3, iParam1, 4);
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

int func_1493(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1589(iParam0, iParam2, 4, 4);
						}
						if (unk_0x036D1EA7243F2CCC(iParam3, joaat("DRESS_LEGS"), 0))
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

int func_1494(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1589(iParam0, iParam2, 11, 4);
						}
						return unk_0x036D1EA7243F2CCC(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1495(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0xD386A07B18792F21(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0xD07BC41548DB6391(iParam0);
	}
}

int func_1496(int iParam0, int iParam1)
{
	return 0;
}

int func_1497(int iParam0, int iParam1)
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

var func_1498(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x5355BAA621C153CF(iParam0, 8);
	iVar1 = unk_0x5355BAA621C153CF(iParam0, 11);
	iVar2 = unk_0x5355BAA621C153CF(iParam0, 4);
	bVar3 = unk_0x5355BAA621C153CF(iParam0, 9) != false;
	iVar4 = unk_0x748EF68A43BBBC6C(iParam0, 8, iVar0, unk_0xF1050E548C37F4A5(iParam0, 8));
	iVar5 = unk_0x748EF68A43BBBC6C(iParam0, 11, iVar1, unk_0xF1050E548C37F4A5(iParam0, 11));
	iVar6 = unk_0x748EF68A43BBBC6C(iParam0, 4, iVar2, unk_0xF1050E548C37F4A5(iParam0, 4));
	if (((((((bVar3 != Global_77824 || iParam1 != Global_77825) || iVar4 != Global_77826) || iVar5 != Global_77827) || iVar6 != Global_77828) || iVar0 != Global_77829) || iVar1 != Global_77830) || iVar2 != Global_77831)
	{
		Global_77824 = bVar3;
		Global_77825 = iParam1;
		Global_77826 = iVar4;
		Global_77827 = iVar5;
		Global_77828 = iVar6;
		Global_77829 = iVar0;
		Global_77830 = iVar1;
		Global_77831 = iVar2;
		Global_77832 = func_1499(iParam0, iParam1);
	}
	return Global_77832;
}

int func_1499(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x5355BAA621C153CF(iParam0, 11);
	if (unk_0x5355BAA621C153CF(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar3 = unk_0x748EF68A43BBBC6C(iParam0, 8, unk_0x5355BAA621C153CF(iParam0, 8), unk_0xF1050E548C37F4A5(iParam0, 8));
	if (unk_0x036D1EA7243F2CCC(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1293534210, 8))
			{
				return func_1503(iParam0, iParam1, 1);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1072212384, 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_1503(iParam0, iParam1, 6);
			}
			if ((unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x036D1EA7243F2CCC(iVar3, 1072212384, 8)) || unk_0x036D1EA7243F2CCC(iVar3, 1293534210, 8))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			if (unk_0x036D1EA7243F2CCC(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1503(iParam0, iParam1, 10);
			}
		}
		return func_1503(iParam0, iParam1, 9);
	}
	if (func_1502(iParam0))
	{
		if (bVar1)
		{
			return func_1503(iParam0, iParam1, 7);
		}
		else
		{
			return func_1503(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x748EF68A43BBBC6C(iParam0, 11, iVar0, unk_0xF1050E548C37F4A5(iParam0, 11));
		if (unk_0x036D1EA7243F2CCC(iVar4, 98087521, 0))
		{
			return func_1503(iParam0, iParam1, 0);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -135391604, 0))
		{
			return func_1503(iParam0, iParam1, 1);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 1398721900, 0))
		{
			return func_1503(iParam0, iParam1, 2);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 1030529416, 0))
		{
			return func_1503(iParam0, iParam1, 3);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 873008833, 0))
		{
			return func_1503(iParam0, iParam1, 4);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1646534043, 0))
		{
			return func_1503(iParam0, iParam1, 5);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1868675094, 0))
		{
			return func_1503(iParam0, iParam1, 6);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1500122155, 0))
		{
			return func_1503(iParam0, iParam1, 7);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -1741007074, 0))
		{
			return func_1503(iParam0, iParam1, 8);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -226291902, 0))
		{
			return func_1503(iParam0, iParam1, 9);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 607416996, 0))
		{
			return func_1503(iParam0, iParam1, 10);
		}
		if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1503(iParam0, iParam1, 5);
			}
			else
			{
				return func_1503(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_1503(iParam0, iParam1, 8);
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_1503(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x036D1EA7243F2CCC(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_1501(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_1503(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_1503(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_1579(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_1503(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_1579(iVar4);
						break;
					}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_1500(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_1503(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1503(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1503(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1503(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1503(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1503(iParam0, iParam1, 9);
					}
					else
					{
						return func_1503(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1503(iParam0, iParam1, 9);
					}
					else
					{
						return func_1503(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1503(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_1579(iVar4);
					break;
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 1);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 1);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 8);
			}
			else
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x036D1EA7243F2CCC(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_1503(iParam0, iParam1, 10);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x036D1EA7243F2CCC(iVar4, -1086258388, 0) || unk_0x036D1EA7243F2CCC(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 9);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 6);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 2);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 9);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1503(iParam0, iParam1, 7);
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1503(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1503(iParam0, iParam1, 9);
			}
			else
			{
				return func_1503(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x036D1EA7243F2CCC(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1503(iParam0, iParam1, 7);
				}
				else
				{
					return func_1503(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1503(iParam0, iParam1, 7);
			}
		}
		{
	}