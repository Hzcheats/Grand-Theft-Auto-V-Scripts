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
	var uLocal_79 = -1;
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
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	float fLocal_137 = 0f;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	int iLocal_151[5] = { 0, 0, 0, 0, 0 };
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	struct<2> Local_162 = { 0, 0 } ;
	struct<2> Local_163[8];
	struct<2> Local_164 = { 0, 0 } ;
	struct<4> Local_165[8];
	float fLocal_166 = 0f;
	float fLocal_167 = 0f;
	float fLocal_168 = 0f;
	float fLocal_169 = 0f;
	float fLocal_170 = 0f;
	int iLocal_171 = 0;
	int iLocal_172[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	float fLocal_180 = 0f;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	float fLocal_199 = 0f;
	struct<3> Local_200 = { 0, 0, 0 } ;
	float fLocal_201 = 0f;
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
	var uLocal_213 = 5;
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
	var uLocal_224 = 5;
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
	struct<1257> Local_235 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1082130432, 4, 0, 0, 0, 0, 5, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_236 = -1;
	var uLocal_237 = -1000;
	struct<32> Local_238 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 5;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 4;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 5;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 5;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 5;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 5;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 5;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 5;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 5;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 5;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 5;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 5;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	struct<26> Local_323[8];
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	struct<34> Local_333 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
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
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	struct<8> Local_357[30];
	var uLocal_358[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363[1] = { 0 };
	var uLocal_364[3] = { 0, 0, 0 };
	var uLocal_365 = 0;
	var uLocal_366 = -1;
	int iLocal_367 = 0;
	var uLocal_368[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<23> Local_369 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 1015222895;
	var uLocal_376 = 1021665346;
	var uLocal_377 = 0;
	var uLocal_378 = 255;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	var uLocal_388 = 996499522;
	var uLocal_389 = 1002740646;
	var uLocal_390 = 0;
	var uLocal_391 = 60;
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
	var uLocal_408 = 0;
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
	var uLocal_429 = 0;
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
	var uLocal_452 = 1016296636;
	var uLocal_453 = 220;
	var uLocal_454 = 255;
	var uLocal_455 = 255;
	var uLocal_456 = 255;
	var uLocal_457 = 255;
	var uLocal_458 = 255;
	var uLocal_459 = 255;
	var uLocal_460 = 4096;
	var uLocal_461 = 40;
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
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 4;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 1065353216;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 1056964608;
	var uLocal_640 = 1056964608;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	struct<4> Local_644 = { 0, 0, 0, 0 } ;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	char* sLocal_653 = NULL;
	var uLocal_654 = 16;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	struct<4> Local_819 = { 0, 0, 0, 0 } ;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	struct<4> Local_822 = { 0, 0, 0, 0 } ;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	struct<21> Local_834 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_124 = 3f;
	fLocal_125 = 0f;
	fLocal_126 = 2f;
	fLocal_127 = 100f;
	iLocal_135 = -1;
	fLocal_137 = 0.5f;
	fLocal_150 = 0f;
	fLocal_152 = 0f;
	fLocal_153 = 0f;
	fLocal_154 = 0f;
	fLocal_167 = 0.62f;
	fLocal_168 = 0.51f;
	fLocal_169 = 0.55f;
	fLocal_170 = 25f;
	fLocal_180 = 30000f;
	iLocal_181 = 1000;
	fLocal_186 = 40f;
	fLocal_188 = 500f;
	fLocal_189 = 250f;
	iLocal_191 = -1;
	iLocal_192 = -1;
	iLocal_193 = -1;
	iLocal_194 = -1;
	Local_200 = { 0f, 0f, 0f };
	fLocal_201 = 30f;
	iLocal_329 = -2;
	iLocal_641 = -1;
	iLocal_642 = -1;
	sLocal_653 = "";
	iLocal_828 = -1;
	if (unk_0x02BFF15CAA701972() && func_2342(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		func_2294(ScriptParam_834);
	}
	else
	{
		func_2231();
	}
	func_2229(&(Local_235.f_1256));
	while (true)
	{
		func_2228();
		if (func_2222())
		{
			func_2231();
		}
		Global_1681722.f_2 = Local_235.f_932;
		Global_1681722.f_3 = Local_235.f_933;
		func_2221();
		switch (func_2220(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if (unk_0x952AB441FA24BF16("ALARM_BELL_02", 0, -1))
				{
					if (func_2219() == 1)
					{
						func_2218();
						if (func_2217())
						{
							func_2185(227, 1, func_2205(), 0);
							iLocal_332 = unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269());
							func_2184();
							func_2183();
							func_2182();
							if (Local_235.f_703 == 1)
							{
								unk_0x068BDE31F7D112BB("P_cargo_chute_S");
							}
						}
						else
						{
							func_2185(227, 0, func_2205(), 0);
						}
						Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 1;
					}
					else if (func_2219() == 4)
					{
						Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_2176(1))
				{
					Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 2;
				}
				if (func_2219() == 1)
				{
					func_2157();
					func_583();
					func_576();
					if (func_2217())
					{
						func_413(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
					}
					func_412();
				}
				else if (func_2219() == 4)
				{
					Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 3;
				}
				func_398();
				break;
			
			case 3:
				func_397(&(Local_235.f_796));
				if (func_396(&(Local_235.f_796)))
				{
					Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 4;
				}
				break;
			
			case 2:
				Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/] = 4;
			
			case 4:
				func_2231();
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			func_391();
			switch (func_2219())
			{
				case 0:
					if (func_2205() > -1)
					{
						if (Local_235.f_790 == -1)
						{
							Local_235.f_789 = unk_0xDD0E57E73E5C4BF6();
							Local_235.f_790 = unk_0x1146A9AE09CE2B14();
						}
						func_385();
						func_378();
						func_375();
						func_373();
						func_368();
						func_367();
						if (func_139())
						{
							unk_0x9FCD56F864077E14(&(Local_235.f_932), &(Local_235.f_933));
							func_138();
							Local_235 = 1;
							func_2185(227, 1, func_2205(), 0);
						}
					}
					func_118();
					break;
				
				case 1:
					func_118();
					func_373();
					func_368();
					func_107();
					func_8();
					func_5();
					if (func_2())
					{
						Local_235 = 4;
					}
					else if (func_1())
					{
						Local_235 = 4;
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
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_4())
	{
		return 1;
	}
	if (func_3(2))
	{
		return 1;
	}
	return 0;
}

bool func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Local_235.f_1[iVar0], iVar1);
}

int func_4()
{
	return 0;
}

void func_5()
{
	bool bVar0;
	
	if (func_3(31) && func_3(4))
	{
		if (unk_0x159BC3DDA80D71AC(Local_235.f_719[0]))
		{
			if (unk_0xB7D6400C89373777(Local_235.f_719[0]))
			{
				if (unk_0xB364346471C3B028(Local_235.f_719[0]))
				{
					bVar0 = true;
				}
				else if (func_7(Local_235.f_719[0]))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					switch (iLocal_833)
					{
						case 0:
							if (unk_0x159BC3DDA80D71AC(Local_235.f_719[0]))
							{
								unk_0x407B7FBB86B988B9(unk_0xD93F965CFAC1D06A(Local_235.f_719[0]), 1, 1);
							}
							iLocal_833++;
							break;
						
						case 1:
							if (unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(Local_235.f_719[0]), 0) && !unk_0x1F9D47D45E125FA6(unk_0xD93F965CFAC1D06A(Local_235.f_719[0])))
							{
								func_6(&(Local_235.f_719[0]));
							}
							break;
						}
					}
				}
			}
	}
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		if (!unk_0xB364346471C3B028(*uParam0))
		{
		}
	}
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x24DBE20C830AE9AB(&uVar0);
	}
}

int func_7(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

void func_8()
{
	if (!func_3(25))
	{
		func_106(25);
	}
	if (!func_105(&(Local_235.f_6)))
	{
		func_104(&(Local_235.f_6), 0, 0);
	}
	else if (func_103(&(Local_235.f_6), 300000, 0))
	{
		func_106(23);
	}
	if (!func_105(&(Local_235.f_4)))
	{
		switch (Local_235.f_703)
		{
			case 1:
				if (Local_235.f_878.f_15[0] != -1)
				{
					func_104(&(Local_235.f_4), 0, 0);
				}
				break;
		}
		if (Local_235.f_787 != -1)
		{
			func_104(&(Local_235.f_4), 0, 0);
		}
	}
	else if (func_103(&(Local_235.f_4), 15000, 0))
	{
		func_106(32);
	}
	func_55(&(Local_235.f_942), &Local_238);
	switch (Local_235.f_786)
	{
		case 0:
			switch (Local_235.f_703)
			{
				case 0:
					if ((unk_0x234B68AC2E35ED5A(Local_235.f_8, 0) || unk_0x234B68AC2E35ED5A(Local_235.f_8, 1)) || unk_0x234B68AC2E35ED5A(Local_235.f_8, 2))
					{
						func_16(joaat("mp_g_m_pros_01"));
					}
					break;
			}
			func_14();
			func_11();
			if (func_10())
			{
				func_9();
			}
			if (func_3(19))
			{
				Local_235.f_786 = 2;
			}
			else if (func_3(3))
			{
				Local_235.f_786 = 2;
			}
			else if (func_3(4))
			{
				Local_235.f_786 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_9()
{
	if (unk_0x443E2CA72E118E64())
	{
		if (Local_235.f_936 == -1f)
		{
			if (func_3(15) || func_3(3))
			{
				switch (Local_235.f_703)
				{
					case 1:
						Local_235.f_936 = Global_262145.f_21412;
						break;
					
					case 0:
						Local_235.f_936 = Global_262145.f_21417;
						break;
				}
				return;
			}
			if (func_3(5))
			{
				switch (Local_235.f_703)
				{
					case 1:
						Local_235.f_936 = Global_262145.f_21412;
						break;
					
					case 0:
						Local_235.f_936 = Global_262145.f_21417;
						break;
				}
				return;
			}
			if (func_3(8))
			{
				switch (Local_235.f_703)
				{
					case 1:
						Local_235.f_936 = Global_262145.f_21412;
						break;
					
					case 0:
						Local_235.f_936 = Global_262145.f_21417;
						break;
				}
				return;
			}
			if (func_3(9))
			{
				switch (Local_235.f_703)
				{
					case 1:
						Local_235.f_936 = Global_262145.f_21412;
						break;
					
					case 0:
						Local_235.f_936 = Global_262145.f_21417;
						break;
				}
				return;
			}
			if (func_3(4))
			{
				Local_235.f_936 = 0f;
				return;
			}
			switch (Local_235.f_703)
			{
				case 1:
					if (func_3(17))
					{
						Local_235.f_936 = Global_262145.f_21413;
						return;
					}
					break;
				}
			}
	}
}

bool func_10()
{
	return ((((((func_3(3) || func_3(4)) || func_3(5)) || func_3(8)) || func_3(9)) || func_3(17)) || func_3(15));
}

void func_11()
{
	if (!func_105(&(Local_235.f_804)))
	{
		func_104(&(Local_235.f_804), 0, 0);
	}
	else if (func_103(&(Local_235.f_804), func_12(), 0))
	{
		func_106(15);
	}
}

int func_12()
{
	return func_13();
}

int func_13()
{
	switch (Local_235.f_703)
	{
		case 0:
			return Global_262145.f_21419;
		
		case 1:
			return Global_262145.f_21414;
		
		default:
	}
	return Global_262145.f_21419;
}

void func_14()
{
	if (!func_105(&(Local_235.f_802)))
	{
		func_104(&(Local_235.f_802), 0, 0);
		return;
	}
	else if (!func_103(&(Local_235.f_802), func_15(), 0))
	{
		if (func_3(1))
		{
			if (Local_235.f_934 == -1)
			{
				Local_235.f_934 = func_13();
			}
		}
		return;
	}
	switch (Local_235.f_703)
	{
		case 0:
			if (!func_3(1))
			{
				if (!func_105(&(Local_235.f_798)))
				{
					func_104(&(Local_235.f_798), 0, 0);
				}
				else if (func_103(&(Local_235.f_798), func_13(), 0))
				{
					func_106(3);
				}
			}
			break;
	}
}

int func_15()
{
	switch (Local_235.f_703)
	{
		case 0:
			return Local_235.f_794;
		
		default:
	}
	return 0;
}

void func_16(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (!func_3(29))
	{
		return;
	}
	iVar3 = Local_235.f_706 * 5;
	iVar0 = ((func_54(Local_235.f_703, Local_235.f_704) + iVar3) + iLocal_190);
	if (Local_235.f_9 == -1 || Local_235.f_9 == iVar0)
	{
		Local_235.f_9 = iVar0;
		func_52(&Var1, &uVar2);
		if (!func_51(Var1))
		{
			if (func_50(iParam0))
			{
				if (func_36(Var1, 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_235.f_10[iVar0 /*15*/].f_5 = { Var1 };
					Local_235.f_10[iVar0 /*15*/].f_8 = uVar2;
					func_35(iVar0, 24);
					if (func_18(iVar0))
					{
						Local_200 = { 0f, 0f, 0f };
						iLocal_190++;
						Local_235.f_9 = -1;
					}
				}
				else
				{
					Local_200 = { 0f, 0f, 0f };
				}
			}
		}
	}
	if (iLocal_190 == 5)
	{
		func_17(29);
		Local_235.f_706++;
		iLocal_190 = 0;
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Local_235.f_1[iVar0]), iVar1);
}

int func_18(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	
	iVar0 = func_34(Local_235.f_703, Local_235.f_704, iParam0);
	if (!unk_0x159BC3DDA80D71AC(Local_235.f_10[iParam0 /*15*/].f_1))
	{
		if (unk_0x035BBFB481EB12F2(1))
		{
			if (func_50(iVar0))
			{
				if (func_33(Local_235.f_10[iParam0 /*15*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_32(iParam0, &Var1, &uVar2))
					{
						Local_235.f_10[iParam0 /*15*/].f_5 = { Var1 };
						Local_235.f_10[iParam0 /*15*/].f_8 = uVar2;
					}
				}
				else if (func_31(&(Local_235.f_10[iParam0 /*15*/].f_1), 22, iVar0, Local_235.f_10[iParam0 /*15*/].f_5, Local_235.f_10[iParam0 /*15*/].f_8, 1, 1, 1))
				{
					if (func_30(iParam0, 17))
					{
					}
					func_19(iParam0);
					switch (Local_235.f_703)
					{
						case 1:
							unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_235.f_10[iParam0 /*15*/].f_1), Global_262145.f_21411);
							break;
						
						case 0:
							unk_0xF8207455457B967E(unk_0x8A437068C87289B7(Local_235.f_10[iParam0 /*15*/].f_1), Global_262145.f_21416);
							break;
					}
					if (func_30(iParam0, 15))
					{
						Local_235.f_1238 = Local_235.f_10[iParam0 /*15*/].f_1;
					}
					unk_0x191DDA30577F440A(&(Local_235.f_772), iParam0);
					return 1;
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

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_28(iParam0);
	unk_0x1B0723EFE914C031(iVar0, 1);
	unk_0xBE91B077ADADE97F(iVar0, 1);
	if (!func_30(iParam0, 10))
	{
		unk_0x2271ED1E65FB75EE(iVar0, Global_1575024);
	}
	else
	{
		unk_0x5B1CC5FA6ED00371(iVar0, 1);
		unk_0xD8C2967D4CA9110F(iVar0, 1);
		unk_0x2271ED1E65FB75EE(iVar0, Global_1575027);
	}
	unk_0xB8FD45B9686D7177(iVar0, 1);
	if (func_30(iParam0, 24))
	{
		iVar1 = joaat("weapon_pistol");
	}
	else
	{
		iVar1 = func_27(iParam0, Local_235.f_703, Local_235.f_704);
	}
	unk_0x7B28A83A0D3DD0F9(iVar0, 281, 1);
	unk_0xD82D50E4AC0D46B9(iVar0, iVar1, 9999999, 1, 1);
	unk_0xEA480A62F5D29812(iVar0, 2);
	unk_0x7B28A83A0D3DD0F9(iVar0, 42, 1);
	unk_0x7BC3A9305442B7FD(iVar0, 1);
	unk_0xA415F00D0E0DFBCE(iVar0, 13, 1);
	unk_0x2BDB866C1791F9D7(iVar0, 1);
	unk_0x7B28A83A0D3DD0F9(iVar0, 146, 1);
	if ((func_30(iParam0, 0) || func_30(iParam0, 2)) || func_30(iParam0, 20))
	{
		unk_0xA415F00D0E0DFBCE(iVar0, 3, 0);
		unk_0xA415F00D0E0DFBCE(iVar0, 2, 1);
	}
	unk_0x5249BC3946DCDA75(iVar0, 3);
	if (!func_30(iParam0, 24))
	{
		if (func_30(iParam0, 1))
		{
			unk_0xD478F2D087D53713(iVar0, Local_235.f_10[iParam0 /*15*/].f_5, 7f, 0, 0);
		}
	}
	if (func_30(iParam0, 21))
	{
		unk_0x087B9DEC55AB5B29(iVar0, 10f);
		unk_0x91B8E16D0EB126A5(iVar0, 10f);
	}
	iVar2 = func_26();
	func_20(&iVar0, iVar2);
	unk_0x504B26425DFF773C(iVar0, 1);
}

void func_20(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	if (!unk_0xECEC7528A52B4EE8(*iParam0))
	{
		if (iParam1 == -1)
		{
			iVar2 = func_21();
		}
		else
		{
			iVar2 = iParam1;
		}
		if (iVar2 >= 1)
		{
			switch (iVar2)
			{
				case 1:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18293);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18299);
					unk_0xA415F00D0E0DFBCE(*iParam0, 24, 0);
					unk_0x095503B9F1CAC814(*iParam0, 0);
					fVar0 = Global_262145.f_18296;
					break;
				
				case 2:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18294);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18300);
					unk_0xA415F00D0E0DFBCE(*iParam0, 24, 0);
					fVar0 = Global_262145.f_18297;
					break;
				
				case 3:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18295);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18301);
					fVar0 = Global_262145.f_18298;
					break;
			}
			iVar1 = round((100f + (100f * fVar0)));
			if (unk_0x5E7C0A485B91DB87(*iParam0) > iVar1)
			{
				unk_0xF8E5239A2E6E0754(*iParam0, iVar1);
				unk_0xC595907BB71C921D(*iParam0, iVar1, 0);
			}
		}
	}
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_25(unk_0x1146A9AE09CE2B14());
	iVar1 = 1;
	if (iVar0 != func_24())
	{
		iVar1 = (iVar1 + func_22(iVar0));
		if (iVar1 <= Global_262145.f_18337)
		{
			return 1;
		}
		else if (iVar1 > Global_262145.f_18337 && iVar1 <= Global_262145.f_18338)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

int func_22(int iParam0)
{
	if (func_23(iParam0) == func_24())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

int func_23(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_24();
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_26()
{
	int iVar0;
	
	switch (Local_235.f_703)
	{
		case 0:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_carbinerifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_carbinerifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_pistol");
						
						case 10:
							return joaat("weapon_carbinerifle");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_pistol");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_pistol");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_sniperrifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_sniperrifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_carbinerifle");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_pistol");
						
						case 1:
							return joaat("weapon_pistol");
						
						case 2:
							return joaat("weapon_carbinerifle");
						
						case 3:
							return joaat("weapon_carbinerifle");
						
						case 4:
							return joaat("weapon_pistol");
						
						case 5:
							return joaat("weapon_carbinerifle");
						
						case 6:
							return joaat("weapon_pistol");
						
						case 7:
							return joaat("weapon_pistol");
						
						case 8:
							return joaat("weapon_carbinerifle");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_carbinerifle");
						
						case 11:
							return joaat("weapon_pistol");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("weapon_carbinerifle");
						
						case 1:
							return joaat("weapon_carbinerifle");
						
						case 2:
							return joaat("weapon_pistol");
						
						case 3:
							return joaat("weapon_pistol");
						
						case 4:
							return joaat("weapon_carbinerifle");
						
						case 5:
							return joaat("weapon_pistol");
						
						case 6:
							return joaat("weapon_carbinerifle");
						
						case 7:
							return joaat("weapon_carbinerifle");
						
						case 8:
							return joaat("weapon_pistol");
						
						case 9:
							return joaat("weapon_carbinerifle");
						
						case 10:
							return joaat("weapon_pistol");
						
						case 11:
							return joaat("weapon_carbinerifle");
						
						default:
					}
					break;
			}
			break;
	}
	return joaat("weapon_microsmg");
}

int func_28(int iParam0)
{
	return unk_0x8A437068C87289B7(func_29(iParam0));
}

var func_29(int iParam0)
{
	return Local_235.f_10[iParam0 /*15*/].f_1;
}

bool func_30(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Local_235.f_10[iParam0 /*15*/].f_9, iParam1);
}

int func_31(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
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

int func_32(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if (!func_33(Local_235.f_462[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_235.f_462[iVar0 /*5*/].f_4)
		{
			if (func_36(Local_235.f_462[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_235.f_462[iVar0 /*5*/] };
				*uParam2 = Local_235.f_462[iVar0 /*5*/].f_3;
				Local_235.f_462[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x4B1BAFAB7E8F4DA7(Local_235.f_462[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0x95F3ABD15748A3D6(Local_235.f_462[iVar0 /*5*/], Local_235.f_462[iVar0 /*5*/].f_1, (Local_235.f_462[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Local_235.f_462[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_235.f_784, iVar0))
					{
						unk_0x191DDA30577F440A(&(Local_235.f_784), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

bool func_33(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_34(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_g_m_pros_01");
		
		case 1:
			return joaat("s_m_y_blackops_02");
		
		default:
	}
	return joaat("mp_g_m_pros_01");
}

void func_35(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_235.f_10[iParam0 /*15*/].f_9, iParam1))
	{
		unk_0x191DDA30577F440A(&(Local_235.f_10[iParam0 /*15*/].f_9), iParam1);
	}
}

int func_36(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_45(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_37(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_37(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_2342(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_42(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_2342(iVar1, 1, 1))
		{
			if (!func_39(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_38(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
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
								if (unk_0x0BABEFEA577FCFA4(func_42(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0BABEFEA577FCFA4(func_42(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_38(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_39(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_40(-1, 0) == 8;
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

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1312763;
}

Vector3 func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_44() && Global_1590908[iVar0 /*874*/].f_844) && !func_51(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_43(iParam0);
}

Vector3 func_43(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

bool func_44()
{
	return Global_2453009.f_19;
}

int func_45(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam6 == 0)
		{
			if (func_2342(iVar1, bParam2, bParam3))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam5 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_38(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam7) && bParam4) && func_46(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_43(iVar1), Param0, 1) < fParam1)
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

int func_46(int iParam0)
{
	if (func_49(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_48(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_47(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_23(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_23(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_48(iParam0) };
		Global_2518266 = { func_48(iParam1) };
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

bool func_50(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_51(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_52(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 30);
	if (!unk_0x234B68AC2E35ED5A(Local_235.f_795, iVar0))
	{
		func_53(Local_235.f_704, iVar0, uParam0, uParam1);
		unk_0x191DDA30577F440A(&(Local_235.f_795), iVar0);
	}
	else
	{
		func_52(uParam0, uParam1);
	}
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1055.47f, -1995.876f, 30.0166f };
					*uParam3 = 351f;
					break;
				
				case 1:
					*uParam2 = { 1117.399f, -1983.151f, 29.9457f };
					*uParam3 = 95.9999f;
					break;
				
				case 2:
					*uParam2 = { 1083.745f, -1973.928f, 30.015f };
					*uParam3 = 341.2f;
					break;
				
				case 3:
					*uParam2 = { 1098.755f, -1984.182f, 30.015f };
					*uParam3 = 15.4f;
					break;
				
				case 4:
					*uParam2 = { 1108.749f, -1983.484f, 30.026f };
					*uParam3 = 98.799f;
					break;
				
				case 5:
					*uParam2 = { 1060.829f, -1998.614f, 30.016f };
					*uParam3 = 98.799f;
					break;
				
				case 6:
					*uParam2 = { 1042.406f, -1970.369f, 33.968f };
					*uParam3 = 302.799f;
					break;
				
				case 7:
					*uParam2 = { 1049.922f, -1958.528f, 30.032f };
					*uParam3 = 260.799f;
					break;
				
				case 8:
					*uParam2 = { 1046.553f, -1957.319f, 34.139f };
					*uParam3 = 260.799f;
					break;
				
				case 9:
					*uParam2 = { 1054.797f, -1953.686f, 31.1f };
					*uParam3 = 260.799f;
					break;
				
				case 10:
					*uParam2 = { 1056.239f, -1944.503f, 35.325f };
					*uParam3 = 260.799f;
					break;
				
				case 11:
					*uParam2 = { 1082.867f, -1947.094f, 30.114f };
					*uParam3 = 126.998f;
					break;
				
				case 12:
					*uParam2 = { 1124.435f, -1990.691f, 30.015f };
					*uParam3 = 61.998f;
					break;
				
				case 13:
					*uParam2 = { 1110.838f, -1970.211f, 30.014f };
					*uParam3 = 199.798f;
					break;
				
				case 14:
					*uParam2 = { 1075.808f, -1973.669f, 46.927f };
					*uParam3 = 4.997f;
					break;
				
				case 15:
					*uParam2 = { 1084.753f, -1949.257f, 39.739f };
					*uParam3 = 112.797f;
					break;
				
				case 16:
					*uParam2 = { 1036.087f, -1976.225f, 30.0445f };
					*uParam3 = 284.9967f;
					break;
				
				case 17:
					*uParam2 = { 1101.358f, -1977.805f, 35.301f };
					*uParam3 = 59.597f;
					break;
				
				case 18:
					*uParam2 = { 1037.334f, -1974.562f, 30.045f };
					*uParam3 = 257.197f;
					break;
				
				case 19:
					*uParam2 = { 1029.209f, -1957.449f, 30.043f };
					*uParam3 = 257.197f;
					break;
				
				case 20:
					*uParam2 = { 1057.171f, -1924.927f, 35.326f };
					*uParam3 = 207.997f;
					break;
				
				case 21:
					*uParam2 = { 1095.153f, -1945.825f, 30.48f };
					*uParam3 = 78.996f;
					break;
				
				case 22:
					*uParam2 = { 1104.814f, -1961.607f, 39.392f };
					*uParam3 = 111.796f;
					break;
				
				case 23:
					*uParam2 = { 1052.437f, -1952.885f, 39.028f };
					*uParam3 = 265.596f;
					break;
				
				case 24:
					*uParam2 = { 1046.366f, -1993.395f, 30.0447f };
					*uParam3 = 293.3969f;
					break;
				
				case 25:
					*uParam2 = { 1034.962f, -1969.472f, 30.0438f };
					*uParam3 = 314.5968f;
					break;
				
				case 26:
					*uParam2 = { 1088.337f, -1980.554f, 49.8624f };
					*uParam3 = 49.7967f;
					break;
				
				case 27:
					*uParam2 = { 1091.725f, -1943.373f, 30.7072f };
					*uParam3 = 94.1965f;
					break;
				
				case 28:
					*uParam2 = { 1070.505f, -1914.369f, 30.557f };
					*uParam3 = 159.1963f;
					break;
				
				case 29:
					*uParam2 = { 1042.077f, -1991.481f, 30.0192f };
					*uParam3 = 321.3989f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 223.8943f, -1872.443f, 25.8715f };
					*uParam3 = 136.5995f;
					break;
				
				case 1:
					*uParam2 = { 233.5436f, -1874.814f, 25.4799f };
					*uParam3 = 143.7995f;
					break;
				
				case 2:
					*uParam2 = { 224.8463f, -1885.055f, 24.7187f };
					*uParam3 = 347.7993f;
					break;
				
				case 3:
					*uParam2 = { 215.3888f, -1862.009f, 29.8679f };
					*uParam3 = 72.399f;
					break;
				
				case 4:
					*uParam2 = { 224.0119f, -1849.136f, 25.96f };
					*uParam3 = 155.7985f;
					break;
				
				case 5:
					*uParam2 = { 229.6837f, -1846.246f, 25.8657f };
					*uParam3 = 120.9982f;
					break;
				
				case 6:
					*uParam2 = { 181.8554f, -1840.346f, 27.0975f };
					*uParam3 = 134.1981f;
					break;
				
				case 7:
					*uParam2 = { 182.4445f, -1837.023f, 27.1026f };
					*uParam3 = 152.1979f;
					break;
				
				case 8:
					*uParam2 = { 179.469f, -1832.004f, 27.1166f };
					*uParam3 = 150.9978f;
					break;
				
				case 9:
					*uParam2 = { 174.4112f, -1824.662f, 27.275f };
					*uParam3 = 178.1977f;
					break;
				
				case 10:
					*uParam2 = { 162.9509f, -1809.811f, 27.7446f };
					*uParam3 = 164.9975f;
					break;
				
				case 11:
					*uParam2 = { 173.9211f, -1805.98f, 28.0737f };
					*uParam3 = 170.5974f;
					break;
				
				case 12:
					*uParam2 = { 183.2023f, -1813.514f, 28.0026f };
					*uParam3 = 159.5974f;
					break;
				
				case 13:
					*uParam2 = { 194.7354f, -1839.018f, 31.254f };
					*uParam3 = 168.5973f;
					break;
				
				case 14:
					*uParam2 = { 194.8095f, -1831.298f, 33.552f };
					*uParam3 = 173.5972f;
					break;
				
				case 15:
					*uParam2 = { 216.5745f, -1863.355f, 33.8676f };
					*uParam3 = 80.5969f;
					break;
				
				case 16:
					*uParam2 = { 215.0836f, -1855.612f, 30.2272f };
					*uParam3 = 93.7968f;
					break;
				
				case 17:
					*uParam2 = { 233.5953f, -1877.874f, 25.2969f };
					*uParam3 = 89.5968f;
					break;
				
				case 18:
					*uParam2 = { 228.045f, -1885.558f, 24.7885f };
					*uParam3 = 52.3967f;
					break;
				
				case 19:
					*uParam2 = { 209.8642f, -1834.138f, 30.9008f };
					*uParam3 = 165.1964f;
					break;
				
				case 20:
					*uParam2 = { 151.3684f, -1812.255f, 27.1353f };
					*uParam3 = 240.7961f;
					break;
				
				case 21:
					*uParam2 = { 157.5625f, -1803.725f, 27.759f };
					*uParam3 = 213.9962f;
					break;
				
				case 22:
					*uParam2 = { 212.8072f, -1844.208f, 30.5683f };
					*uParam3 = 144.796f;
					break;
				
				case 23:
					*uParam2 = { 163.3574f, -1831.611f, 26.5229f };
					*uParam3 = 237.1957f;
					break;
				
				case 24:
					*uParam2 = { 159.2808f, -1836.943f, 26.4316f };
					*uParam3 = 235.9957f;
					break;
				
				case 25:
					*uParam2 = { 226.8004f, -1843.637f, 25.9307f };
					*uParam3 = 177.1956f;
					break;
				
				case 26:
					*uParam2 = { 157.4909f, -1816.947f, 27.1418f };
					*uParam3 = 232.3954f;
					break;
				
				case 27:
					*uParam2 = { 146.3948f, -1816.041f, 26.8111f };
					*uParam3 = 282.9952f;
					break;
				
				case 28:
					*uParam2 = { 174.1512f, -1815.227f, 27.7846f };
					*uParam3 = 167.3948f;
					break;
				
				case 29:
					*uParam2 = { 167.8879f, -1815.257f, 27.6257f };
					*uParam3 = 176.3947f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -108.1577f, -2503.167f, 13.6445f };
					*uParam3 = 188.7996f;
					break;
				
				case 1:
					*uParam2 = { -124.4544f, -2526.156f, 13.6445f };
					*uParam3 = 222.5996f;
					break;
				
				case 2:
					*uParam2 = { -131.2542f, -2535.624f, 11.0446f };
					*uParam3 = 246.5995f;
					break;
				
				case 3:
					*uParam2 = { -139.7364f, -2532.972f, 5.0007f };
					*uParam3 = 246.5995f;
					break;
				
				case 4:
					*uParam2 = { -147.1421f, -2525.929f, 5.1f };
					*uParam3 = 231.3995f;
					break;
				
				case 5:
					*uParam2 = { -110.1184f, -2509.693f, 3.8278f };
					*uParam3 = 242.3994f;
					break;
				
				case 6:
					*uParam2 = { -111.5171f, -2492.404f, 5.0091f };
					*uParam3 = 250.9992f;
					break;
				
				case 7:
					*uParam2 = { -105.616f, -2496.719f, 5.0054f };
					*uParam3 = 250.9992f;
					break;
				
				case 8:
					*uParam2 = { -95.416f, -2490.602f, 5.0186f };
					*uParam3 = 168.199f;
					break;
				
				case 9:
					*uParam2 = { -108.7311f, -2483.662f, 5.0265f };
					*uParam3 = 195.7988f;
					break;
				
				case 10:
					*uParam2 = { -62.7724f, -2509.564f, 10.3494f };
					*uParam3 = 112.9986f;
					break;
				
				case 11:
					*uParam2 = { -77.9648f, -2534.814f, 5.01f };
					*uParam3 = 76.3984f;
					break;
				
				case 12:
					*uParam2 = { -60.2275f, -2523.229f, 5.1609f };
					*uParam3 = 106.9983f;
					break;
				
				case 13:
					*uParam2 = { -146.5238f, -2531.698f, 5.0009f };
					*uParam3 = 241.9981f;
					break;
				
				case 14:
					*uParam2 = { -56.1022f, -2501.861f, 5.1609f };
					*uParam3 = 114.5979f;
					break;
				
				case 15:
					*uParam2 = { -77.9708f, -2488.709f, 5.0232f };
					*uParam3 = 165.1976f;
					break;
				
				case 16:
					*uParam2 = { -98.0264f, -2490.627f, 10.6453f };
					*uParam3 = 165.1976f;
					break;
				
				case 17:
					*uParam2 = { -86.4462f, -2498.533f, 13.4656f };
					*uParam3 = 153.1974f;
					break;
				
				case 18:
					*uParam2 = { -121.4051f, -2499.352f, 13.6445f };
					*uParam3 = 229.1971f;
					break;
				
				case 19:
					*uParam2 = { -126.2097f, -2505.173f, 13.6445f };
					*uParam3 = 238.1971f;
					break;
				
				case 20:
					*uParam2 = { -137.8986f, -2521.034f, 11.0446f };
					*uParam3 = 238.1971f;
					break;
				
				case 21:
					*uParam2 = { -62.7017f, -2532.741f, 5.0127f };
					*uParam3 = 58.1967f;
					break;
				
				case 22:
					*uParam2 = { -49.0633f, -2530.009f, 5.154f };
					*uParam3 = 85.3966f;
					break;
				
				case 23:
					*uParam2 = { -154.0171f, -2525.74f, 5.005f };
					*uParam3 = 239.9962f;
					break;
				
				case 24:
					*uParam2 = { -113.3242f, -2482.563f, 5.0263f };
					*uParam3 = 234.3963f;
					break;
				
				case 25:
					*uParam2 = { -92.1973f, -2486.097f, 5.0197f };
					*uParam3 = 153.396f;
					break;
				
				case 26:
					*uParam2 = { -105.087f, -2480.149f, 5.0228f };
					*uParam3 = 156.396f;
					break;
				
				case 27:
					*uParam2 = { -51.5454f, -2506.03f, 6.4012f };
					*uParam3 = 62.7957f;
					break;
				
				case 28:
					*uParam2 = { -63.3921f, -2545.302f, 5.01f };
					*uParam3 = 62.7957f;
					break;
				
				case 29:
					*uParam2 = { -63.3405f, -2520.345f, 6.4002f };
					*uParam3 = 104.7956f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 751.7123f, -531.2252f, 39.9524f };
					*uParam3 = 130.7997f;
					break;
				
				case 1:
					*uParam2 = { 738.7371f, -575.906f, 33.7772f };
					*uParam3 = 80.1995f;
					break;
				
				case 2:
					*uParam2 = { 741.0178f, -568.4597f, 33.7772f };
					*uParam3 = 66.9995f;
					break;
				
				case 3:
					*uParam2 = { 744.3707f, -556.338f, 33.7772f };
					*uParam3 = 87.1994f;
					break;
				
				case 4:
					*uParam2 = { 753.6755f, -525.5611f, 26.2189f };
					*uParam3 = 84.1994f;
					break;
				
				case 5:
					*uParam2 = { 748.2568f, -528.6512f, 26.7782f };
					*uParam3 = 84.1994f;
					break;
				
				case 6:
					*uParam2 = { 759.2032f, -507.8281f, 26.8752f };
					*uParam3 = 130.3993f;
					break;
				
				case 7:
					*uParam2 = { 751.4592f, -537.2648f, 40.8336f };
					*uParam3 = 128.5993f;
					break;
				
				case 8:
					*uParam2 = { 746.9885f, -541.8518f, 33.7772f };
					*uParam3 = 99.1991f;
					break;
				
				case 9:
					*uParam2 = { 747.5743f, -583.4346f, 26.1191f };
					*uParam3 = 91.9991f;
					break;
				
				case 10:
					*uParam2 = { 738.1207f, -578.9072f, 26.1012f };
					*uParam3 = 74.399f;
					break;
				
				case 11:
					*uParam2 = { 757.5797f, -520.5892f, 26.6085f };
					*uParam3 = 113.3985f;
					break;
				
				case 12:
					*uParam2 = { 702.1577f, -589.6456f, 24.7053f };
					*uParam3 = 325.1983f;
					break;
				
				case 13:
					*uParam2 = { 713.7491f, -592.7561f, 26.0064f };
					*uParam3 = 349.1982f;
					break;
				
				case 14:
					*uParam2 = { 732.3572f, -586.2111f, 26.0538f };
					*uParam3 = 44.3979f;
					break;
				
				case 15:
					*uParam2 = { 724.5908f, -573.8358f, 34.5614f };
					*uParam3 = 357.3978f;
					break;
				
				case 16:
					*uParam2 = { 717.2817f, -570.5662f, 34.5583f };
					*uParam3 = 345.1972f;
					break;
				
				case 17:
					*uParam2 = { 698.3436f, -561.2944f, 36.3998f };
					*uParam3 = 313.7969f;
					break;
				
				case 18:
					*uParam2 = { 765.7123f, -502.6945f, 27.1826f };
					*uParam3 = 135.5966f;
					break;
				
				case 19:
					*uParam2 = { 753.4877f, -528.0688f, 37.9419f };
					*uParam3 = 2.3964f;
					break;
				
				case 20:
					*uParam2 = { 713.2164f, -605.7006f, 26.13f };
					*uParam3 = 349.1963f;
					break;
				
				case 21:
					*uParam2 = { 732.471f, -597.0988f, 26.5775f };
					*uParam3 = 27.5961f;
					break;
				
				case 22:
					*uParam2 = { 751.6623f, -540.7039f, 40.8336f };
					*uParam3 = 109.5959f;
					break;
				
				case 23:
					*uParam2 = { 698.4994f, -598.7482f, 24.6356f };
					*uParam3 = 327.9953f;
					break;
				
				case 24:
					*uParam2 = { 709.1746f, -566.9232f, 35.093f };
					*uParam3 = 323.9951f;
					break;
				
				case 25:
					*uParam2 = { 692.4679f, -612.009f, 24.5906f };
					*uParam3 = 326.995f;
					break;
				
				case 26:
					*uParam2 = { 740.032f, -500.5943f, 24.8953f };
					*uParam3 = 231.5945f;
					break;
				
				case 27:
					*uParam2 = { 752.7185f, -490.9646f, 25.4253f };
					*uParam3 = 174.3943f;
					break;
				
				case 28:
					*uParam2 = { 690.1321f, -565.8355f, 24.2646f };
					*uParam3 = 261.3941f;
					break;
				
				case 29:
					*uParam2 = { 683.7603f, -581.3099f, 24.4894f };
					*uParam3 = 279.5942f;
					break;
			}
			break;
	}
}

int func_54(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 12;
		
		default:
	}
	return 0;
}

void func_55(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (!func_102(uParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			(uParam0[iVar1 /*52*/])->f_13 = -1;
			iVar1++;
		}
		func_101(uParam0, 0);
		if (*uParam1 == 0)
		{
			*uParam1 = 3;
		}
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = 2;
		}
		if (uParam1->f_2 == 0)
		{
			uParam1->f_2 = 2;
		}
		if (uParam1->f_1 == 0)
		{
			uParam1->f_1 = 10000;
		}
		if (uParam1->f_29 == 0)
		{
			uParam1->f_29 = joaat("bati");
		}
		if (uParam1->f_31 == 0)
		{
			uParam1->f_31 = joaat("g_m_y_korean_01");
		}
		if (uParam1->f_9 == 0f)
		{
			uParam1->f_9 = 200f;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam1->f_46[iVar1] == 0)
			{
				uParam1->f_46[iVar1] = -1;
			}
			iVar1++;
		}
	}
	func_100(uParam0, uParam1);
	if (func_99(uParam0))
	{
		if (!func_33(uParam0->f_278, uParam1->f_6, 0))
		{
			if (!func_33(uParam1->f_6, 0f, 0f, 0f, 0))
			{
				uParam0->f_278 = { uParam1->f_6 };
			}
		}
		iVar2 = -1;
		iVar3 = -1;
		if (uParam0->f_266 < 0)
		{
			func_91(uParam0);
		}
		iVar2 = uParam0->f_266;
		iVar3 = uParam0->f_270;
		if (iVar2 > -1)
		{
			if (!func_90(uParam0, iVar3))
			{
				if (uParam0->f_262[iVar3] < func_89(uParam1) || func_89(uParam1) == -1)
				{
					if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)))
					{
						if (func_88(uParam0, iVar2) <= 5)
						{
							if (uParam0->f_267 == -1)
							{
								iVar0 = func_87(uParam0);
								if (iVar0 > -1)
								{
									uParam0->f_267 = iVar0;
								}
							}
							else
							{
								iVar4 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar2));
								iVar5 = iVar4;
								if (!func_33(Global_1630816[iVar5 /*597*/].f_11.f_442.f_2, 0f, 0f, 0f, 0))
								{
									if (func_33(uParam0->f_282, 0f, 0f, 0f, 0) || !func_33(uParam0->f_282, Global_1630816[iVar5 /*597*/].f_11.f_442.f_2, 0))
									{
										Var8 = { Global_1630816[iVar5 /*597*/].f_11.f_442.f_2 };
										fVar9 = Global_1630816[iVar5 /*597*/].f_11.f_442.f_5.f_2;
										iVar6 = func_86(uParam0, uParam1);
										iVar7 = uParam1->f_31;
										iVar10 = func_85(uParam0, uParam1);
										if (uParam1->f_4 == 0)
										{
											uParam1->f_4 = 10;
										}
										if (uParam1->f_34 == 0)
										{
											uParam1->f_34 = Global_1575024;
										}
										if (func_76(uParam0, uParam1, Var8, fVar9, iVar10, iVar6, iVar7))
										{
											uParam0->f_261++;
											uParam0->f_282 = { Var8 };
											uParam0->f_293 = 0;
											(uParam0[uParam0->f_267 /*52*/])->f_12 = iVar3;
											unk_0x191DDA30577F440A(&((uParam0[uParam0->f_267 /*52*/])->f_11), 0);
											unk_0xC664C0067EEAB8D1(&(uParam0->f_268), uParam0->f_267);
											(uParam0[uParam0->f_267 /*52*/])->f_13 = uParam0->f_266;
											func_104(&((uParam0[uParam0->f_267 /*52*/])->f_50), 0, 0);
											uParam0->f_266 = -1;
											uParam0->f_267 = -1;
											iVar11 = func_75(uParam1);
											iVar12 = func_74(uParam0, iVar3);
											if (iVar12 == iVar11)
											{
												uParam0->f_262[iVar3]++;
												func_73(uParam0, iVar3);
											}
											else if (iVar3 == 0)
											{
											}
										}
									}
								}
							}
						}
					}
					else
					{
						uParam0->f_266 = -1;
						uParam0->f_267 = -1;
					}
				}
			}
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!func_105(&(uParam0->f_286[iVar1 /*2*/])))
			{
				if (func_90(uParam0, iVar1))
				{
					if (func_74(uParam0, iVar1) == 0)
					{
						uParam0->f_272++;
						func_104(&(uParam0->f_286[iVar1 /*2*/]), 0, 0);
						unk_0x191DDA30577F440A(&(uParam0->f_269), 4);
					}
				}
			}
			else
			{
				iVar13 = func_72(uParam1);
				if (func_103(&(uParam0->f_286[iVar1 /*2*/]), iVar13, 0))
				{
					func_71(&(uParam0->f_286[iVar1 /*2*/]));
					func_69(uParam0, iVar1);
					unk_0xC664C0067EEAB8D1(&(uParam0->f_269), 4);
				}
			}
			iVar1++;
		}
	}
	iVar14 = 0;
	while (iVar14 < 5)
	{
		func_65(uParam0, iVar14);
		func_56(uParam0, iVar14);
		iVar14++;
	}
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	if (!unk_0x159BC3DDA80D71AC((uParam0[iParam1 /*52*/])->f_5))
	{
		if (unk_0x234B68AC2E35ED5A((uParam0[iParam1 /*52*/])->f_11, 0))
		{
			func_64(uParam0, iParam1);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_63(uParam0, iParam1, iVar0);
		switch (iVar1)
		{
			case 0:
				if (unk_0x159BC3DDA80D71AC(func_62(uParam0, iParam1, iVar0)))
				{
					iVar2 = func_61(uParam0, iParam1, iVar0);
					iVar3 = func_59(uParam0, iParam1);
					if (func_33((uParam0[iParam1 /*52*/])->f_14, 0f, 0f, 0f, 0))
					{
						if (!unk_0x159BC3DDA80D71AC(uParam0->f_273))
						{
							if (!unk_0x159BC3DDA80D71AC(uParam0->f_274))
							{
								if (unk_0xE267416B80E7921F(unk_0x6471F4759775FCA4(iVar3)))
								{
									if (unk_0x27FC1B0077581B37(iVar3, -1, 0) == iVar2)
									{
										func_58(uParam0, iParam1, iVar0, 5);
									}
									else
									{
										func_58(uParam0, iParam1, iVar0, 1);
									}
								}
								else
								{
									func_58(uParam0, iParam1, iVar0, 1);
								}
							}
							else
							{
								func_58(uParam0, iParam1, iVar0, 1);
							}
						}
						else
						{
							func_58(uParam0, iParam1, iVar0, 3);
						}
					}
					else if (iVar0 == 0)
					{
						func_58(uParam0, iParam1, iVar0, 4);
					}
					else
					{
						func_58(uParam0, iParam1, iVar0, 1);
					}
				}
				break;
			
			case 4:
				iVar2 = func_61(uParam0, iParam1, iVar0);
				if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					if (!unk_0x530FB711AE9CF518(iVar2))
					{
						func_58(uParam0, iParam1, iVar0, 1);
					}
					else
					{
						Var4 = { unk_0xD6E677FAD7521410(iVar2, 1) };
						if (!func_33((uParam0[iParam1 /*52*/])->f_14, 0f, 0f, 0f, 0))
						{
							if (vdist2(Var4, (uParam0[iParam1 /*52*/])->f_14) < (8f * 8f))
							{
								func_58(uParam0, iParam1, iVar0, 1);
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
			
			case 3:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
			
			case 5:
				if (func_57(uParam0, iParam1))
				{
					func_58(uParam0, iParam1, iVar0, 2);
				}
				break;
		}
		iVar0++;
	}
}

bool func_57(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_268, iParam1);
}

void func_58(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(uParam0[iParam1 /*52*/])->f_6[iParam2] = iParam3;
}

int func_59(var uParam0, int iParam1)
{
	return unk_0x854C404AEB476240(func_60(uParam0, iParam1));
}

var func_60(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*52*/])->f_5;
}

int func_61(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(func_62(uParam0, iParam1, iParam2)))
	{
		uVar0 = unk_0x8A437068C87289B7(func_62(uParam0, iParam1, iParam2));
	}
	return uVar0;
}

var func_62(var uParam0, int iParam1, int iParam2)
{
	return (*uParam0[iParam1 /*52*/])[iParam2];
}

var func_63(var uParam0, int iParam1, int iParam2)
{
	return (uParam0[iParam1 /*52*/])->f_6[iParam2];
}

void func_64(var uParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A((uParam0[iParam1 /*52*/])->f_11, 0))
	{
		(uParam0[iParam1 /*52*/])->f_11 = 0;
		(uParam0[iParam1 /*52*/])->f_13 = -1;
		(uParam0[iParam1 /*52*/])->f_6[0] = 0;
		(uParam0[iParam1 /*52*/])->f_6[1] = 0;
		(uParam0[iParam1 /*52*/])->f_6[2] = 0;
		(uParam0[iParam1 /*52*/])->f_6[3] = 0;
		func_71(&((uParam0[iParam1 /*52*/])->f_50));
	}
}

void func_65(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (unk_0x8CFC2F41A749E236(iVar2))
		{
			if (!func_39(iVar2, 0))
			{
				if (unk_0xFCC26BA7572E9F1F(iVar2))
				{
					if (!bVar0)
					{
						if (func_68(iVar2, 1, 1))
						{
							bVar0 = true;
						}
					}
					if (!unk_0x234B68AC2E35ED5A(uParam0->f_268, iParam1))
					{
						if (unk_0x234B68AC2E35ED5A(Global_1630816[iVar1 /*597*/].f_11.f_442, iParam1))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_268), iParam1);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!func_99(uParam0))
		{
			func_67(uParam0);
		}
	}
	else if (func_99(uParam0))
	{
		func_66(uParam0);
	}
}

void func_66(var uParam0)
{
	if (unk_0x234B68AC2E35ED5A(uParam0->f_269, 1))
	{
		unk_0xC664C0067EEAB8D1(&(uParam0->f_269), 1);
	}
}

void func_67(var uParam0)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_269, 1))
	{
		unk_0x191DDA30577F440A(&(uParam0->f_269), 1);
	}
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 != func_24())
	{
		if (unk_0xFCC26BA7572E9F1F(iParam0))
		{
			iVar0 = unk_0x4645C707A0067CB6(iParam0);
			if (unk_0xF46EDF82CA845956(iVar0))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iParam0)))
				{
					if (bParam2)
					{
						if (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_442.f_1, 2))
						{
							return 1;
						}
					}
					if (bParam1)
					{
						if (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_442.f_1, 1))
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

void func_69(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_70(uParam0, 2);
			break;
		
		case 1:
			func_70(uParam0, 3);
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(uParam0->f_269, iParam1))
	{
		unk_0xC664C0067EEAB8D1(&(uParam0->f_269), iParam1);
	}
}

void func_71(var uParam0)
{
	uParam0->f_1 = 0;
}

var func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_101(uParam0, 2);
			break;
		
		case 1:
			func_101(uParam0, 3);
			break;
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x159BC3DDA80D71AC(func_60(uParam0, iVar0)))
		{
			if ((uParam0[iVar0 /*52*/])->f_12 == iParam1)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_75(var uParam0)
{
	return uParam0->f_3;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam1->f_41[iVar0] != 0)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar2 = uParam0->f_267;
	if (!unk_0x159BC3DDA80D71AC((uParam0[iVar2 /*52*/])->f_5))
	{
		if (unk_0xA8911798335DCDA2(1))
		{
			if (func_50(iParam5))
			{
				if (func_82(&((uParam0[iVar2 /*52*/])->f_5), iParam5, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					iVar1 = unk_0x854C404AEB476240((uParam0[iVar2 /*52*/])->f_5);
					unk_0xED4E91A1FC7ABBF6(iVar1, 1);
					unk_0xD4DF29F3D7B97053(iVar1, 0);
					unk_0x1F7ED1C13023483B(iVar1, 1);
					unk_0x89E171705EA920DA(iVar1, 1, 1, 0);
					unk_0x47D0DDD8833C5E5F(iVar1, 1084227584);
					unk_0x49CB177958B472A8(iVar1, 20f);
					if (iParam5 != joaat("seashark"))
					{
						if (uParam1->f_115)
						{
							unk_0x5C052A30B9FCA449(iVar1, 2);
						}
					}
					unk_0x1FB6C0DF282CC98A(iVar1, 1);
					unk_0x4551B6FEB638C979(iVar1, 1);
					if (uParam1->f_55[iVar2])
					{
						unk_0xC612552622E74D36(iVar1, uParam1->f_79[iVar2], uParam1->f_85[iVar2]);
					}
					if (uParam1->f_61[iVar2])
					{
						unk_0xA2FEFE3BBCD9FB23(iVar1, uParam1->f_91[iVar2], uParam1->f_97[iVar2]);
					}
					if (uParam1->f_67[iVar2])
					{
						unk_0x2835492575BEB0E6(iVar1, uParam1->f_103[iVar2]);
					}
					if (uParam1->f_73[iVar2])
					{
						unk_0x2835492575BEB0E6(iVar1, uParam1->f_109[iVar2]);
					}
					if (!uParam1->f_55[iVar2])
					{
						if (iParam5 == joaat("bati") || iParam5 == joaat("fugitive"))
						{
							unk_0xC612552622E74D36(iVar1, 0, 0);
						}
					}
					func_81(iVar1, iVar2);
					if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x6C9577C090944B92(iVar1, "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
					{
						if (unk_0x5B38E054B758C032(iVar1, "MPBitset"))
						{
							iVar3 = unk_0x05351AF95891EE5C(iVar1, "MPBitset");
						}
						unk_0x191DDA30577F440A(&iVar3, 10);
						unk_0x191DDA30577F440A(&iVar3, 11);
						unk_0x6C9577C090944B92(iVar1, "MPBitset", iVar3);
					}
				}
			}
		}
	}
	uVar6 = iParam6;
	iVar7 = joaat("weapon_microsmg");
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (!unk_0x159BC3DDA80D71AC((*uParam0[iVar2 /*52*/])[iVar0]))
		{
			if (unk_0x035BBFB481EB12F2(1))
			{
				if (uParam1->f_41[iVar0] != 0)
				{
					iParam6 = uParam1->f_41[iVar0];
				}
				else
				{
					iParam6 = uVar6;
				}
				if (func_50(iParam6))
				{
					if (unk_0x159BC3DDA80D71AC((uParam0[iVar2 /*52*/])->f_5))
					{
						if (!unk_0xB364346471C3B028((uParam0[iVar2 /*52*/])->f_5))
						{
							unk_0x1AA7FA4BBD799B88((uParam0[iVar2 /*52*/])->f_5);
						}
						if (unk_0xB364346471C3B028((uParam0[iVar2 /*52*/])->f_5))
						{
							iVar5 = (iVar0 - 1);
							if (func_80(uParam0[iVar2 /*52*/][iVar0], (uParam0[iVar2 /*52*/])->f_5, 22, iParam6, iVar5, 1, 1, 1))
							{
								iVar4 = unk_0x8A437068C87289B7((*uParam0[iVar2 /*52*/])[iVar0]);
								unk_0xBE91B077ADADE97F(iVar4, 1);
								unk_0xB8FD45B9686D7177(iVar4, 1);
								if (unk_0x8D367F0B53916265(iParam5))
								{
								}
								if (iVar5 == -1 && uParam1->f_54)
								{
									iVar7 = joaat("weapon_pistol");
								}
								else if (uParam1->f_53 != 0)
								{
									iVar7 = uParam1->f_53;
								}
								else
								{
									iVar7 = joaat("weapon_microsmg");
								}
								unk_0xD82D50E4AC0D46B9(iVar4, iVar7, 999999999, 1, 1);
								unk_0x7B28A83A0D3DD0F9(iVar4, 42, 1);
								unk_0x7BC3A9305442B7FD(iVar4, 1);
								unk_0xA415F00D0E0DFBCE(iVar4, 43, 1);
								unk_0x2BDB866C1791F9D7(iVar4, 1);
								unk_0x7B28A83A0D3DD0F9(iVar4, 146, 1);
								unk_0x504B26425DFF773C(iVar4, 1);
								unk_0x2271ED1E65FB75EE(iVar4, uParam1->f_34);
								unk_0xA415F00D0E0DFBCE(iVar4, 2, 1);
								unk_0xA415F00D0E0DFBCE(iVar4, 64, 0);
								unk_0xA415F00D0E0DFBCE(iVar4, 66, 0);
								unk_0xA415F00D0E0DFBCE(iVar4, 1, 1);
								unk_0xA415F00D0E0DFBCE(iVar4, 53, 1);
								unk_0x5249BC3946DCDA75(iVar4, 3);
								if (func_79(uParam0, 0))
								{
									unk_0x7B28A83A0D3DD0F9(iVar4, 342, 1);
								}
								if (func_79(uParam0, 2))
								{
									unk_0xA415F00D0E0DFBCE(iVar4, 3, 0);
								}
								if (uParam0->f_271 <= 0)
								{
									unk_0xF8207455457B967E(iVar4, uParam1->f_4);
								}
								else
								{
									func_78(&iVar4, uParam0->f_271);
								}
								if (unk_0xE267416B80E7921F(iParam5))
								{
									if (iVar5 == -1 || iVar5 == 0)
									{
										if (uParam1->f_4 > 10)
										{
											unk_0xF8207455457B967E(iVar4, 10);
										}
										unk_0xA1217FA3D209873F(iVar4, 80);
										uVar8 = Global_262145.f_11532;
										uVar9 = Global_262145.f_11533;
										uVar10 = Global_262145.f_11534;
										uVar11 = Global_262145.f_11535;
										unk_0x817234E2BB671752(iVar4, 23, uVar8);
										unk_0x817234E2BB671752(iVar4, 24, uVar9);
										unk_0x817234E2BB671752(iVar4, 25, uVar10);
										unk_0x817234E2BB671752(iVar4, 26, uVar11);
									}
								}
								if (!unk_0x159BC3DDA80D71AC(uParam0->f_273))
								{
									unk_0x817234E2BB671752(iVar4, 17, 2f);
									unk_0xE5DEE9FAEB9878C1(iVar4, 1f);
								}
								func_77(uParam0, iParam6, iVar2, iVar0);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	if (!unk_0x159BC3DDA80D71AC((uParam0[iVar2 /*52*/])->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (!unk_0x159BC3DDA80D71AC((*uParam0[iVar2 /*52*/])[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = unk_0x8A437068C87289B7((*uParam0[iParam2 /*52*/])[iParam3]);
	if (iParam1 == joaat("g_m_importexport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 2, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 0, 0, false);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 1, 0, 0, false);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						break;
				}
				break;
			
			case 1:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 1, 0, false);
						break;
				}
				break;
			
			case 2:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 1, 0, false);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 2, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 0, 0, false);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 1, 0, 0, false);
						break;
				}
				break;
			
			case 3:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 1, 0, 0, false);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 0, 0);
						break;
				}
				break;
			
			case 4:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 2, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 0, 0, false);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 0, 0);
						unk_0xC8749D706BBF16E1(iVar0, 0, 1, 0, false);
						break;
				}
				break;
		}
	}
	else if (iParam1 == joaat("g_f_importexport_01"))
	{
		switch ((iParam2 % 5))
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 0, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 1, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 2, 0, 0);
						break;
				}
				break;
			
			case 1:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 2, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 3, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			
			case 2:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 4, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 0, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 1, 0, 0);
						break;
				}
				break;
			
			case 3:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 1, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 1, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 1, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 2, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 2, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 3, 0, 0);
						break;
				}
				break;
			
			case 4:
				switch (iParam3)
				{
					case 0:
						unk_0x4170FE884DF7426D(iVar0, 0, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 3, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 3, 3, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 3, 0, 0);
						break;
					
					case 1:
						unk_0x4170FE884DF7426D(iVar0, 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 0, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 0, 0, 0);
						break;
					
					default:
						unk_0x4170FE884DF7426D(iVar0, 0, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 2, 4, 0, 0);
						unk_0x4170FE884DF7426D(iVar0, 3, 4, 1, 0);
						unk_0x4170FE884DF7426D(iVar0, 4, 4, 2, 0);
						unk_0x4170FE884DF7426D(iVar0, 8, 4, 0, 0);
						break;
				}
				break;
			}
	}
}

void func_78(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	if (!unk_0xECEC7528A52B4EE8(*iParam0))
	{
		if (iParam1 == -1)
		{
			iVar2 = func_21();
		}
		else
		{
			iVar2 = iParam1;
		}
		if (iVar2 >= 1)
		{
			switch (iVar2)
			{
				case 1:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18326);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18332);
					unk_0xA415F00D0E0DFBCE(*iParam0, 24, 0);
					unk_0x095503B9F1CAC814(*iParam0, 0);
					fVar0 = Global_262145.f_18329;
					break;
				
				case 2:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18327);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18333);
					unk_0xA415F00D0E0DFBCE(*iParam0, 24, 0);
					fVar0 = Global_262145.f_18330;
					break;
				
				case 3:
					unk_0xF8207455457B967E(*iParam0, Global_262145.f_18328);
					unk_0xA1217FA3D209873F(*iParam0, Global_262145.f_18334);
					fVar0 = Global_262145.f_18331;
					break;
			}
			iVar1 = round((100f + (100f * fVar0)));
			if (unk_0x5E7C0A485B91DB87(*iParam0) > iVar1)
			{
				unk_0xF8E5239A2E6E0754(*iParam0, iVar1);
				unk_0xC595907BB71C921D(*iParam0, iVar1, 0);
			}
		}
	}
}

bool func_79(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_285, iParam1);
}

int func_80(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 % 2);
	iVar1 = unk_0x6471F4759775FCA4(iParam0);
	switch (iVar1)
	{
		case joaat("banshee2"):
			unk_0x7D867CDA26E248C7(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					unk_0xC612552622E74D36(iParam0, 27, 27);
					unk_0xA2FEFE3BBCD9FB23(iParam0, 27, 156);
					unk_0x2835492575BEB0E6(iParam0, 31);
					unk_0x78EF6BDFD91C7D7F(iParam0, 134);
					unk_0x6895CB0D4F2E7CDC(iParam0, 0, 2, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 1, 1, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 48, 2, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 23, 40, false);
					break;
				
				case 1:
					unk_0xC612552622E74D36(iParam0, 36, 36);
					unk_0xA2FEFE3BBCD9FB23(iParam0, 88, 156);
					unk_0x2835492575BEB0E6(iParam0, 31);
					unk_0x78EF6BDFD91C7D7F(iParam0, 134);
					unk_0x6895CB0D4F2E7CDC(iParam0, 0, 1, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 3, 1, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 1, 2, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 48, 5, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 23, 46, false);
					break;
			}
			break;
		
		case joaat("sultanrs"):
			unk_0x7D867CDA26E248C7(iParam0, 0);
			switch (iVar0)
			{
				case 0:
					unk_0xC612552622E74D36(iParam0, 92, 92);
					unk_0xA2FEFE3BBCD9FB23(iParam0, 88, 158);
					unk_0x2835492575BEB0E6(iParam0, 31);
					unk_0x78EF6BDFD91C7D7F(iParam0, 134);
					unk_0x6895CB0D4F2E7CDC(iParam0, 0, 10, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 7, 0, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 1, 8, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 23, 28, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 48, 3, false);
					break;
				
				case 1:
					unk_0xC612552622E74D36(iParam0, 28, 28);
					unk_0xA2FEFE3BBCD9FB23(iParam0, 27, 0);
					unk_0x2835492575BEB0E6(iParam0, 31);
					unk_0x78EF6BDFD91C7D7F(iParam0, 134);
					unk_0x6895CB0D4F2E7CDC(iParam0, 0, 11, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 7, 7, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 1, 10, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 23, 1, false);
					unk_0x6895CB0D4F2E7CDC(iParam0, 48, 4, false);
					break;
			}
			break;
	}
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
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
			func_83(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
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

int func_84(int iParam0, struct<3> Param1, int iParam2)
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

var func_85(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = uParam0->f_267;
	if (uParam1->f_46[iVar0] > 0)
	{
		return uParam1->f_46[iVar0];
	}
	return uParam1->f_2;
}

var func_86(var uParam0, var uParam1)
{
	int iVar0;
	
	switch (uParam0->f_270)
	{
		case 0:
			iVar0 = uParam0->f_267;
			if (uParam1->f_35[iVar0] != 0)
			{
				if (unk_0x443E2CA72E118E64())
				{
					if (uParam0->f_293 != uParam1->f_35[iVar0])
					{
						uParam0->f_293 = uParam1->f_35[iVar0];
					}
				}
				return uParam1->f_35[iVar0];
			}
			else
			{
				return uParam1->f_29;
			}
			break;
		
		case 1:
			return uParam1->f_30;
	}
	return uParam1->f_29;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar1 == -1)
		{
			if (!unk_0x159BC3DDA80D71AC((uParam0[iVar0 /*52*/])->f_5))
			{
				if (!unk_0x234B68AC2E35ED5A((uParam0[iVar0 /*52*/])->f_11, 0))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((uParam0[iVar0 /*52*/])->f_13 == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_89(var uParam0)
{
	return *uParam0;
}

int func_90(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_102(uParam0, 2);
		
		case 1:
			return func_102(uParam0, 3);
		
		default:
	}
	return 0;
}

void func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = -1;
	if (unk_0x159BC3DDA80D71AC(uParam0->f_273))
	{
		iVar1 = func_98(uParam0);
	}
	else if (unk_0x159BC3DDA80D71AC(uParam0->f_274))
	{
		iVar1 = func_97(uParam0);
	}
	else if (!func_33((uParam0[0 /*52*/])->f_14, 0f, 0f, 0f, 0))
	{
		iVar1 = func_96(uParam0);
	}
	else
	{
		iVar0 = func_95(uParam0);
		if (iVar0 > -1)
		{
			if (iVar1 == -1)
			{
				if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
				{
					if (func_94(uParam0, iVar0, 1, 1))
					{
						iVar2 = func_93(uParam0, iVar0);
						if (!func_90(uParam0, iVar2))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
	}
	uParam0->f_266 = iVar1;
	uParam0->f_270 = func_92(uParam0);
	if (uParam0->f_266 > -1)
	{
	}
}

int func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_266;
	if (func_94(uParam0, iVar0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_94(uParam0, iParam1, 1, 0))
	{
		iVar0 = 0;
	}
	else if (func_94(uParam0, iParam1, 0, 1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_94(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 > -1)
	{
		if (func_88(uParam0, iParam1) <= 5)
		{
			return func_68(unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam1)), bParam2, bParam3);
		}
	}
	return 0;
}

int func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = -1;
	iVar1 = 99;
	iVar3 = 0;
	while (iVar3 < unk_0x5E72DF7B8C03AA05())
	{
		if (!bVar4)
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar3)))
			{
				if (func_94(uParam0, iVar3, 1, 1))
				{
					iVar2 = func_88(uParam0, iVar3);
					if (iVar2 == 0)
					{
						bVar4 = true;
						iVar0 = iVar3;
					}
					else if (iVar2 < iVar1)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
						if (func_94(uParam0, iVar3, 1, 1))
						{
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_96(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar2 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar2))
		{
			iVar3 = unk_0x539ED6DF32477DE0(iVar2);
			fVar5 = vdist2(unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iVar3), 0), (uParam0[0 /*52*/])->f_14);
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_97(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar2 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar2))
		{
			iVar3 = unk_0x539ED6DF32477DE0(iVar2);
			fVar5 = vdist2(unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iVar3), 0), unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(uParam0->f_274), 0));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = -1;
	fVar4 = 1E+10f;
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar2 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar2))
		{
			iVar3 = unk_0x539ED6DF32477DE0(iVar2);
			fVar5 = vdist2(unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iVar3), 0), unk_0xD6E677FAD7521410(unk_0x8A437068C87289B7(uParam0->f_273), 0));
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_99(var uParam0)
{
	return func_102(uParam0, 1);
}

void func_100(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x159BC3DDA80D71AC(uParam1->f_32))
	{
		if (uParam0->f_273 != uParam1->f_32)
		{
			uParam0->f_273 = uParam1->f_32;
		}
	}
	if (unk_0x159BC3DDA80D71AC(uParam1->f_33))
	{
		if (uParam0->f_274 != uParam1->f_33)
		{
			uParam0->f_274 = uParam1->f_33;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_33(uParam1->f_10[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_33(uParam1->f_10[iVar0 /*3*/], (uParam0[iVar0 /*52*/])->f_14, 0))
			{
				(uParam0[iVar0 /*52*/])->f_14 = { uParam1->f_10[iVar0 /*3*/] };
			}
		}
		iVar0++;
	}
	if (!func_33(uParam1->f_26, 0f, 0f, 0f, 0))
	{
		if (!func_33(uParam1->f_26, uParam0->f_275, 0))
		{
			uParam0->f_275 = { uParam1->f_26 };
		}
	}
	if (uParam1->f_5 > 0)
	{
		if (uParam0->f_271 != uParam1->f_5)
		{
			uParam0->f_271 = uParam1->f_5;
		}
	}
	if (uParam1->f_29 != 0)
	{
		if (uParam0->f_294 != uParam1->f_29)
		{
			uParam0->f_294 = uParam1->f_29;
		}
	}
	if (uParam0->f_285 != uParam1->f_52)
	{
		uParam0->f_285 = uParam1->f_52;
	}
	if (uParam0->f_281 != uParam1->f_9)
	{
		uParam0->f_281 = uParam1->f_9;
	}
}

void func_101(var uParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_269, iParam1))
	{
		unk_0x191DDA30577F440A(&(uParam0->f_269), iParam1);
	}
}

bool func_102(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_269, iParam1);
}

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_104(uParam0, bParam2, 0);
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

void func_104(var uParam0, bool bParam1, bool bParam2)
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

bool func_105(var uParam0)
{
	return uParam0->f_1;
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	unk_0x191DDA30577F440A(&(Local_235.f_1[iVar0]), iVar1);
}

void func_107()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	var uVar7;
	
	if (func_10())
	{
	}
	if (unk_0x443E2CA72E118E64())
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			switch (Local_235.f_10[iVar0 /*15*/].f_10)
			{
				case 0:
					if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						if (func_30(iVar0, 7))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 11;
						}
						else if (func_30(iVar0, 1))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 6;
						}
						else if (func_30(iVar0, 20))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 7;
						}
						else if (func_30(iVar0, 15))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 11;
							Local_235.f_1238 = Local_235.f_10[iVar0 /*15*/].f_1;
						}
					}
					break;
				
				case 13:
					if (((((Local_235.f_775 != 0 || Local_235.f_776 != 0) || Local_235.f_779 != 0) || Local_235.f_778 != 0) || unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 8)) || func_3(13))
					{
						if (func_30(iVar0, 16))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 7;
						}
						else
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 19;
						}
					}
					break;
				
				case 14:
					if (func_10())
					{
						Local_235.f_10[iVar0 /*15*/].f_10 = 15;
					}
					else if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						iVar4 = func_28(iVar0);
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (unk_0x530FB711AE9CF518(func_28(iVar0)))
							{
								iVar3 = unk_0x75B58B38E45C6F9A(iVar4, 0);
								iVar5 = Local_235.f_10[iVar0 /*15*/].f_11;
								Var1 = { func_117(Local_235.f_703, Local_235.f_704, iVar5) };
								fVar2 = unk_0x0BABEFEA577FCFA4(Var1, unk_0xD6E677FAD7521410(iVar3, 0), 0);
								if (Local_235.f_10[iVar0 /*15*/].f_11 == func_116(Local_235.f_703, Local_235.f_704))
								{
									fVar6 = 2f;
								}
								else
								{
									fVar6 = 20f;
								}
								if (fVar2 < fVar6)
								{
									Local_235.f_10[iVar0 /*15*/].f_11++;
									if (Local_235.f_10[iVar0 /*15*/].f_11 == func_116(Local_235.f_703, Local_235.f_704))
									{
										func_106(22);
									}
									if (Local_235.f_10[iVar0 /*15*/].f_11 > func_115(Local_235.f_703, Local_235.f_704))
									{
										if (func_114(Local_235.f_703))
										{
											if (!func_3(9))
											{
												func_106(9);
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 19:
					if (func_10())
					{
						Local_235.f_10[iVar0 /*15*/].f_10 = 15;
					}
					else if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (!unk_0x530FB711AE9CF518(func_28(iVar0)))
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 11:
					if (!func_30(iVar0, 12))
					{
						if (((func_3(13) || unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 8)) || func_3(20)) || func_3(23))
						{
							if (func_113(iVar0))
							{
								if (!func_30(iVar0, 9))
								{
									if (!func_30(iVar0, 15))
									{
										Local_235.f_10[iVar0 /*15*/].f_10 = 6;
									}
									else
									{
										Local_235.f_10[iVar0 /*15*/].f_10 = 20;
									}
								}
								else
								{
									Local_235.f_10[iVar0 /*15*/].f_10 = 12;
								}
							}
						}
						else if (Local_235.f_780 != 0)
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 6;
						}
					}
					else if (((Local_235.f_775 != 0 || Local_235.f_776 != 0) || Local_235.f_779 != 0) || Local_235.f_778 != 0)
					{
						if (!func_30(iVar0, 9))
						{
							if (!func_30(iVar0, 15))
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 6;
							}
							else
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 20;
							}
						}
						else
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 12;
						}
					}
					break;
				
				case 8:
					if (func_3(6))
					{
						Local_235.f_10[iVar0 /*15*/].f_10 = 1;
					}
					else
					{
						func_110(iVar4, iVar0);
					}
					break;
				
				case 1:
					if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (!unk_0x530FB711AE9CF518(func_28(iVar0)))
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 18:
					if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (!unk_0x530FB711AE9CF518(func_28(iVar0)))
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 10:
					break;
				
				case 9:
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_109(iVar0))
					{
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (!unk_0xC49311A2A500FF09(func_28(iVar0), 0))
							{
								Local_235.f_10[iVar0 /*15*/].f_10 = 7;
							}
						}
					}
					break;
				
				case 20:
					if (func_109(iVar0))
					{
						if (!unk_0xECEC7528A52B4EE8(func_28(iVar0)))
						{
							if (unk_0xC49311A2A500FF09(func_28(iVar0), 0))
							{
								if (func_30(iVar0, 15))
								{
									Local_235.f_1238 = Local_235.f_10[iVar0 /*15*/].f_1;
									func_106(21);
									Local_235.f_10[iVar0 /*15*/].f_10 = 14;
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				
				case 4:
					break;
				
				case 6:
					if (func_30(iVar0, 15))
					{
						if (func_3(20))
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 20;
						}
					}
					break;
				
				case 7:
					if (func_30(iVar0, 6) || func_30(iVar0, 5))
					{
						if (func_10())
						{
							Local_235.f_10[iVar0 /*15*/].f_10 = 15;
						}
					}
					break;
				
				case 15:
					if (func_109(iVar0))
					{
						uVar7 = func_29(iVar0);
						func_108(&uVar7);
					}
					break;
			}
			iVar0++;
		}
	}
}

void func_108(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

bool func_109(int iParam0)
{
	return unk_0x159BC3DDA80D71AC(Local_235.f_10[iParam0 /*15*/].f_1);
}

void func_110(int iParam0, int iParam1)
{
	if (!func_112(Local_235.f_10[iParam1 /*15*/].f_1))
	{
		if (unk_0x530FB711AE9CF518(unk_0x8A437068C87289B7(Local_235.f_10[iParam1 /*15*/].f_1)))
		{
			if (unk_0x234B68AC2E35ED5A(Local_235.f_774, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_773), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_235.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_235.f_775, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_773), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_235.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_235.f_776, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_773), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_235.f_10[iParam1 /*15*/].f_1);
				if (func_111(&iParam0))
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 2;
				}
				else
				{
					Local_235.f_10[iParam1 /*15*/].f_10 = 7;
				}
			}
		}
		else if (Local_235.f_10[iParam1 /*15*/].f_10 != 7)
		{
			Local_235.f_10[iParam1 /*15*/].f_10 = 7;
		}
	}
}

int func_111(int iParam0)
{
	if (unk_0xC49311A2A500FF09(*iParam0, 0))
	{
		if (unk_0x27FC1B0077581B37(unk_0xDA8C680C9B8BFAAF(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

int func_113(int iParam0)
{
	if (func_103(&(Local_235.f_10[iParam0 /*15*/].f_12), Local_235.f_10[iParam0 /*15*/].f_14, 0))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 7;
				
				default:
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 7;
				
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_117(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1695.19f, 3315.922f, 91.272f;
						
						case 1:
							return 1320.615f, 1927.616f, 142.405f;
						
						case 2:
							return 1096.169f, 553.284f, 183.723f;
						
						case 3:
							return 777.194f, -730.307f, 76.659f;
						
						case 4:
							return 826.327f, -1752.486f, 78.532f;
						
						case 5:
							return 645.707f, -2697.196f, 78.532f;
						
						case 6:
							return 477.492f, -3371.308f, 76.162f;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1366.73f, -1860.514f, 133.214f;
						
						case 1:
							return 1080.37f, -1403.725f, 135.7079f;
						
						case 2:
							return 1021.954f, -612.2437f, 135.7079f;
						
						case 3:
							return 1208.479f, 483.2035f, 167.298f;
						
						case 4:
							return 1635.089f, 1202.567f, 167.6163f;
						
						case 5:
							return 2052.191f, 2606.052f, 170.5815f;
						
						case 6:
							return 2777.644f, 3227.485f, 149.9717f;
						
						case 7:
							return 3570.771f, 3665.035f, 91.6934f;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 741.975f, -1845.051f, 76.314f;
						
						case 1:
							return 1155.844f, -2075.653f, 72.6f;
						
						case 2:
							return 1815.19f, -1465.108f, 184.557f;
						
						case 3:
							return 2360.091f, -334.341f, 155.767f;
						
						case 4:
							return 2628.522f, 1573.633f, 81.445f;
						
						case 5:
							return 2690.137f, 3038.388f, 97.082f;
						
						case 6:
							return 3241.995f, 3580.926f, 139.694f;
						
						case 7:
							return 3568.314f, 3663.176f, 84.743f;
						
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_118()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3[4];
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	iVar4 = -1;
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < 4)
	{
		iVar3[iVar6] = -1;
		iVar6++;
	}
	if (Local_235 != 4)
	{
		iLocal_328 = 0;
		while (iLocal_328 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_328)))
			{
				iVar8 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_328));
				if (!func_39(iVar8, 0))
				{
					if (func_2342(iVar8, 1, 1))
					{
					}
					if (!func_3(31))
					{
						if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 19))
						{
							func_106(31);
						}
					}
					if (func_2219() == 1)
					{
						func_135(iLocal_328);
						func_132(iLocal_328);
						if (((unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 14) || func_3(24)) || Local_323[iLocal_328 /*26*/].f_13 != 0) || Local_235.f_778 != 0)
						{
							func_106(20);
						}
						if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 17))
						{
							func_106(27);
						}
						if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 18))
						{
							func_106(30);
						}
						if (!func_3(26))
						{
							if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 16))
							{
								func_106(26);
							}
						}
						if (!func_3(13))
						{
							if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 8))
							{
								func_106(13);
								if (Local_235.f_935 == -1)
								{
									if (func_105(&(Local_235.f_798)))
									{
										Local_235.f_935 = (func_13() - func_131(&(Local_235.f_798), 0, 0));
									}
									else
									{
										Local_235.f_935 = func_13();
									}
								}
							}
						}
						if (!bVar7)
						{
							if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 12))
							{
								bVar7 = true;
							}
						}
						iVar6 = 0;
						if (Local_235.f_703 == 0)
						{
							iVar6 = 0;
							while (iVar6 < 3)
							{
								if (Local_235.f_871[iVar6] == -1)
								{
									if (Local_235.f_867[iVar6] == -1)
									{
										if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_15, iVar6))
										{
											Local_235.f_867[iVar6] = iVar8;
										}
									}
									else if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_16, iVar6))
									{
										Local_235.f_461++;
										Local_235.f_871[iVar6] = iVar8;
									}
									else if ((Local_235.f_867[iVar6] == iVar8 && !unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_15, iVar6)) && !unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_25, iVar6))
									{
										Local_235.f_867[iVar6] = -1;
									}
								}
								if (!unk_0x234B68AC2E35ED5A(Local_235.f_8, iVar6))
								{
									if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_25, iVar6))
									{
										unk_0x191DDA30577F440A(&(Local_235.f_8), iVar6);
										func_106(29);
									}
								}
								iVar6++;
							}
						}
						iVar6 = 0;
						if (Local_235.f_703 == 1)
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								if (func_2219() >= 1)
								{
									if (iVar3[iVar6] == -1)
									{
										if (Local_235.f_878.f_5[iVar6] == -1)
										{
											if (func_130(iLocal_328, iVar6))
											{
												iVar3[iVar6] = iLocal_328;
											}
										}
									}
									if (Local_235.f_878.f_5[iVar6] == -1)
									{
										if (func_129(iLocal_328, iVar6))
										{
											Local_235.f_878.f_5[iVar6] = iVar8;
										}
									}
									if (!unk_0x234B68AC2E35ED5A(Local_235.f_937[iVar6], 1))
									{
										if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_20[iVar6], 1))
										{
											unk_0x191DDA30577F440A(&(Local_235.f_937[iVar6]), 1);
										}
									}
									if (!unk_0x234B68AC2E35ED5A(Local_235.f_937[iVar6], 0))
									{
										if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_20[iVar6], 0))
										{
											unk_0x191DDA30577F440A(&(Local_235.f_937[iVar6]), 0);
										}
									}
									if (!unk_0x234B68AC2E35ED5A(Local_235.f_937[iVar6], 2))
									{
										if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_20[iVar6], 2))
										{
											unk_0x191DDA30577F440A(&(Local_235.f_937[iVar6]), 1);
										}
									}
								}
								iVar6++;
							}
						}
						if (Local_235.f_703 == 1)
						{
							if (!func_3(24))
							{
								if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 20))
								{
									func_106(24);
								}
							}
						}
						if (Local_235.f_703 == 1 || Local_235.f_703 == 0)
						{
							if (!func_3(8))
							{
								if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 6))
								{
									func_106(8);
								}
							}
							if (iVar4 == -1)
							{
								if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 2))
								{
									iVar4 = iLocal_328;
								}
							}
							if (!func_3(4))
							{
								if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 1))
								{
									func_106(4);
									Local_235.f_792 = Local_235.f_788;
								}
							}
						}
						if (!func_3(2))
						{
							if (!bVar2)
							{
								if (func_10())
								{
									if (!unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 3))
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
						if (!func_3(16))
						{
							if (unk_0x234B68AC2E35ED5A(Local_323[iLocal_328 /*26*/].f_1, 10))
							{
								func_106(16);
							}
						}
					}
				}
			}
			else if (!func_3(5))
			{
				if (Local_235.f_789 > -1)
				{
					if (iLocal_328 == Local_235.f_789)
					{
						func_106(5);
					}
				}
			}
			iLocal_328++;
		}
		if (func_2219() > 0)
		{
			func_128();
			iVar1 = 0;
			while (iVar1 < 30)
			{
				if (unk_0x234B68AC2E35ED5A(Local_235.f_779, iVar1))
				{
					iVar0++;
				}
				iVar1++;
			}
			if (Local_235.f_785 != iVar0)
			{
				Local_235.f_785 = iVar0;
			}
			iVar9 = func_54(Local_235.f_703, Local_235.f_704);
			if (!func_3(1))
			{
				if (iVar0 >= iVar9)
				{
					func_106(1);
				}
			}
			if (Local_235.f_703 == 0)
			{
				if (!func_3(7))
				{
					iVar6 = 0;
					iVar5 = 0;
					iVar6 = 0;
					while (iVar6 < 3)
					{
						if (Local_235.f_871[iVar6] > -1)
						{
							iVar5++;
						}
						iVar6++;
					}
					if (iVar5 >= func_127())
					{
						func_106(7);
					}
				}
			}
			if (Local_235.f_703 == 1 || Local_235.f_703 == 0)
			{
				if (!func_10())
				{
					if (Local_235.f_787 != iVar4)
					{
						Local_235.f_787 = iVar4;
						if (Local_235.f_787 > -1)
						{
							if (!func_3(10))
							{
								func_106(10);
							}
							if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(Local_235.f_787)))
							{
								iVar10 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(Local_235.f_787));
								Local_235.f_788 = iVar10;
							}
						}
						else
						{
							Local_235.f_788 = -1;
						}
					}
				}
			}
			if (bVar7)
			{
				if (!func_3(0))
				{
					func_106(0);
				}
			}
			if (Local_235.f_703 == 1)
			{
				if (func_3(24))
				{
					if (!func_3(0))
					{
						func_106(0);
					}
				}
			}
			iVar6 = 0;
			if (Local_235.f_703 == 1)
			{
				iVar6 = 0;
				while (iVar6 < 1)
				{
					if (Local_235.f_878.f_15[iVar6] != iVar3[iVar6])
					{
						if (func_2219() > 0)
						{
							if (unk_0x234B68AC2E35ED5A(Local_235.f_878.f_20, 2))
							{
								if (iVar3[iVar6] == -1)
								{
									if (Local_235.f_878.f_15[iVar6] > -1)
									{
										if (!func_126(&(Local_235.f_878), iVar6, &iVar11))
										{
											iVar12 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(Local_235.f_878.f_15[iVar6]));
											if (iVar12 != func_24())
											{
												func_125(iVar12);
											}
										}
										else
										{
											func_124(unk_0xC502CD39B4994F3A(iVar11));
										}
									}
								}
								else if (iVar3[iVar6] > -1)
								{
									iVar12 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar3[iVar6]));
									if (iVar12 != func_24())
									{
										func_121(iVar12);
									}
								}
							}
						}
						Local_235.f_878.f_15[iVar6] = iVar3[iVar6];
					}
					iVar6++;
				}
			}
			if (!func_3(2))
			{
				if (!bVar2)
				{
					func_106(2);
				}
			}
		}
		if (func_119() != iLocal_330)
		{
			iLocal_330 = func_119();
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (Local_235.f_867[iVar6] != -1)
				{
					if (!unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_235.f_867[iVar6])))
					{
						Local_235.f_867[iVar6] = -1;
					}
				}
				iVar6++;
			}
		}
	}
}

int func_119()
{
	if (func_120() == func_24())
	{
		return 0;
	}
	return func_22(func_120());
}

int func_120()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

void func_121(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = 1559423035;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

void func_122(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

var func_123(int iParam0)
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
			if (func_2342(iVar2, 0, 0))
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

void func_124(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = -1727701443;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

void func_125(int iParam0)
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_2 = 1903113655;
	Var0.f_10 = iParam0;
	iVar1 = func_123(1);
	func_122(Var0, iVar1);
}

int func_126(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_5[iParam1] > -1)
	{
		*uParam2 = uParam0->f_5[iParam1];
		return 1;
	}
	return 0;
}

int func_127()
{
	return 3;
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_235.f_779, iVar0))
			{
				if (!func_105(&(Local_235.f_806[iVar0 /*2*/])))
				{
					if (func_112(Local_235.f_10[iVar0 /*15*/].f_1))
					{
						func_104(&(Local_235.f_806[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_103(&(Local_235.f_806[iVar0 /*2*/]), 10000, 0))
				{
					unk_0x191DDA30577F440A(&(Local_235.f_779), iVar0);
				}
			}
		}
		iVar0++;
	}
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam0));
		if (iVar0 > -1)
		{
			return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_11.f_453.f_1, iParam1);
		}
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam0));
		if (iVar0 > -1)
		{
			return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_11.f_453, iParam1);
		}
	}
	return 0;
}

int func_131(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

void func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_235.f_775, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_2, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_775), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_235.f_776, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_4, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_776), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_235.f_778, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_8, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_778), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_235.f_779, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_7, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_779), iVar0);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_9, iVar0))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_235.f_780, iVar0))
				{
					unk_0x191DDA30577F440A(&(Local_235.f_780), iVar0);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_10, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_235.f_779), iVar0);
			}
		}
		if (!func_30(iVar0, 19))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_14, iVar0))
			{
				func_35(iVar0, 19);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_134(iVar0, 1))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_5, iVar0))
			{
				func_133(iVar0, 1);
			}
		}
		if (func_134(iVar0, 2))
		{
			if (!func_134(iVar0, 3))
			{
				if (unk_0x234B68AC2E35ED5A(Local_323[iParam0 /*26*/].f_6, iVar0))
				{
					func_133(iVar0, 3);
				}
			}
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_235.f_742[iParam0], iParam1))
	{
		unk_0x191DDA30577F440A(&(Local_235.f_742[iParam0]), iParam1);
	}
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Local_235.f_742[iParam0], iParam1);
}

void func_135(int iParam0)
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Local_235.f_781, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_2))
			{
				if (func_136(Local_235.f_10[iVar0 /*15*/].f_2))
				{
					unk_0xFF9949B46A7C6F95(unk_0x854C404AEB476240(Local_235.f_10[iVar0 /*15*/].f_2), unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam0)), 1);
					unk_0x191DDA30577F440A(&(Local_235.f_781), iParam0);
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(Local_235.f_781), iParam0);
			}
			iVar0++;
		}
	}
}

int func_136(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_137(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_137(int iParam0)
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

void func_138()
{
}

int func_139()
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
	
	iVar1 = Local_235.f_703;
	iVar2 = func_54(iVar1, Local_235.f_704);
	iVar3 = func_366(iVar1, Local_235.f_704);
	iVar4 = func_365(iVar1, Local_235.f_704);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar5 = iVar0;
		iVar6 = func_364(iVar1, Local_235.f_704, iVar5);
		if (func_309(iVar5, iVar6, 0, func_134(iVar5, 4)))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (func_30(iVar0, 3))
		{
			func_18(iVar0);
		}
		else if (func_30(iVar0, 0))
		{
			func_306(iVar0, func_308(Local_235.f_703, Local_235.f_704, iVar0), -1);
		}
		else if (func_30(iVar0, 2))
		{
			func_306(iVar0, func_308(Local_235.f_703, Local_235.f_704, iVar0), 0);
		}
		else if (func_30(iVar0, 5))
		{
			func_306(iVar0, func_308(Local_235.f_703, Local_235.f_704, iVar0), 1);
		}
		else if (func_30(iVar0, 6))
		{
			func_306(iVar0, func_308(Local_235.f_703, Local_235.f_704, iVar0), 2);
		}
		else if (func_30(iVar0, 20))
		{
			func_306(iVar0, func_308(Local_235.f_703, Local_235.f_704, iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		func_301(iVar0, func_305(Local_235.f_703, Local_235.f_704, iVar0), 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar5 = iVar0;
		if (!unk_0x159BC3DDA80D71AC(Local_235.f_712[iVar5]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar0 /*15*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!unk_0x159BC3DDA80D71AC(Local_235.f_719[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar7 = Local_235.f_931;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		iVar8 = func_300(Local_235.f_703, Local_235.f_704, iVar0);
		if (iVar8 > -1)
		{
			if (!func_141(&(Local_235.f_878), &Local_333, Local_235.f_691[iVar0 /*5*/], iVar0, 1, Local_235.f_10[iVar8 /*15*/].f_1, 0))
			{
				return 0;
			}
		}
		else if (!func_141(&(Local_235.f_878), &Local_333, Local_235.f_691[iVar0 /*5*/], iVar0, 0, 0, 1))
		{
			return 0;
		}
		iVar0++;
	}
	if (Local_235.f_703 == 1)
	{
		unk_0x068BDE31F7D112BB("P_cargo_chute_S");
		unk_0x16E516CA9C88FF48(func_140(1, Local_235.f_704));
		unk_0x16E516CA9C88FF48(joaat("p_cargo_chute_s"));
	}
	return 1;
}

int func_140(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ex_prop_adv_case_sm");
		
		default:
	}
	return 0;
}

int func_141(var uParam0, var uParam1, struct<3> Param2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<35> Var1;
	struct<3> Var2;
	
	iVar0 = uParam0->f_44.f_1;
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x159BC3DDA80D71AC((*uParam0)[iParam3]))
	{
		if (iVar0 != 0)
		{
			unk_0x16E516CA9C88FF48(iVar0);
			if (unk_0xA9C0BBFB9CBB66F1(iVar0))
			{
				if (unk_0x3E42A32E15B11FFA(1))
				{
					if (bParam4)
					{
						if (!unk_0x159BC3DDA80D71AC(iParam5))
						{
							return 0;
						}
					}
					Var2 = { Param2 };
					if (!func_105(&(uParam0->f_35[iParam3 /*2*/])))
					{
						func_104(&(uParam0->f_35[iParam3 /*2*/]), 0, 0);
					}
					if (func_142(Var2, 5f, &(uParam1->f_15[iParam3 /*3*/]), &(uParam1->f_28[iParam3]), &Var1) || unk_0x234B68AC2E35ED5A(uParam0->f_20, 0))
					{
						if (unk_0x234B68AC2E35ED5A(uParam0->f_20, 0))
						{
							uParam1->f_15[iParam3 /*3*/] = { Var2 };
						}
						(*uParam0)[iParam3] = unk_0x99A6768052B30AE8(unk_0x61A4FE6962D74E54(joaat("pickup_portable_crate_fixed_incar"), uParam1->f_15[iParam3 /*3*/], 1, iVar0));
						unk_0xFEDD7E9148CF3B3E((*uParam0)[iParam3], 1);
						unk_0xDB8D6815E13996A9(unk_0xBD11ACD80727BD31((*uParam0)[iParam3]), uParam1->f_15[iParam3 /*3*/] + Vector(0.5f, 0f, 0f), 0, 0, 1);
						unk_0x824F744352C8BC82(iVar0);
						unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31((*uParam0)[iParam3]), 1);
						unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31((*uParam0)[iParam3]), 1);
						if (bParam4)
						{
						}
						if (bParam6)
						{
							unk_0xDB8D6815E13996A9(unk_0xBD11ACD80727BD31((*uParam0)[iParam3]), Var2 + Vector(0.5f, 0f, 0f), 0, 0, 1);
						}
					}
					else if (!unk_0x234B68AC2E35ED5A(uParam0->f_20, 0))
					{
						if (func_103(&(uParam0->f_35[iParam3 /*2*/]), 15000, 0))
						{
							unk_0x191DDA30577F440A(&(uParam0->f_20), 0);
						}
					}
				}
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_20, (4 + iParam3)))
		{
			if (unk_0x159BC3DDA80D71AC((*uParam0)[iParam3]))
			{
				if (unk_0x159BC3DDA80D71AC(iParam5))
				{
					if (!func_112(iParam5))
					{
						if (!unk_0xB364346471C3B028(iParam5))
						{
							unk_0x1AA7FA4BBD799B88(iParam5);
						}
						if (unk_0xB364346471C3B028(iParam5))
						{
							unk_0x2510DA2AA9F929F2(unk_0xBD11ACD80727BD31((*uParam0)[iParam3]), unk_0x8A437068C87289B7(iParam5));
							unk_0x191DDA30577F440A(&(uParam0->f_20), (4 + iParam3));
						}
					}
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC((*uParam0)[iParam3]))
	{
		if (!bParam4)
		{
			return 1;
		}
		else if (unk_0x234B68AC2E35ED5A(uParam0->f_20, (4 + iParam3)))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_143(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405077.f_2465 == *uParam0 || !Global_2405077.f_2465.f_1 == uParam0->f_1) || !Global_2405077.f_2465.f_2 == uParam0->f_2) || !Global_2405077.f_2468 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405077.f_2479 == uParam0->f_8 || !Global_2405077.f_2479.f_1 == uParam0->f_8.f_1) || !Global_2405077.f_2479.f_2 == uParam0->f_8.f_2) || !Global_2405077.f_2482 == uParam0->f_11) || !Global_2405077.f_2482.f_1 == uParam0->f_11.f_1) || !Global_2405077.f_2482.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405077.f_2479 == uParam0->f_8 || !Global_2405077.f_2479.f_1 == uParam0->f_8.f_1) || !Global_2405077.f_2479.f_2 == uParam0->f_8.f_2) || !Global_2405077.f_2482 == uParam0->f_11) || !Global_2405077.f_2482.f_1 == uParam0->f_11.f_1) || !Global_2405077.f_2482.f_2 == uParam0->f_11.f_2) || !Global_2405077.f_2485 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1312333)
	{
		if (!Global_2405077.f_2486 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0x4BE697D014536271(Global_2405077.f_2472) && !Global_2405077.f_2472 == unk_0x62D18D65FE22FF39())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2405077.f_2463 == 1)
		{
			if (unk_0x4BE697D014536271(Global_2405077.f_2472))
			{
				if (Global_2405077.f_2472 == unk_0x62D18D65FE22FF39())
				{
					if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2469) < func_299(0))
					{
						return 0;
					}
				}
				else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2469) < func_299(0))
				{
					return 0;
				}
			}
			unk_0x2DB841ACFCE581C9();
			unk_0x06BB7EF620BA36F7();
			func_298();
		}
		Global_2405077.f_2463 = 0;
	}
	else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2469) > func_299(0))
	{
		Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
		func_292();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0xABAA7F8FD10DCDF2(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405077.f_2463)
	{
		unk_0x2DB841ACFCE581C9();
		unk_0x06BB7EF620BA36F7();
		func_298();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_36(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xB5CD4DAF46CE6329())
		{
			Global_2405077.f_2486 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405077.f_2465 = { *uParam0 };
					Global_2405077.f_2468 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405077.f_2479 = { uParam0->f_8 };
					Global_2405077.f_2482 = { uParam0->f_11 };
					Global_2405077.f_2485 = 0f;
					Global_2405077.f_2465 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405077.f_2479 = { uParam0->f_8 };
					Global_2405077.f_2482 = { uParam0->f_11 };
					Global_2405077.f_2485 = uParam0->f_14;
					Global_2405077.f_2465 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_291(Var6.x, Var6.f_1);
			}
			Global_2405077.f_2464 = 1;
			Global_2405077.f_2463 = 1;
			Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
			Global_2405077.f_2469 = unk_0x551F46B3C7DFB654();
			Global_2405077.f_2472 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405077.f_2463)
	{
		if (Global_2405077.f_2464 == 1)
		{
			if (unk_0xA1CB00B61C47B900(fVar2, fVar3, fVar4, fVar5) || unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2470) > 5000)
			{
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_290(Global_4456448.f_133963))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_263(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_262(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405077.f_2464 = 9;
				}
				else
				{
					Global_2405077.f_2464 = 2;
				}
			}
		}
		if (Global_2405077.f_2464 == 2)
		{
			if ((unk_0x95FD42F6FB9333AE(Var7, Var8) || unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2470) > 15000) || unk_0xC9C86B3B107733A0(Var7, Var8) == 0)
			{
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				if (uParam0->f_5 && !func_39(unk_0x1146A9AE09CE2B14(), 0))
				{
					Global_2405077.f_2464 = 3;
				}
				else
				{
					Global_2405077.f_2464 = 4;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2474) > 7000)
			{
				func_261(Var6.x, Var6.f_1);
			}
		}
		if (Global_2405077.f_2464 == 3)
		{
			if (func_260() || unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2470) > 10000)
			{
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				Global_2405077.f_2464 = 4;
			}
		}
		if (Global_2405077.f_2464 == 4)
		{
			if (unk_0xB5CD4DAF46CE6329())
			{
				unk_0x2DB841ACFCE581C9();
				unk_0x06BB7EF620BA36F7();
			}
			else
			{
				iVar0 = 0;
				func_292();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x012D9AF02A57F126(unk_0x1146A9AE09CE2B14(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
								Global_2405077.f_2464 = 5;
							}
							break;
						
						case 1:
							func_259(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x6FA19E14E23FF16E(unk_0x1146A9AE09CE2B14(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
								Global_2405077.f_2464 = 5;
							}
							break;
						
						case 2:
							if (unk_0x6FA19E14E23FF16E(unk_0x1146A9AE09CE2B14(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
								Global_2405077.f_2464 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
					Global_2405077.f_2464 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x08693940711DC312(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_259(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0x8DCD395092231395(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8DCD395092231395(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405077.f_2464 == 5)
		{
			if (func_196(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405077.f_2490.f_5)
				{
					Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
					Global_2405077.f_2464 = 6;
				}
				else
				{
					Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
						}
					}
					Global_2405077.f_2464 = 9;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2470) > 20000)
			{
				unk_0x2DB841ACFCE581C9();
				unk_0x06BB7EF620BA36F7();
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				Global_2405077.f_2464 = 8;
			}
		}
		if (Global_2405077.f_2464 == 6)
		{
			iVar0 = 0;
			Global_2405077.f_2490.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_195(uParam0->f_4))
				{
					if (unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_194(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
			Global_2405077.f_2464 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x08693940711DC312(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_259(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0x8DCD395092231395(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8DCD395092231395(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405077.f_2464 == 7)
		{
			if (func_196(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405077.f_2624[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_262(Global_2405077.f_2624[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405077.f_2624[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_192(Global_2405077.f_2624[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405077.f_2624[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x09C4C80EA1D5B2F7(Global_2405077.f_2624[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405077.f_2624[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_146(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
						iVar9++;
					}
				}
				Global_2405077.f_2464 = 9;
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_2470) > 20000)
			{
				Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
				Global_2405077.f_2464 = 8;
			}
		}
		if (Global_2405077.f_2464 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_145(Global_2405077.f_488))
				{
				}
			}
			else if (Global_2405077.f_2490.f_2)
			{
				func_144(uParam2, &(Global_2405077.f_2490.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405077.f_2465 };
				func_146(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405077.f_2470 = unk_0x551F46B3C7DFB654();
			Global_2405077.f_2464 = 9;
		}
		if (Global_2405077.f_2464 == 9)
		{
			Global_2405077.f_2463 = 0;
			unk_0x2DB841ACFCE581C9();
			unk_0x06BB7EF620BA36F7();
			func_298();
			return 1;
		}
		Global_2405077.f_2469 = unk_0x551F46B3C7DFB654();
	}
	return 0;
}

void func_144(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_145(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_146(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_195(uParam5->f_4) || !unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_194(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_194(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_160(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_158(unk_0x1146A9AE09CE2B14(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_263(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_157(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_160(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_157(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0x7956E831D8C0C17C(Var0, &uVar3, 0, 0))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_147(uParam0, 1, 1, 1, 1))
			{
				func_146(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0x7956E831D8C0C17C(Var0, &uVar3, 0, 0))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405077.f_666 = 1;
}

int func_147(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_156(*uParam0, &(Global_2410002[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_148(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_147(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_148(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 1, 0);
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

void func_148(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_155(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_155(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_153(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_152(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_149(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_149(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
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
	Var2 = { func_151(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_150(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_150(Var2, Var1) >= 0f)
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
		Var2 = { func_151(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_151(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x6EE46314283D3C7D(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_150(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_150(Var2, Var11) >= 0f)
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

float func_150(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_151(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_152(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

void func_153(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_154(&Var0, 0f, 0f, unk_0x644B8DBA4F69BB73(0f, 360f));
		}
		else
		{
			func_154(&Var0, 0f, 0f, fParam5);
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

void func_154(var uParam0, struct<3> Param1)
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

Vector3 func_155(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_153(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_152(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_149(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x9FB743331EC18DF4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_262(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_192(Var1, Param1, Param2, 0, 0))
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

int func_156(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_262(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_192(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_157(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_192(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x09C4C80EA1D5B2F7(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_158(int iParam0, bool bParam1)
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
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
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

int func_160(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_191(Param0, uParam1))
	{
		if (func_161(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x88B0C92B04E14561(Param0, 0, uParam1, iParam2))
	{
		if (func_161(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(struct<3> Param0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_177(Global_2405077.f_511, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_165(*uParam1, 1056964608))
			{
				if (!func_162(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_162(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_164(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411540[iVar2])
	{
		if (func_163(Var1, &(Global_2410207[iVar2 /*148*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2410207[iVar2 /*148*/][iVar0 /*7*/], Global_2410207[iVar2 /*148*/][iVar0 /*7*/].f_3, Global_2410207[iVar2 /*148*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411540[8])
	{
		if (func_163(Var1, &(Global_2410207[8 /*148*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2410207[8 /*148*/][iVar0 /*7*/], Global_2410207[8 /*148*/][iVar0 /*7*/].f_3, Global_2410207[8 /*148*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_163(struct<3> Param0, var uParam1)
{
	return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_164(struct<2> Param0, var uParam1)
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

int func_165(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_174(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (Global_4718592.f_32298 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_32298)
			{
				if (Global_4718592.f_32299[iVar0 /*121*/].f_7 != 0)
				{
					if (func_166(Param0, Global_4718592.f_32299[iVar0 /*121*/], Global_4718592.f_32299[iVar0 /*121*/].f_6, Global_4718592.f_32299[iVar0 /*121*/].f_7, fParam1))
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
					if (func_166(Param0, Global_4718592.f_5742[iVar0 /*346*/], Global_4718592.f_5742[iVar0 /*346*/].f_3, Global_4718592.f_5742[iVar0 /*346*/].f_15, 0.5f))
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
					if (func_166(Param0, Global_4718592.f_70989[iVar0 /*392*/], Global_4718592.f_70989[iVar0 /*392*/].f_3, Global_4718592.f_70989[iVar0 /*392*/].f_12, 0.5f))
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
					if (func_166(Param0, unk_0xD6E677FAD7521410(Global_969056.f_233[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_233[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_233[iVar0]), 0.5f))
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
					if (func_166(Param0, unk_0xD6E677FAD7521410(Global_969056.f_119[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_119[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_119[iVar0]), 0.5f))
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

int func_166(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	
	if (vdist(Param0, Param1) < func_173(iParam3, 1008981770))
	{
		func_167(Param1, fParam2, iParam3, &Var0, &Var1, &uVar2, fParam4);
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var1, uVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_167(struct<3> Param0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_154(&Var0, 0f, 0f, uParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_168(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x0BCA9ADE67DF9DD8((Var2.x - Var1.x));
}

void func_168(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_171(iParam0);
		if (iVar0 != 0)
		{
			func_169(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_169(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_170(iParam0, &Global_1315836);
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

void func_170(int iParam0, var uParam1)
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

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_172(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_173(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_168(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_175(iParam0))
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

bool func_175(int iParam0)
{
	return func_176(iParam0);
}

bool func_176(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_177(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_184(Param0))
	{
		if (func_147(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_179(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_178(*uParam1, 1056964608))
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
				func_153(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_178(struct<3> Param0, float fParam1)
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

int func_179(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_181(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_148(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_181(Var2, &uVar1) || func_180(Var2))
			{
				Var2 = { *uParam0 };
				func_148(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_180(struct<3> Param0)
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

int func_181(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_183())
	{
		return 0;
	}
	iVar1 = func_182();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_156(Param0, &(Global_2405077.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182()
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

bool func_183()
{
	return Global_1683970.f_502;
}

int func_184(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405077.f_514 && !Global_2405077.f_515)
	{
		if (!Global_2405077.f_45.f_316)
		{
			if (!func_188(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 1;
			}
			if (!func_187(Param0, 1008981770))
			{
				if (!func_147(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_147(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_186(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_185(&(Global_2405077.f_45[iVar0 /*12*/])) };
					if (!func_147(&Var1, 0, 0, 0, 1))
					{
						if (!func_147(&Param0, 0, 0, 0, 1))
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

Vector3 func_185(var uParam0)
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

int func_186(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_156(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_187(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_156(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_188(int iParam0, bool bParam1)
{
	if (func_190() != 0)
	{
		return func_189(iParam0) != 0;
	}
	return func_174(iParam0, bParam1, 0);
}

int func_189(int iParam0)
{
	if (func_2342(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_190()
{
	return Global_31345;
}

int func_191(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405077.f_2261 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405077.f_2261)
		{
			fVar3 = vdist(Global_2405077.f_2262[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405077.f_2262[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_192(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_193(&Param1, &Param2);
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

void func_193(var uParam0, var uParam1)
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

int func_194(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.x > Param1.x)
	{
		Var1.x = Param0.x;
		Var0.x = Param1.x;
	}
	else
	{
		Var1.x = Param1.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (vmag(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_195(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405077.f_2490.f_1 == 0 && Global_2405077.f_2490 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x94AD17FD64ED9169(&(Global_2405077.f_2490.f_1)))
			{
				case 0:
					func_257(uParam1, uParam2);
					if (!Global_2405077.f_2490.f_2)
					{
						if (uParam2->f_7 && Global_2405077.f_554.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405077.f_2465 };
							}
							if (uParam1->f_5 && func_145(Global_2405077.f_488))
							{
								if (!Global_2405077.f_2490.f_5)
								{
									Global_2405077.f_2490.f_5 = 1;
								}
								else
								{
									func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_146(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x644B8DBA4F69BB73(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_257(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xB5CD4DAF46CE6329())
		{
			if (!unk_0x846076961D2BE266())
			{
				if (unk_0x29A3C2E3AADC562F())
				{
					func_257(uParam1, uParam2);
					Global_2405077.f_2490.f_1 = unk_0x8195B06184F649D7();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x06BB7EF620BA36F7();
				func_257(uParam1, uParam2);
				if (!Global_2405077.f_2490.f_2)
				{
					Global_2405077.f_2490.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_254(Global_2405077.f_554, &(Global_2405077.f_2490.f_57), &(Global_2405077.f_2490.f_90));
	}
	if (uParam2->f_7 && !Global_2405077.f_2490.f_4)
	{
		Global_2405077.f_2490.f_4 = 1;
		func_204(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405077.f_2490.f_1 > 0 || Global_2405077.f_2490 > 0)
	{
		if (uParam1->f_5 || unk_0xB5CD4DAF46CE6329())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405077.f_2490.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405077.f_2490.f_3)
					{
						iVar2 = Global_2405077.f_2490.f_3 + 1;
					}
					if (iVar2 > (Global_2405077.f_2490.f_1 - 1))
					{
						iVar2 = (Global_2405077.f_2490.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x3C75661E6B2F54EE(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x919DE5BCBF7BAC08(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x258B9DCFCB230FAF(iVar2);
					}
					else
					{
						unk_0xAAA9294AAC0A7B85(iVar2, &iVar3);
					}
					func_204(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405077.f_2490.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405077.f_2490.f_1;
		}
		if (Global_2405077.f_2490.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405077.f_2887)
			{
				func_198(&(Global_2405077.f_2490.f_6[0 /*10*/]), &(Global_2405077.f_2490.f_6[1 /*10*/]), &(Global_2405077.f_2490.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_145(Global_2405077.f_488))
			{
				if (Global_2405077.f_2490.f_2)
				{
					func_144(uParam0, &(Global_2405077.f_2490.f_6));
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405077.f_2465 };
					func_146(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x644B8DBA4F69BB73(0f, 360f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405077.f_2490.f_2)
			{
				func_144(uParam0, &(Global_2405077.f_2490.f_6));
				func_197(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_2490.f_1);
				unk_0x3C75661E6B2F54EE(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_162(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405077.f_2465 };
					func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x644B8DBA4F69BB73(0f, 360f);
					func_197(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405077.f_2465 };
				func_146(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x644B8DBA4F69BB73(0f, 360f);
				func_197(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405077.f_2465 };
		if (uParam1->f_5 && func_145(Global_2405077.f_488))
		{
			if (!Global_2405077.f_2490.f_5)
			{
				Global_2405077.f_2490.f_5 = 1;
			}
			else
			{
				func_146(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_146(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x644B8DBA4F69BB73(0f, 360f);
		func_197(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_197(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405077.f_2624[(3 - iVar0) /*3*/] = { Global_2405077.f_2624[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405077.f_2624[0 /*3*/] = { Param0 };
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	if (func_145(Global_2405077.f_488) && func_203() < 4096)
	{
		func_202(uParam0, 0f);
		func_202(uParam1, uParam0->f_2);
		func_202(uParam2, uParam1->f_2);
	}
	else
	{
		func_201(uParam0);
		func_200(uParam2, uParam0->f_4);
		func_199(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_199(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408018[iVar0 /*10*/].f_4, Param1);
			fVar3 = vdist(Global_2408018[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408018[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408018[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_200(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408018[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2408018[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408018[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_201(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > 0)
		{
			if (Global_2408018[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408018[iVar0 /*10*/].f_1;
				Var2 = { Global_2408018[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_202(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > 0)
		{
			if (Global_2408018[iVar0 /*10*/].f_2 < fVar1 && Global_2408018[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408018[iVar0 /*10*/].f_2;
				Var2 = { Global_2408018[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_203()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408018[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_204(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405077.f_488 == 1)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Global_2405077.f_511.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_250(unk_0x1146A9AE09CE2B14()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_249(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0xBA6FC33B09D1C39A(unk_0x7D2B9E6A64637269(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xBA6FC33B09D1C39A(unk_0x7D2B9E6A64637269(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_45(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x09C4C80EA1D5B2F7(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_243(Param0, fParam1, uParam2->f_15, func_248(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405077.f_3;
		}
	}
	else if (!func_240(Param0, 25f, unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_37(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_37(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405077.f_700)
		{
			Var12 = { Global_2405077.f_511 };
			if (Global_2405077.f_488 == 26)
			{
				Var12 = { Global_2405077.f_554.f_18 };
			}
			if (!func_178(Param0, 0.5f))
			{
				if (func_184(Var12))
				{
					if (!func_147(&Param0, 0, 0, 0, 1) && !func_239(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_239(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_238(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_237(unk_0x1146A9AE09CE2B14()) && func_235(unk_0x1146A9AE09CE2B14())))
		{
			if (!func_234(&Param0, &(Global_2405077.f_2490.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_235(unk_0x1146A9AE09CE2B14()))
		{
			if (!func_233(Param0, &(Global_2405077.f_2490.f_57), &(Global_2405077.f_2490.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_232(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_145(Global_2405077.f_488))
			{
				if (func_187(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_231(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405077.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xE75EE67F14EAAE37(unk_0xDE7E9AF51E2E18EB(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405077.f_700)
		{
			if (!func_179(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_162(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_186(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_230(Param0, &Var15, &Var16, &fVar17);
			if (!func_225(&(Global_2405077.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_165(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0.x, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_224(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405077.f_2887 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_216(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_216(Param0, Global_2405077.f_2465, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_145(Global_2405077.f_488) && iVar8 < 4096)
			{
				Var19.f_2 = func_214(Param0);
			}
			fVar7 = func_209(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			func_208(Var19);
			Global_2405077.f_2490.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405077.f_2490.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_216(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_216(Param0, Global_2405077.f_2465, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_145(Global_2405077.f_488) && iVar8 == Global_2405077.f_2490.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_214(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405077.f_2490.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_207(Var19, iVar18);
							Global_2405077.f_2490.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405077.f_2490.f_6[iVar18 /*10*/] || (iVar8 == Global_2405077.f_2490.f_6[iVar18 /*10*/] && fVar0 > Global_2405077.f_2490.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_207(Var19, iVar18);
						Global_2405077.f_2490.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_206(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_209(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_205(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_205(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405077.f_2490.f_6[iVar18 /*10*/] || (iVar8 == Global_2405077.f_2490.f_6[iVar18 /*10*/] && fVar3 > Global_2405077.f_2490.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_207(Var19, iVar18);
						Global_2405077.f_2490.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_205(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_206(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_2342(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				if (unk_0x3D6C3476988DE6E1(Param0, fParam1))
				{
					fVar4 = vdist2(Param0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2342(iVar1, 1, 1))
		{
			if (!func_39(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if (func_38(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
								{
									fVar4 = vdist2(Param0, unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam5 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
							{
								fVar4 = vdist2(Param0, unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_207(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405077.f_2490.f_6[iParam1 /*10*/] };
	Global_2405077.f_2490.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_207(Var0, iParam1 + 1);
	}
}

void func_208(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_203();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] < iVar2)
		{
			Global_2408018[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] == 0)
		{
			Global_2408018[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408018[iVar0 /*10*/] > 0)
		{
			if (Global_2408018[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408018[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408018[iVar4 /*10*/] = { Param0 };
	}
}

float func_209(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_2342(iVar7, 1, 1) || (iParam5 == 1 && func_2342(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x1146A9AE09CE2B14() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_210(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x7C3E030BC3ED6671(iVar7) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
					{
						if (!unk_0x7C3E030BC3ED6671(iVar7) == -1 || !func_188(unk_0x1146A9AE09CE2B14(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar7) || !bParam4)
					{
						if (func_38(iVar7))
						{
							Var5 = { func_43(iVar7) };
							if (!iVar7 == unk_0x1146A9AE09CE2B14())
							{
								Var6 = { unk_0x020339F3DE147B78(unk_0xD56332194D622ECE(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Var5, 1);
							fVar2 = unk_0x0BABEFEA577FCFA4(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_210(int iParam0)
{
	if (func_2342(iParam0, 0, 1))
	{
		if (!func_212(iParam0))
		{
			if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (!unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
				{
					if (func_174(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_211(unk_0x7C3E030BC3ED6671(iParam0), unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()), 0))
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
					if (!func_174(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_46(iParam0))
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

int func_211(int iParam0, int iParam1, int iParam2)
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

int func_212(int iParam0)
{
	if (func_39(iParam0, 0))
	{
		return 1;
	}
	if (func_213())
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

bool func_213()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

float func_214(struct<3> Param0)
{
	int iVar0;
	
	return func_215(Param0, &(Global_2405077.f_45), &iVar0);
}

float func_215(struct<3> Param0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405077.f_2733) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*iParam2 = iVar3;
	return fVar2;
}

float func_216(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_205(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_209(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_205(fVar4, 0f, func_223(), func_221(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_219(Param0);
	fVar0 = func_205(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && !func_188(unk_0x1146A9AE09CE2B14(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_218(Param0, unk_0x1146A9AE09CE2B14(), 0);
	fVar0 = func_205(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_217(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_205(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_205(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_205(vdist(Global_2405077.f_511, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_217(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = unk_0xA10A963F310E9A56(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x197809C7C480B379(uVar1))
	{
		unk_0x94D607F083224BCF(uVar1, &Var0);
		*uParam1 = vdist(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam2 = unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_218(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_2342(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_2342(iVar3, 0, 1))
				{
					if (unk_0x7C3E030BC3ED6671(iVar3) != unk_0x7C3E030BC3ED6671(iParam1) || (unk_0x7C3E030BC3ED6671(iVar3) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1))
					{
						if (Global_2418033.f_261[iVar2])
						{
							fVar1 = vdist(Global_2418033.f_131[iVar2 /*3*/], Param0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_219(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x419E13582192CFEA(uVar4[iVar2]))
		{
			if (!unk_0xE50EB54E0F21BED0(uVar4[iVar2], 0))
			{
				if (func_220(uVar4[iVar2]))
				{
					Var3 = { unk_0xD6E677FAD7521410(uVar4[iVar2], 1) };
					fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405077.f_2932)
	{
		if (Global_969056.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969056.f_267)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_152[iVar2]))
				{
					if (!unk_0xE50EB54E0F21BED0(Global_969056.f_152[iVar2], 0))
					{
						if (func_220(Global_969056.f_152[iVar2]))
						{
							Var3 = { unk_0xD6E677FAD7521410(Global_969056.f_152[iVar2], 1) };
							fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5FB5CBC5FDADA3C9(uParam0);
	switch (unk_0x8123E5D5BB4CBCC4(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x0891C4981A42AE5F(Global_1574988[unk_0x1146A9AE09CE2B14()]))
	{
		switch (unk_0x8123E5D5BB4CBCC4(iVar0, Global_1574988[unk_0x1146A9AE09CE2B14()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 0)
	{
		iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x0891C4981A42AE5F(Global_1574698[iVar1]))
			{
				switch (unk_0x8123E5D5BB4CBCC4(iVar0, Global_1574698[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_221()
{
	if (func_222())
	{
		if ((unk_0x48E10529AEAE00F9(Global_2405077.f_45.f_67) || unk_0xE267416B80E7921F(Global_2405077.f_45.f_67)) || Global_2405077.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_222()
{
	if (Global_2405077.f_45.f_65 && !Global_2405077.f_45.f_303)
	{
		if (!func_212(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
	}
	return 0;
}

float func_223()
{
	if (func_222())
	{
		if ((unk_0x48E10529AEAE00F9(Global_2405077.f_45.f_67) || unk_0xE267416B80E7921F(Global_2405077.f_45.f_67)) || Global_2405077.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_224(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x4B1BAFAB7E8F4DA7(Param0, fParam5)) || (fVar0 > 0f && unk_0x95F3ABD15748A3D6(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x091D6114DC63264E(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x091D6114DC63264E(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_225(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_229(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_228(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_226(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_226(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_227(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x09C4C80EA1D5B2F7(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_227(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_151(Var0, Var0.x, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(vmag(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0.5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.x) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.x) + Var1 };
}

int func_228(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.x, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.x, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.x, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.x, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.x, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.x, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.x, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.x, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x09C4C80EA1D5B2F7(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_229(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x09C4C80EA1D5B2F7(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_230(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_164(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411540[iVar2])
	{
		if (func_163(Var1, &(Global_2410207[iVar2 /*148*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410207[iVar2 /*148*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410207[iVar2 /*148*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410207[iVar2 /*148*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411540[8])
	{
		if (func_163(Var1, &(Global_2410207[8 /*148*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410207[8 /*148*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410207[8 /*148*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410207[8 /*148*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_231(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405077.f_45.f_55)
	{
		if (unk_0xE75EE67F14EAAE37(Global_2405077.f_45.f_56))
		{
			if (!unk_0x1078E3E6E7C301E8(Param0))
			{
				uVar0 = unk_0xDE7E9AF51E2E18EB(Param0);
				if (unk_0xE75EE67F14EAAE37(uVar0))
				{
					iVar1 = unk_0x4AD2CDBE66925AA9(uVar0);
					if (!iVar1 == Global_2405077.f_45.f_57)
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
		}
	}
	return 1;
}

int func_232(struct<3> Param0)
{
	switch (Global_2405077.f_2486)
	{
		case 0:
			return func_262(Param0, Global_2405077.f_2465, Global_2405077.f_2468, 0, 0);
			break;
		
		case 1:
			return func_192(Param0, Global_2405077.f_2479, Global_2405077.f_2482, 0, 0);
			break;
		
		case 2:
			return unk_0x09C4C80EA1D5B2F7(Param0, Global_2405077.f_2479, Global_2405077.f_2482, Global_2405077.f_2485, 0, 1);
			break;
	}
	return 0;
}

int func_233(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_234(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_153(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_235(int iParam0)
{
	switch (func_190())
	{
		case 0:
			if (!func_236(iParam0))
			{
				if (Global_1590908[iParam0 /*874*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_236(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_237(int iParam0)
{
	if (func_174(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_238(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405077.f_2624[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_239(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_180(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x644B8DBA4F69BB73(0.01f, 360f);
			func_153(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar2);
			if (func_181(Var1, &uVar0) || func_180(Var1))
			{
				Var1 = { *uParam0 };
				func_153(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_240(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_242(Param0, fParam1, iParam2, iParam3, 0) || func_241(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_241(struct<3> Param0, int iParam1, int iParam2)
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
					if (func_166(Param0, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_2342(iVar2, 0, 1) && func_2342(iParam1, 0, 1))
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

int func_242(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_2342(iVar1, 0, 1) && func_2342(iParam2, 0, 1))
				{
					if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_2342(iVar1, 0, 1) && func_2342(iParam2, 0, 1))
				{
					if (Global_2418033.f_261[iVar0])
					{
						if (vdist(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_43(iVar1), Param0) < 1f)
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
				else if (func_2342(iVar1, 0, 1))
				{
					if (vdist(func_43(iVar1), Param0) < 1f)
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

int func_243(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405077.f_3 = 0;
	if (!func_240(Param0, 0.5f, unk_0x1146A9AE09CE2B14(), 0, 0))
	{
		Global_2405077.f_3++;
		if (bParam3)
		{
			if (func_36(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
				if (!func_247(Param0, fParam10))
				{
					Global_2405077.f_3++;
					if (!func_165(Param0, 1056964608))
					{
						Global_2405077.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_36(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
				if (!func_247(Param0, fParam10))
				{
					Global_2405077.f_3++;
					if (!func_244(Param0, fParam1, fParam7, iParam8, 1084227584))
					{
						Global_2405077.f_3++;
						if (!func_165(Param0, 1056964608))
						{
							Global_2405077.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
			}
		}
		else if (func_36(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
			if (!func_247(Param0, fParam10))
			{
				Global_2405077.f_3++;
				if (!func_244(Param0, fParam1, fParam7, iParam8, fParam9))
				{
					Global_2405077.f_3++;
					if (!func_165(Param0, 1056964608))
					{
						Global_2405077.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405077.f_3 = (Global_2405077.f_3 + Global_2405077.f_2);
		}
	}
	return 0;
}

int func_244(struct<3> Param0, float fParam1, float fParam2, var uParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x1146A9AE09CE2B14() == iVar1)
		{
			if ((func_2342(iVar1, 1, 1) && func_38(iVar1)) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (!func_246(unk_0x1146A9AE09CE2B14(), iVar1, -2, 0))
				{
					if (func_245(func_43(iVar1), Param0, fParam1, fParam2, uParam3, fParam4))
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

bool func_245(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.x = sin(fParam2);
	Var0.f_1 = cos(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x09C4C80EA1D5B2F7(Param0, Param1, Var1, uParam4, 0, 1);
}

bool func_246(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_247(struct<3> Param0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_2342(iVar1, 1, 1) && func_38(iVar1)) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
		{
			if ((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && unk_0x7C3E030BC3ED6671(iVar1) == -1) && !func_188(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 0;
			}
			else if ((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && !unk_0x1146A9AE09CE2B14() == iVar1) || !func_246(unk_0x1146A9AE09CE2B14(), iVar1, -2, 0))
			{
				if (vdist(Param0, func_43(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_248(int iParam0)
{
	if ((Global_2405077.f_488 == 9 || Global_2405077.f_488 == 9) || (Global_2405077.f_488 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_249(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_2342(iVar1, 1, 1))
			{
				if ((!func_39(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1)) && iVar1 != unk_0x1146A9AE09CE2B14())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x7C3E030BC3ED6671(iVar1) == iVar3)
					{
						if (unk_0x0BABEFEA577FCFA4(func_43(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (((func_188(iParam0, 1) || func_253(iParam0)) || func_252(iParam0, 0)) || func_251(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_251(int iParam0)
{
	if (!func_2342(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

int func_252(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

void func_254(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_256(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6106[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6106[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_256(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6155[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6155[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_256(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(Var5, Param0) < vdist(Var6, Param0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_255(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_255(var uParam0, var uParam1, int iParam2)
{
	Global_2412545 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_255(&Global_2412545, uParam1, iParam2 + 1);
	}
}

void func_256(var uParam0, var uParam1, int iParam2)
{
	Global_2412541 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_256(&Global_2412541, uParam1, iParam2 + 1);
	}
}

void func_257(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2405077.f_2261 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405077.f_2261)
		{
			if (func_258(Global_2405077.f_2262[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405077.f_2262[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405077.f_2262[iVar0 /*4*/] };
					fVar2 = unk_0x832AD84AA258AE80(Var1.x, Var1.f_1);
				}
				func_204(Global_2405077.f_2262[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2405077.f_2490++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405077.f_2887)
	{
		func_198(&(Global_2405077.f_2490.f_6[0 /*10*/]), &(Global_2405077.f_2490.f_6[1 /*10*/]), &(Global_2405077.f_2490.f_6[2 /*10*/]));
	}
}

int func_258(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_157(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_157(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_259(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_193(&Param0, &Param1);
	fVar0 = (Param1.x - Param0.x);
	*uParam2 = (Param0.x + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0.5f);
}

var func_260()
{
	return Global_1310987.f_4;
}

void func_261(var uParam0, var uParam1)
{
	func_298();
	func_291(uParam0, uParam1);
}

bool func_262(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
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

void func_263(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405077.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_285(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_264(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_264(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
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
	var uVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_177(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_284(uParam0, 1))
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
	if (func_171(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xA10A963F310E9A56(*uParam0, (iVar0 * iVar15), &uVar2, &iVar7, iVar3, fVar11, fVar12);
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
					if (!func_239(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_283(Var1))
									{
										Var1 = { func_279(Var1, &uVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_165(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_278(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_284(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_274(Var1, uVar2, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_177(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_273(Var1, uVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_36(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_36(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_271(Var1, uVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_270(Var1, uParam2->f_54, &fVar23);
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
																										Global_2412555.f_121[0] = uVar2;
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
																													func_269(Var1, uVar2, iVar14);
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
																									Global_2412555.f_121[Global_2412555.f_162] = uVar2;
																									Global_2412555.f_162++;
																									if (func_278(Var1, uParam2))
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
																							*uParam1 = uVar2;
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
																					*uParam1 = uVar2;
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
							func_267(0, uParam2);
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
						func_266(iVar13, *uParam0, &iVar0, &Var1, &uVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						uVar28 = uVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_177(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_284(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = uVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = uVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = uVar28;
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
				func_265(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_265(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_240(*(uParam0[iVar2 /*4*/]), 5f, unk_0x1146A9AE09CE2B14(), 0, 0))
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

void func_266(int iParam0, struct<3> Param1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xB36B8558948EA7A8((1 + iParam0), (40 + iParam0));
		unk_0x87BE0E4947F798AC(Param1, *iParam2, uParam3, uParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_279(*uParam3, uParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
		if (!func_283(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_267(int iParam0, var uParam1)
{
	if (!func_278(Global_2412555[iParam0 /*3*/], uParam1))
	{
		Global_2412555.f_162 = (Global_2412555.f_162 - 1);
		func_268(iParam0);
		if (Global_2412555.f_162 > Global_2412555.f_163)
		{
			func_267(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_267(iParam0 + 1, uParam1);
	}
}

void func_268(int iParam0)
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

void func_269(struct<3> Param0, var uParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412555[iParam2 /*3*/] };
	uVar1 = Global_2412555.f_121[iParam2];
	Global_2412555[iParam2 /*3*/] = { Param0 };
	Global_2412555.f_121[iParam2] = uParam1;
	if (iParam2 <= Global_2412555.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_269(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_270(struct<3> Param0, float fParam1, float fParam2)
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
		if (func_210(iVar3))
		{
			Var1 = { func_43(iVar3) };
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

int func_271(struct<3> Param0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam7 == 0)
		{
			if (func_2342(iVar1, bParam3, bParam4))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam6 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_38(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam8) && bParam5) && func_46(iVar1))
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
										uVar6 = unk_0xA8D713A937F31250(iVar3);
										if (func_272(Param0, uParam1, iParam2, Var5, uVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_166(func_43(iVar1), Param0, uParam1, iParam2, fVar2))
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

int func_272(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_166(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_167(Param0, fParam1, iParam2, &Global_1713901, &(Global_1713901.f_3), &(Global_1713901.f_6), 1036831949);
	func_167(Param3, fParam4, iParam5, &(Global_1713901.f_7), &(Global_1713901.f_10), &(Global_1713901.f_13), 1036831949);
	if (unk_0x55D9593FF40BF91B(Global_1713901, Global_1713901.f_3, Global_1713901.f_6, Global_1713901.f_7, Global_1713901.f_10, Global_1713901.f_13))
	{
		return 1;
	}
	return 0;
}

int func_273(struct<3> Param0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	
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
		uVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_272(Param0, uParam1, iParam2, Var3, uVar4, iVar2, 0))
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
		uVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_272(Param0, uParam1, iParam2, Var3, uVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_274(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_277(Param0, uParam1, iParam2, iParam3, iParam4) || func_275(Param0, uParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_275(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_276(Param0, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_272(Param0, uParam1, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_2342(iVar2, 0, 1) && func_2342(iParam3, 0, 1))
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

int func_276(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_173(iParam1, 1008981770);
	fVar1 = func_173(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_277(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_2342(iVar1, 0, 1) && func_2342(iParam3, 0, 1))
			{
				if (Global_2418033.f_261[iVar0])
				{
					if (func_166(Global_2418033.f_131[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_166(func_43(iVar1), Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2418033.f_261[iVar0])
			{
				if (func_166(Global_2418033.f_131[iVar0 /*3*/], Param0, uParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_2342(iVar1, 0, 0))
			{
				if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
				{
					if (func_166(func_43(iVar1), Param0, uParam1, iParam2, 1036831949))
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

int func_278(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_262(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_192(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
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

Vector3 func_279(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
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
			if (!func_282(Param0, *uParam1, Param4))
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
			if (unk_0xE267416B80E7921F(iParam7) && func_281(Param0))
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
					fVar10 = func_280(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_280(iParam7, 1.5f);
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
		if (!func_282(Param0, *uParam1, Param4))
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
					fVar10 = func_280(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_280(iParam7, 1.5f);
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

float func_280(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_168(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_281(struct<3> Param0)
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

int func_282(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_154(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_150(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_283(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_164(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412262[iVar1])
	{
		if (func_163(Param0, &(Global_2411559[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412262[8])
	{
		if (func_163(Param0, &(Global_2411559[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_284(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405077.f_26.f_18)
	{
		switch (Global_2405077.f_26.f_17)
		{
			case 0:
				if (func_262(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_192(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, 0, 0))
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
				*uParam0 = { func_155(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, Global_2405077.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_285(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
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
			if (func_177(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_284(uParam0, 1))
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
			func_288(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_287();
		}
		else
		{
			func_286();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405077.f_1753)
		{
			iVar2 = Global_2405077.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405077.f_1754[iVar2 /*4*/] };
				uVar4 = Global_2405077.f_1754[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_274(Var3, uVar4, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_177(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_273(Var3, uVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_36(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_36(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_271(Var3, uVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_270(Var3, uParam2->f_54, &fVar12);
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
															Global_2412555.f_121[0] = uVar4;
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
																		func_269(Var3, uVar4, iVar5);
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
														Global_2412555.f_121[Global_2412555.f_162] = uVar4;
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
												*uParam1 = uVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = uVar4;
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
					func_267(0, uParam2);
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

void func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_287()
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

void func_288(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405077.f_1753)
	{
		uVar1 = func_289(Param0, fVar0, &fVar0);
		Global_2405077.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_289(struct<3> Param0, float fParam1, float fParam2)
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

bool func_290(int iParam0)
{
	return iParam0 == 50;
}

void func_291(var uParam0, var uParam1)
{
	unk_0x32A0EF990D0A65D5(uParam0, uParam1, 0.1f);
	Global_2405077.f_2473 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_2471 = 1;
	Global_2405077.f_2474 = unk_0x551F46B3C7DFB654();
}

void func_292()
{
	func_297();
	func_296();
	func_295();
	func_294();
	func_293();
}

void func_293()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408018[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_294()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405077.f_2490.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_295()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405077.f_2490.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_296()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405077.f_2490.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_297()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405077.f_2490 = { Var0 };
}

void func_298()
{
	if (Global_2405077.f_2471)
	{
		if (unk_0x62D18D65FE22FF39() == Global_2405077.f_2473)
		{
			unk_0x58905C04D9E1CE4C();
		}
		else
		{
			unk_0x58905C04D9E1CE4C();
		}
		Global_2405077.f_2471 = 0;
	}
}

int func_299(bool bParam0)
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

int func_300(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					break;
			}
			break;
	}
	return -1;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	if (!unk_0x159BC3DDA80D71AC(Local_235.f_719[iParam0]))
	{
		if (unk_0xA8911798335DCDA2(1))
		{
			if (func_50(iParam1))
			{
				func_304(Local_235.f_703, Local_235.f_704, iParam0, &Var0, &fVar1);
				if (iParam2 || func_36(Var0, 1086324736, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_82(&(Local_235.f_719[iParam0]), iParam1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xED4E91A1FC7ABBF6(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 0);
						unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 0, 0);
						unk_0xAC2B08493719B297(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1);
						unk_0x47DE5E87A1AC7CBD(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1f);
						unk_0x5E3D11E1DC5FBF4D(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1);
						unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1);
						unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1);
						unk_0x9467B0584C318BAD(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 1);
						unk_0x040C47F5DFA52DB2(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 0);
						if (Local_235.f_703 != 1)
						{
							unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 2);
						}
						if (func_303(iParam0, 4))
						{
							unk_0x616B09EEEFED8FAF(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 3, 1);
						}
						if (func_303(iParam0, 5))
						{
							unk_0x616B09EEEFED8FAF(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 2, 1);
						}
						if (func_303(iParam0, 3))
						{
							unk_0x639C36116F049ECB(unk_0x854C404AEB476240(Local_235.f_719[iParam0]), 0);
						}
					}
				}
				else if (!func_303(iParam0, 0))
				{
					if (unk_0x4B1BAFAB7E8F4DA7(Var0, 6f))
					{
						bVar2 = true;
					}
					else if (unk_0x95F3ABD15748A3D6(Var0.x, Var0.f_1, (Var0.f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Var0, 1f))
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						unk_0x6AF7EE4DD9F8B944(Var0, fLocal_186, 1, 0, 0, 1);
						func_302(iParam0, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_302(int iParam0, int iParam1)
{
	if (!unk_0x234B68AC2E35ED5A(Local_235.f_749[iParam0], iParam1))
	{
		unk_0x191DDA30577F440A(&(Local_235.f_749[iParam0]), iParam1);
	}
}

bool func_303(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Local_235.f_749[iParam0], iParam1);
}

void func_304(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1073.851f, -1963.803f, 30.014f };
							*uParam4 = 55.398f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 200.889f, -1853.863f, 26.202f };
							*uParam4 = 258.799f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -123.38f, -2538.092f, 5f };
							*uParam4 = 54.8f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 737.927f, -538.504f, 25.853f };
							*uParam4 = 163f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1695.826f, 3316.644f, 40.399f };
							*uParam4 = 78.6f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1366.566f, -1860.176f, 55.801f };
							*uParam4 = 39.3999f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 742.511f, -1844.606f, 28.292f };
							*uParam4 = 210.6f;
							break;
					}
					break;
			}
			break;
	}
}

int func_305(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return joaat("pounder");
		
		case 1:
			return joaat("valkyrie2");
		
		default:
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_34(Local_235.f_703, Local_235.f_704, iParam0);
	if (iParam1 > -1)
	{
		if (unk_0x159BC3DDA80D71AC(Local_235.f_712[iParam1]))
		{
			if (!unk_0x159BC3DDA80D71AC(Local_235.f_10[iParam0 /*15*/].f_1))
			{
				if (unk_0x035BBFB481EB12F2(1))
				{
					if (func_50(iVar0))
					{
						if (func_80(&(Local_235.f_10[iParam0 /*15*/].f_1), func_307(iParam1), 22, iVar0, iParam2, 1, 1, 1))
						{
							if (func_30(iParam0, 17))
							{
							}
							func_19(iParam0);
							unk_0x191DDA30577F440A(&(Local_235.f_772), iParam0);
						}
					}
				}
			}
		}
	}
	return 0;
}

var func_307(int iParam0)
{
	return Local_235.f_712[iParam0];
}

int func_308(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			break;
	}
	return -1;
}

int func_309(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	struct<3> Var3;
	
	if (!func_363(iParam0))
	{
		if (unk_0xA8911798335DCDA2(1))
		{
			if (func_50(iParam1))
			{
				if (!func_134(iParam0, 0) && !bParam3)
				{
					func_362(Local_235.f_703, Local_235.f_704, iParam0, &Var0, &fVar1);
					Var2.f_4 = 1125515264;
					Var2.f_5 = 1;
					Var2.f_6 = 1;
					Var2.f_8 = 1082130432;
					Var2.f_9 = 1176255488;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 2;
					Var2.f_22 = 2;
					Var2.f_25 = 1;
					Var2.f_26 = 1;
					Var2.f_29 = 1123024896;
					Var2.f_30 = 1;
					Var2 = 0f;
					Var2.f_1 = 0;
					Var2.f_4 = 50f;
					Var2.f_5 = 1;
					Var2.f_6 = 1;
					Var2.f_12 = 1;
					Var2.f_3 = 1;
					Var3 = { func_360(Var0, fVar1, 20f) };
					if (func_311(Var0, Var3, iParam1, 0, &(Local_235.f_559[iParam0 /*5*/]), &(Local_235.f_559[iParam0 /*5*/].f_3), &Var2))
					{
						func_133(iParam0, 0);
					}
				}
				else if (bParam3)
				{
					func_362(Local_235.f_703, Local_235.f_704, iParam0, &Var0, &fVar1);
					Local_235.f_559[iParam0 /*5*/] = { Var0 };
					Local_235.f_559[iParam0 /*5*/].f_3 = fVar1;
				}
				if (func_134(iParam0, 0) || bParam3)
				{
					Var0 = { Local_235.f_559[iParam0 /*5*/] };
					fVar1 = Local_235.f_559[iParam0 /*5*/].f_3;
					if (!unk_0x234B68AC2E35ED5A(Local_235.f_782, iParam0))
					{
						unk_0x191DDA30577F440A(&(Local_235.f_782), iParam0);
					}
					if (func_82(&(Local_235.f_712[iParam0]), iParam1, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x577BE43A512C41FE(unk_0x8A437068C87289B7(Local_235.f_712[iParam0]), 1);
						func_310(unk_0x854C404AEB476240(Local_235.f_712[iParam0]));
						unk_0xED4E91A1FC7ABBF6(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 0);
						unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 0, 0);
						unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 1);
						unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 1);
						unk_0x9467B0584C318BAD(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 1);
						unk_0x040C47F5DFA52DB2(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 0);
						if (func_134(iParam0, 6))
						{
							unk_0x94F15E506D091111(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 3, 0, 1);
							unk_0x5C052A30B9FCA449(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 2);
							unk_0xB57B6688CB06F008(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 2, 0);
							unk_0xB57B6688CB06F008(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 3, 0);
						}
						if (func_134(iParam0, 7))
						{
							unk_0x94F15E506D091111(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 2, 0, 1);
						}
						if (func_134(iParam0, 8))
						{
							unk_0x639C36116F049ECB(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 0);
						}
						if (bParam2)
						{
							unk_0x70B2AB1977EB9053(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 2, 2);
							unk_0x70B2AB1977EB9053(unk_0x854C404AEB476240(Local_235.f_712[iParam0]), 3, 2);
						}
					}
				}
			}
		}
	}
	if (!func_363(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	switch (iVar0)
	{
		case joaat("speedo"):
			unk_0x473DA067A7AE5435(iParam0, 0);
			break;
	}
}

int func_311(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
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
	if (!func_357())
	{
		return 0;
	}
	if (func_356() && !Global_2405077.f_679 == unk_0x2053F6ACFD4ED4BC())
	{
		if (!Global_2405077.f_675 == 0)
		{
			Global_2405077.f_675 = 0;
			func_355();
			func_354();
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_674)
	{
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) < func_299(0))
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
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) > func_299(1))
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_184(Param0))
		{
			if (func_353(&Param0, 1))
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
		func_352();
		func_355();
		if (!uParam6->f_27 || (((((((func_351(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2544210.f_924) && !Global_2544210.f_913) && !Global_2544210.f_921) && !Global_2544210.f_925) && !Global_2544210.f_933) && !Global_2544210.f_945))
		{
			func_332(Param0, iParam2);
		}
		if (func_319(Param0))
		{
			func_332(Param0, iParam2);
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
				if (((uParam6->f_3 && func_36(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_275(Param0, *uParam5, iParam2, unk_0x1146A9AE09CE2B14(), 0))
				{
					Global_2405077.f_682 = { Param0 };
					Global_2405077.f_685 = *uParam5;
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
					func_263(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var5);
				}
				func_316(Global_2405077.f_682, Global_2405077.f_685, iParam2, &(Global_2405077.f_672));
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
							if (func_315(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 1036831949))
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
						func_314(Global_2405077.f_682, 0);
						func_313(-1);
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
				func_313(-1);
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
								if (func_277(Global_2405077.f_682, Global_2405077.f_685, iParam2, unk_0x1146A9AE09CE2B14(), 0) || func_271(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_314(Global_2405077.f_682, 0);
									func_313(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_314(Global_2405077.f_682, 0);
								func_313(-1);
							}
						}
					}
					else
					{
						func_313(-1);
					}
				}
				else
				{
					func_313(1);
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
			func_263(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var6);
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
		*uParam5 = Global_2405077.f_685;
		func_312(1);
		return 1;
	}
	return 0;
}

void func_312(bool bParam0)
{
	Global_2405077.f_675 = 0;
	func_352();
	func_355();
	if (bParam0)
	{
		func_354();
	}
}

void func_313(int iParam0)
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

void func_314(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_178(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2405077.f_2735[iParam1 /*3*/] };
		Global_2405077.f_2735[iParam1 /*3*/] = { Param0 };
		func_314(Var0, iParam1 + 1);
	}
}

int func_315(struct<3> Param0, var uParam1, int iParam2, bool bParam3, float fParam4)
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
		func_355();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405077.f_686[iVar3] == -1 && unk_0x443E2CA72E118E64())
			{
				func_167(Param0, uParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
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

void func_316(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_318(&Param0, &uParam1, &iParam2);
	Var0 = 1926582096;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_317(1, 1));
}

var func_317(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_2342(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_39(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_318(var uParam0, var uParam1, var uParam2)
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

int func_319(struct<3> Param0)
{
	int iVar0;
	
	if (Global_2544210.f_924 && func_320(Param0, &iVar0))
	{
		return 1;
	}
	return 0;
}

int func_320(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_331(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_321(iVar1))
			{
				if (func_331(Global_1683970.f_516[iVar0 /*3*/], 0) == iVar2)
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

int func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_330(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_24())
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
	if (func_158(unk_0x1146A9AE09CE2B14(), 0) || (func_327(unk_0x1146A9AE09CE2B14()) && func_159(func_326(unk_0x1146A9AE09CE2B14())) == 12))
	{
		return 1;
	}
	if (func_325(unk_0x1146A9AE09CE2B14()) || (func_327(unk_0x1146A9AE09CE2B14()) && func_159(func_326(unk_0x1146A9AE09CE2B14())) == 8))
	{
		return 1;
	}
	if (func_324(unk_0x1146A9AE09CE2B14()) || (func_327(unk_0x1146A9AE09CE2B14()) && func_159(func_326(unk_0x1146A9AE09CE2B14())) == 5))
	{
		return 1;
	}
	if (func_323(unk_0x1146A9AE09CE2B14()) || (func_327(unk_0x1146A9AE09CE2B14()) && func_159(func_326(unk_0x1146A9AE09CE2B14())) == 10))
	{
		return 1;
	}
	if (func_322(unk_0x1146A9AE09CE2B14()) || (func_327(unk_0x1146A9AE09CE2B14()) && func_159(func_326(unk_0x1146A9AE09CE2B14())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_323(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	if (iParam0 != func_24() && func_2342(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 != func_24() && func_2342(iParam0, 1, 1))
	{
		if (func_329(iParam0) && !func_328(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	if (iParam0 != func_24() && func_2342(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_329(int iParam0)
{
	if (iParam0 != func_24() && func_2342(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_330(int iParam0)
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

int func_331(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_156(Param0, &(Global_2410002[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_332(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405077.f_45.f_318)
	{
		return;
	}
	if (!func_350())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_349(Param0);
		if (iVar1 > -1)
		{
			func_354();
			switch (iVar1)
			{
				case 0:
					func_348(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_348(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_348(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_348(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_348(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_348(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_348(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_348(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_348(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_348(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_348(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_348(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_348(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_348(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_348(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_348(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_348(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_348(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_348(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_348(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_348(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_348(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_348(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_348(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_348(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_348(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_348(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_348(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_348(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_348(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_348(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_348(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_348(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_348(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_348(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_348(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_348(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_348(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_348(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_348(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_348(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_348(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_348(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_348(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_348(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_348(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_348(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_348(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_348(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_348(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_348(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_348(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_348(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_346(78);
					break;
				
				case 11:
					func_346(79);
					break;
				
				case 12:
					func_346(82);
					break;
				
				case 13:
					func_346(81);
					break;
				
				case 14:
					func_346(73);
					break;
				
				case 15:
					func_348(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_348(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_348(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_348(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_346(75);
					break;
				
				case 17:
					func_346(76);
					break;
				
				case 18:
					func_346(77);
					break;
				
				case 19:
					func_348(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_348(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_348(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_348(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_346(80);
					break;
				
				case 21:
				case 25:
					func_346(87);
					break;
				
				case 22:
				case 26:
					func_346(88);
					break;
				
				case 23:
				case 27:
					func_346(89);
					break;
				
				case 24:
				case 28:
					func_346(90);
					break;
				
				case 29:
				case 30:
					if (func_345(iParam1))
					{
						func_346(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29);
					}
					break;
				
				case 31:
					func_348(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_348(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_348(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_348(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_348(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_348(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_348(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_348(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_348(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_348(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_348(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_348(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_348(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_348(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_348(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_348(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_348(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_348(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_348(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_348(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_348(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_348(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_348(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_348(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_348(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_348(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_348(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_348(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_348(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_348(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_348(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_348(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_348(-194.254f, -2018.756f, 26.62f, 75f);
					func_348(-186.956f, -2031.369f, 26.62f, 338f);
					func_348(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_348(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_348(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_348(-233.372f, -2089.601f, 26.62f, 304f);
					func_348(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_348(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_348(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_348(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_348(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_348(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_348(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_348(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_348(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_348(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_348(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_348(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_348(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_348(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_348(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_348(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_342(Param0, &iVar2, &iVar3) || (func_320(Param0, &(iVar2[0])) && (unk_0x48E10529AEAE00F9(iParam1) || unk_0xE267416B80E7921F(iParam1))))
		{
			func_354();
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
				if (!iVar3[iVar0] && func_341(iVar2[iVar0], -1))
				{
					if (func_345(iParam1))
					{
						func_346(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_340(unk_0x7D2B9E6A64637269()) || func_339(unk_0x7D2B9E6A64637269())) && unk_0x48E10529AEAE00F9(iParam1)) || unk_0xE267416B80E7921F(iParam1))
					{
						if (func_338(iParam1))
						{
							func_337(iVar2[iVar0]);
						}
						else if (func_336(iParam1))
						{
							func_335(iVar2[iVar0]);
							func_337(iVar2[iVar0]);
						}
						else
						{
							func_335(iVar2[iVar0]);
							func_337(iVar2[iVar0]);
						}
					}
					else
					{
						func_333(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_346(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_333(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_348(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_348(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_348(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_348(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_348(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_348(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_348(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_348(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_348(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_348(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_348(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_348(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_348(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_348(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_348(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_348(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_348(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_348(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_348(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_348(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_348(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_348(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_348(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_348(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_348(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_348(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_348(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_348(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_348(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_348(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_348(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_348(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_348(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_348(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_348(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_348(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_348(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_348(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_348(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_348(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_348(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_348(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_348(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_348(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_348(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_348(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_348(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_348(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_348(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_348(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_348(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_348(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_348(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_348(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_348(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_348(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_348(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_348(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_348(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_348(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_348(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_348(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_348(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_348(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_348(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_348(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_348(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_348(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_348(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_348(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_348(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_348(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_348(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_348(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_348(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_348(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_348(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_348(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_348(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_348(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_348(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_348(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_348(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_348(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_348(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_348(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_348(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_348(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_348(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_348(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_348(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_348(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_348(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_348(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_348(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_348(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_348(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_348(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_348(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_348(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_348(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_348(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_348(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_348(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_348(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_348(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_348(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_348(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_348(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_348(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_348(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_348(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_348(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_348(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_348(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_348(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_348(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_348(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_348(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_348(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_348(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_348(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_348(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_348(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_348(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_348(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_348(142.7427f, -2536.147f, 5f, 205.0002f);
			func_348(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_348(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_348(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_348(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_348(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_348(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_348(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_348(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_348(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_348(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_348(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_348(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_348(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_348(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_348(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_348(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_348(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_348(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_348(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_348(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_348(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_348(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_348(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_348(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_348(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_348(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_348(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_348(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_348(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_348(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_348(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_348(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_348(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_348(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_348(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_348(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_348(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_348(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_348(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_348(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_348(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_348(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_348(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_348(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_348(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_348(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_348(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_348(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_348(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_348(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_348(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_348(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_348(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_348(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_348(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_348(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_348(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_348(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_348(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_348(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_348(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_348(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_348(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_348(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_348(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_348(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_348(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_348(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_348(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_348(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_348(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_348(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_348(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_348(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_348(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_348(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_348(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_348(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_348(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_348(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_348(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_348(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_348(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_348(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_348(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_348(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_348(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_348(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_348(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_348(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_348(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_348(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_348(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_348(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_348(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_348(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_348(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_348(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_348(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_348(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_348(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_348(-1823.414f, 3092.762f, 31.843f, 330f);
			func_348(-1819.045f, 3100.435f, 31.845f, 330f);
			func_348(-1833.313f, 3075.722f, 31.838f, 330f);
			func_348(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_348(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_348(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_348(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_348(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_348(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_348(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_348(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_348(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_348(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_348(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_348(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_348(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_348(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_348(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_348(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_348(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_348(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_348(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_348(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_348(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_348(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_348(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_348(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_348(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_348(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_348(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_348(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_348(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_348(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_348(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_348(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_348(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_348(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_348(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_348(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_348(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_348(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_348(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_348(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_348(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_348(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_348(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_348(1231.279f, 2910.881f, 43.3085f, 12f);
				func_348(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_348(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_348(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_348(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_348(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_348(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_348(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_348(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_348(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_348(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_348(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_348(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_348(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_348(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_348(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_348(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_348(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_348(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_348(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_348(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_348(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_348(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_348(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_348(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_348(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_348(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_348(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_348(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_348(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_348(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_348(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_348(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_348(3.855f, 2672.388f, 78.437f, 319.2f);
				func_348(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_348(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_348(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_348(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_348(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_348(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_348(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_348(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_348(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_348(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_348(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_348(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_348(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_348(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_348(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_348(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_348(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_348(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_348(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_348(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_348(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_348(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_348(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_348(102.851f, 2688.009f, 51.732f, 224f);
				func_348(109.815f, 2681.012f, 51.112f, 224f);
				func_348(116.355f, 2674.26f, 50.529f, 224f);
				func_348(125.138f, 2665.98f, 49.8f, 224f);
				func_348(132.228f, 2659.865f, 49.26f, 228.4f);
				func_348(139.354f, 2653.536f, 48.737f, 228.4f);
				func_348(88.512f, 2702.995f, 53.042f, 224.199f);
				func_348(81.565f, 2710.357f, 53.67f, 224.199f);
				func_348(75.156f, 2716.981f, 54.223f, 224.199f);
				func_348(68.442f, 2723.806f, 54.775f, 226.199f);
				func_348(61.449f, 2730.606f, 55.308f, 226.199f);
				func_348(53.702f, 2738.167f, 55.855f, 226.199f);
				func_348(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_348(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_348(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_348(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_348(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_348(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_348(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_348(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_348(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_348(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_348(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_348(2714.633f, 3918.283f, 42.938f, 16f);
				func_348(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_348(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_348(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_348(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_348(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_348(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_348(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_348(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_348(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_348(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_348(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_348(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_348(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_348(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_348(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_348(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_348(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_348(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_348(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_348(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_348(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_348(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_348(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_348(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_348(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_348(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_348(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_348(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_348(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_348(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_348(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_348(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_348(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_348(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_348(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_348(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_348(3374.923f, 5520.177f, 20.3207f, 86f);
				func_348(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_348(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_348(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_348(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_348(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_348(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_348(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_348(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_348(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_348(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_348(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_348(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_348(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_348(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_348(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_348(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_348(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_348(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_348(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_348(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_348(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_348(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_348(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_348(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_348(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_348(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(43.848f, 6845.657f, 13.379f, 247.2f);
				func_348(50.379f, 6861.146f, 15.105f, 247.2f);
				func_348(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_348(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_348(55.806f, 6875.081f, 14.824f, 247.2f);
				func_348(11.616f, 6877.079f, 11.466f, 247.2f);
				func_348(18.954f, 6891.633f, 11.37f, 247.2f);
				func_348(26.68f, 6907.587f, 11.869f, 247.2f);
				func_348(7.479f, 6907.895f, 12.024f, 247.2f);
				func_348(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_348(35.591f, 6836.608f, 13.288f, 274.4f);
				func_348(36.028f, 6830.135f, 13.801f, 270.8f);
				func_348(35.114f, 6823.884f, 14.527f, 260.8f);
				func_348(48.779f, 6838.693f, 14.337f, 273.6f);
				func_348(56.738f, 6821.8f, 15.244f, 244.8f);
				func_348(48.377f, 6825.895f, 14.656f, 249.8f);
				func_348(49.11f, 6831.439f, 13.991f, 274.8f);
				func_348(53.544f, 6818.275f, 16.342f, 243f);
				func_348(46.162f, 6821.945f, 15.483f, 249.8f);
				func_348(60.129f, 6836.8f, 15.605f, 269.6f);
				func_348(40.88f, 6802.952f, 20.113f, 242.6f);
				func_348(48.203f, 6799.134f, 20.897f, 244.4f);
				func_348(70.449f, 6809.271f, 16.846f, 243f);
				func_348(61.436f, 6814.266f, 16.71f, 244.2f);
				func_348(56.142f, 6793.458f, 19.806f, 242.6f);
				func_348(65.759f, 6791.12f, 18.433f, 276.4f);
				func_348(77.305f, 6805.391f, 18.558f, 245.6f);
				func_348(85.893f, 6800.243f, 18.535f, 249.8f);
				func_348(56.85f, 6780.582f, 18.822f, 297.999f);
				func_348(65.636f, 6784.669f, 18.789f, 293.799f);
				func_348(74.121f, 6788.498f, 18.739f, 293.799f);
				func_348(97.779f, 6796.32f, 19.02f, 276.799f);
				func_348(106.76f, 6796.983f, 18.914f, 272.599f);
				func_348(112.387f, 6802.858f, 18.994f, 210.599f);
				func_348(117.58f, 6802.644f, 18.663f, 209.399f);
				func_348(122.481f, 6802.693f, 18.468f, 209.399f);
				func_348(127.182f, 6802.686f, 18.218f, 209.399f);
				func_348(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_348(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_348(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_348(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_348(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_348(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_348(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_348(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_348(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_348(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_348(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_348(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_348(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_348(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_348(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_348(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_348(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_348(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_348(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_348(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_348(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_348(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_348(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_348(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_348(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_348(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_348(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_348(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_348(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_348(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_348(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_348(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_348(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_348(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_348(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_348(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_348(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_348(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_348(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_348(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_348(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_348(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_348(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_348(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_348(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_348(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_348(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_348(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_348(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_348(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_348(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_348(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_348(30.027f, 3292.351f, 38.604f, 140.199f);
				func_348(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_348(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_348(23.897f, 3283.152f, 39.381f, 145.399f);
				func_348(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_348(18.723f, 3274.025f, 40.054f, 155.799f);
				func_348(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_348(36.958f, 3298.847f, 38.001f, 127.799f);
				func_348(54.165f, 3311.582f, 36.517f, 303.799f);
				func_348(61.607f, 3317.105f, 35.916f, 306.999f);
				func_348(68.994f, 3323.129f, 35.364f, 308.199f);
				func_348(76.266f, 3329.467f, 34.805f, 311.399f);
				func_348(82.757f, 3335.915f, 34.344f, 316.598f);
				func_348(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_348(14.664f, 3263.688f, 40.931f, 160.398f);
				func_348(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_348(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_348(89.575f, 3343.311f, 33.932f, 318.398f);
				func_348(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_348(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_348(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_348(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_348(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_348(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_348(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_348(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_348(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_348(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_348(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_348(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_348(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_348(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_348(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_348(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_348(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_348(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_348(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_348(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_348(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_348(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_348(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_348(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_348(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_348(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_348(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_348(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_348(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_348(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_348(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_348(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_348(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_348(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_348(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_348(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_348(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_348(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_348(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_348(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_348(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_348(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_348(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_348(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_348(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_348(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_348(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_348(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_348(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_348(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_348(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_348(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_348(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_348(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_348(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_348(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_348(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_348(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_348(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_348(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_348(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_348(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_348(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_348(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_348(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_348(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_348(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_348(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_348(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_348(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_348(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_348(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_348(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_348(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_348(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_348(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_348(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_348(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_348(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_348(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_334(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_334(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_334(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_334(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_334(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_334(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_334(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_334(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_334(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_334(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_334(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_334(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_334(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_334(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_334(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_334(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_334(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_334(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_334(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_334(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_334(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_334(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_334(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_334(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_334(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_334(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_334(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_334(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_168(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var3) };
		func_348(Var4, fParam1);
	}
	else
	{
		func_348(Param0, fParam1);
	}
}

void func_335(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_348(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_348(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_348(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_348(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_348(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_348(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_348(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_348(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_348(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_348(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_348(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_348(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_348(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_348(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_348(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_348(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_348(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_348(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_348(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_348(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_348(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_348(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_348(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_348(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_348(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_348(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_348(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_348(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_348(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_348(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_348(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_348(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_348(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_348(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_348(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_348(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_348(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_348(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_348(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_348(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_348(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_348(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_348(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_348(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_348(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_348(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_348(-1356.991f, -3242.228f, 12.945f, 330f);
			func_348(-1369.313f, -3234.758f, 12.945f, 330f);
			func_348(-1381.751f, -3227.408f, 12.945f, 330f);
			func_348(-1394.302f, -3220.021f, 12.945f, 330f);
			func_348(-1354.339f, -3223.129f, 12.945f, 330f);
			func_348(-1366.302f, -3215.809f, 12.945f, 330f);
			func_348(-1378.492f, -3208.645f, 12.945f, 330f);
			func_348(-1350.322f, -3203.405f, 12.945f, 330f);
			func_348(-1362.684f, -3196.451f, 12.945f, 330f);
			func_348(-1347.089f, -3182.69f, 12.945f, 330f);
			func_348(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_348(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_348(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_348(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_348(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_348(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_348(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_348(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_348(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_348(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_348(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_348(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_348(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_348(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_348(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_348(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_348(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_348(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_348(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_348(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_348(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_348(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_348(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_348(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_348(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_348(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_348(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_348(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_348(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_348(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_348(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_348(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_348(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_348(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_348(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_348(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_348(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_348(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_348(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_348(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_348(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_348(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_348(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_348(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_348(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_348(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_348(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_348(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_348(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_348(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_348(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_348(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_348(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_348(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_348(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_348(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_348(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_348(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_348(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_348(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_348(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_348(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_348(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_348(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_348(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_348(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_348(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_348(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_348(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_348(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_348(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_348(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_348(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_348(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_348(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_348(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_348(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_348(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_348(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_348(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_348(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_348(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_348(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_348(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_348(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_348(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_348(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_348(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_348(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_348(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_348(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_348(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_348(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_348(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_348(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_348(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_348(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_348(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_348(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_348(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_348(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_348(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_348(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_348(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_348(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_348(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_348(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_348(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_348(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_348(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_348(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_348(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_348(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_348(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_348(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_348(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_348(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_348(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_348(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_348(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_348(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_348(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_348(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_348(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_348(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_348(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_348(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_348(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_348(-2484.323f, 3249.294f, 31.828f, 151f);
			func_348(-2495.313f, 3255.746f, 31.828f, 151f);
			func_348(-2472.644f, 3242.684f, 31.828f, 151f);
			func_348(-2506.313f, 3262.27f, 31.823f, 151f);
			func_348(-2461.494f, 3235.93f, 31.828f, 151f);
			func_348(-2505.602f, 3238.049f, 31.828f, 151f);
			func_348(-2481.937f, 3224.8f, 31.828f, 151f);
			func_348(-2516.813f, 3244.266f, 31.823f, 151f);
			func_348(-2470.03f, 3217.899f, 31.828f, 151f);
			func_348(-2493.933f, 3231.308f, 31.828f, 151f);
			func_348(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_348(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_348(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_348(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_348(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_348(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_348(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_348(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_348(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_348(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_348(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_348(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_348(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_348(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_348(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_348(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_348(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_348(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_348(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_348(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_348(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_348(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_348(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_348(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_348(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_348(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_348(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_348(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_348(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_348(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_348(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_348(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_348(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_348(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_348(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_348(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_336(int iParam0)
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

void func_337(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_348(-947.712f, -3367.704f, 12.944f, 60f);
			func_348(-904.692f, -3293.072f, 12.944f, 60f);
			func_348(-863.71f, -3221.978f, 12.944f, 60f);
			func_348(-966.418f, -3162.773f, 12.944f, 60f);
			func_348(-1007.435f, -3233.93f, 12.944f, 60f);
			func_348(-1050.455f, -3308.559f, 12.944f, 60f);
			func_348(-1145.673f, -3253.456f, 12.944f, 60f);
			func_348(-1098.386f, -3181.428f, 12.944f, 60f);
			func_348(-1060.474f, -3108.903f, 12.944f, 60f);
			func_348(-1155.391f, -3053.632f, 12.944f, 60f);
			func_348(-1196.114f, -3125.146f, 12.948f, 60f);
			func_348(-1235.552f, -3201.86f, 12.944f, 60f);
			func_348(-1344.446f, -3139.177f, 12.944f, 60f);
			func_348(-1301.308f, -3064.341f, 12.944f, 60f);
			func_348(-1260.135f, -2992.912f, 12.944f, 60f);
			func_348(-1364.244f, -2932.9f, 12.98f, 60f);
			func_348(-1405.284f, -3004.108f, 12.96f, 60f);
			func_348(-1448.29f, -3078.72f, 12.95f, 60f);
			func_348(-1535.732f, -3028.318f, 12.945f, 60f);
			func_348(-1492.639f, -2953.558f, 12.945f, 60f);
			func_348(-1451.506f, -2882.2f, 12.944f, 60f);
			func_348(-1553.927f, -2823.12f, 13.002f, 60f);
			func_348(-1595.097f, -2894.571f, 12.944f, 60f);
			func_348(-1637.836f, -2968.714f, 12.945f, 60f);
			func_348(-1740.971f, -2911.484f, 12.944f, 330f);
			func_348(-1696.293f, -2833.978f, 12.944f, 330f);
			func_348(-1651.502f, -2756.273f, 12.945f, 330f);
			func_348(-1588.258f, -2647.575f, 12.944f, 330f);
			func_348(-1536.862f, -2681.378f, 12.945f, 330f);
			func_348(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_348(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_348(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_348(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_348(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_348(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_348(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_348(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_348(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_348(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_348(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_348(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_348(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_348(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_348(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_348(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_348(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_348(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_348(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_348(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_348(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_348(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_348(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_348(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_348(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_348(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_348(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_348(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_348(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_348(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_348(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_338(int iParam0)
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

int func_339(int iParam0)
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

int func_340(int iParam0)
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

int func_341(int iParam0, int iParam1)
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

int func_342(struct<2> Param0, var uParam1, var uParam2, var uParam3)
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
			if (func_321(iVar0))
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
			if (func_343(iVar0))
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

int func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_344(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_273 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_24())
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

int func_344(int iParam0)
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

int func_345(int iParam0)
{
	if ((unk_0x69AF387D1A91914C(iParam0) || unk_0x3DA0AF866B552ECB(iParam0)) || unk_0x2F040F7AF0534E16(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_346(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_348(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_348(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_348(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_348(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_348(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_348(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_348(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_348(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_348(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_348(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_348(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_348(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_348(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_348(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_348(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_348(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_348(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_348(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_348(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_348(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_348(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_348(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_348(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_348(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_348(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_348(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_348(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_348(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_348(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_348(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_348(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_348(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_348(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_348(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_348(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_348(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_347())
			{
				func_348(-1608.297f, -556.875f, 33.406f, 310f);
				func_348(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_348(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_348(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_348(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_348(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_348(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_348(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_348(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_348(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_348(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_348(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_347())
			{
				func_348(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_348(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_348(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_348(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_348(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_348(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_348(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_348(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_348(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_348(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_348(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_348(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_347())
			{
				func_348(-102.737f, -597.379f, 35.053f, 160.999f);
				func_348(-97.793f, -589.568f, 35.082f, 134.799f);
				func_348(-110.357f, -619.402f, 35.055f, 160.599f);
				func_348(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_348(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_348(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_348(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_348(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_348(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_348(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_348(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_348(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_347())
			{
				func_348(-59.349f, -779.238f, 43.134f, 228.398f);
				func_348(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_348(-65.212f, -772.66f, 43.151f, 219.398f);
				func_348(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_348(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_348(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_348(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_348(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_348(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_348(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_348(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_348(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_348(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_348(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_348(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_348(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_348(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_348(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_348(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_348(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_348(-1464.5f, -927.9f, 9f, 296.7991f);
			func_348(-1466f, -926.1f, 9f, 296.7991f);
			func_348(-1467.9f, -924.7f, 9f, 296.7991f);
			func_348(-1469.7f, -923.7f, 9f, 296.7991f);
			func_348(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_348(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_348(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_348(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_348(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_348(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_348(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_348(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_348(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_348(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_348(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_348(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_348(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_348(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_348(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_348(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_348(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_348(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_348(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_348(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_348(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_348(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_348(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_348(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_348(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_348(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_348(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_348(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_348(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_348(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_348(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_348(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_348(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_348(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_348(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_348(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_348(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_348(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_348(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_348(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_348(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_348(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_348(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_348(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_348(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_348(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_348(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_348(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_348(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_348(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_348(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_348(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_348(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_348(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_348(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_348(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_348(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_348(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_348(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_348(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_348(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_348(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_348(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_348(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_348(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_348(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_348(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_348(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_348(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_348(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_348(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_348(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_348(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_348(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_348(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_348(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_348(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_348(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_348(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_348(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_348(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_348(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_348(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_348(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_347()
{
	return Global_2453009.f_17;
}

void func_348(struct<3> Param0, float fParam1)
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

int func_349(struct<3> Param0)
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
		if (func_163(Param0, &(Global_2412316[iVar0 /*7*/])))
		{
			Global_2405077.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405077.f_2905 = -1;
	return -1;
}

int func_350()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_13, 0) && !Global_2453903.f_6343)
	{
		return 0;
	}
	return 0;
}

int func_351(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
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
			if (func_321(iVar0))
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

void func_352()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405077.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_353(var uParam0, bool bParam1)
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
		if (func_163(Var1, &(Global_2412272[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_149(&Var1, Global_2412272[iVar0 /*7*/], Global_2412272[iVar0 /*7*/].f_3, Global_2412272[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_354()
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

void func_355()
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

int func_356()
{
	if (!Global_2405077.f_605 == 0 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_610) < func_299(0))
	{
		return 1;
	}
	return 0;
}

int func_357()
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
	if (!func_359(unk_0x1146A9AE09CE2B14()) && !func_358())
	{
		return 0;
	}
	return 1;
}

bool func_358()
{
	return Global_1312878;
}

int func_359(int iParam0)
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

Vector3 func_360(struct<3> Param0, float fParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_361(Var0, fParam1);
	Var0.x = (Var0.x * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_361(struct<3> Param0, float fParam1)
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

void func_362(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1052.457f, -1963.543f, 30.014f };
							*fParam4 = 16.2f;
							break;
						
						case 1:
							*uParam3 = { 1074.009f, -1949.668f, 30.014f };
							*fParam4 = 302.399f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 203.082f, -1865.3f, 25.791f };
							*fParam4 = 34f;
							break;
						
						case 1:
							*uParam3 = { 192.393f, -1846.078f, 26.204f };
							*fParam4 = 319.598f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -108.495f, -2527.645f, 5f };
							*fParam4 = 160.191f;
							break;
						
						case 1:
							*uParam3 = { -117.082f, -2529.25f, 5f };
							*fParam4 = 89.597f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 732.267f, -557.419f, 25.691f };
							*fParam4 = 302.798f;
							break;
						
						case 1:
							*uParam3 = { 727.438f, -549.421f, 25.569f };
							*fParam4 = 347.998f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1701.729f, 3306.301f, 40.172f };
							*fParam4 = 219.8f;
							break;
						
						case 1:
							*uParam3 = { 1692.215f, 3305.702f, 40.146f };
							*fParam4 = 198f;
							break;
						
						case 2:
							*uParam3 = { 1685.169f, 3300.173f, 40.115f };
							*fParam4 = 167.3998f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1356.085f, -1853.611f, 55.978f };
							*fParam4 = 168.999f;
							break;
						
						case 1:
							*uParam3 = { 1359.795f, -1863.801f, 55.602f };
							*fParam4 = 323.798f;
							break;
						
						case 2:
							*uParam3 = { 1348.903f, -1848.603f, 56.153f };
							*fParam4 = 316.599f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 748.99f, -1856.458f, 28.292f };
							*fParam4 = 254.6f;
							break;
						
						case 1:
							*uParam3 = { 739.004f, -1854.37f, 28.292f };
							*fParam4 = 149f;
							break;
						
						case 2:
							*uParam3 = { 744.5185f, -1825.647f, 28.2916f };
							*fParam4 = 20.5976f;
							break;
					}
					break;
			}
			break;
	}
}

bool func_363(int iParam0)
{
	return unk_0x159BC3DDA80D71AC(Local_235.f_712[iParam0]);
}

int func_364(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("speedo");
						
						case 1:
							return joaat("speedo");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("mesa3");
						
						case 1:
							return joaat("insurgent");
						
						case 2:
							return joaat("mule3");
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

int func_365(int iParam0, var uParam1)
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

int func_366(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 3;
				
				default:
			}
			break;
	}
	return 0;
}

void func_367()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (Local_235.f_10[iVar0 /*15*/].f_14 == 0)
		{
			Local_235.f_10[iVar0 /*15*/].f_14 = unk_0xB36B8558948EA7A8(0, 1000);
		}
		iVar0++;
	}
}

void func_368()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	iVar1 = func_372(Local_235.f_703, Local_235.f_704);
	iVar2 = Local_235.f_703;
	iVar3 = Local_235.f_704;
	if (Local_235.f_779 != 0)
	{
		return;
	}
	if (!func_105(&(Local_235.f_800)))
	{
		func_104(&(Local_235.f_800), 0, 0);
	}
	iVar0 = 0;
	if (!func_103(&(Local_235.f_800), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar5 = 0;
			if (!unk_0x159BC3DDA80D71AC(Local_235.f_721[iVar0]))
			{
				if (unk_0x3E42A32E15B11FFA(1))
				{
					iVar4 = func_371(iVar2, iVar3, iVar0);
					if (func_50(iVar4))
					{
						if (!func_33(Local_235.f_590[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_36(Local_235.f_590[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || (iVar0 > 0 && unk_0x159BC3DDA80D71AC(Local_235.f_721[(iVar0 - 1)])))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_235.f_783, iVar0))
								{
									if (iVar4 != joaat("imp_prop_adv_hdsec"))
									{
									}
									unk_0x191DDA30577F440A(&(Local_235.f_783), iVar0);
								}
								if (func_370(&(Local_235.f_721[iVar0]), iVar4, Local_235.f_590[iVar0 /*5*/], 1, 1, 0, 1, 0, 0, 0))
								{
									unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), 0f, 0f, Local_235.f_590[iVar0 /*5*/].f_3, 2, 1);
									if (func_369(iVar0, 0))
									{
										if (!unk_0x159BC3DDA80D71AC(Local_235.f_721[iVar0]))
										{
											unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), true);
											unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), 100);
											unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), true, 0);
											unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), 1);
											unk_0x3A653D4F5FA4B665(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), 1, 1, 1, 1, 1, 1, 1, 1);
										}
									}
									if (unk_0x6471F4759775FCA4(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0])) == joaat("prop_generator_03b"))
									{
										unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), true);
									}
									if (func_369(iVar0, 1))
									{
										unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_235.f_721[iVar0]), false, 0);
									}
								}
							}
							else
							{
								if (unk_0x4B1BAFAB7E8F4DA7(Local_235.f_590[iVar0 /*5*/], 6f))
								{
									iVar5 = 1;
								}
								else if (unk_0x95F3ABD15748A3D6(Local_235.f_590[iVar0 /*5*/], Local_235.f_590[iVar0 /*5*/].f_1, (Local_235.f_590[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Local_235.f_590[iVar0 /*5*/], 1f))
								{
									iVar5 = 1;
								}
								if (iVar5 == 1)
								{
									if (!unk_0x234B68AC2E35ED5A(Local_235.f_783, iVar0))
									{
										unk_0x191DDA30577F440A(&(Local_235.f_783), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_369(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Local_235.f_751[iParam0], iParam1);
}

int func_370(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x3E42A32E15B11FFA(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x0358AFF5157FE26F(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x795434E153F90E41(iParam1, Param2, iParam4, bParam3, iParam5));
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
			unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(*uParam0), false, 0);
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

int func_371(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("imp_prop_adv_hdsec");
						
						case 7:
							return joaat("imp_prop_adv_hdsec");
						
						case 8:
							return joaat("imp_prop_adv_hdsec");
						
						case 9:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 10:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						case 11:
							return joaat("gr_prop_gr_hdsec_deactive");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_flare_01");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("prop_generator_03b");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_box_wood04a");
						
						case 1:
							return joaat("prop_box_wood04a");
						
						case 2:
							return joaat("prop_box_wood04a");
						
						case 3:
							return joaat("prop_generator_03b");
						
						case 4:
							return joaat("prop_generator_03b");
						
						case 5:
							return joaat("prop_generator_03b");
						
						case 6:
							return joaat("prop_flare_01");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return joaat("prop_generator_03b");
						
						case 1:
							return joaat("prop_generator_03b");
						
						case 2:
							return joaat("prop_generator_03b");
						
						case 3:
							return joaat("prop_box_wood04a");
						
						case 4:
							return joaat("prop_box_wood04a");
						
						case 5:
							return joaat("prop_flare_01");
						
						case 6:
							return joaat("prop_box_wood04a");
						
						case 7:
							return joaat("prop_mb_crate_01a_set");
						
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 12;
				
				case 3:
					return 12;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8;
				
				case 1:
					return 8;
				
				case 2:
					return 8;
				
				default:
			}
			break;
	}
	return 0;
}

void func_373()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	iVar1 = func_374(Local_235.f_703, Local_235.f_704);
	if (Local_235.f_779 != 0)
	{
		return;
	}
	if (!func_105(&(Local_235.f_800)))
	{
		func_104(&(Local_235.f_800), 0, 0);
	}
	iVar2 = func_2205();
	iVar3 = Local_235.f_704;
	iVar0 = 0;
	if (!func_103(&(Local_235.f_800), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar5 = 0;
			if (!unk_0x159BC3DDA80D71AC(Local_235.f_707[iVar0]))
			{
				if (unk_0xA8911798335DCDA2(1))
				{
					iVar4 = func_364(iVar2, iVar3, iVar0);
					if (func_50(iVar4))
					{
						if (!func_33(Local_235.f_538[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_36(Local_235.f_538[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || (iVar0 > 0 && unk_0x159BC3DDA80D71AC(Local_235.f_707[(iVar0 - 1)])))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_235.f_782, iVar0))
								{
									unk_0x191DDA30577F440A(&(Local_235.f_782), iVar0);
								}
								if (func_82(&(Local_235.f_707[iVar0]), iVar4, Local_235.f_538[iVar0 /*5*/], Local_235.f_538[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									if (Local_235.f_703 == 0)
									{
										unk_0xC612552622E74D36(unk_0x854C404AEB476240(Local_235.f_707[iVar0]), 0, 0);
									}
									unk_0xBB18EA5F1620FF5F(unk_0x854C404AEB476240(Local_235.f_707[iVar0]), 1);
									unk_0x040C47F5DFA52DB2(unk_0x854C404AEB476240(Local_235.f_707[iVar0]), 0);
								}
							}
							else
							{
								if (unk_0x4B1BAFAB7E8F4DA7(Local_235.f_538[iVar0 /*5*/], 6f))
								{
									iVar5 = 1;
								}
								else if (unk_0x95F3ABD15748A3D6(Local_235.f_538[iVar0 /*5*/], Local_235.f_538[iVar0 /*5*/].f_1, (Local_235.f_538[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Local_235.f_538[iVar0 /*5*/], 1f))
								{
									iVar5 = 1;
								}
								if (iVar5 == 1)
								{
									if (!unk_0x234B68AC2E35ED5A(Local_235.f_782, iVar0))
									{
										unk_0x191DDA30577F440A(&(Local_235.f_782), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_374(int iParam0, var uParam1)
{
	return 0;
}

void func_375()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (func_3(12))
	{
		return;
	}
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	iVar0 = func_377(Local_235.f_703, Local_235.f_704);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			func_376(Local_235.f_703, Local_235.f_704, iVar1, &Var2, &Var3);
			if (!func_33(Var2, 0f, 0f, 0f, 0))
			{
				Local_235.f_875[iVar1] = unk_0x0823FA7465392E20(Var2, Var3, 1, 1, 1, 1);
			}
			iVar1++;
		}
	}
	func_106(12);
}

void func_376(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { Vector(73.38181f, 3488.139f, 2982.944f) - Vector(3f, 30.875f, 18.4375f) };
							uParam3->f_2 = (uParam3->f_2 - 2f);
							*uParam4 = { Vector(73.38181f, 3488.139f, 2982.944f) + Vector(3f, 30.875f, 18.4375f) };
							uParam3->f_2 = (uParam3->f_2 + 2f);
							break;
					}
					break;
			}
			break;
	}
}

int func_377(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
				
				default:
					return 1;
			}
			break;
	}
	return 0;
}

void func_378()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_235.f_794 == 0)
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		Var1 = { func_379() };
		fVar2 = unk_0x0BABEFEA577FCFA4(Var0, Var1, 0);
		if (fVar2 > 2500f)
		{
			Local_235.f_794 = Global_262145.f_16313;
		}
		else if (fVar2 > 2000f)
		{
			Local_235.f_794 = Global_262145.f_16314;
		}
		else if (fVar2 > 1500f)
		{
			Local_235.f_794 = Global_262145.f_16315;
		}
		else if (fVar2 > 1000f)
		{
			Local_235.f_794 = Global_262145.f_16316;
		}
		else
		{
			Local_235.f_794 = Global_262145.f_16317;
		}
	}
}

Vector3 func_379()
{
	switch (Local_235.f_704)
	{
		case 0:
			return func_380();
		
		default:
	}
	return func_380();
}

Vector3 func_380()
{
	int iVar0;
	int iVar1;
	
	switch (Local_235.f_703)
	{
		case 1:
			iVar0 = func_384(func_120());
			return func_381(iVar0);
		
		case 0:
			iVar1 = func_384(func_120());
			return func_381(iVar1);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_381(int iParam0)
{
	return Global_1683970.f_516[func_382(iParam0) /*3*/];
}

int func_382(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_383(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_384(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

void func_385()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_33(Local_235.f_462[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_390();
	iVar0 = func_2205();
	iVar1 = Local_235.f_704;
	iVar2 = func_54(iVar0, iVar1);
	iVar3 = func_374(iVar0, iVar1);
	iVar4 = func_372(iVar0, iVar1);
	iVar5 = Local_235.f_931;
	iVar6 = 0;
	while (iVar6 < iVar2)
	{
		func_389(iVar0, iVar1, iVar6, &(Local_235.f_10[iVar6 /*15*/].f_5), &(Local_235.f_10[iVar6 /*15*/].f_8));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar3)
	{
		func_388(iVar0, iVar1, iVar6, &(Local_235.f_538[iVar6 /*5*/]), &(Local_235.f_538[iVar6 /*5*/].f_3));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		func_387(iVar0, iVar1, iVar6, &(Local_235.f_590[iVar6 /*5*/]), &(Local_235.f_590[iVar6 /*5*/].f_3));
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Local_235.f_691[iVar6 /*5*/] = { func_386(iVar0, iVar1, iVar6) };
		iVar6++;
	}
}

Vector3 func_386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_387(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1072.265f, -1955.24f, 30.017f };
							*uParam4 = 270.6f;
							break;
						
						case 1:
							*uParam3 = { 1067.778f, -1965.812f, 30.017f };
							*uParam4 = 216.2f;
							break;
						
						case 2:
							*uParam3 = { 1059.324f, -1955.879f, 30.017f };
							*uParam4 = 359.399f;
							break;
						
						case 3:
							*uParam3 = { 1045.348f, -1965.24f, 30.074f };
							*uParam4 = 292.993f;
							break;
						
						case 4:
							*uParam3 = { 1067.391f, -1974.432f, 30.074f };
							*uParam4 = 337.194f;
							break;
						
						case 5:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 6:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 7:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 8:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 9:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 10:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
						
						case 11:
							*uParam3 = { 1073.066f, -1944.134f, 30.076f };
							*uParam4 = 181.994f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 186.252f, -1847.778f, 26.257f };
							*uParam4 = 71.795f;
							break;
						
						case 1:
							*uParam3 = { 194.125f, -1860.507f, 26.02f };
							*uParam4 = 80.199f;
							break;
						
						case 2:
							*uParam3 = { 205.934f, -1859.605f, 26.173f };
							*uParam4 = 229.399f;
							break;
						
						case 3:
							*uParam3 = { 187.761f, -1855.247f, 26.176f };
							*uParam4 = 258.799f;
							break;
						
						case 4:
							*uParam3 = { 211.824f, -1860.622f, 26.191f };
							*uParam4 = 48.795f;
							break;
						
						case 5:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 6:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 7:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 8:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 9:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 10:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
						
						case 11:
							*uParam3 = { 198.362f, -1864.078f, 25.954f };
							*uParam4 = 344.595f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -112.035f, -2523.366f, 5.003f };
							*uParam4 = 294.394f;
							break;
						
						case 1:
							*uParam3 = { -109.948f, -2533.822f, 5.003f };
							*uParam4 = 128.19f;
							break;
						
						case 2:
							*uParam3 = { -117.595f, -2534.532f, 5.003f };
							*uParam4 = 250.994f;
							break;
						
						case 3:
							*uParam3 = { -131.088f, -2540.13f, 5.059f };
							*uParam4 = 277.4f;
							break;
						
						case 4:
							*uParam3 = { -109.153f, -2517.608f, 5.059f };
							*uParam4 = 146.999f;
							break;
						
						case 5:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 6:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 7:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 8:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 9:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 10:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
						
						case 11:
							*uParam3 = { -94.751f, -2531.634f, 5.064f };
							*uParam4 = 88.199f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 719.36f, -570.159f, 25.214f };
							*uParam4 = 356.196f;
							break;
						
						case 1:
							*uParam3 = { 733.97f, -552.694f, 25.709f };
							*uParam4 = 301.598f;
							break;
						
						case 2:
							*uParam3 = { 722.023f, -557.694f, 25.37f };
							*uParam4 = 185.597f;
							break;
						
						case 3:
							*uParam3 = { 743.87f, -529.841f, 26.131f };
							*uParam4 = 170.2f;
							break;
						
						case 4:
							*uParam3 = { 718.559f, -560.7f, 25.349f };
							*uParam4 = 287.399f;
							break;
						
						case 5:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 6:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 7:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 8:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 9:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 10:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
						
						case 11:
							*uParam3 = { 727.243f, -572.277f, 25.905f };
							*uParam4 = 5.799f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1692.823f, 3313.184f, 40.149f };
							*uParam4 = 213.6f;
							break;
						
						case 1:
							*uParam3 = { 1698.061f, 3307.424f, 40.163f };
							*uParam4 = 163f;
							break;
						
						case 2:
							*uParam3 = { 1704.891f, 3297.136f, 40.151f };
							*uParam4 = 31.6f;
							break;
						
						case 3:
							*uParam3 = { 1705.365f, 3321.828f, 40.249f };
							*uParam4 = 178.196f;
							break;
						
						case 4:
							*uParam3 = { 1703.038f, 3323.708f, 40.237f };
							*uParam4 = 145.4f;
							break;
						
						case 5:
							*uParam3 = { 1698.681f, 3295.485f, 40.207f };
							*uParam4 = 4.8f;
							break;
						
						case 6:
							*uParam3 = { 1679.907f, 3314.884f, 40.396f };
							*uParam4 = 250.199f;
							break;
						
						case 7:
							*uParam3 = { 1686.462f, 3313.07f, 40.4114f };
							*uParam4 = 250.199f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1354.042f, -1860.635f, 55.521f };
							*uParam4 = 159.996f;
							break;
						
						case 1:
							*uParam3 = { 1363.032f, -1850.031f, 56.198f };
							*uParam4 = 189.599f;
							break;
						
						case 2:
							*uParam3 = { 1364.434f, -1869.575f, 55.701f };
							*uParam4 = 199.598f;
							break;
						
						case 3:
							*uParam3 = { 1362.243f, -1876.987f, 56.052f };
							*uParam4 = 349.395f;
							break;
						
						case 4:
							*uParam3 = { 1365.821f, -1844.801f, 56.337f };
							*uParam4 = 172.395f;
							break;
						
						case 5:
							*uParam3 = { 1344.211f, -1854.122f, 56.166f };
							*uParam4 = 249.795f;
							break;
						
						case 6:
							*uParam3 = { 1371.221f, -1856.408f, 56.2579f };
							*uParam4 = 0f;
							break;
						
						case 7:
							*uParam3 = { 1694.413f, 3316.959f, 42.024f };
							*uParam4 = 250.199f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 732.074f, -1846.578f, 28.351f };
							*uParam4 = 259.396f;
							break;
						
						case 1:
							*uParam3 = { 733.516f, -1864.994f, 28.351f };
							*uParam4 = 304.797f;
							break;
						
						case 2:
							*uParam3 = { 747.31f, -1862.022f, 28.352f };
							*uParam4 = 22.997f;
							break;
						
						case 3:
							*uParam3 = { 746.89f, -1853.286f, 28.294f };
							*uParam4 = 180.4f;
							break;
						
						case 4:
							*uParam3 = { 738.586f, -1846.772f, 28.294f };
							*uParam4 = 120.399f;
							break;
						
						case 5:
							*uParam3 = { 747.651f, -1838.457f, 28.395f };
							*uParam4 = 0f;
							break;
						
						case 6:
							*uParam3 = { 752.33f, -1870.699f, 28.294f };
							*uParam4 = 282f;
							break;
						
						case 7:
							*uParam3 = { 743.2522f, -1845.878f, 30.2916f };
							*uParam4 = 250.199f;
							break;
					}
					break;
			}
			break;
	}
}

void func_388(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
}

void func_389(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1082.481f, -1949.4f, 30.014f };
							*uParam4 = 53.799f;
							break;
						
						case 1:
							*uParam3 = { 1076.669f, -1963.329f, 30.014f };
							*uParam4 = 148.798f;
							break;
						
						case 2:
							*uParam3 = { 1071.155f, -1967.709f, 30.015f };
							*uParam4 = 107.996f;
							break;
						
						case 3:
							*uParam3 = { 1069.892f, -1968.247f, 30.015f };
							*uParam4 = 287.996f;
							break;
						
						case 4:
							*uParam3 = { 1050.168f, -1968.881f, 30.015f };
							*uParam4 = 46.794f;
							break;
						
						case 5:
							*uParam3 = { 1050.747f, -1957.233f, 30.042f };
							*uParam4 = 182.597f;
							break;
						
						case 6:
							*uParam3 = { 1056.63f, -1961.666f, 30.014f };
							*uParam4 = 143.996f;
							break;
						
						case 7:
							*uParam3 = { 1056.002f, -1963.114f, 30.015f };
							*uParam4 = 330.595f;
							break;
						
						case 8:
							*uParam3 = { 1059.455f, -1957.077f, 30.014f };
							*uParam4 = 355.795f;
							break;
						
						case 9:
							*uParam3 = { 1074.588f, -1954.362f, 30.014f };
							*uParam4 = 180.399f;
							break;
						
						case 10:
							*uParam3 = { 1074.844f, -1955.782f, 30.014f };
							*uParam4 = 9.599f;
							break;
						
						case 11:
							*uParam3 = { 1081.098f, -1959.065f, 31.821f };
							*uParam4 = 59.394f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 196.759f, -1854.889f, 26.19f };
							*uParam4 = 352.598f;
							break;
						
						case 1:
							*uParam3 = { 210.822f, -1852.92f, 30.227f };
							*uParam4 = 147.198f;
							break;
						
						case 2:
							*uParam3 = { 213.542f, -1863.377f, 29.868f };
							*uParam4 = 73.798f;
							break;
						
						case 3:
							*uParam3 = { 187.418f, -1848.222f, 26.214f };
							*uParam4 = 70.395f;
							break;
						
						case 4:
							*uParam3 = { 198.461f, -1850.026f, 26.203f };
							*uParam4 = 25.199f;
							break;
						
						case 5:
							*uParam3 = { 197.197f, -1849.019f, 26.202f };
							*uParam4 = 230.998f;
							break;
						
						case 6:
							*uParam3 = { 203.577f, -1857.985f, 26.199f };
							*uParam4 = 276.997f;
							break;
						
						case 7:
							*uParam3 = { 204.92f, -1857.507f, 26.202f };
							*uParam4 = 100.997f;
							break;
						
						case 8:
							*uParam3 = { 201.003f, -1846.909f, 26.782f };
							*uParam4 = 135.797f;
							break;
						
						case 9:
							*uParam3 = { 195.867f, -1861.333f, 25.992f };
							*uParam4 = 211.796f;
							break;
						
						case 10:
							*uParam3 = { 196.682f, -1862.451f, 25.956f };
							*uParam4 = 22.795f;
							break;
						
						case 11:
							*uParam3 = { 196.906f, -1861.31f, 25.986f };
							*uParam4 = 115.795f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -121.205f, -2524.039f, 10.163f };
							*uParam4 = 244.394f;
							break;
						
						case 1:
							*uParam3 = { -126.719f, -2530.64f, 5.101f };
							*uParam4 = 238.794f;
							break;
						
						case 2:
							*uParam3 = { -124.113f, -2539.853f, 5f };
							*uParam4 = 320.393f;
							break;
						
						case 3:
							*uParam3 = { -120.04f, -2534.844f, 5f };
							*uParam4 = 349.393f;
							break;
						
						case 4:
							*uParam3 = { -119.924f, -2533.226f, 5f };
							*uParam4 = 177.792f;
							break;
						
						case 5:
							*uParam3 = { -111.366f, -2535.092f, 5f };
							*uParam4 = 98.392f;
							break;
						
						case 6:
							*uParam3 = { -112.818f, -2535.893f, 5f };
							*uParam4 = 299.791f;
							break;
						
						case 7:
							*uParam3 = { -112.55f, -2534.624f, 5f };
							*uParam4 = 229.591f;
							break;
						
						case 8:
							*uParam3 = { -113.497f, -2525.293f, 5f };
							*uParam4 = 64.991f;
							break;
						
						case 9:
							*uParam3 = { -114.768f, -2524.708f, 5f };
							*uParam4 = 244.391f;
							break;
						
						case 10:
							*uParam3 = { -116.469f, -2516.152f, 5.101f };
							*uParam4 = 236.191f;
							break;
						
						case 11:
							*uParam3 = { -107.198f, -2524.363f, 5f };
							*uParam4 = 146.989f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 735.631f, -550.341f, 25.78f };
							*uParam4 = 189.398f;
							break;
						
						case 1:
							*uParam3 = { 736.114f, -551.628f, 25.829f };
							*uParam4 = 14.598f;
							break;
						
						case 2:
							*uParam3 = { 736.386f, -543.442f, 25.76f };
							*uParam4 = 345.998f;
							break;
						
						case 3:
							*uParam3 = { 744.721f, -538.123f, 26.769f };
							*uParam4 = 70.995f;
							break;
						
						case 4:
							*uParam3 = { 743.887f, -540.01f, 26.767f };
							*uParam4 = 70.995f;
							break;
						
						case 5:
							*uParam3 = { 719.41f, -568.908f, 25.187f };
							*uParam4 = 189.795f;
							break;
						
						case 6:
							*uParam3 = { 733.716f, -536.957f, 25.875f };
							*uParam4 = 320.799f;
							break;
						
						case 7:
							*uParam3 = { 734.63f, -536.041f, 25.899f };
							*uParam4 = 138.999f;
							break;
						
						case 8:
							*uParam3 = { 724.107f, -554.27f, 25.452f };
							*uParam4 = 65.797f;
							break;
						
						case 9:
							*uParam3 = { 723.424f, -553.453f, 25.467f };
							*uParam4 = 209.797f;
							break;
						
						case 10:
							*uParam3 = { 722.935f, -554.544f, 25.441f };
							*uParam4 = 292.597f;
							break;
						
						case 11:
							*uParam3 = { 729.489f, -559.353f, 25.528f };
							*uParam4 = 302.798f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1699.765f, 3308.678f, 40.165f };
							*uParam4 = 224.199f;
							break;
						
						case 1:
							*uParam3 = { 1691.739f, 3314.095f, 40.289f };
							*uParam4 = 211f;
							break;
						
						case 2:
							*uParam3 = { 1704.327f, 3298.056f, 40.148f };
							*uParam4 = 218.599f;
							break;
						
						case 3:
							*uParam3 = { 1700.27f, 3286.583f, 47.9222f };
							*uParam4 = 213.5996f;
							break;
						
						case 4:
							*uParam3 = { 1683.003f, 3298.337f, 40.0738f };
							*uParam4 = 87.5995f;
							break;
						
						case 5:
							*uParam3 = { 1699.669f, 3295.85f, 47.9142f };
							*uParam4 = 35.399f;
							break;
						
						case 6:
							*uParam3 = { 1691.079f, 3308.635f, 40.146f };
							*uParam4 = 196.398f;
							break;
						
						case 7:
							*uParam3 = { 1696.84f, 3300.881f, 40.1483f };
							*uParam4 = 333.9979f;
							break;
						
						case 8:
							*uParam3 = { 1697.442f, 3302.246f, 40.1493f };
							*uParam4 = 150.3984f;
							break;
						
						case 9:
							*uParam3 = { 1697.56f, 3317.821f, 40.3237f };
							*uParam4 = 152.5993f;
							break;
						
						case 10:
							*uParam3 = { 1710.475f, 3304.439f, 40.17f };
							*uParam4 = 234.599f;
							break;
						
						case 11:
							*uParam3 = { 1711.603f, 3303.708f, 40.177f };
							*uParam4 = 62.399f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1352.366f, -1858.514f, 55.6553f };
							*uParam4 = 286.7989f;
							break;
						
						case 1:
							*uParam3 = { 1354.217f, -1858.099f, 55.658f };
							*uParam4 = 101.5978f;
							break;
						
						case 2:
							*uParam3 = { 1369.075f, -1860.761f, 55.851f };
							*uParam4 = 139.598f;
							break;
						
						case 3:
							*uParam3 = { 1366.48f, -1864.806f, 55.6665f };
							*uParam4 = 137.798f;
							break;
						
						case 4:
							*uParam3 = { 1365.218f, -1866.121f, 55.6698f };
							*uParam4 = 317.197f;
							break;
						
						case 5:
							*uParam3 = { 1357.806f, -1866.451f, 55.608f };
							*uParam4 = 323.796f;
							break;
						
						case 6:
							*uParam3 = { 1349.725f, -1845.469f, 56.11f };
							*uParam4 = 33.7966f;
							break;
						
						case 7:
							*uParam3 = { 1363.495f, -1851.674f, 56.108f };
							*uParam4 = 22.599f;
							break;
						
						case 8:
							*uParam3 = { 1369.954f, -1875.707f, 55.966f };
							*uParam4 = 44.996f;
							break;
						
						case 9:
							*uParam3 = { 1370.728f, -1847.641f, 58.528f };
							*uParam4 = 96.996f;
							break;
						
						case 10:
							*uParam3 = { 1373.99f, -1860.58f, 56.282f };
							*uParam4 = 181.996f;
							break;
						
						case 11:
							*uParam3 = { 1374.041f, -1861.811f, 56.28f };
							*uParam4 = 10.795f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 747.367f, -1851.607f, 28.292f };
							*uParam4 = 174.999f;
							break;
						
						case 1:
							*uParam3 = { 755.7421f, -1842.626f, 28.2916f };
							*uParam4 = 82.3999f;
							break;
						
						case 2:
							*uParam3 = { 737.1559f, -1851.976f, 28.2916f };
							*uParam4 = 58.3986f;
							break;
						
						case 3:
							*uParam3 = { 746.2255f, -1858.017f, 28.2916f };
							*uParam4 = 211.5981f;
							break;
						
						case 4:
							*uParam3 = { 753.713f, -1852.042f, 28.2916f };
							*uParam4 = 195.3977f;
							break;
						
						case 5:
							*uParam3 = { 735.6103f, -1851.14f, 28.2916f };
							*uParam4 = 232.398f;
							break;
						
						case 6:
							*uParam3 = { 730.2368f, -1873.99f, 28.2915f };
							*uParam4 = 1.3979f;
							break;
						
						case 7:
							*uParam3 = { 750.533f, -1870.497f, 28.292f };
							*uParam4 = 246.399f;
							break;
						
						case 8:
							*uParam3 = { 750.863f, -1874.042f, 28.292f };
							*uParam4 = 267.998f;
							break;
						
						case 9:
							*uParam3 = { 740.428f, -1843.7f, 28.292f };
							*uParam4 = 282.599f;
							break;
						
						case 10:
							*uParam3 = { 747.7684f, -1830.837f, 28.2916f };
							*uParam4 = 267.598f;
							break;
						
						case 11:
							*uParam3 = { 747.1207f, -1859.341f, 28.2918f };
							*uParam4 = 39.3984f;
							break;
					}
					break;
			}
			break;
	}
}

var func_390()
{
	if (Local_235.f_702 != -1)
	{
		return Local_235.f_702;
	}
	Local_235.f_702 = unk_0xB36B8558948EA7A8(0, 3);
	return Local_235.f_702;
}

void func_391()
{
	int iVar0;
	struct<8> Var1;
	
	if (Local_235.f_703 == 1)
	{
		iVar0 = func_140(1, Local_235.f_704);
	}
	if (Local_235.f_703 == 1)
	{
		if (Local_235.f_878.f_44.f_1 != iVar0)
		{
			Local_235.f_878.f_44.f_1 = iVar0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_235.f_878.f_20, 2))
		{
			if (!unk_0x159BC3DDA80D71AC(Local_235.f_878[0]))
			{
				if (func_33(Local_235.f_691[0 /*5*/], 0f, 0f, 0f, 0))
				{
					if (unk_0x159BC3DDA80D71AC(Local_235.f_719[0]))
					{
						if (!func_136(Local_235.f_719[0]))
						{
							Local_235.f_931 = 1;
							Local_235.f_691[0 /*5*/] = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_235.f_719[0]), 1) };
							Local_235.f_691[0 /*5*/].f_2 = (Local_235.f_691[0 /*5*/].f_2 + 1f);
						}
					}
				}
				if (!func_33(Local_235.f_691[0 /*5*/], 0f, 0f, 0f, 0))
				{
					unk_0x068BDE31F7D112BB("P_cargo_chute_S");
					if (func_395(&(Local_235.f_878), Local_235.f_691[0 /*5*/], 0))
					{
						unk_0x191DDA30577F440A(&(Local_235.f_878.f_20), 2);
						if (!func_3(13))
						{
							func_106(13);
						}
					}
				}
			}
		}
		if (Local_235.f_931 > 0)
		{
			Var1 = Local_235.f_931;
			Var1.f_2 = 556;
			Var1.f_5 = { func_380() };
			Var1.f_4 = 2;
			Var1.f_3 = 1;
			func_393(&(Local_235.f_878), Var1);
			if (!func_3(17))
			{
				if (unk_0x234B68AC2E35ED5A(Local_235.f_878.f_20, 2))
				{
					if (func_392(&(Local_235.f_878)))
					{
						func_106(17);
					}
				}
			}
		}
	}
}

bool func_392(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = uParam0->f_44;
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_126(uParam0, iVar1, &uVar2))
		{
			iVar3++;
		}
		iVar1++;
	}
	return iVar3 == iVar0;
}

void func_393(var uParam0, struct<6> Param1, var uParam2, var uParam3)
{
	func_394(uParam0);
	if (uParam0->f_44 != Param1)
	{
		uParam0->f_44 = Param1;
	}
	if (uParam0->f_44.f_1 != Param1.f_1)
	{
		uParam0->f_44.f_1 = Param1.f_1;
	}
	if (uParam0->f_44.f_2 != Param1.f_2)
	{
		uParam0->f_44.f_2 = Param1.f_2;
	}
	if (uParam0->f_44.f_4 != Param1.f_4)
	{
		uParam0->f_44.f_4 = Param1.f_4;
	}
	if (!func_33(uParam0->f_44.f_5, Param1.f_5, 0))
	{
		if (!func_33(Param1.f_5, 0f, 0f, 0f, 0))
		{
			uParam0->f_44.f_5 = { Param1.f_5 };
		}
	}
	if (Param1.f_3 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(uParam0->f_20, 3))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_20), 3);
		}
	}
}

void func_394(var uParam0)
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_20, 1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_5[iVar0] = -1;
			uParam0->f_10[iVar0] = -1;
			uParam0->f_15[iVar0] = -1;
			iVar0++;
		}
		unk_0x191DDA30577F440A(&(uParam0->f_20), 1);
	}
}

int func_395(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_44.f_1;
	iVar1 = joaat("p_cargo_chute_s");
	if (!unk_0xB7D6400C89373777((*uParam0)[iParam2]))
	{
		if (iVar0 != 0)
		{
			unk_0x16E516CA9C88FF48(iVar0);
			unk_0x16E516CA9C88FF48(iVar1);
			if (unk_0xA9C0BBFB9CBB66F1(iVar0))
			{
				if (unk_0x3E42A32E15B11FFA(2))
				{
					(*uParam0)[iParam2] = unk_0x99A6768052B30AE8(unk_0x61A4FE6962D74E54(joaat("pickup_portable_crate_unfixed_incar"), Param1, 0, iVar0));
					unk_0xFEDD7E9148CF3B3E((*uParam0)[iParam2], 1);
					unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1);
					unk_0xC595907BB71C921D(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 50, 0);
					unk_0x0E0A6D38926C4DD2(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1);
					unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1);
					unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1);
					unk_0xC5DE9743D6DA2C15(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]));
					unk_0xFA67B92FD990FE3A(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 0f, 0f, -0.2f);
					unk_0x61918AA39871DD2B(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1, 0);
					unk_0x3A653D4F5FA4B665(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1, 1, 0, 1, 1, 1, 1, 0);
					unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1200);
					unk_0x4C07D42235640681(unk_0xD93F965CFAC1D06A((*uParam0)[iParam2]), 1);
					unk_0x46EDFC827DC67D89(unk_0xD93F965CFAC1D06A((*uParam0)[iParam2]), 1, 1);
				}
			}
		}
	}
	if (unk_0xB7D6400C89373777((*uParam0)[iParam2]))
	{
		if (!unk_0xB7D6400C89373777(uParam0->f_30[iParam2]))
		{
			if (unk_0xA9C0BBFB9CBB66F1(iVar1))
			{
				if (unk_0x0EC2B29D4172D225("P_cargo_chute_S"))
				{
					if (func_370(&(uParam0->f_30[iParam2]), iVar1, unk_0xD6E677FAD7521410(unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 1) + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x0F1058706D5A58B4(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]), unk_0xBD11ACD80727BD31((*uParam0)[iParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]), 1);
						unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]), 0);
						unk_0xFFE2CF1579FA5C68(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0x20CC00CC70A99443(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]));
						unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(uParam0->f_30[iParam2]), 1200);
						func_71(&(uParam0->f_21[iParam2 /*2*/]));
					}
				}
			}
		}
	}
	if (unk_0xB7D6400C89373777((*uParam0)[iParam2]) && unk_0xB7D6400C89373777(uParam0->f_30[iParam2]))
	{
		return 1;
	}
	return 0;
}

int func_396(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_397(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x443E2CA72E118E64())
		{
			func_104(uParam0, 0, 0);
		}
	}
}

void func_398()
{
	func_411();
	if (unk_0x234B68AC2E35ED5A(iLocal_327, 9))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_327, 0))
	{
		unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
		unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
		unk_0x191DDA30577F440A(&iLocal_327, 0);
	}
	switch (Local_235.f_703)
	{
		case 1:
			func_410();
			break;
	}
	if (func_105(&(Local_235.f_804)))
	{
		func_399((func_12() - func_131(&(Local_235.f_804), 0, 0)), func_10(), &uLocal_365, -1);
	}
}

void func_399(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_408(unk_0x1146A9AE09CE2B14()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_407(uParam2);
		return;
	}
	iVar1 = func_406(unk_0x1146A9AE09CE2B14());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (unk_0xDA654EB115F9FF7D(func_405(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (uParam2->f_1 > -1)
	{
		iVar0 = uParam2->f_1;
	}
	if (!unk_0x234B68AC2E35ED5A(*uParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0xFB8A6909539A30B1(func_405(iVar1)))
			{
				unk_0x191DDA30577F440A(uParam2, 0);
				unk_0x191DDA30577F440A(uParam2, 1);
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(*uParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam2, 2))
			{
				if (unk_0x8A54885A635DC8D1(func_404(iVar1)))
				{
					unk_0x8FF71A24509DA743("AllowScoreAndRadio", 1);
					unk_0x4F62815699141072(0);
					unk_0x191DDA30577F440A(uParam2, 2);
				}
			}
			if (!unk_0x234B68AC2E35ED5A(*uParam2, 3))
			{
				if (unk_0xFB8A6909539A30B1(func_403(iVar1)))
				{
					unk_0x191DDA30577F440A(uParam2, 3);
				}
			}
			if (unk_0x234B68AC2E35ED5A(*uParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x234B68AC2E35ED5A(*uParam2, 4))
					{
						unk_0x4F62815699141072(1);
						unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
						unk_0x191DDA30577F440A(uParam2, 4);
					}
					if (iParam0 <= 5000 && func_402(iVar1))
					{
						if (!unk_0x234B68AC2E35ED5A(*uParam2, 8))
						{
							unk_0x9B0169E27978C1A2(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
							unk_0x191DDA30577F440A(uParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0xFB8A6909539A30B1(func_400(iVar1)))
						{
							unk_0x08918C6897982748(func_404(iVar1));
							unk_0xC664C0067EEAB8D1(uParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
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
		case 236:
		case 243:
		case 150:
		case 158:
		case 256:
		case 258:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_FADE_IN_RADIO";
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_401(int iParam0)
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

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S";
	}
	return "FM_COUNTDOWN_30S";
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_COUNTDOWN_30S_KILL";
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_405(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
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
		case 236:
		case 150:
		case 243:
		case 158:
		case 256:
		case 258:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	if (func_401(iParam0) != -1)
	{
		return "IE_PRE_COUNTDOWN_STOP";
	}
	return "FM_PRE_COUNTDOWN_30S";
}

int func_406(int iParam0)
{
	if (func_252(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

void func_407(var uParam0)
{
	int iVar0;
	
	iVar0 = func_406(unk_0x1146A9AE09CE2B14());
	if (unk_0x234B68AC2E35ED5A(*uParam0, 1))
	{
		if (!unk_0x234B68AC2E35ED5A(*uParam0, 5))
		{
			if (unk_0x234B68AC2E35ED5A(*uParam0, 2))
			{
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 4))
				{
					unk_0x4F62815699141072(1);
					unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0x234B68AC2E35ED5A(*uParam0, 6))
			{
				if (unk_0xFB8A6909539A30B1(func_404(iVar0)))
				{
					unk_0x191DDA30577F440A(uParam0, 6);
				}
			}
			if (unk_0x234B68AC2E35ED5A(*uParam0, 6))
			{
				if (!unk_0x234B68AC2E35ED5A(*uParam0, 7))
				{
					if (unk_0xFB8A6909539A30B1(func_400(iVar0)))
					{
						unk_0x191DDA30577F440A(uParam0, 7);
					}
				}
				if (unk_0x234B68AC2E35ED5A(*uParam0, 7))
				{
					unk_0x191DDA30577F440A(uParam0, 5);
				}
			}
		}
	}
}

bool func_408(int iParam0)
{
	return func_409(iParam0, 20);
}

bool func_409(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_410()
{
}

void func_411()
{
	if (unk_0x234B68AC2E35ED5A(iLocal_327, 8))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_327, 9))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_327, 10))
			{
				if (unk_0x234B68AC2E35ED5A(iLocal_327, 11))
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_327, 12))
					{
						unk_0x4F62815699141072(1);
						unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x234B68AC2E35ED5A(iLocal_327, 15))
				{
					if (unk_0xFB8A6909539A30B1("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x191DDA30577F440A(&iLocal_327, 15);
					}
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_327, 15))
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_327, 13))
					{
						if (unk_0xFB8A6909539A30B1("APT_FADE_IN_RADIO"))
						{
							unk_0x191DDA30577F440A(&iLocal_327, 13);
						}
					}
					if (unk_0x234B68AC2E35ED5A(iLocal_327, 13))
					{
						unk_0x191DDA30577F440A(&iLocal_327, 10);
					}
				}
			}
		}
	}
}

void func_412()
{
	if (!func_2217())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_325, 18))
	{
		unk_0x20D884FB6567BAD5(0);
		unk_0x191DDA30577F440A(&iLocal_325, 18);
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_324, 15))
	{
		unk_0x20D884FB6567BAD5(3);
		unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 3, 0);
		unk_0xC664C0067EEAB8D1(&iLocal_324, 15);
	}
}

void func_413(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_561(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_559() || iParam2 == 28)
	{
		if (func_504(uParam1, iParam2, uParam3, Global_1574200, 0, func_557(), sParam7))
		{
			func_503(1);
			if ((!func_501() && !func_499()) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
			{
				if (func_498())
				{
					func_493();
				}
				else
				{
					unk_0x53CE6C5893F65093(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_492(1);
						Global_1574200 = 0;
						iVar19 = -1;
						if (Global_1574421 != 1)
						{
							func_491(uParam1, 0, 0);
							if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
							{
								unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
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
								if (func_2342(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
									if (!func_39(iVar3, 0))
									{
										if ((func_487(iVar3) || Global_2426865[iVar3 /*449*/].f_245 != -1) || func_236(iVar3))
										{
											iVar9 = iVar3;
											if (func_486(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_483(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_480(unk_0x1146A9AE09CE2B14(), 0) && func_406(unk_0x1146A9AE09CE2B14()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_479())
							{
								if (func_2342(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
								}
								else
								{
									iVar3 = func_24();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_478(iVar3) && func_473(iVar3, iParam2)) && func_2342(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
								Var6 = { func_468(iVar3) };
								if (iVar3 == unk_0x1146A9AE09CE2B14())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xF04DBC0AC5A2AB23(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_48(iVar3) };
								iVar5 = func_462(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
								}
								Global_1574200++;
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
									if (!func_479())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_457(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_456(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_451(iVar3, 0);
								if (bVar2)
								{
									if (func_450(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_449(iParam5))
								{
									func_448(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_448(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x191DDA30577F440A(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							if (func_2342(iVar3, 0, 1) && !unk_0x234B68AC2E35ED5A(iVar14, iVar3))
							{
								iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							}
							else
							{
								iVar3 = func_24();
							}
							if (func_478(iVar3))
							{
								if (func_2342(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
									Var6 = { func_468(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_48(iVar3) };
									iVar5 = func_462(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
									}
									Global_1574200++;
									iVar16 = func_451(iVar3, 1);
									if (bVar2)
									{
										if (func_450(iVar3, 1))
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
									func_426(iVar3, unk_0xF04DBC0AC5A2AB23(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							func_423(uParam3, uParam1, iParam2);
						}
						func_71(&(uParam3->f_21));
						func_422();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
						{
							func_421(uParam3, uParam1);
							func_420(uParam1, 0, 1);
							unk_0x191DDA30577F440A(&(uParam3->f_33), 7);
						}
						func_421(uParam3, uParam1);
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							unk_0x191DDA30577F440A(&(uParam3->f_33), 11);
						}
						if (func_416(uParam3))
						{
							Global_1574421 = 1;
						}
						func_414(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xDAE4BC89A198A6AF(*uParam1))
					{
						unk_0x0F33095580A670CE(7);
						unk_0x43D93129BD1AD792(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0F33095580A670CE(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_422();
			func_492(0);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
			}
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 10))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x17552FF90A99ABEA();
}

void func_414(var uParam0)
{
	if (!func_105(&(uParam0->f_21)))
	{
		func_104(&(uParam0->f_21), 0, 0);
	}
	else if (func_103(&(uParam0->f_21), 250, 0))
	{
		func_71(&(uParam0->f_21));
		func_415(0);
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_416(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xC502CD39B4994F3A(uParam0->f_37);
	if (iVar3 != func_24() && func_2342(iVar3, 0, 1))
	{
		Var2 = { func_48(iVar3) };
		iVar1 = func_419(uParam0, uParam0->f_37);
		if (func_418(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x9FA24EA712B9DC35(&Var2))
						{
							iVar4 = 1;
							func_417(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_417(uParam0, iVar0, 0);
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

void func_417(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

var func_419(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x704F8697BB515627(*uParam0, "COLLAPSE"))
	{
		unk_0x9D7453DF8B7E9E0B(iParam1);
		unk_0x392841D58D2EED1D();
	}
	if (iParam2 == 1)
	{
		if (unk_0x704F8697BB515627(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_421(var uParam0, var uParam1)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_33, 10))
	{
		unk_0x704F8697BB515627(*uParam1, "SET_HIGHLIGHT");
		unk_0x9E3D03981E2E9AD9(uParam0->f_35);
		unk_0x392841D58D2EED1D();
		unk_0x191DDA30577F440A(&(uParam0->f_33), 10);
	}
}

void func_422()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_423(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar0);
		if (iVar2 != func_24())
		{
			if (func_2342(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_425(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_424(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_424(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		if (unk_0x704F8697BB515627(*uParam0, "SET_ICON"))
		{
			unk_0x9E3D03981E2E9AD9(iParam1);
			unk_0x9E3D03981E2E9AD9(iParam2);
			if (iParam2 == 65)
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

int func_425(int iParam0, bool bParam1, int iParam2)
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

void func_426(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_447() && iParam4 < func_446())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x704F8697BB515627(*uParam2, sVar1))
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(iParam10);
			}
			func_445(sParam1);
			unk_0x9E3D03981E2E9AD9(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(65);
			}
			unk_0x9E3D03981E2E9AD9(-1);
			func_445("");
			if (uParam3->f_108 == 6)
			{
				func_445("");
			}
			else
			{
				func_445(&sParam5);
			}
			func_431(uParam3, iParam0);
			unk_0x386C67F2B8055D74(sParam9);
			unk_0x386C67F2B8055D74(sParam9);
			if (func_430(uParam3))
			{
				func_429("DPAD_FRIEND");
			}
			else if (func_428(uParam3))
			{
				func_429("DPAD_FRIEND");
			}
			else if (func_427(uParam3))
			{
				func_429("DPAD_CREW");
			}
			else
			{
				func_429("");
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

bool func_427(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 6);
}

bool func_428(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 5);
}

void func_429(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

int func_430(var uParam0)
{
	if (func_428(uParam0) && func_427(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_431(var uParam0, int iParam1)
{
	if (func_444(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(121);
	}
	else if (func_435(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(122);
	}
	else if (((unk_0x234B68AC2E35ED5A(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x234B68AC2E35ED5A(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		unk_0x9E3D03981E2E9AD9(123);
	}
	else
	{
		if (func_432())
		{
			uParam0->f_36 = 0;
		}
		unk_0x9D7453DF8B7E9E0B(uParam0->f_36);
	}
}

int func_432()
{
	if (unk_0xE45310E861787FC2())
	{
		if (func_433() || func_347())
		{
			return 1;
		}
	}
	return 0;
}

bool func_433()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_347();
	}
	return func_434(Global_4456448.f_85535);
}

int func_434(int iParam0)
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

int func_435(int iParam0)
{
	if ((func_2342(iParam0, 0, 1) && func_439()) && func_436(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0, bool bParam1)
{
	return func_437(iParam0, bParam1, 1);
}

int func_437(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_438(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_24() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	if (iParam0 != func_24())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_24())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_439()
{
	if (func_253(unk_0x1146A9AE09CE2B14()) || func_443())
	{
		if (!func_440(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	return 1;
}

int func_440(int iParam0)
{
	if (func_442(iParam0) == 236 || func_442(iParam0) == 150)
	{
		return func_441(iParam0);
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_443()
{
	switch (func_406(unk_0x1146A9AE09CE2B14()))
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

int func_444(int iParam0)
{
	if (func_432())
	{
		if (func_2342(iParam0, 0, 1))
		{
			return func_486(iParam0);
		}
	}
	if ((func_2342(iParam0, 0, 1) && func_439()) && func_438(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_445(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

int func_446()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_447()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_448(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_447() && iParam3 < func_446())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
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
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xDAE4BC89A198A6AF(*uParam1))
		{
			if (unk_0x704F8697BB515627(*uParam1, sVar1))
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
				if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					func_429(sParam16);
				}
				else
				{
					func_445(&(uParam2->f_1));
				}
				unk_0x9E3D03981E2E9AD9(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(65);
				}
				if (iParam12 == 1)
				{
					unk_0x9E3D03981E2E9AD9(iVar0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(-1);
				}
				if (func_479())
				{
					func_445("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_TWO_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21300A5159EC89B1(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x38CD3C04C877C35F(iParam10);
					}
					unk_0x1896EC0B030A48A2(&(uParam2->f_104));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x35CA0C119E6A2A27("FM_AE_CASH");
					unk_0xDA0C49A6D01B065C(iParam10, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x35CA0C119E6A2A27("FM_AE_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						unk_0x35CA0C119E6A2A27("FM_NG_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
					{
						func_429(&(uParam2->f_104));
					}
					else
					{
						func_445("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam14, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (fParam13 != -1f)
				{
					unk_0x35CA0C119E6A2A27("NUMBER");
					unk_0x21300A5159EC89B1(fParam13, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (iParam10 != -1)
				{
					unk_0x9E3D03981E2E9AD9(iParam10);
				}
				else
				{
					func_445("");
				}
				if (uParam2->f_108 == 6)
				{
					func_445("");
				}
				else
				{
					func_445(&sParam4);
				}
				func_431(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB6A270F84A8781E(sParam8))
				{
					func_445("");
					func_445("");
				}
				else
				{
					unk_0x386C67F2B8055D74(sParam8);
					unk_0x386C67F2B8055D74(sParam8);
				}
				if (func_430(uParam2))
				{
					func_429("DPAD_FRIEND");
				}
				else if (func_428(uParam2))
				{
					func_429("DPAD_FRIEND");
				}
				else if (func_427(uParam2))
				{
					func_429("DPAD_CREW");
				}
				else
				{
					func_429("");
				}
				unk_0x392841D58D2EED1D();
			}
		}
	}
}

int func_449(int iParam0)
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

bool func_450(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_486(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_24();
}

int func_451(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_253(iParam0)) && !func_408(iParam0))
	{
		iVar0 = func_455();
	}
	iVar1 = func_454(iParam0);
	if (!iVar1 == -1)
	{
		return func_452(iVar1);
	}
	return iVar0;
}

int func_452(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_453(iParam0);
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

var func_453(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_454(int iParam0)
{
	if (!iParam0 == func_24())
	{
		if (func_450(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_23(iParam0)];
		}
	}
	return -1;
}

int func_455()
{
	return 21;
}

char* func_456(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xA700E2BE6F531543())
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
			if (unk_0xA700E2BE6F531543())
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

int func_457(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_461(iParam3))
	{
		*fParam1 = (func_458(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_449(iParam3))
	{
		*fParam1 = (func_458(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_458(int iParam0, int iParam1)
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
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_460(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_459(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_459(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_460(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_461(int iParam0)
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

int func_462(int iParam0)
{
	int iVar0;
	
	iVar0 = func_465(iParam0);
	if (iVar0 == -1)
	{
		func_463(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_463(int iParam0, bool bParam1)
{
	if (!func_2342(iParam0, 0, 1))
	{
		return;
	}
	if (func_465(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_464(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_464(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (!func_2342(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEC92E04062037949(Global_1391551[iVar0 /*5*/].f_2) && unk_0x80B82FD1974E28E0(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_466(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_466(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1391712)
	{
		Global_1391551[iVar2 /*5*/] = { Global_1391551[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_467(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_467(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_24();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

struct<4> func_468(int iParam0)
{
	struct<4> Var0;
	
	if (func_2342(iParam0, 0, 1))
	{
		Global_2518253 = { func_48(iParam0) };
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (func_418(Global_2518253))
			{
				if (!unk_0x94D4A49E53F5209A(&Global_2518253))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x68B90AB279E39C7B(0))
		{
			return Var0;
		}
		if (func_472(&Global_2518253))
		{
			Global_2518183 = { func_470(iParam0) };
			func_469(&Global_2518183, &Var0);
		}
	}
	return Var0;
}

void func_469(var uParam0, var uParam1)
{
	unk_0xDE25303DF0CA8E75(uParam0, 35, uParam1);
}

struct<35> func_470(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_471(iParam0))
	{
		return Global_1312934[unk_0x1146A9AE09CE2B14() /*35*/];
	}
	Var0 = { func_48(iParam0) };
	unk_0xEDDAF8F99F371228(&Var1, 35, &Var0);
	return Var1;
}

int func_471(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return 1;
	}
	return 0;
}

int func_472(var uParam0)
{
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_477(iParam0) || func_476(iParam0)) || func_475(iParam0))
		{
			return 0;
		}
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	if ((!func_487(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_236(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_474(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_475(int iParam0)
{
	if (func_477(iParam0))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8);
}

int func_476(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 10) || unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

bool func_477(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_478(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_479()
{
	switch (func_406(unk_0x1146A9AE09CE2B14()))
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
	switch (func_442(unk_0x1146A9AE09CE2B14()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_408(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_406(unk_0x1146A9AE09CE2B14()))
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
	if (func_440(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_481(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_481(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_481(int iParam0)
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
	return func_482(iParam0, 0);
	return 0;
}

int func_482(int iParam0, int iParam1)
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

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_2342(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_39(iVar1, 0))
			{
				if ((func_487(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_236(iVar1))
				{
					if (func_484(iVar1, iParam1, 0))
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

int func_484(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_24())
	{
		if (!bParam2)
		{
			if (func_485(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_24())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_485(int iParam0, int iParam1)
{
	if (iParam1 != func_24())
	{
		if (iParam0 != func_24())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_24())
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

int func_486(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_24())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_487(int iParam0)
{
	if (!func_2342(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_2342(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		return 0;
	}
	if (!func_488(iParam0))
	{
		return 0;
	}
	if ((unk_0xEBB066F8EADD0C1F(iParam0, unk_0x1146A9AE09CE2B14()) || func_406(iParam0) == 233) || func_406(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_488(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_489(unk_0x1146A9AE09CE2B14());
	bVar1 = func_489(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_489(int iParam0)
{
	return func_490(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_490(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

void func_491(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x9E3D03981E2E9AD9(iParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x392841D58D2EED1D();
	}
}

void func_492(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_493()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
	{
		if (func_497())
		{
			func_494();
		}
	}
}

void func_494()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_495(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_495(var uParam0, int iParam1)
{
	func_496(uParam0, iParam1);
}

void func_496(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_497()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

int func_498()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0) && func_497())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1) && func_497())
	{
		return 1;
	}
	return 0;
}

int func_499()
{
	if (func_497())
	{
		if (func_500(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)
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

int func_501()
{
	if (func_497())
	{
		if (func_502(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0)
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

void func_503(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_504(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_556(iParam1);
	fVar4 = func_555();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_554())
		{
			if (func_553() > 0 && Global_1574202)
			{
				unk_0xD8A14DD983454D11();
				unk_0x643A5EAD42A4060C(fVar4);
				unk_0xEFD424FDD55A6EC7(18);
				if (unk_0xE8FFE38E2BA32BD6())
				{
					unk_0xBD35EB504610C23C();
				}
				unk_0xEFD424FDD55A6EC7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_538())
		{
			func_537(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
	{
		func_537(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_105(&(uParam2->f_19)))
	{
		if (func_553() == 1)
		{
			func_536(bVar3, uParam0, 0);
			func_104(&(uParam2->f_19), 0, 0);
			func_537(uParam0, uParam2, 0);
			unk_0x191DDA30577F440A(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_105(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE8FFE38E2BA32BD6())
		{
			unk_0xBD35EB504610C23C();
		}
		unk_0xEFD424FDD55A6EC7(10);
		if (func_103(&(uParam2->f_19), 10000, 0) || (func_553() == 0 && !bParam5))
		{
			func_537(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_535();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD8A14DD983454D11();
				}
				unk_0xEFD424FDD55A6EC7(18);
			}
			if (!unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_535();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD8A14DD983454D11();
					}
					unk_0xEFD424FDD55A6EC7(18);
				}
				unk_0x643A5EAD42A4060C(fVar4);
				if (func_536(bVar3, uParam0, 0))
				{
					func_491(uParam0, 0, 0);
					sVar1 = func_533(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_531(iParam1) };
					if (bParam4)
					{
						func_528(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_521(uParam0, func_525(uParam2), func_522(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_514(uParam2);
						if (!unk_0xAB6A270F84A8781E(sParam6))
						{
							sVar6 = sParam6;
						}
						func_512(uParam0, sVar6, func_513(), -1);
					}
					else if (func_432())
					{
						uParam2->f_34 = Global_1574201;
						func_528(uParam0, sVar1, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_505(iParam1);
						uParam2->f_34 = Global_1574201;
						func_528(uParam0, sVar1, "", 0, iVar5, Global_1574201, 1);
					}
					else
					{
						iVar5 = func_505(iParam1);
						func_528(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x191DDA30577F440A(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				unk_0x643A5EAD42A4060C(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						unk_0xC664C0067EEAB8D1(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_505(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_511())
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
			if (func_510(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 20;
			}
			if (func_509(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_508(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = 2;
	}
	if (func_506())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_506()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_44();
	}
	return func_507(Global_4456448.f_85535);
}

int func_507(int iParam0)
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

bool func_508(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_509(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_510(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_511()
{
	return Global_4456448.f_1 == 0;
}

void func_512(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_429(sParam1);
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_429("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_513()
{
	switch (func_406(unk_0x1146A9AE09CE2B14()))
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

char* func_514(var uParam0)
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
	switch (func_406(unk_0x1146A9AE09CE2B14()))
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
			if (func_517())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_516(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_516(1))
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
			if (func_515(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_515(int iParam0)
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

bool func_516(bool bParam0)
{
	return func_436(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_517()
{
	return (func_520() && func_518(func_519()));
}

bool func_518(int iParam0)
{
	return func_438(iParam0, 1);
}

int func_519()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

bool func_520()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

void func_521(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_429(sParam1);
		}
		else if (func_442(unk_0x1146A9AE09CE2B14()) == 133)
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT_C");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_429("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_522(var uParam0)
{
	int iVar0;
	
	iVar0 = func_442(unk_0x1146A9AE09CE2B14());
	if (func_524())
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
			switch (func_523())
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

int func_523()
{
	if (func_442(unk_0x1146A9AE09CE2B14()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

bool func_524()
{
	return Global_1590781;
}

char* func_525(var uParam0)
{
	int iVar0;
	
	iVar0 = func_442(unk_0x1146A9AE09CE2B14());
	if (func_524())
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
			if (func_527() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_527() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_523())
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
			if (func_526() == 1)
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

int func_526()
{
	return Global_2544210.f_5115;
}

int func_527()
{
	if (func_442(unk_0x1146A9AE09CE2B14()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_528(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_445(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x35CA0C119E6A2A27(sParam1);
			unk_0x38CD3C04C877C35F(iParam5);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_429(sParam1);
		}
		if (func_554() && iParam6)
		{
			if (func_530())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x35CA0C119E6A2A27("LBD_DPD_CNT");
			unk_0x38CD3C04C877C35F(iVar0);
			unk_0x38CD3C04C877C35F(iVar1);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_429(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (func_529(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x9E3D03981E2E9AD9(166);
			}
			else if (func_44())
			{
				unk_0x9E3D03981E2E9AD9(220);
			}
		}
		unk_0x392841D58D2EED1D();
	}
}

int func_529(int iParam0)
{
	if (func_510(iParam0) || func_509(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_530()
{
	return Global_1574202;
}

struct<4> func_531(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_532(unk_0x1146A9AE09CE2B14()) || func_508(unk_0x1146A9AE09CE2B14()))
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
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_432() && unk_0xE45310E861787FC2())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_532(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_533(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_432() || unk_0xAB6A270F84A8781E(sParam1)))
	{
		uVar0 = func_534();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
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

char* func_534()
{
	if (unk_0xC33B9889A311ABB0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5381ADE2AB48C34C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8E3B6139DCC5E397())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4FCCBCCCB1A46E9F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_535()
{
	Global_42937 = 1;
}

bool func_536(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_matchmaking_card");
	}
	return unk_0xDAE4BC89A198A6AF(*uParam1);
}

void func_537(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_422();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_105(&(uParam1->f_19)))
		{
			func_71(&(uParam1->f_19));
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 5);
		}
	}
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x3D9BC07C93913E04(uParam0);
	}
	if (unk_0x234B68AC2E35ED5A(uParam1->f_33, 0))
	{
		unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 0);
	}
	unk_0x643A5EAD42A4060C(0f);
}

int func_538()
{
	if (func_552())
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (!func_549())
	{
		return 0;
	}
	if (!func_547())
	{
		return 0;
	}
	if (func_546(8, -1))
	{
		return 0;
	}
	if (func_553() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	else if (!func_174(unk_0x1146A9AE09CE2B14(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_544(1) || func_542(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (func_541() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_212(unk_0x1146A9AE09CE2B14()) && !func_541())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_540(0))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_539(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_539(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_540(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

bool func_541()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_542(bool bParam0)
{
	if (unk_0x4AA05D0E8631839E())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_543(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5C6675393464A814(0, 25) || unk_0x5C6675393464A814(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (unk_0x5C6675393464A814(0, 19) || (!bParam0 && unk_0x51794501073F0A33(0, 19)))
	{
		return 1;
	}
	if (unk_0x3640D836D145B814())
	{
		if (((unk_0x5C6675393464A814(0, 166) || unk_0x5C6675393464A814(0, 167)) || unk_0x5C6675393464A814(0, 168)) || unk_0x5C6675393464A814(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x51794501073F0A33(0, 166) || unk_0x51794501073F0A33(0, 167)) || unk_0x51794501073F0A33(0, 168)) || unk_0x51794501073F0A33(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (unk_0x8ACA9ACB93EC151E())
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_544(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

bool func_545()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_546(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

int func_547()
{
	if (func_548() == 0)
	{
		return 1;
	}
	return 0;
}

int func_548()
{
	return Global_1312485.f_18;
}

int func_549()
{
	if (func_550())
	{
		return 1;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB())
	{
		return 0;
	}
	if (unk_0xA2DFFBCD9CFB74A3())
	{
		return 0;
	}
	return 1;
}

bool func_550()
{
	return Global_1312458;
}

bool func_551()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

bool func_552()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_553()
{
	return Global_1379108.f_68;
}

int func_554()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_555()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x037D8E0CFB994CB5()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_556(int iParam0)
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

int func_557()
{
	if (func_558(unk_0x1146A9AE09CE2B14()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_558(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (func_39(iParam0, 0))
		{
			return unk_0x206C14525FF9EA88(iParam0);
		}
	}
	return 0;
}

int func_559()
{
	if (func_557())
	{
		return 1;
	}
	if (func_475(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_524())
	{
		return 1;
	}
	if (func_253(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_442(unk_0x1146A9AE09CE2B14()))
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
				if (!func_560(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_560(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_560(unk_0x1146A9AE09CE2B14()))
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

bool func_560(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_561(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_253(unk_0x1146A9AE09CE2B14()) && !func_408(unk_0x1146A9AE09CE2B14())) && !func_440(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_252(unk_0x1146A9AE09CE2B14(), 0) && func_408(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
		if (func_562(unk_0x1146A9AE09CE2B14()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_562(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_253(iParam0) && !func_477(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_408(iParam0);
	uVar3 = func_575();
	uVar4 = func_566();
	if ((bVar1 && (func_441(iParam0) || func_565(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_564(iParam0)) && !func_563(iParam0)))
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

bool func_563(int iParam0)
{
	return func_409(iParam0, 19);
}

int func_564(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_409(iParam0, 9);
	}
	return 0;
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_566()
{
	if ((func_409(unk_0x1146A9AE09CE2B14(), 21) || func_409(unk_0x1146A9AE09CE2B14(), 22)) || func_572())
	{
		return 1;
	}
	if (func_568())
	{
		func_567(22);
		return 1;
	}
	return 0;
}

void func_567(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

int func_568()
{
	if (func_252(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (((func_575() && !func_571()) || func_570(unk_0x1146A9AE09CE2B14(), 21)) || func_570(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		else
		{
			func_569(27);
		}
	}
	return 0;
}

void func_569(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_570(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_571()
{
	return Global_1312436.f_1;
}

bool func_572()
{
	return func_573(390, -1);
}

int func_573(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_574(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_574(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

bool func_575()
{
	return Global_1312436;
}

void func_576()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	Var3.f_2.f_1 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_577(iVar0);
				break;
			
			case 174:
				unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -376395899:
						if (unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 4))
						{
							unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 19);
						}
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_577(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 13))
	{
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (unk_0x419E13582192CFEA(Var0))
			{
				if (unk_0x55F5BD4ABD80B211(Var0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_235.f_774, iVar4))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_5, iVar4))
						{
							if (func_363(iVar4))
							{
								if (unk_0x419E13582192CFEA(func_582(iVar4)))
								{
									if (unk_0x611CD1312FD3CA66(Var0) == func_582(iVar4))
									{
										if (unk_0x419E13582192CFEA(Var0.f_1))
										{
											if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
											{
												if (unk_0xFAA5505029C4B5A6(Var0.f_1) == unk_0x7D2B9E6A64637269())
												{
													if (func_2218() == Local_235.f_789)
													{
														unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_5), iVar4);
													}
												}
												else if (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0.f_1)))
												{
													iVar5 = unk_0xCB567ED25393C1DF(unk_0xFAA5505029C4B5A6(Var0.f_1));
													if (!unk_0xFCC26BA7572E9F1F(iVar5))
													{
														unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_5), iVar4);
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
			iVar4++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 30)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_235.f_779, iVar4))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_7, iVar4))
				{
					if (unk_0x419E13582192CFEA(Var0))
					{
						if (unk_0xA2CCAAC7F5CA3F49(Var0))
						{
							iVar2 = unk_0xFAA5505029C4B5A6(Var0);
							if (unk_0x159BC3DDA80D71AC(Local_235.f_10[iVar4 /*15*/].f_1))
							{
								if (iVar2 == unk_0x8A437068C87289B7(Local_235.f_10[iVar4 /*15*/].f_1))
								{
									if (unk_0x419E13582192CFEA(Var0.f_1))
									{
										if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
										{
											iVar1 = unk_0xFAA5505029C4B5A6(Var0.f_1);
											if (unk_0x72D30262CF8C8603(iVar1))
											{
												iVar3 = unk_0xCB567ED25393C1DF(iVar1);
												if (unk_0xFCC26BA7572E9F1F(iVar3))
												{
													if (Var0.f_5)
													{
														if (iVar3 == unk_0x1146A9AE09CE2B14())
														{
															unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_7), iVar4);
														}
													}
													else
													{
														unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_13), iVar4);
													}
												}
												else if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_9, iVar4))
												{
													if (Var0.f_5)
													{
														unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_9), iVar4);
													}
												}
											}
											else if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_10, iVar4))
											{
												if (Var0.f_5)
												{
													unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_10), iVar4);
												}
											}
										}
										else if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_10, iVar4))
										{
											if (Var0.f_5)
											{
												unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_10), iVar4);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar4++;
		}
		if (!unk_0x234B68AC2E35ED5A(iLocal_324, 15))
		{
			if (unk_0x419E13582192CFEA(Var0))
			{
				if (unk_0xA2CCAAC7F5CA3F49(Var0))
				{
					iVar2 = unk_0xFAA5505029C4B5A6(Var0);
					if (func_581(unk_0x6471F4759775FCA4(iVar2)))
					{
						unk_0x191DDA30577F440A(&iLocal_324, 15);
					}
				}
				else if (unk_0x55F5BD4ABD80B211(Var0))
				{
					if (func_580(unk_0x6471F4759775FCA4(Var0)))
					{
						if (!func_579(unk_0x7D2B9E6A64637269(), unk_0x611CD1312FD3CA66(Var0), 0))
						{
							if (!func_578(unk_0x611CD1312FD3CA66(Var0), 0, 1))
							{
								unk_0x191DDA30577F440A(&iLocal_324, 15);
							}
						}
					}
				}
			}
		}
	}
}

int func_578(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x9B73EB6255D4AE81(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x27FC1B0077581B37(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if (unk_0x72D30262CF8C8603(iVar2))
						{
							if (!bParam2 && func_47(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						if (!bParam2 && func_47(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
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

int func_579(int iParam0, int iParam1, int iParam2)
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

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case joaat("s_m_y_cop_01"):
		case joaat("s_f_y_cop_01"):
		case joaat("s_m_y_swat_01"):
		case joaat("s_m_m_fiboffice_01"):
		case joaat("s_m_y_sheriff_01"):
		case joaat("s_f_y_sheriff_01"):
		case joaat("s_m_y_ranger_01"):
		case joaat("s_f_y_ranger_01"):
		case joaat("s_m_m_armoured_01"):
		case joaat("s_m_y_pilot_01"):
		case joaat("s_m_m_fibsec_01"):
			return 1;
			break;
	}
	return 0;
}

int func_582(int iParam0)
{
	return unk_0x854C404AEB476240(func_307(iParam0));
}

void func_583()
{
	if (func_39(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	switch (Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_17)
	{
		case 0:
			if (Local_235.f_703 == 1)
			{
				Local_238 = 3;
				Local_238.f_2 = 1;
				Local_238.f_3 = 1;
				Local_238.f_29 = joaat("buzzard");
				Local_238.f_31 = joaat("s_m_y_blackops_02");
				Local_238.f_6 = { func_380() };
				Local_238.f_4 = 40;
			}
			else if (Local_235.f_703 == 0)
			{
				Local_238 = 4;
				Local_238.f_2 = 2;
				Local_238.f_3 = 2;
				Local_238.f_31 = joaat("mp_g_m_pros_01");
				Local_238.f_29 = joaat("fugitive");
				Local_238.f_6 = { func_380() };
				func_2156();
			}
			func_2155(&Local_238, 1);
			func_2134(&uLocal_202, &(Local_235.f_942));
			func_2116();
			func_1096();
			func_1093();
			func_1092();
			func_584();
			if (Local_235.f_786 == 2)
			{
				Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_17 = 2;
			}
			else if (Local_235.f_786 == 3)
			{
				Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_17 = 3;
			}
			break;
		
		case 2:
			func_584();
			if (Local_235.f_786 == 3)
			{
				Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_17 = 3;
			}
			break;
		
		case 3:
			func_2231();
			break;
	}
}

void func_584()
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = unk_0xDD0E57E73E5C4BF6();
	iVar2 = unk_0x1146A9AE09CE2B14();
	if (func_39(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar1 = func_1091();
		iVar2 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_323[iVar1 /*26*/].f_1, 3))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_324, 3))
		{
			if (func_3(19))
			{
			}
			else if (func_3(17))
			{
				if (func_562(iVar2) >= 2)
				{
					func_1062(-1, 1, 1, 1);
					func_1059();
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 1, &Var0, 0);
						func_910();
						func_777(1, 1, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
					unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(4))
			{
				if (func_562(iVar2) >= 2)
				{
					func_1059();
					func_1062(-1, 1, 0, 1);
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 1, &Var0, 0);
						func_910();
						func_777(1, 1, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
					unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(3))
			{
				if (unk_0xDD0E57E73E5C4BF6() == Local_235.f_789 || func_2218() == Local_235.f_789)
				{
					if (func_562(iVar2) >= 2)
					{
						func_1059();
						func_1062(-1, 0, 0, 1);
					}
					if (iVar2 == unk_0x1146A9AE09CE2B14())
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
						{
							func_911(227, 0, &Var0, 0);
							func_910();
							func_777(0, 2, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
							unk_0x191DDA30577F440A(&iLocal_324, 6);
						}
					}
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(9))
			{
				if (func_729())
				{
					func_1059();
					func_1062(-1, 0, 0, 1);
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 0, &Var0, 0);
						func_910();
						func_777(0, 2, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(8))
			{
				if (func_729())
				{
					if (func_562(iVar2) >= 2)
					{
						func_1059();
						func_1062(-1, 0, 0, 1);
					}
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 0, &Var0, 0);
						func_910();
						func_777(0, 2, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(15))
			{
				if (func_729())
				{
					if (func_562(iVar2) >= 2)
					{
						func_1059();
						func_1062(-1, 0, 0, 1);
						func_728(26);
					}
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 0, &Var0, 0);
						func_910();
						func_777(0, 2, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
			else if (func_3(5))
			{
				if (func_729())
				{
					if (func_2217())
					{
						if (func_562(iVar2) >= 2)
						{
						}
					}
					else if (func_562(iVar2) >= 2)
					{
						func_689(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_324, 6))
					{
						func_911(227, 0, &Var0, 0);
						func_910();
						func_777(0, 8, Local_235.f_704, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_324, 6);
					}
				}
				unk_0x191DDA30577F440A(&iLocal_324, 3);
			}
		}
		if (unk_0x234B68AC2E35ED5A(iLocal_324, 3))
		{
			func_682();
			func_681();
			if (unk_0xDD0E57E73E5C4BF6() == Local_235.f_789)
			{
				if (func_680() > -1f)
				{
					if (!func_3(16) && !unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 10))
					{
						if ((((((func_3(15) || func_3(3)) || func_3(8)) || func_3(9)) || func_105(&(Local_235.f_798))) || func_3(5)) || func_3(17))
						{
							func_642();
						}
						else
						{
							unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 10);
						}
						if (iLocal_349 == 2)
						{
							unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 10);
						}
						if (iLocal_349 == 3)
						{
							unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 10);
						}
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_327, 8))
			{
				func_626();
				func_625();
				func_615(&Local_333, &(Local_235.f_878), func_10());
				func_613();
				unk_0x191DDA30577F440A(&iLocal_327, 8);
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_324, 7))
			{
				if (Local_235.f_790 != -1)
				{
					if (unk_0x234B68AC2E35ED5A(iLocal_324, 5))
					{
						if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_235.f_790)))
						{
							func_611(unk_0xC502CD39B4994F3A(Local_235.f_790), 432, 0, 0);
							func_610(unk_0xC502CD39B4994F3A(Local_235.f_790), 1, 0, 0);
							func_609(unk_0xC502CD39B4994F3A(Local_235.f_790), 0, 0, 0);
							func_608(unk_0xC502CD39B4994F3A(Local_235.f_790), 0);
							func_603(unk_0xC502CD39B4994F3A(Local_235.f_790), Global_262145.f_12533, 0, 0);
							unk_0x191DDA30577F440A(&iLocal_324, 7);
						}
					}
				}
			}
			if (func_585(&uLocal_350, 0, 0) && (func_3(16) || func_3(5)))
			{
				if (iVar1 == unk_0xDD0E57E73E5C4BF6())
				{
					unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 3);
				}
			}
		}
	}
}

int func_585(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_567(29);
	if ((*uParam0 > 0 && !func_497()) && func_562(unk_0x1146A9AE09CE2B14()) != 0)
	{
		if (!func_601())
		{
			func_600();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_105(&(uParam0->f_3)))
			{
				func_104(&(uParam0->f_3), 0, 0);
			}
			else if (func_103(&(uParam0->f_3), 1000, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 2);
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 0);
					func_104(&(uParam0->f_5), 0, 0);
				}
				func_104(&(uParam0->f_1), 0, 0);
				func_599(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_105(&(uParam0->f_5)))
			{
				if (func_103(&(uParam0->f_5), 3000, 0))
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
				func_592(iParam2);
				func_599(uParam0, 2);
			}
			break;
		
		case 2:
			func_592(0);
			if (func_103(&(uParam0->f_1), 15000, 0))
			{
				if (func_586(func_587(0)))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_599(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_103(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
				func_599(uParam0, 4);
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

bool func_586(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

char* func_587(int iParam0)
{
	if (((func_590(unk_0x1146A9AE09CE2B14()) || func_589(unk_0x1146A9AE09CE2B14())) || func_517()) || iParam0)
	{
		if (func_589(unk_0x1146A9AE09CE2B14()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_481(func_588()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_588()
{
	return Global_1658176;
}

bool func_589(int iParam0)
{
	return func_482(func_406(iParam0), 0);
}

bool func_590(int iParam0)
{
	return func_591(func_406(iParam0));
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148 && func_438(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35, 1))
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

void func_592(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0))
	{
		if (((((((((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_2342(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0x8B6A925F148E0E94()) && !func_409(unk_0x1146A9AE09CE2B14(), 22)) && func_562(unk_0x1146A9AE09CE2B14()) != 0) && !func_597(func_598())) && !func_590(unk_0x1146A9AE09CE2B14())) && !func_596(func_406(unk_0x1146A9AE09CE2B14()))) && !func_595(func_406(unk_0x1146A9AE09CE2B14())))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 1);
			func_594(func_587(iParam0), -1);
			func_593(1);
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_593(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_516(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_497())
	{
		unk_0x9B0169E27978C1A2(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_594(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_595(int iParam0)
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

int func_596(int iParam0)
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

int func_597(int iParam0)
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

int func_598()
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

void func_599(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_600()
{
	Global_2465049 = 1;
}

int func_601()
{
	if (((((((func_406(unk_0x1146A9AE09CE2B14()) == 170 || func_406(unk_0x1146A9AE09CE2B14()) == 219) || func_406(unk_0x1146A9AE09CE2B14()) == 221) || func_406(unk_0x1146A9AE09CE2B14()) == 220) || func_406(unk_0x1146A9AE09CE2B14()) == 216) || func_406(unk_0x1146A9AE09CE2B14()) == 215) || func_406(unk_0x1146A9AE09CE2B14()) == 214) || func_406(unk_0x1146A9AE09CE2B14()) == 218)
	{
		return 1;
	}
	if (func_602(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_602(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_603(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_605(iParam0))
	{
		return;
	}
	if (func_604(&(Global_2416162.f_756[iParam0]), &(Global_2416162.f_1119[iParam0]), &(Global_2416162.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_558[iParam0] = fParam1;
		}
	}
}

int func_604(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x4BE697D014536271(*uParam1) || *uParam1 == unk_0x62D18D65FE22FF39())
		{
			*uParam1 = unk_0x62D18D65FE22FF39();
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
	}
	if (!unk_0x4BE697D014536271(*uParam0) || *uParam0 == unk_0x62D18D65FE22FF39())
	{
		if (bParam3)
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x191DDA30577F440A(uParam2, iParam4);
			}
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			if (unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xC664C0067EEAB8D1(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x62D18D65FE22FF39())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x4BE697D014536271(*uParam1) && !*uParam1 == unk_0x62D18D65FE22FF39())
	{
	}
	return 0;
}

int func_605(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 1;
	}
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_606())
	{
		return 1;
	}
	return 0;
}

int func_606()
{
	switch (func_190())
	{
		case 0:
			return func_607();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_607()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_608(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_2416162.f_368), iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_2416162.f_368), iParam0);
	}
	if (unk_0x575B7C28D81C0B4D(Global_2416162[iParam0]))
	{
		if (bParam1)
		{
			unk_0x72D460C6FC1A44BE(Global_2416162[iParam0], 0);
		}
		else
		{
			unk_0x72D460C6FC1A44BE(Global_2416162[iParam0], 1);
		}
	}
}

void func_609(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_605(iParam0))
	{
		return;
	}
	if (func_604(&(Global_2416162.f_822[iParam0]), &(Global_2416162.f_1185[iParam0]), &(Global_2416162.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_608(iParam0, bParam2);
	}
}

void func_610(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_605(iParam0))
	{
		return;
	}
	if (func_604(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = iParam1;
		}
	}
}

void func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_605(iParam0))
	{
		return;
	}
	if (func_604(&(Global_2416162.f_591[iParam0]), &(Global_2416162.f_954[iParam0]), &(Global_2416162.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_612();
		}
	}
}

void func_612()
{
	Global_2416162.f_1651 = 1;
}

void func_613()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(iLocal_324, 18))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (unk_0x8CFC2F41A749E236(iVar1))
			{
				if (iVar1 != unk_0x1146A9AE09CE2B14())
				{
					func_611(iVar1, func_614(0), 0, 0);
					func_608(iVar1, 0);
					func_609(iVar1, 0, 0, 0);
					func_610(iVar1, 3, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x191DDA30577F440A(&iLocal_324, 18);
	}
}

int func_614(int iParam0)
{
	return 556;
}

void func_615(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (iVar0 > -1)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_453 = 0;
		Global_1630816[iVar0 /*597*/].f_11.f_453.f_1 = 0;
		Global_1630816[iVar0 /*597*/].f_11.f_453.f_2 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x575B7C28D81C0B4D(uParam0->f_33[iVar1]))
			{
				unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_33[iVar1]));
			}
			if (func_624(uParam1, iVar1))
			{
				if (unk_0xB364346471C3B028(func_623(uParam1, iVar1)))
				{
					if (unk_0xDA872572A987B2AD(func_622(uParam1, iVar1), unk_0x7D2B9E6A64637269()))
					{
						unk_0xECE27E90547055F8(func_622(uParam1, iVar1));
					}
					unk_0x61918AA39871DD2B(func_622(uParam1, iVar1), 1, 1);
					if (bParam2)
					{
						unk_0x27FEFDFA220EBB32(func_622(uParam1, iVar1), 1);
						uVar2 = func_623(uParam1, iVar1);
						if (!unk_0xB364346471C3B028(uVar2))
						{
							func_108(&iVar2);
						}
						else
						{
							func_6(&iVar2);
						}
					}
					unk_0xC664C0067EEAB8D1(&(uParam0->f_10), iVar1);
				}
			}
			iVar1++;
		}
		func_618(0);
		func_616(uParam0, uParam1);
	}
}

void func_616(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_11, 0))
	{
		unk_0x191DDA30577F440A(&(uParam0->f_11), 0);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar2 = unk_0xC502CD39B4994F3A(iVar0);
			if (unk_0x8CFC2F41A749E236(iVar2))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14())
				{
					iVar1 = func_617(uParam1);
					if (iVar1 != -1)
					{
						func_611(iVar2, iVar1, 0, 0);
					}
					func_608(iVar2, 0);
					func_609(iVar2, 0, 0, 0);
					if (uParam1->f_44.f_4 == 0)
					{
						func_603(iVar2, Global_262145.f_12533, 0, 0);
					}
					func_610(iVar2, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

int func_617(var uParam0)
{
	return uParam0->f_44.f_2;
}

void func_618(bool bParam0)
{
	if (bParam0)
	{
		if (!func_621(unk_0x1146A9AE09CE2B14(), 14))
		{
			func_620(14);
		}
	}
	else if (func_621(unk_0x1146A9AE09CE2B14(), 14))
	{
		func_619(14);
	}
}

void func_619(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

void func_620(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

bool func_621(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

var func_622(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(func_623(uParam0, iParam1)))
	{
		return unk_0xBD11ACD80727BD31(func_623(uParam0, iParam1));
	}
	return uVar0;
}

var func_623(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1];
}

bool func_624(var uParam0, int iParam1)
{
	return unk_0x159BC3DDA80D71AC(func_623(uParam0, iParam1));
}

void func_625()
{
	int iVar0;
	
	iVar0 = 9;
	while (iVar0 <= 11)
	{
		if (unk_0x159BC3DDA80D71AC(Local_235.f_721[iVar0]))
		{
			if (unk_0xB364346471C3B028(Local_235.f_721[iVar0]))
			{
				func_6(&(Local_235.f_721[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_626()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_358[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_358[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_363[0]))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uLocal_363[0]));
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_360))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_360);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_359))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_359);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_361))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_361);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_362))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_362);
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_324, 12))
	{
		unk_0x791B4C3811D53DFA(iLocal_348);
		unk_0x315DA2F7337A8638("ALARM_BELL_02");
		unk_0xC664C0067EEAB8D1(&iLocal_324, 12);
	}
	if (((func_586("DCONTRA_HLP1") || func_586("DCONTRA_HLP2")) || func_586("DCONTRA_HLPVCR")) || func_586("DCONTRA_HLPCR"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	func_627();
}

void func_627()
{
	if (unk_0x234B68AC2E35ED5A(iLocal_324, 14))
	{
		func_640();
		func_628(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		unk_0xC664C0067EEAB8D1(&iLocal_324, 14);
	}
}

void func_628(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_639())
		{
			func_638();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_640();
		func_632(8, 0, 0, 0, 0);
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
		func_629();
	}
}

void func_629()
{
	if (func_639() && !func_631())
	{
		func_638();
	}
	if (func_631())
	{
		func_630();
	}
	else
	{
		func_640();
		func_632(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_630()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_631()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_632(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_24())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_633())
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

int func_633()
{
	if ((((((func_406(unk_0x1146A9AE09CE2B14()) == 229 || func_406(unk_0x1146A9AE09CE2B14()) == 191) || func_637()) || func_636()) || func_635(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_634(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_634(int iParam0)
{
	if (func_441(iParam0))
	{
		return 1;
	}
	if (func_408(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_635(int iParam0)
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

var func_636()
{
	return Global_1574420;
}

int func_637()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_638()
{
	if (func_631())
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

int func_639()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_640()
{
	if (func_639() && !func_631())
	{
		func_638();
	}
	func_641();
	Global_2405077.f_713 = 0;
}

void func_641()
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

void func_642()
{
	float fVar0;
	
	fVar0 = func_680();
	fVar0 = (fVar0 * Global_262145.f_18756);
	func_643(fVar0);
}

void func_643(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_384(unk_0x1146A9AE09CE2B14());
	iVar1 = func_679(unk_0x1146A9AE09CE2B14(), iVar0);
	if (iVar1 > 0)
	{
		iVar2 = round((to_float(iVar1) * fParam0));
		func_644(iVar0, iVar2, 0, 0, 0, &iLocal_349);
	}
	else
	{
		unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 10);
	}
}

void func_644(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 <= 0)
	{
		*uParam5 = 3;
		return;
	}
	iVar0 = func_679(unk_0x1146A9AE09CE2B14(), iParam0);
	iVar1 = func_678(iParam0);
	if (!func_677())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (iVar0 - iParam1);
			func_675(func_676(iVar1), iVar2, -1, 1, 0);
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar1 /*12*/].f_1 = iVar2;
			if (bParam3)
			{
				func_669(func_674(iParam0));
			}
			Global_2463446 = 1;
			*uParam5 = 2;
		}
		else
		{
			*uParam5 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		if (!bParam3)
		{
			iParam2 = 0;
		}
		if (func_648(iVar1, iParam1, iParam2, iParam4, uParam5, Global_2544210.f_5191.f_385))
		{
			if (*uParam5 == 2)
			{
				iVar3 = (iVar0 - iParam1);
				func_675(func_676(iVar1), iVar3, -1, 1, 0);
				Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar1 /*12*/].f_1 = iVar3;
				if (bParam3)
				{
					func_669(func_674(iParam0));
				}
				Global_2463446 = 1;
			}
		}
		else if (*uParam5 == 1 && func_645() == -1)
		{
			*uParam5 = 3;
		}
	}
}

int func_645()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_647(iVar0) != 2147483647)
		{
			if (func_646(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_646(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_647(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66;
	}
	return -1;
}

bool func_648(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	switch (*uParam4)
	{
		case 0:
			if (func_645() != -1)
			{
				return 0;
			}
			iVar2 = func_668(iParam0);
			iVar3 = func_667();
			iVar4 = func_666(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar5 = -1003644442;
					break;
				
				case 1:
					iVar5 = 402112378;
					break;
				
				case 2:
					iVar5 = 1283718111;
					break;
				
				case 3:
					iVar5 = -1818214114;
					break;
			}
			if (iParam3 == 0 || func_662(78225582, -1799524201, iVar3, -788753717, 1, 0, 1, 4, iVar2, 3))
			{
				if (func_662(78225582, 69656641, iVar4, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (func_662(78225582, -739932302, iVar5, -788753717, 1, iParam2, 0, 4, iVar4, 3))
					{
						*uParam4 = 1;
					}
					else
					{
						*uParam4 = 3;
					}
				}
				else
				{
					*uParam4 = 3;
				}
			}
			else
			{
				*uParam4 = 3;
			}
			if (*uParam4 == 1 && func_657())
			{
			}
			else
			{
				*uParam4 = 3;
				func_654(func_645());
			}
			break;
		
		case 1:
			if (func_653(func_645()))
			{
				if (func_652(func_645()) == 2)
				{
					if (iParam2 > 0)
					{
						unk_0xC547D58DB56BD8E8(func_647(func_645()));
						iVar0 = func_650(unk_0x1146A9AE09CE2B14(), iParam0);
						iVar1 = func_674(iVar0);
						unk_0xEAEC74D0C3BE5CA5(iParam2, unk_0x15173FB88ABC94F9(func_649(iVar0)), iVar1, uParam5);
					}
					*uParam4 = 2;
					func_654(func_645());
				}
				else
				{
					*uParam4 = 3;
					func_654(func_645());
				}
			}
			break;
	}
	return *uParam4 != 1;
}

char* func_649(int iParam0)
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

int func_650(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_651(Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/]))
	{
		uVar0 = Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/];
	}
	return uVar0;
}

int func_651(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_652(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_653(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_654(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_677())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_646(iParam0))
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
		func_655(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_655(var uParam0)
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
	func_656(&(uParam0->f_14));
	func_656(&(uParam0->f_14.f_13));
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

void func_656(var uParam0)
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

int func_657()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_677())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_645();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_41()) || unk_0xD699DB7515D82955())
		{
			if (func_661(Global_4265506[iVar2 /*85*/].f_66.f_6, Global_4265506[iVar2 /*85*/].f_66.f_4, Global_4265506[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4267008 = 1;
			}
			return 0;
		}
		if (Global_2464661)
		{
			if (Global_4265506[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4265506[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_647(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar3))
		{
			Global_4265506[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4265506[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar2 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			if (bVar0)
			{
				Global_4265506[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4265506[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4265506[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_658(Global_4265506[iVar2 /*85*/], iVar2);
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	return 0;
}

void func_658(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_660(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_659();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_659()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

var func_660(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_661(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
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
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_662(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_677())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_41()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_645();
	if (iVar1 == -1)
	{
		if (!func_664(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_663(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4265506[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4265506[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4265506[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x4DF58B7B15FFA2F7(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_664(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_677())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_41()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4265506[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4265506[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x04C87DD342542625())
		{
			unk_0x2BC717FE20953774();
		}
	}
	if (bVar0 || unk_0x07C2962447C9CA2A(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_665(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_665(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_677())
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
				func_658(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_666(int iParam0, bool bParam1)
{
	char cVar0[64];
	
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			StringCopy(&cVar0, "MP_STAT_RESTOTALFORFACTORY5_v0", 64);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY0_v0", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY1_v0", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY2_v0", 64);
				break;
			
			case 3:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY3_v0", 64);
				break;
			
			case 4:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY4_v0", 64);
				break;
			
			case 5:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY5_v0", 64);
				break;
			}
	}
	if (unk_0xAB6A270F84A8781E(&cVar0))
	{
		return -1;
	}
	return unk_0x15173FB88ABC94F9(&cVar0);
}

var func_667()
{
	return Global_4266997;
}

int func_668(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xAB6A270F84A8781E(&cVar0))
	{
		return -1;
	}
	return unk_0x15173FB88ABC94F9(&cVar0);
}

void func_669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_671(9403, -1, -1))
			{
				if (!func_671(9404, -1, -1))
				{
					func_670(9404, 1, -1, 1);
				}
				else
				{
					func_670(9405, 1, -1, 1);
				}
			}
			break;
		
		case 1:
			if (func_671(9400, -1, -1))
			{
				if (!func_671(9401, -1, -1))
				{
					func_670(9401, 1, -1, 1);
				}
				else
				{
					func_670(9402, 1, -1, 1);
				}
			}
			break;
		
		case 2:
			if (func_671(9412, -1, -1))
			{
				if (!func_671(9413, -1, -1))
				{
					func_670(9413, 1, -1, 1);
				}
				else
				{
					func_670(9414, 1, -1, 1);
				}
			}
			break;
		
		case 3:
			if (func_671(9409, -1, -1))
			{
				if (!func_671(9410, -1, -1))
				{
					func_670(9410, 1, -1, 1);
				}
				else
				{
					func_670(9411, 1, -1, 1);
				}
			}
			break;
		
		case 4:
			if (func_671(9406, -1, -1))
			{
				if (!func_671(9407, -1, -1))
				{
					func_670(9407, 1, -1, 1);
				}
				else
				{
					func_670(9408, 1, -1, 1);
				}
			}
			break;
	}
}

int func_670(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_41();
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

int func_671(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar1 = func_673(iParam0, iParam1);
	uVar2 = func_672(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_672(int iParam0)
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

int func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_674(int iParam0)
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

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_574(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3844;
		
		case 1:
			return 3845;
		
		case 2:
			return 3846;
		
		case 3:
			return 3847;
		
		case 4:
			return 3848;
		
		case 5:
			return 5443;
		
		default:
	}
	return 3844;
}

int func_677()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_678(int iParam0)
{
	int iVar0;
	
	if (func_651(iParam0))
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

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_651(iParam1))
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

float func_680()
{
	return Local_235.f_936;
}

void func_681()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_364[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_364[iVar0]));
		}
		iVar0++;
	}
}

void func_682()
{
	if (!func_688())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_683();
}

void func_683()
{
	func_685();
	func_684(0);
}

void func_684(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x02BFF15CAA701972();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x551F46B3C7DFB654();
		Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_685()
{
	if (!func_687())
	{
	}
	if (func_688())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_686();
		unk_0xEDA1E269A9237146();
	}
}

void func_686()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			unk_0x38CD3C04C877C35F(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_687()
{
	if (!func_688())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_686();
	return unk_0xB4BAEA083E2652CB();
}

int func_688()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_689(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_727(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_495(&(Var0.f_69), iParam7);
	}
	return func_690(&Var0);
}

int func_690(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_701(uParam0, uParam0->f_17);
	func_700(uParam0);
	if (func_44())
	{
		func_700(uParam0);
	}
	if (func_699(uParam0->f_1))
	{
		func_692();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_691(uParam0->f_69, 8192))
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
				func_692();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_495(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_691(uParam0->f_69, 128))
			{
				if (func_500(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_495(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_691(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_692()
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
	func_693();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_693()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_697(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_694(&(Global_2441237.f_3165.f_1), 1);
}

void func_694(var uParam0, int iParam1)
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
				if (unk_0x8B6A925F148E0E94() && !func_696(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_695(0);
}

void func_695(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_696(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_697(var uParam0)
{
	func_698(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_698(var uParam0)
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

int func_699(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_700(var uParam0)
{
	if (func_502(uParam0->f_1))
	{
		uParam0->f_72 = func_455();
	}
}

void func_701(var uParam0, int iParam1)
{
	if (func_502(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_24() || !func_2342(iParam1, 0, 1))
	{
		return;
	}
	if (func_500(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_702(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_702(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_212(iParam0) && !bParam4)
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
	if (((func_212(unk_0x1146A9AE09CE2B14()) || (func_726() && func_725())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		uVar1 = func_724();
		if (unk_0x419E13582192CFEA(uVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_2342(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_722(iParam1, iParam0, 0);
							}
							else
							{
								return func_714(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_714(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_722(iParam1, iParam0, 0);
				}
				else
				{
					return func_703(0, -1, 0);
				}
			}
			else
			{
				return func_703(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_722(iParam1, iParam0, 0);
		}
		else
		{
			return func_714(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_714(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_703(bool bParam0, int iParam1, bool bParam2)
{
	return func_704(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_704(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_713() || (func_712() && func_710())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_709(iParam2, iVar0);
		}
		else
		{
			return func_709(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_211(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_708(1);
				}
				else
				{
					return func_708(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_705(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_705(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_708(1);
	}
	return func_708(0);
}

int func_705(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_707(iParam0, iParam1, iParam3);
	if (func_706(Global_4456448.f_85535, 1))
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

int func_706(int iParam0, bool bParam1)
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

int func_707(int iParam0, int iParam1, int iParam2)
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
			if (!func_211(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_708(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_709(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_707(iParam1, iParam0, 4);
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

bool func_710()
{
	if (func_711())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_711()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_712()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_713()
{
	if (func_711() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_714(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_716())
			{
				iVar3 = func_454(iParam0);
				if (!iVar3 == -1)
				{
					return func_452(iVar3);
				}
			}
			if ((func_246(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_211(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_708(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_715(1);
			}
			else
			{
				return func_704(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_708(1);
			}
			else
			{
				return func_704(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_454(iParam0);
	if (!iVar4 == -1)
	{
		return func_452(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_715(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_716()
{
	if (((((func_347() || func_721()) || func_44()) || func_720()) || func_719()) || func_717())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_717()
{
	return func_718(Global_4456448.f_85535);
}

int func_718(int iParam0)
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

var func_719()
{
	return Global_2453009.f_24;
}

var func_720()
{
	return Global_2453009.f_21;
}

var func_721()
{
	return Global_2453009.f_18;
}

int func_722(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_716())
	{
		iVar2 = func_454(iParam1);
		if (!iVar2 == -1)
		{
			return func_452(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_24())
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
			iVar0 = func_704(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_723(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_211(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_715(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_723(int iParam0)
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

var func_724()
{
	return Global_2359302.f_2;
}

bool func_725()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_726()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_727(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_24();
	uParam1->f_18 = func_24();
	uParam1->f_19 = func_24();
	uParam1->f_20 = func_24();
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

void func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_14[iVar0]), iVar1);
}

int func_729()
{
	int iVar0;
	
	if (!func_39(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (!func_730(1, 1, 1, 0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 9))
			{
				unk_0xC664C0067EEAB8D1(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 9);
			}
			return 0;
		}
		if (func_566())
		{
			if (unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 9))
			{
				unk_0xC664C0067EEAB8D1(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 9);
			}
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 9))
		{
			unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 9);
		}
	}
	else
	{
		iVar0 = func_1091();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_323[iVar0 /*26*/].f_1, 9))
		{
			return 0;
		}
	}
	return 1;
}

int func_730(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_621(unk_0x1146A9AE09CE2B14(), 29))
	{
		return 0;
	}
	if (func_570(unk_0x1146A9AE09CE2B14(), 21))
	{
		return 0;
	}
	if (func_570(unk_0x1146A9AE09CE2B14(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD09C9D030AFD3F25())
		{
			return 0;
		}
	}
	if (!func_474(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2D61488C347F8402())
		{
			return 0;
		}
	}
	if (func_237(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_776())
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (func_775())
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_175(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_547())
	{
		return 0;
	}
	if (func_570(unk_0x1146A9AE09CE2B14(), 0) || func_570(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if ((func_570(unk_0x1146A9AE09CE2B14(), 12) || func_570(unk_0x1146A9AE09CE2B14(), 14)) || func_570(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 0;
	}
	if (func_772(unk_0x1146A9AE09CE2B14(), 0, -1))
	{
		if (!func_739())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_738())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_251(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_737())
	{
		return 0;
	}
	if (func_736(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((func_329(unk_0x1146A9AE09CE2B14()) && func_326(unk_0x1146A9AE09CE2B14()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_735())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_734(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_635(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_408(unk_0x1146A9AE09CE2B14()))
	{
		if (func_733(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_731())
	{
		return 0;
	}
	return 1;
}

bool func_731()
{
	return func_732() == 1;
}

int func_732()
{
	return Global_1710155;
}

int func_733(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_735()
{
	return Global_1683970.f_4477 != -1;
}

int func_736(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_737()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_738()
{
	return Global_99422.f_364 > 0;
}

int func_739()
{
	int iVar0;
	
	iVar0 = func_406(unk_0x1146A9AE09CE2B14());
	if (((func_771(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29) || func_770(unk_0x1146A9AE09CE2B14())) || func_769(unk_0x1146A9AE09CE2B14())) || func_764(unk_0x1146A9AE09CE2B14()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_763(unk_0x1146A9AE09CE2B14()))
	{
		if (func_762(iVar0) || func_761(iVar0))
		{
			return 1;
		}
	}
	if (func_602(unk_0x1146A9AE09CE2B14()))
	{
		if (func_761(iVar0))
		{
			return 1;
		}
	}
	if (func_760(unk_0x1146A9AE09CE2B14()))
	{
		if (func_759(iVar0))
		{
			return 1;
		}
	}
	if (func_758(unk_0x1146A9AE09CE2B14()))
	{
		if (func_757(iVar0))
		{
			return 1;
		}
	}
	if (func_756(unk_0x1146A9AE09CE2B14()))
	{
		if (func_755(iVar0))
		{
			return 1;
		}
	}
	if (func_754(unk_0x1146A9AE09CE2B14()))
	{
		if (func_753(iVar0))
		{
			return 1;
		}
	}
	if (func_158(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_752(iVar0))
		{
			if (func_751(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
		}
	}
	if (func_750(unk_0x1146A9AE09CE2B14()))
	{
		if (func_749(iVar0))
		{
			return 1;
		}
		if (func_748(iVar0))
		{
			return 1;
		}
		if (func_747())
		{
			return 1;
		}
	}
	if (func_746(unk_0x1146A9AE09CE2B14()))
	{
		if (func_745())
		{
			return 1;
		}
	}
	if (func_744(unk_0x1146A9AE09CE2B14()))
	{
		if (func_748(iVar0))
		{
			return 1;
		}
	}
	if (func_743(unk_0x1146A9AE09CE2B14()))
	{
		if (func_742(iVar0))
		{
			return 1;
		}
	}
	if (func_741(unk_0x1146A9AE09CE2B14()))
	{
		if (func_740(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_741(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_743(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_744(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_24())
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_745()
{
	return Global_2544210.f_6695;
}

int func_746(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_747()
{
	return Global_2544210.f_6694;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_750(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_751(int iParam0)
{
	if (func_25(iParam0) != func_24())
	{
		return func_25(iParam0) == func_23(iParam0);
	}
	return 0;
}

int func_752(int iParam0)
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

int func_753(int iParam0)
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

int func_754(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_756(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_757(int iParam0)
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

int func_758(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_759(int iParam0)
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

int func_760(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_761(int iParam0)
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

int func_762(int iParam0)
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

int func_763(int iParam0)
{
	if (func_341(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_764(int iParam0)
{
	if (func_765(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_765(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_766(unk_0x1146A9AE09CE2B14(), 0);
	}
	if (bParam1)
	{
		if (func_766(unk_0x1146A9AE09CE2B14(), 0))
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

bool func_766(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_24())
	{
		if (!func_768(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x1146A9AE09CE2B14() != Global_1590744)
			{
				if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_767(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_767(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_768(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_769(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_770(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_771(int iParam0)
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

int func_772(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_159(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_773(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_773(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return iParam0;
	}
	if (func_774(iParam0) != -1)
	{
		iVar0 = func_159(func_774(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_450(iParam0, 0))
			{
				return func_23(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_24();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_24();
}

int func_774(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (func_2342(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == unk_0x1146A9AE09CE2B14()) && func_2342(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_775()
{
	return Global_1312902;
}

bool func_776()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

void func_777(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_442(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_4 = func_909();
		Global_1682001.f_5 = func_908();
		if (func_565(unk_0x1146A9AE09CE2B14()) || func_441(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682001.f_6 = 1;
		}
		else
		{
			Global_1682001.f_6 = 0;
		}
		Global_1682001.f_1 = func_902(bParam9);
		Global_1682001.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682001.f_9 = func_901(bParam0);
		Global_1682001.f_10 = iParam1;
		Global_1682001.f_17 = Global_1682001.f_2;
		Global_1682001.f_18 = Global_1682001.f_2;
		Global_1682001.f_19 = func_897();
		Global_1682001.f_21 = (Global_1682001.f_8 - Global_1682001.f_7);
		if (func_450(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682001.f_23 = func_901(func_516(1));
		}
		Global_1682001.f_24 = func_22(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_28 = func_896(unk_0x1146A9AE09CE2B14());
		if (Global_1682001.f_24 > 2)
		{
			Global_1682001.f_24 = 2;
		}
		func_894(iVar0);
	}
	else
	{
		iVar0 = func_406(unk_0x1146A9AE09CE2B14());
	}
	if (func_591(iVar0))
	{
		Global_1681740.f_2 = func_909();
		Global_1681740.f_3 = func_908();
		Global_1681740.f_50 = iParam4;
		Global_1681740.f_51 = iParam5;
		Global_1681740.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681740.f_20 = (Global_1681740.f_10 - Global_1681740.f_9);
		Global_1681740.f_12 = iParam1;
		Global_1681740.f_19 = func_890(iVar0, bParam0, func_893(bParam3));
		if (bParam0)
		{
			Global_1681740.f_11 = 1;
		}
		else
		{
			Global_1681740.f_11 = 0;
		}
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681740.f_8 = 1;
		}
		else
		{
			Global_1681740.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1681740.f_43 = 0;
			Global_1681740.f_45 = func_889(func_120(), iParam2);
			Global_1681740.f_47 = iParam7;
			Global_1681740.f_46 = iParam6;
			Global_1681740.f_52 = func_888(func_120(), iParam2);
		}
		func_886(iVar0);
	}
	else if (func_596(iVar0))
	{
		Global_1681794.f_2 = func_909();
		Global_1681794.f_3 = func_908();
		Global_1681794.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681794.f_19 = (Global_1681794.f_10 - Global_1681794.f_9);
		Global_1681794.f_12 = iParam1;
		if (bParam0)
		{
			Global_1681794.f_11 = 1;
		}
		else
		{
			Global_1681794.f_11 = 0;
		}
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681794.f_8 = 1;
		}
		else
		{
			Global_1681794.f_8 = 0;
		}
		func_884(iVar0);
	}
	else if (func_759(iVar0))
	{
		Global_1681857.f_2 = func_909();
		Global_1681857.f_3 = func_908();
		Global_1681857.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681857.f_18 = (Global_1681857.f_9 - Global_1681857.f_8);
		Global_1681857.f_11 = iParam1;
		Global_1681857.f_7 = func_897();
		Global_1681857.f_42 = func_882(func_41(), 5);
		iVar1 = unk_0x1146A9AE09CE2B14();
		iVar2 = func_384(iVar1);
		Global_1681857.f_28 = iVar2;
		Global_1681857.f_29 = func_901((func_881(iVar1) || func_880(iVar1)));
		Global_1681857.f_30 = func_901(func_879(iVar1));
		Global_1681857.f_32 = func_901(func_878(iVar1));
		Global_1681857.f_33 = func_901(func_877(iVar1));
		Global_1681857.f_34 = func_901(func_876(iVar1));
		Global_1681857.f_35 = func_901(func_875(0, iVar1) == 1);
		Global_1681857.f_36 = func_901(func_874(iVar1));
		Global_1681857.f_37 = func_901(func_873(iVar1));
		Global_1681857.f_38 = func_901(func_872(iVar1));
		Global_1681857.f_39 = func_901(func_869(iVar1, iVar2, 0));
		Global_1681857.f_40 = func_901(func_869(iVar1, iVar2, 2));
		Global_1681857.f_41 = func_901(func_869(iVar1, iVar2, 1));
		if (func_868(iVar1))
		{
			Global_1681857.f_31 = 2;
		}
		else if (func_867(iVar1))
		{
			Global_1681857.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1681857.f_10 = 1;
		}
		else
		{
			Global_1681857.f_10 = 0;
		}
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_6 = 1;
		}
		else
		{
			Global_1681857.f_6 = 0;
		}
		Global_1681857.f_21 = -2;
		Global_1681857.f_22 = -2;
		func_865(iVar0);
	}
	else if (func_757(iVar0))
	{
		Global_1681901.f_2 = func_909();
		Global_1681901.f_3 = func_908();
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681901.f_6 = 1;
		}
		else
		{
			Global_1681901.f_6 = 0;
		}
		Global_1681901.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681901.f_10 = func_901(bParam0);
		Global_1681901.f_11 = iParam1;
		Global_1681901.f_17 = func_864(func_519());
		Global_1681901.f_18 = (Global_1681901.f_9 - Global_1681901.f_8);
		Global_1681901.f_20 = iParam8;
		Global_1681901.f_21 = -2;
		Global_1681901.f_22 = -2;
		Global_1681901.f_27 = func_863();
		Global_1681901.f_29 = func_862(6109, -1, 0);
		Global_1681901.f_30 = func_862(6105, -1, 0);
		Global_1681901.f_31 = func_862(6106, -1, 0);
		Global_1681901.f_32 = func_862(6108, -1, 0);
		Global_1681901.f_33 = func_862(6107, -1, 0);
		Global_1681901.f_34 = func_862(6110, -1, 0);
		Global_1681901.f_36 = func_901(func_516(1));
		Global_1681901.f_37 = func_859();
		func_845();
		func_843(iVar0);
	}
	else if (func_755(iVar0))
	{
		Global_1681955.f_2 = func_909();
		Global_1681955.f_3 = func_908();
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681955.f_6 = 1;
		}
		else
		{
			Global_1681955.f_6 = 0;
		}
		Global_1681955.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681955.f_10 = func_901(bParam0);
		Global_1681955.f_11 = iParam1;
		Global_1681955.f_18 = (Global_1681955.f_9 - Global_1681955.f_8);
		Global_1681955.f_20 = iParam8;
		Global_1681955.f_23 = Global_786547;
		Global_1681955.f_36 = Global_786547.f_1;
		Global_1681955.f_24 = func_862(6159, -1, 0);
		Global_1681955.f_25 = func_862(6164, -1, 0);
		Global_1681955.f_26 = func_862(6165, -1, 0);
		Global_1681955.f_27 = func_901((((func_842() || func_841()) || func_840()) || func_839(unk_0x1146A9AE09CE2B14())));
		Global_1681955.f_28 = func_862(6166, -1, 0);
		Global_1681955.f_29 = func_901(func_838());
		Global_1681955.f_35 = -1;
		Global_1681955.f_38 = -1;
		Global_1681955.f_39 = Global_1681955.f_4;
		Global_1681955.f_40 = Global_1681955.f_5;
		Global_1681955.f_41 = func_909();
		Global_1681955.f_42 = func_901(func_516(1));
		Global_1681955.f_44 = Global_1681955.f_18;
		func_836(iVar0);
	}
	else if (func_833(iVar0))
	{
		if (Global_1682091.f_2 == -1)
		{
			Global_1682091.f_2 = func_909();
		}
		if (Global_1682091.f_3 == -1)
		{
			Global_1682091.f_3 = func_908();
		}
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682091.f_6 = 1;
		}
		else
		{
			Global_1682091.f_6 = 0;
		}
		Global_1682091.f_1 = func_902(0);
		Global_1682091.f_7 = func_897();
		Global_1682091.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682091.f_10 = func_901(bParam0);
		Global_1682091.f_11 = iParam1;
		if (func_120() != -1)
		{
			Global_1682091.f_17 = func_832(func_120());
		}
		Global_1682091.f_18 = (Global_1682091.f_9 - Global_1682091.f_8);
		Global_1682091.f_19 = Global_2544210.f_6682;
		Global_1682091.f_28 = func_896(unk_0x1146A9AE09CE2B14());
		Global_1682091.f_29 = func_901(func_831(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_30 = func_901(func_830(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_31 = func_829(unk_0x1146A9AE09CE2B14());
		if (func_450(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682091.f_33 = func_901(func_516(1));
		}
		if (Global_1682091.f_34 > 2)
		{
			Global_1682091.f_34 = 2;
		}
		func_827(iVar0);
	}
	else if (func_826(iVar0))
	{
		Global_1682037.f_2 = func_909();
		Global_1682037.f_3 = func_908();
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682037.f_6 = 1;
		}
		else
		{
			Global_1682037.f_6 = 0;
		}
		Global_1682037.f_1 = func_902(0);
		Global_1682037.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682037.f_10 = func_901(bParam0);
		Global_1682037.f_11 = iParam1;
		Global_1682037.f_18 = (Global_1682037.f_9 - Global_1682037.f_8);
		Global_1682037.f_28 = func_896(unk_0x1146A9AE09CE2B14());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_825(unk_0x1146A9AE09CE2B14());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_809(unk_0x1146A9AE09CE2B14(), 4, -1);
		Global_1682037.f_31 = func_829(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_32 = func_901(func_808(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_33 = func_901(func_807(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_34 = func_901(func_806(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_35 = func_901(func_805(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_36 = func_804(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_37 = func_803(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_39 = func_802(unk_0x1146A9AE09CE2B14());
		if (func_450(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682037.f_41 = func_901(func_516(1));
		}
		if (Global_1682037.f_42 > 2)
		{
			Global_1682037.f_42 = 2;
		}
		func_800(iVar0);
	}
	else if (func_799(iVar0))
	{
		Global_1682175.f_2 = func_909();
		Global_1682175.f_3 = func_908();
		Global_1682175.f_4 = func_798(func_120());
		Global_1682175.f_5 = func_797(func_120());
		if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682175.f_6 = 1;
		}
		else
		{
			Global_1682175.f_6 = 0;
		}
		Global_1682175.f_7 = func_897();
		Global_1682175.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682175.f_10 = func_901(bParam0);
		Global_1682175.f_11 = iParam1;
		if (func_519() != -1)
		{
			Global_1682175.f_17 = func_832(func_519());
		}
		Global_1682175.f_18 = (Global_1682175.f_9 - Global_1682175.f_8);
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = func_795(unk_0x1146A9AE09CE2B14());
		Global_1682175.f_27 = func_901(func_794(unk_0x1146A9AE09CE2B14()));
		Global_1682175.f_28 = func_790(21, -1);
		Global_1682175.f_29 = func_901(func_789(unk_0x1146A9AE09CE2B14()));
		func_787(iVar0);
	}
	else if (func_749(iVar0))
	{
		if (func_120() != -1)
		{
			Global_1682250.f_6 = func_798(func_120());
			Global_1682250.f_7 = func_797(func_120());
		}
		if (func_450(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682250.f_8 = func_901(func_516(1));
		}
		Global_1682250.f_10 = func_897();
		Global_1682250.f_11 = 1;
		Global_1682250.f_13 = (unk_0x666C16A4ED8F3098() - Global_1710053);
		Global_1682250.f_14 = iParam1;
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		func_785(iVar0);
	}
	else if (func_748(iVar0))
	{
		Global_1682337.f_2 = func_909();
		if (func_120() != -1)
		{
			Global_1682337.f_6 = func_798(func_120());
			Global_1682337.f_7 = func_797(func_120());
		}
		Global_1682337.f_8 = func_901(func_516(1));
		Global_1682337.f_10 = func_897();
		Global_1682337.f_11 = 1;
		Global_1682337.f_14 = iParam1;
		func_783(iVar0);
	}
	else if (func_782(iVar0))
	{
		Global_1682449.f_2 = func_909();
		Global_1682449.f_9 = 1;
		Global_1682449.f_10 = bParam0;
		Global_1682449.f_11 = iParam1;
		func_780(iVar0);
	}
	else if (func_742(iVar0))
	{
		if (func_120() != -1)
		{
			Global_1682470.f_5 = func_798(func_120());
			Global_1682470.f_6 = func_797(func_120());
		}
		Global_1682470.f_7 = func_901(func_516(1));
		Global_1682470.f_9 = func_897();
		Global_1682470.f_10 = 1;
		Global_1682470.f_13 = iParam1;
		func_778(iVar0);
	}
	else
	{
		Global_1681722.f_6 = unk_0x666C16A4ED8F3098();
		if (bParam0)
		{
			Global_1681722.f_7 = 1;
		}
		else
		{
			Global_1681722.f_7 = 0;
		}
		Global_1681722.f_8 = iParam1;
		if (Global_1681722.f_4 == 0)
		{
			if ((func_564(unk_0x1146A9AE09CE2B14()) || func_563(unk_0x1146A9AE09CE2B14())) || func_408(unk_0x1146A9AE09CE2B14()))
			{
				Global_1681722.f_4 = 1;
			}
		}
	}
}

void func_778(int iParam0)
{
	unk_0x1A67DFBF1F5C3835(&Global_1682470);
	func_779();
}

void func_779()
{
	struct<32> Var0;
	
	Global_1682470 = { Var0 };
}

void func_780(int iParam0)
{
	unk_0x47F6F4E3A427902C(&Global_1682449);
	func_781();
}

void func_781()
{
	struct<21> Var0;
	
	Global_1682449 = { Var0 };
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_783(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E1CF9E6DC044F6E(&Global_1682337);
	func_784();
}

void func_784()
{
	struct<35> Var0;
	
	Global_1682337 = { Var0 };
	Global_1682337.f_23 = 0;
	Global_1682337.f_22 = 0;
	Global_1682337.f_21 = 0;
}

void func_785(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE895584921D5DCB3(&Global_1682250);
	func_786();
}

void func_786()
{
	struct<36> Var0;
	
	Global_1682250 = { Var0 };
	Global_1682250.f_23 = 0;
	Global_1682250.f_22 = 0;
	Global_1682250.f_21 = 0;
}

void func_787(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x75C657917FB4003B(&Global_1682175);
	func_788();
}

void func_788()
{
	struct<31> Var0;
	
	Global_1682175 = { Var0 };
}

int func_789(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_371.f_2, 6);
	}
	return 0;
}

int func_790(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_41();
	}
	if (iParam0 == 7 && !Global_262145.f_17163)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_793(iParam0);
		if (iVar1 == 0 && func_862(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_792(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_896(unk_0x1146A9AE09CE2B14()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_791(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1390533[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2595490[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 26)
		{
			return 0;
		}
		return Global_2595335[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_791(int iParam0)
{
	return func_862(9516, iParam0, 0) != 0;
}

bool func_792(int iParam0)
{
	if (!Global_262145.f_23851)
	{
		return 0;
	}
	return func_862(7209, iParam0, 0) != 0;
}

int func_793(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_794(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_371 != 0;
	}
	return 0;
}

int func_795(int iParam0)
{
	if (func_406(iParam0) == 243)
	{
		return func_796(iParam0);
	}
	return -1;
}

int func_796(int iParam0)
{
	if (func_252(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_797(int iParam0)
{
	if (iParam0 == func_24())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_798(int iParam0)
{
	if (iParam0 == func_24())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

void func_800(int iParam0)
{
	unk_0xB1E79F9A1E81311C(&Global_1682037);
	func_801();
}

void func_801()
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
	Global_1682037 = { Var0 };
}

int func_802(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 12);
	}
	return 0;
}

int func_803(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 10);
	}
	return 0;
}

int func_804(int iParam0)
{
	if (iParam0 != func_24())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 11);
	}
	return 0;
}

bool func_805(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 4);
}

bool func_806(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 3);
}

bool func_807(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 2);
}

bool func_808(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 1);
}

int func_809(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_24() || !func_824(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_819(iParam0, iParam2);
		
		case 1:
			return func_817(iParam0, iParam2);
		
		case 3:
			return func_816(iParam0);
		
		case 2:
			return func_811(iParam0, iParam2);
		
		case 4:
			return func_810(iParam0);
		
		default:
	}
	return 0;
}

bool func_810(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 6);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 6);
}

int func_811(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_815(iParam0);
		
		case 11:
			return func_814(iParam0);
		
		case 12:
			return func_813(iParam0);
		
		case 13:
			return func_812(iParam0);
		
		default:
	}
	return 0;
}

bool func_812(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 15);
}

bool func_813(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 14);
}

bool func_814(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 13);
}

bool func_815(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 12);
}

bool func_816(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 11);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 5);
}

int func_817(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_818(iParam0);
		
		case 6:
			return func_808(iParam0);
		
		case 7:
			return func_807(iParam0);
		
		case 8:
			return func_806(iParam0);
		
		case 9:
			return func_805(iParam0);
		
		default:
	}
	return 0;
}

bool func_818(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 0);
}

int func_819(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_823(iParam0);
		
		case 1:
			return func_822(iParam0);
		
		case 2:
			return func_821(iParam0);
		
		case 3:
			return func_820(iParam0);
		
		case 4:
			return func_829(iParam0);
		
		default:
	}
	return 0;
}

bool func_820(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 10);
}

bool func_821(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 9);
}

bool func_822(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 8);
}

bool func_823(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 7);
}

bool func_824(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_825(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_809(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_809(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_809(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_809(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_826(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_827(int iParam0)
{
	unk_0x63C4B5C08A6803B2(&Global_1682091);
	func_828();
}

void func_828()
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
	Global_1682091 = { Var0 };
}

int func_829(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 31);
	}
	return 0;
}

bool func_830(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 0);
}

bool func_831(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 5);
	}
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 19);
}

var func_832(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_205.f_6;
}

int func_833(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_834(func_835(unk_0x1146A9AE09CE2B14()))))
	{
		return 1;
	}
	return 0;
}

int func_834(int iParam0)
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

int func_835(int iParam0)
{
	if (func_406(iParam0) == 237 || func_406(iParam0) == 250)
	{
		return func_796(iParam0);
	}
	return -1;
}

void func_836(int iParam0)
{
	unk_0x347A83B3F61970C7(&Global_1681955);
	func_837();
}

void func_837()
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
	Global_1681955 = { Var0 };
	Global_1681955.f_16 = 0;
}

bool func_838()
{
	return func_862(6158, -1, 0) != 0;
}

int func_839(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_273 != 0;
	}
	return 0;
}

bool func_840()
{
	return func_862(6166, -1, 0) == 3;
}

bool func_841()
{
	return func_862(6166, -1, 0) == 2;
}

bool func_842()
{
	return func_862(6166, -1, 0) == 1;
}

void func_843(int iParam0)
{
	unk_0x1CB9689363D61451(&Global_1681901);
	func_844();
}

void func_844()
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
	Global_1681901 = { Var0 };
	Global_1681901.f_23 = 0;
	Global_1681901.f_24 = 0;
	Global_1681901.f_16 = 0;
}

void func_845()
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
		iVar2 = (iVar0 + func_856(12));
		func_855(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323703[iVar1 /*142*/].f_66 != 0 && func_847(Global_1323703[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2544210.f_958 != iVar1)
				{
					if (func_846(Global_1323703[iVar1 /*142*/].f_66))
					{
						if (Global_1323703[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1323703[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1681901.f_38 = iVar3;
								break;
							
							case 1:
								Global_1681901.f_39 = iVar3;
								break;
							
							case 2:
								Global_1681901.f_40 = iVar3;
								break;
							
							case 3:
								Global_1681901.f_41 = iVar3;
								break;
							
							case 4:
								Global_1681901.f_42 = iVar3;
								break;
							
							case 5:
								Global_1681901.f_43 = iVar3;
								break;
							
							case 6:
								Global_1681901.f_44 = iVar3;
								break;
							
							case 7:
								Global_1681901.f_45 = iVar3;
								break;
							
							case 8:
								Global_1681901.f_46 = iVar3;
								break;
							
							case 9:
								Global_1681901.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_846(int iParam0)
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

int func_847(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_854())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
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
		if ((((!func_853() && !func_852()) && !func_851()) && !func_850()) && !func_854())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_851())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_849(iParam0))
		{
			return 0;
		}
	}
	if (!func_848(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_848(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_677())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
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
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_849(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
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
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_850()
{
	return 0;
}

int func_851()
{
	return 1;
}

int func_852()
{
	return 1;
}

int func_853()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_854()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_855(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10335)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1678528[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x2053F6ACFD4ED4BC() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_856(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_793(iParam0);
		return func_858(iVar0);
	}
	return (func_857(iParam0, -1, 1) * iParam0);
}

int func_857(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_765(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_771(iParam1))
			{
				return 0;
			}
			else if (func_341(iParam1, -1))
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
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 <= 127 && iParam1 > 0)
			{
				if (Global_1049961[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
	}
	return 0;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

var func_859()
{
	var uVar0;
	
	uVar0 = func_861();
	if (!func_860())
	{
		if (func_120() != func_24())
		{
			uVar0 = func_22(func_120()) + 1;
		}
	}
	return uVar0;
}

bool func_860()
{
	return func_486(unk_0x1146A9AE09CE2B14());
}

int func_861()
{
	return func_22(unk_0x1146A9AE09CE2B14()) + 1;
}

int func_862(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_574(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_863()
{
	return func_862(6115, -1, 0);
}

int func_864(int iParam0)
{
	if (func_450(iParam0, 1))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_426;
	}
	return -1;
}

void func_865(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x25A7052BD3A74454(&Global_1681857);
	func_866();
}

void func_866()
{
	struct<44> Var0;
	
	Global_1681857 = { Var0 };
	Global_1681857.f_23 = 0;
	Global_1681857.f_24 = 0;
	Global_1681857.f_16 = 0;
}

bool func_867(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 12);
}

bool func_868(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 13);
}

int func_869(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_871(iParam0, iParam1))
	{
		iVar0 = func_870(iParam0, iParam1);
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_870(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_651(iParam1) && iParam0 != func_24())
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

int func_871(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_651(iParam1) && iParam0 != func_24())
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

int func_872(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 12) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 13)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_873(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_874(int iParam0)
{
	if (iParam0 != func_24())
	{
		if (((((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_875(int iParam0, int iParam1)
{
	if (iParam1 == func_24())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 0))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 3))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 6))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 9))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 12))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 15))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 18))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 21))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 1))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 4))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 7))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 10))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 13))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 16))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 19))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 22))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 2))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 5))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 8))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 11))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 14))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 17))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 20))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 23))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_876(int iParam0)
{
	if (iParam0 != func_24())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 6) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 7)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_877(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 8);
}

bool func_878(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 7);
}

bool func_879(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 9);
}

bool func_880(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 11);
}

bool func_881(int iParam0)
{
	if (iParam0 == func_24())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 10);
}

int func_882(int iParam0, int iParam1)
{
	return func_862(func_883(iParam1), iParam0, 0);
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

void func_884(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x23BA98A349F4B91D(&Global_1681794);
	func_885();
}

void func_885()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
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
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1681794 = { Var0 };
	Global_1681794.f_24 = 0;
	Global_1681794.f_25 = 0;
	Global_1681794.f_17 = 0;
}

void func_886(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE68A21B882B190D2(&Global_1681740);
	func_887();
}

void func_887()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
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
	Global_1681740 = { Var0 };
	Global_1681740.f_29 = 0;
	Global_1681740.f_30 = 0;
	Global_1681740.f_17 = 0;
}

int func_888(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_869(iParam0, iParam1, 2);
	bVar1 = func_869(iParam0, iParam1, 1);
	bVar2 = func_869(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_889(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_24())
	{
		return 0;
	}
	if (func_651(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_890(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_762(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 19;
	}
	else if (func_761(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_482(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17858;
			iVar1 = 20;
		}
	}
	else if (func_591(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x271E26F00E8A6125(func_798(func_120()), func_797(func_120()), func_909(), func_908(), iVar1, iVar0);
	}
	func_892(iVar0);
	func_891(iVar0);
	return iVar0;
}

void func_891(int iParam0)
{
	int iVar0;
	
	iVar0 = func_862(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_465 = iVar0;
	func_675(3970, iVar0, -1, 1, 0);
}

void func_892(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	Global_1630816[iVar0 /*597*/].f_11.f_464 = (Global_1630816[iVar0 /*597*/].f_11.f_464 + iParam0);
	if (Global_1630816[iVar0 /*597*/].f_11.f_464 < -9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
	else if (Global_1630816[iVar0 /*597*/].f_11.f_464 > 9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
}

int func_893(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_564(unk_0x1146A9AE09CE2B14()) || func_408(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

void func_894(var uParam0)
{
	unk_0x091644086E892B74(&Global_1682001);
	func_895();
}

void func_895()
{
	struct<36> Var0;
	
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
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1682001 = { Var0 };
}

int func_896(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_324 != 0;
	}
	return 0;
}

int func_897()
{
	int iVar0;
	
	if (func_900())
	{
		return 4;
	}
	else if (func_860())
	{
		if (func_899(unk_0x1146A9AE09CE2B14()))
		{
			return 8;
		}
		return 6;
	}
	if (func_516(1))
	{
		iVar0 = func_864(unk_0x1146A9AE09CE2B14());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_898(1))
	{
		if (func_899(func_120()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

bool func_898(bool bParam0)
{
	return func_450(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_899(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

bool func_900()
{
	return func_518(unk_0x1146A9AE09CE2B14());
}

int func_901(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_902(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_442(unk_0x1146A9AE09CE2B14());
	}
	else
	{
		iVar0 = func_406(unk_0x1146A9AE09CE2B14());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_907(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_905(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_904(unk_0x1146A9AE09CE2B14());
			if (func_834(func_835(unk_0x1146A9AE09CE2B14())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_904(unk_0x1146A9AE09CE2B14());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_903(unk_0x1146A9AE09CE2B14());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_903(unk_0x1146A9AE09CE2B14());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_903(int iParam0)
{
	if (func_406(unk_0x1146A9AE09CE2B14()) == 238 || func_406(unk_0x1146A9AE09CE2B14()) == 249)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_474;
	}
	return -1;
}

int func_904(int iParam0)
{
	if (func_406(unk_0x1146A9AE09CE2B14()) == 237 || func_406(unk_0x1146A9AE09CE2B14()) == 250)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_473;
	}
	return -1;
}

int func_905(int iParam0)
{
	return func_906(iParam0, 150);
}

int func_906(int iParam0, int iParam1)
{
	if (func_442(iParam0) == iParam1)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_471;
	}
	return -1;
}

int func_907(int iParam0)
{
	return func_906(iParam0, 236);
}

int func_908()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_909()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

void func_910()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Global_1681857.f_19 = (Local_235.f_1237 - func_119() + 1);
	iVar1 = func_384(unk_0x1146A9AE09CE2B14());
	iVar2 = func_679(unk_0x1146A9AE09CE2B14(), iVar1);
	fVar0 = func_680();
	fVar0 = (fVar0 * Global_262145.f_18756);
	iVar3 = round((to_float(iVar2) * fVar0));
	Global_1681857.f_26 = func_889(unk_0x1146A9AE09CE2B14(), func_384(unk_0x1146A9AE09CE2B14()));
	Global_1681857.f_27 = (iVar2 - iVar3);
}

void func_911(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_1057(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_1056(iParam0, uParam2->f_13, bParam3));
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
		iVar0 = (iVar0 + func_1055(iParam0, bParam3));
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
	if (func_1054(iParam0))
	{
		if (bParam1)
		{
			if (func_1053(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_1052();
			}
			else
			{
				func_1051();
			}
		}
		else
		{
			func_1050();
		}
	}
	func_1034(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_1032(iParam0, uParam2, &iVar0, &iVar5);
	func_1017(iParam0, uParam2, &iVar0, &iVar5);
	func_1014(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_997(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = uVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_519();
	if (iVar8 != func_24() && iParam0 != 148)
	{
		if (func_450(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (!func_484(unk_0x1146A9AE09CE2B14(), iVar8, 1))
			{
				func_982(&iVar0, 1);
			}
		}
	}
	func_978(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_977();
		func_935(0, unk_0x7D2B9E6A64637269(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_924(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_923(iParam0, iVar0);
		if (func_922(iParam0))
		{
			if (func_921(iParam0) > -1)
			{
				func_920(func_921(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_919(&Global_2463963, 0, 0);
	}
	if (func_564(unk_0x1146A9AE09CE2B14()) || func_408(unk_0x1146A9AE09CE2B14()))
	{
		func_912(iParam0);
	}
	if (func_591(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_596(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_759(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_757(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_755(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_595(iParam0))
	{
		if (func_826(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_833(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_799(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_749(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_748(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_742(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

void func_912(int iParam0)
{
	if (func_918(unk_0x1146A9AE09CE2B14()) && func_900())
	{
		if (func_762(iParam0))
		{
			func_915(10571, -1);
		}
		else if (func_914(iParam0))
		{
			func_915(10573, -1);
		}
		else if (func_482(iParam0, 1))
		{
			func_915(10574, -1);
		}
		else if (func_913(iParam0))
		{
			func_915(10575, -1);
		}
	}
}

int func_913(int iParam0)
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

int func_914(int iParam0)
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

void func_915(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_862(iParam0, func_574(iParam1), 0);
	iVar0++;
	if (!func_917(iParam0))
	{
		func_675(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_916(iParam0, iVar0, iParam1, 1);
	}
}

void func_916(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_574(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_574(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_574(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_574(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_574(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_574(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_574(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_574(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_574(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_574(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_574(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_574(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_574(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_574(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_574(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_574(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_574(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_574(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_574(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_574(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_574(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_574(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_574(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_574(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_574(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_574(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_574(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_574(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_574(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_574(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_574(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_574(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_574(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_574(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_574(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_574(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_574(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_574(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_574(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_574(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_574(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_574(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_574(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_574(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_574(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_574(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_574(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_574(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_574(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_574(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_574(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_574(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_574(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_574(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_917(int iParam0)
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

bool func_918(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

void func_919(var uParam0, bool bParam1, bool bParam2)
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

void func_920(int iParam0, int iParam1)
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

int func_921(int iParam0)
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

int func_922(int iParam0)
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

void func_923(int iParam0, int iParam1)
{
	if (func_918(unk_0x1146A9AE09CE2B14()) && func_900())
	{
		if (func_762(iParam0) && iParam1 > 0)
		{
			func_675(10572, (func_862(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_924(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_120();
	if (iVar5 != func_24())
	{
		func_934(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_898(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_677())
			{
				unk_0x5770EF297A89065D(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_900())
			{
				if (!func_677())
				{
					Var7 = { func_933() };
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_649(Var7)), func_674(Var7), iParam4);
				}
			}
			else if (func_677())
			{
				func_929(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_860())
			{
				if (!func_677())
				{
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_649(func_384(unk_0x1146A9AE09CE2B14()))), 5, iParam4);
				}
			}
			else if (func_677())
			{
				func_929(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_860())
			{
				if (!func_677())
				{
					iVar2 = func_925(uParam5->f_16, iParam4);
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
			else if (func_677())
			{
				func_929(463142405, iParam1, &iVar4, 0, 1, 0);
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
			if (func_677())
			{
				func_929(1407278493, iParam1, &iVar4, 0, 1, 0);
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
			if (func_860())
			{
				if (!func_677())
				{
					unk_0x624394FE858634D7(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_677())
			{
				func_929(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_677())
			{
				func_929(-961034881, iParam1, &iVar4, 0, 1, 0);
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
			if (func_677())
			{
				func_929(1135468152, iParam1, &iVar4, 0, 1, 0);
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
			if (func_677())
			{
				func_929(-634726636, iParam1, &iVar4, 0, 1, 0);
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
			if (func_677())
			{
				func_929(1698417709, iParam1, &iVar4, 0, 1, 0);
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
				if (func_677())
				{
					func_929(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x6BB4249BA6AD63A1(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_677())
			{
				func_929(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x6BB4249BA6AD63A1(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_677())
			{
				func_929(-856006867, iParam1, &iVar4, 0, 1, 0);
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

int func_925(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_928(iParam0, iParam1);
	fVar1 = (to_float(func_926(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_926(int iParam0, int iParam1)
{
	return (func_927(iParam0) * iParam1);
}

int func_927(int iParam0)
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

float func_928(int iParam0, int iParam1)
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

void func_929(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_677())
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
				func_930(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_930(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_930(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_930(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_930(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_677())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_41()) || unk_0xD699DB7515D82955())
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
			*uParam0 = func_665(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_932(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_931(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_931(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_654(iParam0);
	}
}

void func_932(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

struct<2> func_933()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_194;
}

void func_934(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_935(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_936(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_936(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_946(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				uVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_942(unk_0x885F3A431ECE75E3(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_937(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_937(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_940(iParam0, 1) };
	if (iParam0 == func_939(unk_0x7D2B9E6A64637269()))
	{
		func_938(1);
	}
	func_942(Var0, iParam1, 0, sParam2, iParam3);
}

void func_938(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_939(int iParam0)
{
	return iParam0;
}

Vector3 func_940(int iParam0, bool bParam1)
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
	if (iParam0 == func_941(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
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

int func_941(int iParam0)
{
	return iParam0;
}

void func_942(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_945(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam1;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam2;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_944();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_943();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam4);
		}
	}
}

int func_943()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_944()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_945(struct<3> Param0, var uParam1, var uParam2)
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

var func_946(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_947(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_947(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_976(unk_0x1146A9AE09CE2B14()) || func_975(unk_0x1146A9AE09CE2B14()))
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
	else if (func_506() || func_974(unk_0x1146A9AE09CE2B14()))
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
	if (func_973(sParam2))
	{
	}
	if (func_972())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_970(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_969(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_967(0, &iVar1);
					break;
				
				case 3:
					func_967(1, &iVar1);
					break;
				
				case 1:
					func_965(&iVar1);
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
			func_964(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_957((func_963(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_964(1166, iVar1, -1);
				}
				func_952(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_948((func_950(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_948((func_950(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_948(int iParam0)
{
	if (func_972())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_949(joaat("mpply_globalxp"), iParam0);
	}
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_950(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_2342(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_951(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_951(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_951(int iParam0)
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

void func_952(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_48(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_955(func_956(&Var0));
			if (iVar1 == 0)
			{
				func_954(&Global_1390382, iParam0);
				func_953(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_954(&Global_1390383, iParam0);
				func_953(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_954(&Global_1390384, iParam0);
				func_953(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_954(&Global_1390385, iParam0);
				func_953(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_954(&Global_1390386, iParam0);
				func_953(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_953(int iParam0, int iParam1)
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

void func_954(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_955(int iParam0)
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

int func_956(var uParam0)
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

void func_957(int iParam0, int iParam1, int iParam2)
{
	if (func_972())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_574(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_574(-1)])
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
		if (func_359(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_961(iParam0, 1);
		}
		func_916(640, iParam0, -1, 1);
		func_675(641, func_961(iParam0, 1), -1, 1, 0);
		Global_1390527[func_574(-1)] = iParam0;
		func_958(-1109644434, 7, 0);
	}
}

void func_958(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_960(iParam1, iParam2))
	{
		iVar0 = func_959();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_959()
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

int func_960(int iParam0, var uParam1)
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

int func_961(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_962(iParam0, 0);
}

int func_962(int iParam0, int iParam1)
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

int func_963(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_574(-1)];
			}
			else if (func_359(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_574(-1)];
	}
	return 0;
}

void func_964(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_862(iParam0, func_574(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_917(iParam0))
	{
		func_675(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_916(iParam0, iVar0, iParam2, 1);
	}
}

void func_965(int iParam0)
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
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_211(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_49(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = round((func_966(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_966(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_966(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_967(bool bParam0, int iParam1)
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
				if (func_2342(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_49(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_2342(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_968(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_49(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = round((func_966(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_966(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_968(int iParam0, int iParam1)
{
	return vdist(func_43(iParam0), func_43(iParam1));
	return 0f;
}

int func_969(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_966(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_970(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_963(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_963(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_971(8000, 0, 0) > 0)
	{
		if (func_971(8000, 0, 0) < (iParam0 + func_963(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_971(8000, 0, 0) - func_963(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_971(int iParam0, bool bParam1, int iParam2)
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

int func_972()
{
	return 1;
}

int func_973(char* sParam0)
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

int func_974(int iParam0)
{
	return func_755(func_406(iParam0));
}

bool func_975(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_976(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_977()
{
	Global_2465048 = 1;
}

void func_978(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_540(7))
	{
		return;
	}
	iVar0 = func_981(iParam0);
	iVar1 = func_980(iParam0);
	iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2544210.f_5191.f_268, unk_0x551F46B3C7DFB654()));
	if (func_979(iParam0) != -1)
	{
		if (iVar2 > func_979(iParam0))
		{
			iVar2 = func_979(iParam0);
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

int func_979(int iParam0)
{
	if (func_482(iParam0, 0) || func_914(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_762(iParam0))
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

int func_980(int iParam0)
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
			if (!func_860())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_860())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_860())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_860())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_860())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_860())
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
			if (!func_860())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_860())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_860())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_860())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_860())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_981(int iParam0)
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
			if (func_516(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_516(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_516(0))
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
			if (func_516(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_516(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_516(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_516(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_516(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_516(0))
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
			if (func_516(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_516(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_516(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_516(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_982(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_860())
		{
			if (func_898(0))
			{
				if (!func_516(0))
				{
					if (unk_0x8CFC2F41A749E236(func_120()))
					{
						if (func_996() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_996());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_994(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_987("GB_BCUT_TICK1", func_120(), iVar0, 0, 0, 1);
						}
						func_986(20);
						func_983(func_120(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_983(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_2342(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_985(iParam0);
		func_984(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_660(iParam0));
	}
}

void func_984(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_985(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

void func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_987(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0xB2A9BDF905DC5A51(func_702(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_992(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_988(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_988(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_991() || !unk_0xE45310E861787FC2()) || !func_39(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_989(iParam2);
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

int func_989(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_990(iVar0);
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

void func_990(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_991()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

var func_992(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_993(&cVar0);
}

var func_993(char[4] cParam0)
{
	return cParam0;
}

void func_994(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_995(1);
	}
	else
	{
		iVar1 = func_995(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_995(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_996()
{
	return Global_262145.f_12567;
}

void func_997(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_516(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_860())
		{
			iVar17 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar17 = func_120();
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
				iVar2 = func_1013(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
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
			iVar10 = func_1012(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x1146A9AE09CE2B14())
				{
					func_1011("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == unk_0x1146A9AE09CE2B14())
			{
				if (iVar2 > 0)
				{
					func_1010(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_1008(*uParam3);
				}
				iVar6 = func_1007(&uVar5);
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
						func_986(140);
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
								if (func_1006(iVar23))
								{
									func_998(iVar23, 1, 198210293);
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
					func_986(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_998(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_1000(iParam0);
	func_999(iParam0, uVar0, iParam1, iParam2);
}

void func_999(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_985(iParam0);
	func_984(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_24())
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_660(iParam0));
		}
	}
}

int func_1000(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1005();
	iVar0 = func_1003(iParam0, iVar0);
	iVar1 = Global_1630816[func_120() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_1002())
	{
		iVar0 = func_1002();
	}
	if (iVar0 > func_1001())
	{
		iVar0 = func_1001();
	}
	return iVar0;
}

int func_1001()
{
	return Global_262145.f_15135;
}

int func_1002()
{
	return Global_262145.f_16310;
}

int func_1003(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_1053(iParam0) * func_1004());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_1004()
{
	return Global_262145.f_16309;
}

var func_1005()
{
	return Global_262145.f_12559;
}

int func_1006(int iParam0)
{
	if (unk_0x8CFC2F41A749E236(iParam0))
	{
		if (iParam0 != unk_0x1146A9AE09CE2B14())
		{
			if (func_484(iParam0, unk_0x1146A9AE09CE2B14(), 0))
			{
				if (!func_409(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1007(var uParam0)
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
			if (!func_39(iVar2, 0) && !func_484(iVar2, unk_0x1146A9AE09CE2B14(), 1))
			{
				iVar1++;
			}
			else if (func_39(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1008(int iParam0)
{
	func_1009(iParam0, 7238);
}

void func_1009(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_862(iParam1, -1, 0);
	func_675(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_1010(int iParam0)
{
	func_1009(iParam0, 7233);
}

int func_1011(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	if (bParam2)
	{
		func_988(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_988(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_1012(int iParam0)
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

int func_1013(struct<5> Param0, int iParam1)
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

void func_1014(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_516(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_860())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_120();
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
			iVar2 = func_926(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_925(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_1016(*iParam2) > 0)
			{
				if (iVar15 == unk_0x1146A9AE09CE2B14())
				{
					func_1011("SMTICK_RONCUT", func_1016(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_1016(*iParam2));
			}
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_1015(iVar2, iVar9);
				iVar6 = func_1007(&uVar5);
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
						func_986(44);
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
								if (func_1006(iVar20))
								{
									func_998(iVar20, 1, 1160415507);
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
					func_986(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_1015(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_1009(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_1009(iParam1, 6119);
	}
}

int func_1016(int iParam0)
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

void func_1017(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_516(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_860())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_120();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_384(iVar15);
			iVar0 = (func_679(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_1031(iVar15, iVar16, iVar1);
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
				func_1025(iVar16, iVar2);
				if (func_1023(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_1018(5);
				}
				iVar6 = func_1007(&uVar5);
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
						func_986(108);
					}
					else
					{
						func_986(110);
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
								if (func_1006(iVar20))
								{
									func_998(iVar20, 1, -1905128202);
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
					func_986(112);
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

void func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_1020(Global_262145.f_20751))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_1020(Global_262145.f_20753))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_1020(Global_262145.f_20755))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_1020(Global_262145.f_20757))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_1020(Global_262145.f_20759))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_1020(Global_262145.f_20761))
				{
					func_1011("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_1020(Global_262145.f_20764))
				{
					func_1011("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_1020(Global_262145.f_20767))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_1020(Global_262145.f_20769))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_1020(Global_262145.f_20771))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_1020(Global_262145.f_20773))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_1020(Global_262145.f_20775))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_1020(Global_262145.f_20777))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_1020(Global_262145.f_20779))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_1020(Global_262145.f_20781))
				{
					func_1019("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_1019(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		Global_2518253 = { func_48(unk_0x1146A9AE09CE2B14()) };
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
	func_988(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_671(15417, -1, -1))
			{
				func_670(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_671(15418, -1, -1))
			{
				func_670(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_671(15425, -1, -1))
			{
				func_670(15425, 1, -1, 1);
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
			if (!func_671(15405, -1, -1))
			{
				func_670(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_671(15393, -1, -1))
			{
				func_670(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_671(15409, -1, -1))
			{
				func_670(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_671(15396, -1, -1))
			{
				func_670(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_671(15412, -1, -1))
			{
				func_670(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_671(15403, -1, -1))
			{
				func_670(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_671(15389, -1, -1))
			{
				func_670(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_671(15398, -1, -1))
			{
				func_670(15398, 1, -1, 1);
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
			if (!func_671(15400, -1, -1))
			{
				func_670(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_671(15408, -1, -1))
			{
				func_670(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_671(15411, -1, -1))
			{
				func_670(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_671(15397, -1, -1))
			{
				func_670(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_671(15413, -1, -1))
			{
				func_670(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_671(15391, -1, -1))
			{
				func_670(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_671(15388, -1, -1))
			{
				func_670(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_671(15401, -1, -1))
			{
				func_670(15401, 1, -1, 1);
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
			if (!func_671(15394, -1, -1))
			{
				func_670(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_671(15406, -1, -1))
			{
				func_670(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_671(15395, -1, -1))
			{
				func_670(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_671(15410, -1, -1))
			{
				func_670(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_671(15407, -1, -1))
			{
				func_670(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_671(15414, -1, -1))
			{
				func_670(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_671(15415, -1, -1))
			{
				func_670(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_671(15399, -1, -1))
			{
				func_670(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_671(15404, -1, -1))
			{
				func_670(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_671(15392, -1, -1))
			{
				func_670(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_671(15390, -1, -1))
			{
				func_670(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_671(15402, -1, -1))
			{
				func_670(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_671(15416, -1, -1))
			{
				func_670(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_573(209, -1))
			{
				func_1021(209, 1, -1, 1);
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
			if (!func_671(15426, -1, -1))
			{
				func_670(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_671(15422, -1, -1))
			{
				func_670(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_671(15423, -1, -1))
			{
				func_670(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_671(15421, -1, -1))
			{
				func_670(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_671(15427, -1, -1))
			{
				func_670(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_671(15419, -1, -1))
			{
				func_670(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_671(15420, -1, -1))
			{
				func_670(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_1021(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_1022())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_574(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_1022()
{
	return 1;
	return 0;
}

int func_1023(int iParam0)
{
	int iVar0;
	
	iVar0 = func_678(iParam0);
	return func_862(func_1024(iVar0), -1, 0);
}

int func_1024(int iParam0)
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

void func_1025(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_678(iParam0);
	iVar1 = func_1024(iVar0);
	iVar2 = (func_862(iVar1, -1, 0) + iParam1);
	func_675(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_1028(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_1024(iVar0);
				iVar3 = (iVar3 + func_862(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_1027(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_1026(9357, iVar5, -1, 1);
	}
}

var func_1026(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
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

int func_1027(int iParam0)
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

int func_1028(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_1030(iParam0, iParam1);
	uVar2 = func_1029(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_1029(int iParam0)
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

int func_1030(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_1031(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_674(iParam1);
	if (func_651(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_869(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_869(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

void func_1032(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_900())
			{
				Var0 = { func_933() };
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
				iVar6 = func_1031(unk_0x1146A9AE09CE2B14(), Var0, *uParam3);
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
				iVar10 = func_1007(&uVar9);
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
					func_986(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_516(0))
			{
				Var14 = { func_1033(func_120()) };
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
				iVar20 = func_1031(func_120(), Var14, *uParam3);
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

struct<2> func_1033(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_1034(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_486(unk_0x1146A9AE09CE2B14()))
		{
			if (bParam1)
			{
				func_1049();
			}
			func_1048();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_486(unk_0x1146A9AE09CE2B14()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_1040(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_1039(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_1007(&uVar2);
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
						func_986(44);
					}
				}
				func_1037(*iParam3);
				func_1036();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x5E72DF7B8C03AA05())
				{
					iVar8 = iVar7;
					if (unk_0xF46EDF82CA845956(iVar8))
					{
						iVar9 = unk_0x539ED6DF32477DE0(iVar8);
						if (func_1006(iVar9))
						{
							func_998(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_486(unk_0x1146A9AE09CE2B14()))
		{
			func_1035();
		}
	}
}

void func_1035()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_41()];
	iVar0++;
	func_916(3669, iVar0, -1, 1);
}

void func_1036()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_41()];
	iVar0++;
	func_916(3668, iVar0, -1, 1);
}

void func_1037(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_41()];
	iVar0 = (iVar0 + iParam0);
	func_916(3670, iVar0, -1, 1);
	if (func_1028(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_1038(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_1026(7666, iVar2, -1, 1);
	}
}

int func_1038(int iParam0)
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

var func_1039(int iParam0)
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

int func_1040(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_1047(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_1046(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_1045(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_1041(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_1041(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_1045(unk_0xB36B8558948EA7A8(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_1041(int iParam0)
{
	int iVar0;
	
	if (func_1044(iParam0))
	{
		iVar0 = func_1042(func_1043(iParam0));
		return func_862(iVar0, -1, 0);
	}
	return 0;
}

int func_1042(int iParam0)
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

int func_1043(int iParam0)
{
	int iVar0;
	
	if (func_1044(iParam0))
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

int func_1044(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_1045(int iParam0)
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

int func_1046(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_1044(iParam0))
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

int func_1047(int iParam0)
{
	int iVar0;
	
	if (func_1044(iParam0))
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

void func_1048()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_41()];
	iVar0++;
	Global_2595528[func_41()] = iVar0;
	func_916(3667, iVar0, -1, 1);
}

void func_1049()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_41()];
	iVar1 = Global_2595534[func_41()];
	iVar0++;
	iVar1++;
	Global_2595525[func_41()] = iVar0;
	Global_2595534[func_41()] = iVar1;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_130 = iVar1;
	func_916(3665, iVar0, -1, 1);
	func_916(3666, iVar1, -1, 1);
}

void func_1050()
{
	if (func_860())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_1051()
{
	if (func_860())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_1052()
{
	if (func_860())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_1053(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_1054(int iParam0)
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
			if (func_898(1) && !func_516(1))
			{
				if (func_899(func_120()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_401(iParam0) == 0)
	{
		if (func_898(1) && !func_516(1))
		{
			if (func_899(func_120()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1055(int iParam0, bool bParam1)
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

int func_1056(int iParam0, bool bParam1, bool bParam2)
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
			if (func_860())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_860())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_900())
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
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_900())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_860() && !func_900())
			{
				if (func_899(unk_0x1146A9AE09CE2B14()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_900())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_1057(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_1058(iParam0))
	{
		if (!func_860())
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
	if (func_450(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (func_591(iParam0))
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
	else if (func_591(iParam0))
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
	iVar0 = func_519();
	if (iVar0 != func_24())
	{
		if (func_484(unk_0x1146A9AE09CE2B14(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_1058(int iParam0)
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

void func_1059()
{
	switch (Local_235.f_703)
	{
		case 0:
			func_1061();
			break;
		
		case 1:
			func_1060();
			break;
	}
}

void func_1060()
{
	if (func_3(17) || func_3(4))
	{
		func_689(87, "DGUN_DBUSI", "DGUN_VLKSHA", 1, -1, 2, 1, 0);
	}
	else if (func_3(3) || func_3(15))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
	else if (func_3(8))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
	else if (func_3(9))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
}

void func_1061()
{
	if (func_3(17) || func_3(4))
	{
		func_689(87, "DGUN_DBUSI", "DGUN_VLKSHA", 1, -1, 2, 1, 0);
	}
	else if (func_3(3) || func_3(15))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
	else if (func_3(8))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
	else if (func_3(9))
	{
		func_689(89, "DGUN_DBUSIO", "DGUN_FAIL", 1, -1, 2, 1, 0);
	}
}

void func_1062(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (func_1090() && !bParam2)
		{
			if (bParam1)
			{
				func_1089(10);
			}
			else
			{
				func_1089(12);
			}
		}
		else if (bParam1)
		{
			if (bParam2)
			{
				func_1089(9);
			}
			else
			{
				func_1089(8);
			}
		}
		else
		{
			func_1089(11);
		}
	}
	else if (iParam0 == 0)
	{
		if (func_860())
		{
			if (bParam1)
			{
				func_1089(0);
			}
			else
			{
				func_1089(1);
			}
		}
	}
	else if (func_1088(iParam0))
	{
		if (bParam1)
		{
			if (func_1082())
			{
				func_1089(6);
			}
			else if (bParam2)
			{
				func_1089(5);
			}
			else
			{
				func_1089(4);
			}
		}
		else
		{
			func_1089(7);
		}
	}
	else if (func_860())
	{
		if (bParam1)
		{
			iVar0 = func_882(func_41(), 5) + 1;
			iVar1 = func_862(5466, -1, 0);
			if (func_1081(iVar0))
			{
				if (func_878(unk_0x1146A9AE09CE2B14()))
				{
					if (!unk_0x234B68AC2E35ED5A(iVar1, 12))
					{
						func_1089(20);
						unk_0x191DDA30577F440A(&iVar1, 12);
						func_675(5466, iVar1, -1, 1, 0);
					}
					else
					{
						func_1089(21);
					}
				}
				else
				{
					func_1089(2);
					if (!unk_0x234B68AC2E35ED5A(iVar1, 12) && !unk_0x234B68AC2E35ED5A(iVar1, 13))
					{
						unk_0x191DDA30577F440A(&iVar1, 13);
						func_675(5466, iVar1, -1, 1, 0);
					}
				}
			}
			else
			{
				func_1089(2);
			}
		}
		else
		{
			func_1089(3);
		}
	}
	else if (bParam1)
	{
		func_1089(2);
	}
	else
	{
		func_1089(3);
	}
	if (!func_1078(func_1079(), 3))
	{
		func_1063(func_1079(), 3, 0);
		func_1089(13);
	}
	Global_1694752 = 1;
}

void func_1063(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8354 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		func_1070();
		if (iParam1 == 4)
		{
			func_1069(iParam0, 0, 1);
			func_1069(iParam0, 1, 1);
			func_1069(iParam0, 2, 1);
			func_1068(iParam0, 0, 1);
			func_1068(iParam0, 1, 1);
			func_1068(iParam0, 2, 1);
		}
		else
		{
			if (func_1067(iParam0, iParam1) == 1 && func_1066(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_1069(iParam0, iVar0, 1);
			func_1068(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2544210.f_6705)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77248)
			{
				if (iParam1 != 4)
				{
					if (Global_19798 != iParam1)
					{
						Global_8327[iParam1 /*4*/] = { func_1065(iParam0) };
						Global_8344[iParam1] = 1;
						Global_8349[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19798)
					{
					}
					else
					{
						Global_8278[1 /*6*/] = { func_1065(iParam0) };
						Global_8278[1 /*6*/].f_5 = iParam1;
						func_1064();
					}
				}
				else
				{
					Global_8278[1 /*6*/] = { func_1065(iParam0) };
					Global_8278[1 /*6*/].f_5 = iParam1;
					func_1064();
				}
			}
			else
			{
				Global_8278[1 /*6*/] = { func_1065(iParam0) };
				Global_8278[1 /*6*/].f_5 = iParam1;
				func_1064();
			}
		}
	}
}

void func_1064()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[Global_8354 /*29*/].f_7)), 64);
	if (Global_8373 == 0)
	{
		unk_0xAD97A7EDCF347FBB("");
		StringCopy(&cVar1, unk_0x3A2A8DAFDBEC4CFE(&(Global_8278[1 /*6*/])), 64);
		sVar2 = unk_0x3A2A8DAFDBEC4CFE("CELL_253");
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xAD97A7EDCF347FBB("CELL_255");
		unk_0x1896EC0B030A48A2(&(Global_8278[1 /*6*/]));
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 0);
}

struct<4> func_1065(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_1066(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

int func_1067(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

void func_1068(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_1069(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_1070()
{
	if (func_1077(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_1071();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_1071()
{
	func_1072();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_1072()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_1075(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_1074(unk_0x7D2B9E6A64637269());
			if (func_1073(iVar0) && (!func_1077(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_1073(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_1073(int iParam0)
{
	return iParam0 < 3;
}

int func_1074(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1075(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1075(int iParam0)
{
	if (func_1073(iParam0))
	{
		return func_1076(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1076(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_1077(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_1078(int iParam0, int iParam1)
{
	if (func_1067(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1079()
{
	if (func_1080())
	{
		func_1068(76, Global_19798, 1);
	}
	return 76;
}

int func_1080()
{
	int iVar0;
	
	iVar0 = func_23(unk_0x1146A9AE09CE2B14());
	if (((iVar0 != unk_0x1146A9AE09CE2B14() && iVar0 != func_24()) && unk_0x8CFC2F41A749E236(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_1081(int iParam0)
{
	if (((((((iParam0 == Global_262145.f_21316 || iParam0 == Global_262145.f_21317) || iParam0 == Global_262145.f_21318) || iParam0 == Global_262145.f_21319) || iParam0 == Global_262145.f_21320) || iParam0 == Global_262145.f_21321) || iParam0 == Global_262145.f_21322) || iParam0 == Global_262145.f_21323)
	{
		return 1;
	}
	return 0;
}

int func_1082()
{
	if (func_860())
	{
		if (func_1083(-1, 5) == 2)
		{
			if (!func_869(unk_0x1146A9AE09CE2B14(), func_384(unk_0x1146A9AE09CE2B14()), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1083(int iParam0, int iParam1)
{
	return (func_1086(iParam0, iParam1) + func_1084(iParam0, iParam1));
}

int func_1084(int iParam0, int iParam1)
{
	return func_862(func_1085(iParam1), iParam0, 0);
}

int func_1085(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3902;
		
		case 1:
			return 3931;
		
		case 2:
			return 3935;
		
		case 3:
			return 3939;
		
		case 4:
			return 3943;
		
		case 5:
			return 5454;
		
		default:
	}
	return 3902;
}

int func_1086(int iParam0, int iParam1)
{
	return func_862(func_1087(iParam1), iParam0, 0);
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3912;
		
		case 1:
			return 3945;
		
		case 2:
			return 3947;
		
		case 3:
			return 3949;
		
		case 4:
			return 3951;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3912;
}

int func_1088(int iParam0)
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

void func_1089(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_19[iVar0]), iVar1);
}

int func_1090()
{
	if (func_860())
	{
		if (!func_869(unk_0x1146A9AE09CE2B14(), func_384(unk_0x1146A9AE09CE2B14()), 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1091()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	if (iVar1 != func_24())
	{
		if (unk_0x8CFC2F41A749E236(iVar1))
		{
			if (unk_0xFCC26BA7572E9F1F(iVar1))
			{
				iVar2 = unk_0x4645C707A0067CB6(iVar1);
				iVar0 = iVar2;
			}
		}
	}
	return iVar0;
}

void func_1092()
{
	if (func_3(22))
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_363[0]))
		{
			unk_0x89936830A493350F(uLocal_363[0], 1);
			unk_0x8E2E721D21D4A751(uLocal_363[0], 250);
		}
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_324, 31))
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_363[0]))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_324, 27))
			{
				unk_0xFABF45630A359B11(uLocal_363[0], 3000);
				unk_0x8E2E721D21D4A751(uLocal_363[0], 250);
				unk_0x191DDA30577F440A(&iLocal_324, 27);
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_325, 3))
	{
		if (unk_0x575B7C28D81C0B4D(Local_333.f_33[0]))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_324, 28))
			{
				unk_0xFABF45630A359B11(Local_333.f_33[0], 3000);
				unk_0x8E2E721D21D4A751(Local_333.f_33[0], 250);
				unk_0x191DDA30577F440A(&iLocal_324, 28);
			}
		}
	}
}

void func_1093()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	bVar4 = unk_0x234B68AC2E35ED5A(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1, 14);
	iVar5 = 1;
	if (!bVar4 || Local_235.f_703 == 1)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (func_1095(Local_235.f_703, Local_235.f_704, iVar2))
			{
				func_1094(Local_235.f_703, Local_235.f_704, iVar2, &Var0, &Var1, &fVar3);
				if (!func_33(Var0, 0f, 0f, 0f, 0))
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Var0, Var1, fVar3, 0, 1, 0))
						{
							if (!unk_0x234B68AC2E35ED5A(iLocal_325, 21))
							{
								unk_0x191DDA30577F440A(&iLocal_325, 21);
							}
							iVar5 = 0;
							if (!bVar4)
							{
								unk_0x191DDA30577F440A(&(Local_323[unk_0xDD0E57E73E5C4BF6() /*26*/].f_1), 14);
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	if (iVar5 && unk_0x234B68AC2E35ED5A(iLocal_325, 21))
	{
		unk_0xC664C0067EEAB8D1(&iLocal_325, 21);
	}
}

void func_1094(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1030.219f, -1926.545f, 5.078026f };
							*uParam4 = { 1108.106f, -1984.469f, 130.0266f };
							*uParam5 = 150f;
							break;
						
						case 1:
							*uParam3 = { 1087.047f, -1940.19f, 26.568f };
							*uParam4 = { 1055.059f, -1982.814f, 87.42628f };
							*uParam5 = 60f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 224.2512f, -1891.744f, -0.639847f };
							*uParam4 = { 131.3856f, -1819.176f, 126.2103f };
							*uParam5 = 120f;
							break;
						
						case 1:
							*uParam3 = { 202.653f, -1845.679f, 25.9146f };
							*uParam4 = { 190.3824f, -1859.31f, 66.01195f };
							*uParam5 = 60f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { -78.53048f, -2500.337f, -19.97525f };
							*uParam4 = { -128.0343f, -2565.069f, 105.014f };
							*uParam5 = 120f;
							break;
						
						case 1:
							*uParam3 = { -120.1785f, -2552.199f, 0.364465f };
							*uParam4 = { -92.39705f, -2511.55f, 30f };
							*uParam5 = 50f;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 759.0521f, -562.9367f, 6.596148f };
							*uParam4 = { 662.1919f, -527.7477f, 114.1338f };
							*uParam5 = 120f;
							break;
						
						case 1:
							*uParam3 = { 719.4771f, -568.799f, 20.18775f };
							*uParam4 = { 720.1401f, -591.9205f, 32.44475f };
							*uParam5 = 20f;
							break;
						
						case 2:
							*uParam3 = { 725.7919f, -544.3248f, 21.45323f };
							*uParam4 = { 739.4292f, -553.2186f, 58.77724f };
							*uParam5 = 50f;
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1713.811f, 3255.873f, 15.08811f };
							*uParam4 = { 1678.597f, 3363.158f, 138.8922f };
							*uParam5 = 120f;
							break;
						
						case 1:
							*uParam3 = { 1704.58f, 3297.624f, 35.97747f };
							*uParam4 = { 1715.241f, 3282.717f, 93.15347f };
							*uParam5 = 20f;
							break;
						
						case 2:
							*uParam3 = { 1715.327f, 3311.438f, 38.74059f };
							*uParam4 = { 1681.86f, 3301.49f, 90.09866f };
							*uParam5 = 40f;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 1354.264f, -1797.796f, 52.82171f };
							*uParam4 = { 1357.333f, -1924f, 132.0796f };
							*uParam5 = 140f;
							break;
						
						case 1:
							*uParam3 = { 1357.934f, -1833.941f, 53.56025f };
							*uParam4 = { 1361.172f, -1877.688f, 65.98701f };
							*uParam5 = 45f;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = { 724.2516f, -1894.992f, 3.443504f };
							*uParam4 = { 733.2203f, -1745.51f, 128.4057f };
							*uParam5 = 150f;
							break;
						
						case 1:
							*uParam3 = { 749.6342f, -1872.849f, 18.29155f };
							*uParam4 = { 768.6729f, -1874.329f, 68.24652f };
							*uParam5 = 10f;
							break;
						
						case 2:
							*uParam3 = { 741.6372f, -1880.003f, 25.16625f };
							*uParam4 = { 745.3834f, -1822.86f, 88.29161f };
							*uParam5 = 40f;
							break;
					}
					break;
			}
			break;
	}
}

int func_1095(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							return 0;
						
						case 1:
							return 0;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							return 0;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							return 0;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							if (unk_0x159BC3DDA80D71AC(Local_235.f_10[1 /*15*/].f_1))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(Local_235.f_10[1 /*15*/].f_1)))
								{
									return 0;
								}
							}
							break;
						
						case 2:
							return 0;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							if (unk_0x159BC3DDA80D71AC(Local_235.f_10[1 /*15*/].f_1))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(Local_235.f_10[1 /*15*/].f_1)))
								{
									return 0;
								}
							}
							break;
						
						case 2:
							return 0;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							return 0;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							if (unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()))
							{
								return 1;
							}
							break;
						
						case 1:
							if (unk_0x159BC3DDA80D71AC(Local_235.f_10[6 /*15*/].f_1))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(Local_235.f_10[6 /*15*/].f_1)))
								{
									return 0;
								}
							}
							if (unk_0x159BC3DDA80D71AC(Local_235.f_10[7 /*15*/].f_1))
							{
								if (!unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(Local_235.f_10[7 /*15*/].f_1)))
								{
									return 0;
								}
							}
							break;
						
						case 2:
							return 0;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1096()
{
	func_2115();
	func_2078();
	func_2077();
	func_2075();
	func_1986();
	func_1984();
	func_1980();
	func_1977();
	func_1935();
	func_1933();
	func_1924();
	func_1917();
	func_1912();
	func_1911();
	func_1904();
	func_1869();
	func_1857();
	func_1853();
	func_1780();
	func_1774();
	func_1773();
	func_1770();
	func_1768();
	func_1767();
	func_1097();
}

void func_1097()
{
	func_1101(&(Local_235.f_878[0]), &uLocal_195, &uLocal_197, 0);
	if (func_1100(unk_0xDD0E57E73E5C4BF6()))
	{
		func_1098(1, -1);
	}
	else
	{
		func_1098(0, -1);
	}
}

void func_1098(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1099(iParam1);
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1573347, iVar0))
		{
			unk_0x191DDA30577F440A(&Global_1573347, iVar0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1573347, iVar0))
	{
		unk_0xC664C0067EEAB8D1(&Global_1573347, iVar0);
	}
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_1100(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam0));
		if (iVar0 > -1)
		{
			return Global_1630816[iVar0 /*597*/].f_11.f_453 != 0;
		}
	}
	return 0;
}

void func_1101(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(*uParam0), 0) };
		if (!func_105(uParam1))
		{
			func_104(uParam1, 0, 0);
		}
		else if (func_103(uParam1, 1000, 0))
		{
			if (func_1763(unk_0xD93F965CFAC1D06A(*uParam0), 1215605247, 1, uParam2, 0, 500, 1, 0))
			{
				func_1762(&Global_1311923, &Var1, &uVar2, 10f);
				if (bParam3)
				{
					func_1761(1);
					func_1760(1);
					func_1759(1);
					Global_2544210.f_4587 = 0;
				}
				bVar4 = true;
				bVar5 = true;
			}
			else if (func_1745(Var0, func_1757(39), func_1746(39, 0)))
			{
				if (func_1740(39, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1745(Var0, func_1757(40), func_1746(40, 0)))
			{
				if (func_1740(40, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1745(Var0, func_1757(41), func_1746(41, 0)))
			{
				if (func_1740(41, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1745(Var0, func_1757(42), func_1746(42, 0)))
			{
				if (func_1740(42, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1745(Var0, func_1757(43), func_1746(43, 0)))
			{
				if (func_1740(43, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (func_1745(Var0, func_1757(44), func_1746(44, 0)))
			{
				if (func_1740(44, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				unk_0x191DDA30577F440A(&(Global_2544210.f_1798), 5);
				if (bParam3)
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(*uParam0), 1))
					{
						iVar7 = 1;
					}
					else if (func_1738(unk_0x854C404AEB476240(*uParam0), 1, 0, 0, 0, 0, 1, 0, 1))
					{
						iVar7 = 2;
					}
				}
				else if (func_1737() && !bVar5)
				{
					iVar7 = 1;
				}
				else if (func_1734() && !bVar5)
				{
					iVar7 = 1;
					bVar6 = true;
				}
				else if (!unk_0x5976053523EA16C8(unk_0xD93F965CFAC1D06A(*uParam0)))
				{
					iVar7 = 2;
				}
				if (iVar7 == 1)
				{
					if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 3))
					{
						unk_0x8BA9BCDD56AA7115(800);
						unk_0x191DDA30577F440A(&(Global_2544210.f_1798), 6);
						unk_0x191DDA30577F440A(&(Global_2544210.f_1798), 3);
					}
					else if (!unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 4))
					{
						if (unk_0x8B6A925F148E0E94())
						{
							unk_0x191DDA30577F440A(&(Global_2544210.f_1798), 4);
						}
					}
					else
					{
						bVar8 = false;
						if (func_1733(unk_0x1146A9AE09CE2B14(), -1))
						{
							bVar8 = true;
						}
						if (!bVar6)
						{
							if (func_1102(5, 0, 0, 0, 1, 0, 0, bVar8, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
							{
								unk_0x6E1E3A5B1F9AB95B(800);
								unk_0x44893A0E1444C28B(unk_0xD93F965CFAC1D06A(*uParam0));
								unk_0x44893A0E1444C28B(unk_0x7D2B9E6A64637269());
								unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 6);
								unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 3);
								unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 4);
							}
						}
					}
				}
				else if (iVar7 == 2)
				{
					if (unk_0xA6BE8F025C6B653F(unk_0xD93F965CFAC1D06A(*uParam0)))
					{
						unk_0xDB8D6815E13996A9(unk_0xD93F965CFAC1D06A(*uParam0), Var1, 0, 0, 1);
						unk_0xFC4706297CB9D7D2(unk_0xD93F965CFAC1D06A(*uParam0), 1, 1);
						unk_0x44893A0E1444C28B(unk_0xD93F965CFAC1D06A(*uParam0));
					}
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 6))
			{
				if (unk_0x8B6A925F148E0E94() || unk_0x4E38E404B98F3D9A())
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
				if (unk_0xE0A6F16F546C8274())
				{
					unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 3);
					unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 4);
					unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 6);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_2544210.f_1798, 5))
			{
				Global_2544210.f_4587 = 0;
				func_1761(0);
				func_1760(0);
				func_1759(0);
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1798), 5);
			}
			func_71(uParam1);
		}
	}
}

int func_1102(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_1732();
	if (func_1731(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (((bParam4 && func_2342(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
		{
		}
		else if (func_1730() == 28)
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
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_702) < func_299(0))
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
				if (!func_222())
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
			else if (func_1552(&(Global_2405077.f_705), &(Global_2405077.f_708), Global_2405077.f_701, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
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
						func_1547(&iVar2);
					}
					else
					{
						iVar2 = func_1546();
						func_1545(&iVar2);
					}
					if (func_222())
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							if (!unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) == Global_2405077.f_45.f_67)
							{
								iVar4 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								if (iVar4 == Global_2405077.f_45.f_173)
								{
									func_1543();
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
							func_1525(iVar2);
							func_1524(1);
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
					func_1524(1);
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 4)
		{
			if (func_1521())
			{
				if (Global_2405077.f_45.f_65)
				{
					if (func_1357(Global_2405077.f_705, Global_2405077.f_705.f_1, func_1517(Global_2405077.f_45.f_67), Global_2405077.f_708, 0))
					{
						Global_2405077.f_703 = unk_0x551F46B3C7DFB654();
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 5;
					}
				}
				else if (func_1356(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0)
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
					func_1157(unk_0x7D2B9E6A64637269(), Global_2405077.f_45.f_173, -1, 0);
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
				func_1151(Global_2405077.f_705);
			}
			if (bParam7 && !Global_2441237.f_1351)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if ((unk_0xE50EB54E0F21BED0(iVar2, 0) || !unk_0xBFCE58B2B3249999(iVar2, 0)) || func_137(iVar2))
						{
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_1144(Global_2405077.f_705, Global_2405077.f_708, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2405077.f_2896))
				{
					if (bParam15)
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 7;
						return 0;
					}
					else
					{
						func_1140();
					}
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 7)
		{
			if ((Global_2405077.f_701 == 8 && Global_2405077.f_713.f_507) && Global_2405077.f_2876)
			{
				func_1140();
			}
			else if (func_1134(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0)) || func_1133())
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
				func_1140();
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
									unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_1132(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
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
								unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_1132(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
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
					unk_0x4603196EEEA2355C(Global_2405077.f_45.f_173, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_1124(iParam9, 0, 0);
				}
			}
			func_1122(func_43(unk_0x1146A9AE09CE2B14()), 0);
			if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173))
			{
				func_1543();
			}
			if (!(func_1356(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0) && !Global_2405077.f_489.f_5)
			{
				func_1121(0, 0);
			}
			func_1120(0, 0);
			if (bParam10)
			{
				func_1119();
			}
			func_1118();
			func_1104();
			if (bParam13)
			{
				func_355();
			}
			func_1103();
			return 1;
		}
	}
	else if (!Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
	{
		unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
		func_1545(&(Global_2405077.f_45.f_173));
		func_1103();
	}
	Global_2405077.f_702 = unk_0x551F46B3C7DFB654();
	return 0;
}

void func_1103()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

void func_1104()
{
	int iVar0;
	
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_270.f_20 = -1;
	Global_2405077.f_2873 = -1f;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_1106(iVar0);
		iVar0++;
	}
	if (func_1105(unk_0x1146A9AE09CE2B14(), 0))
	{
		Global_2553486.f_85 = 1;
		Global_2553486.f_86 = unk_0x551F46B3C7DFB654();
	}
}

int func_1105(int iParam0, bool bParam1)
{
	if (func_2342(iParam0, 0, 1))
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

void func_1106(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (Global_2426865[iVar0 /*449*/].f_270.f_14 != -1)
	{
		if (func_1117(Global_2426865[iVar0 /*449*/].f_270.f_14))
		{
			if (!func_1113(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_14, 0, 0))
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
		if (func_1117(Global_2426865[iVar0 /*449*/].f_270.f_16))
		{
			if (!func_1113(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_16, 0, 1))
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
		if (!func_1113(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_15, 0, 0))
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = -1;
		}
	}
	if (func_1117(iParam0))
	{
		if (func_1113(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_14 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_14 = iParam0;
			}
		}
		if (func_1113(unk_0x1146A9AE09CE2B14(), iParam0, 0, 1))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_16 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_16 = iParam0;
			}
		}
		iVar2 = floor((to_float(iParam0) / 32f));
		if (func_1108(unk_0x1146A9AE09CE2B14(), iParam0, 1120403456))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = vdist(func_1107(iParam0), func_43(unk_0x1146A9AE09CE2B14()));
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
	if (func_1113(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
	{
		if (!Global_2426865[iVar0 /*449*/].f_270.f_15 == iParam0)
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = iParam0;
		}
	}
}

Vector3 func_1107(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_4;
}

int func_1108(int iParam0, int iParam1, float fParam2)
{
	if (func_1112())
	{
		return 1;
	}
	if (func_1111(iParam1))
	{
		if (unk_0x419E13582192CFEA(func_1110()))
		{
			if (func_1109(unk_0xD6E677FAD7521410(func_1110(), 1), iParam1, fParam2) && Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 == 8)
			{
				return 1;
			}
		}
		return func_1109(func_43(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_1109(struct<3> Param0, int iParam1, float fParam2)
{
	if (func_1111(iParam1))
	{
		if (vdist2(Param0, func_1107(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1110()
{
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		return Global_1695733.f_20;
	}
	return -1;
}

int func_1111(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 40)
	{
		return 1;
	}
	return 0;
}

int func_1112()
{
	if (!unk_0xE45310E861787FC2() && !func_358())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_139630[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_1113(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1111(iParam1))
	{
		if (!bParam3)
		{
			return func_1114(func_43(iParam0), iParam1, fParam2);
		}
		else if (func_1114(func_43(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_1114(func_43(iParam0), iParam1, 15f))
		{
			if (func_2342(iParam0, 1, 1))
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

int func_1114(struct<3> Param0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (func_1111(iParam1))
	{
		func_1115(iParam1, &Var0, &Var1, &fVar2, fParam2);
		return unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var1, fVar2, 0, 1);
	}
	return 0;
}

void func_1115(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	
	Var0 = { func_1107(iParam0) };
	fVar1 = func_1116(iParam0);
	Var2 = { 0f, 1f, 0f };
	func_154(&Var2, 0f, 0f, fVar1);
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	*uParam1 = { Var0 + Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_1116(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_7;
}

int func_1117(int iParam0)
{
	if (func_1111(iParam0))
	{
		return Global_2553486.f_2[iParam0];
	}
	return 0;
}

void func_1118()
{
	Global_1626900 = -1;
	Global_1626906 = 0;
	Global_1626901 = -1;
}

void func_1119()
{
	Global_2405077.f_5 = 1;
}

void func_1120(float fParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!func_775() || iParam1)
	{
		if (unk_0x8B6A925F148E0E94() || unk_0xF471787D45ADC2C1())
		{
			if (!unk_0xEF482630D7014464())
			{
				Var0 = { func_43(unk_0x1146A9AE09CE2B14()) };
				if (Var0.f_2 > -80f)
				{
					unk_0x3A13FD2813C8251F(0f, 1065353216);
					unk_0xDF23DCD7A3E1B7A5(fParam0);
				}
			}
		}
	}
}

void func_1121(int iParam0, bool bParam1)
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
			func_1121(0, 0);
		}
		else
		{
			Global_2405077.f_709 = 0;
		}
	}
}

void func_1122(struct<3> Param0, bool bParam1)
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
		fVar1 = func_1123(unk_0x6471F4759775FCA4(iVar0));
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

float func_1123(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_168(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_1 - Var1.f_1));
}

void func_1124(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_1131())
	{
		iVar1 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (func_1129(iVar1, &iVar0))
		{
			func_1125(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x795957CD3A0042C8(&iVar1);
			}
		}
	}
}

void func_1125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x7404749A8C3BD799(iParam0);
	if (unk_0xB7D6400C89373777(uVar0))
	{
		if (Global_1574419 && unk_0xEACFC87E44438F24(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x2B56C657979E352B(uVar0, 1, 1, func_1128());
			return;
		}
		else if (func_1127())
		{
			func_1126(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x2B56C657979E352B(uVar0, iParam2, 1, func_1128());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam2);
			}
		}
		else
		{
			unk_0x2B56C657979E352B(uVar0, iParam1, 1, func_1128());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam1);
			}
		}
	}
}

int func_1126(int iParam0, int iParam1)
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

bool func_1127()
{
	return Global_1574437;
}

int func_1128()
{
	if (func_190() != 0)
	{
		return 0;
	}
	if (!func_359(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_1129(int iParam0, int iParam1)
{
	if (func_1130(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1130(int iParam0, var uParam1)
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

int func_1131()
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

float func_1132(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_168(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var1.f_2));
}

int func_1133()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	Var3 = { func_43(unk_0x1146A9AE09CE2B14()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_2342(iVar1, 1, 1))
		{
			if (unk_0xBBC3519C07015926(unk_0xD56332194D622ECE(iVar1)))
			{
				if (!iVar1 == unk_0x1146A9AE09CE2B14())
				{
					if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
					{
						fVar2 = vmag(func_43(iVar1) - Var3);
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

int func_1134(struct<3> Param0)
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
			else if (func_1139(Global_1315871[iVar4]))
			{
			}
			else if (!func_1135(Global_1315871[iVar4]))
			{
				Var1 = { unk_0xD6E677FAD7521410(Global_1315871[iVar4], 0) };
				fVar2 = unk_0xA8D713A937F31250(Global_1315871[iVar4]);
				iVar3 = unk_0x6471F4759775FCA4(Global_1315871[iVar4]);
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (func_272(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_166(Param0, Var1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_1135(int iParam0)
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
				if (func_2342(iVar1, 0, 0))
				{
					if (func_1136(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1136(int iParam0)
{
	if (func_1138())
	{
		if (func_1137(unk_0x17114A8CCDEB9E3D(iParam0), &(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_353.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1137(int iParam0, var uParam1)
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

int func_1138()
{
	if (Global_2405077.f_2877 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1139(int iParam0)
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

void func_1140()
{
	if (!Global_2405077.f_711)
	{
		Global_2405077.f_711 = 1;
	}
	func_1524(0);
	if (Global_2405077.f_2671)
	{
		func_1141();
		Global_2405077.f_2671 = 0;
	}
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
}

void func_1141()
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
		func_154(&Var7, 0f, 0f, -45f);
		Var8 = { Var6 };
		func_154(&Var8, 0f, 0f, -90f);
		Var9 = { Var6 };
		func_154(&Var9, 0f, 0f, 45f);
		Var10 = { Var6 };
		func_154(&Var10, 0f, 0f, 90f);
		if (bVar3)
		{
			Var11 = { Var2 - Var1 };
			Var12 = { func_151(Var11, 0f, 0f, 1f) };
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
			func_1143(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2405077.f_45.f_52)
		{
			Var42 = { Global_2405077.f_45.f_49 - Var1 };
			fVar43 = func_150(Var42, Var15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_1143(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_1143(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_1143(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1143(fVar4);
					return;
				}
				else
				{
					func_1142(iVar41, fVar4, Var11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_1143(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1143(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_1143(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1143(fVar4);
				return;
			}
			else
			{
				func_1142(iVar41, fVar4, Var11);
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
					func_1143(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_1143(fVar4);
					return;
				}
				else
				{
					func_1142(iVar41, fVar4, Var11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_1143(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_1143(fVar4);
				return;
			}
			else
			{
				func_1142(iVar41, fVar4, Var11);
			}
		}
	}
}

void func_1142(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_1143(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_1143(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_1143(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_1143(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0x832AD84AA258AE80(Param2, Param2.f_1);
			func_1143(fParam1);
			return;
			break;
	}
}

void func_1143(float fParam0)
{
	if (!unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
	{
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam0);
	}
	func_1120(0f, 1);
}

int func_1144(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22531.f_6 = 1;
	if (Global_2441237.f_1351 && Global_2441237.f_1359)
	{
		func_1148(0, bParam7);
		return 1;
	}
	if (unk_0xF471787D45ADC2C1() && !bParam7)
	{
		if (Global_2441237.f_1351)
		{
			func_1148(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xCE84F8AB9BD41C13() && !bParam7) && !unk_0x7A4185C9A76C12B2())
	{
		return 0;
	}
	if (!func_358())
	{
		if (func_1731(unk_0x1146A9AE09CE2B14(), 1, 0) && !(func_541() || func_1147()))
		{
			if (((bParam7 && func_2342(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
			{
			}
			else if (func_1730() == 28)
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
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2441237.f_1357) < func_299(0))
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
				func_1146(0);
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
				func_1148(bParam4, bParam7);
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
			if (func_1145(&(Global_2441237.f_1358), Param0, fParam1, iVar0))
			{
				func_1148(bParam4, bParam7);
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
					func_1148(bParam4, bParam7);
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
				func_1148(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_1145(var uParam0, struct<3> Param1, float fParam2, int iParam3)
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

void func_1146(int iParam0)
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

bool func_1147()
{
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 12)) && Global_1702509 == 8);
}

void func_1148(bool bParam0, bool bParam1)
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
	func_1150();
	if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14) && !func_1112())
	{
		func_1149();
	}
}

void func_1149()
{
	Global_2553486.f_88 = 1;
}

void func_1150()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_1151(struct<3> Param0)
{
	Global_2405077.f_45.f_301 = 1;
	Global_2405077.f_45.f_298 = { Param0 };
	Global_2405077.f_45.f_317 = unk_0x5FBE5EA201067B5E(unk_0xCB3024ED32EBF9EC(), -9999);
	func_1152(1);
}

void func_1152(bool bParam0)
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
				if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xECA23EB9C2A5E83F(unk_0x7D2B9E6A64637269())) && ((vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Global_2405077.f_45.f_298) < fVar0 || func_1156(unk_0x1146A9AE09CE2B14())) || func_1731(unk_0x1146A9AE09CE2B14(), 0, 0)))
				{
					if ((func_1155() || func_1154()) || func_1153())
					{
						if (unk_0x5C6675393464A814(0, 351))
						{
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
							func_1124(1000, 0, 1);
						}
						else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2405077.f_45.f_317, unk_0xCB3024ED32EBF9EC())) > 2000)
						{
							func_1124(2500, 0, bParam0);
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						}
					}
					else
					{
						Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						func_1124(1000, 0, bParam0);
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

int func_1153()
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

int func_1154()
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

int func_1155()
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

int func_1156(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_216 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1157(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	bVar0 = false;
	if (unk_0xA6BE8F025C6B653F(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1355(iParam0, iParam1, bVar0))
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
		unk_0x3CBE9F07524C242D(iParam0, true, 0);
		unk_0xA2C015B68CE01357(iParam0, false);
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
			if (func_1352(unk_0x6471F4759775FCA4(iParam1)))
			{
				func_1158(0);
			}
		}
	}
}

void func_1158(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
	{
		if (Global_4456448.f_133999 == 0)
		{
			if ((Global_2405077.f_2697 == -99 || Global_2405077.f_2697 == 0) || !func_1351(unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()), 14, Global_2405077.f_2697, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_862(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2405077.f_2697;
			}
			Var0 = { func_1309(func_1350(), 14, iVar1, -1) };
			func_1308(unk_0x7D2B9E6A64637269(), 14, iVar1);
			func_1159(unk_0x7D2B9E6A64637269(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1159(unk_0x7D2B9E6A64637269(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 380, 1);
		}
	}
}

int func_1159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
		if (!func_1307(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77057 > 1)
		{
		}
		else
		{
			func_1302(iVar5, iParam1, iParam2, 1);
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
			uVar15 = { func_1298(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77059[1 /*14*/] = { func_1309(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x4170FE884DF7426D(iParam0, func_1297(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1297(iVar0)));
					}
					else
					{
						unk_0x4170FE884DF7426D(iParam0, func_1297(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
					{
						func_1302(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77059[1 /*14*/] = { func_1309(iVar5, iVar0, uVar15[iVar0], -1) };
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
								uVar16 = { func_1294(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77059[1 /*14*/] = { func_1309(iVar5, 14, uVar16[iVar1], -1) };
								func_1293(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
								if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
								{
									func_1302(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x4170FE884DF7426D(iParam0, func_1297(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1297(iVar0)));
								}
								else
								{
									unk_0x4170FE884DF7426D(iParam0, func_1297(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1159(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
							{
								func_1302(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_1309(iVar5, iVar0, func_1289(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_1298(iVar5, 0) };
					func_1159(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x4170FE884DF7426D(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_1288();
			if (iVar18 != -1)
			{
				func_1286(iVar18, 0, iParam10);
			}
			func_1282(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_1294(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_1309(iVar5, 14, uVar19[iVar1], -1) };
			func_1293(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
			{
				func_1302(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77057 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1280(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_1293(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			func_1302(iVar5, iParam1, iParam2, 1);
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
					func_1159(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			func_1274(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1159(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar21 = func_1297(iParam1);
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
				iVar25 = func_1272(iParam0, 11);
				iVar26 = func_1272(iParam0, 8);
				iVar27 = func_1272(iParam0, 4);
				iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar24 = func_1271(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar24 = func_1271(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_ROBE"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("GORKA_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_1272(iParam0, 8);
					}
				}
				iVar28 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
				if (unk_0x01758128AAB0BA8F(iVar28, joaat("GLOVES"), 0))
				{
					iVar29 = func_1270(iVar5, iVar26, iVar25, iVar27);
					if (iVar29 == -99)
					{
						iVar29 = func_1280(iParam0, iVar5, 11, iVar25, 3, 0);
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
							iVar24 = func_1271(iVar5, iParam2, 11, 4);
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
							if (func_1269(iVar5, iVar29, iVar30) == iVar28)
							{
								iVar11 = iVar30;
								iVar12 = unk_0x288277F22D527487(iParam0, 3);
							}
							iVar30++;
						}
					}
				}
				iVar24 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x01758128AAB0BA8F(func_1271(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar25 = func_1272(iParam0, 11);
					if (iVar25 >= 256)
					{
						iVar24 = func_1271(iVar5, iVar25, 11, 4);
					}
					if (iVar25 >= 256 && unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0))
					{
						iVar31 = func_1267(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
						if (iVar31 != -99)
						{
							func_1159(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1266(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar25 >= 237)
						{
							iVar24 = func_1271(iVar5, iVar25, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar25 >= 256)
						{
							iVar24 = func_1271(iVar5, iVar25, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1266(iVar5, iVar25, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && (unk_0x01758128AAB0BA8F(iVar24, joaat("VEST"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && ((((((((unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("APART_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar32 = func_1265(iParam0, iParam2);
							iVar33 = func_1267(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
							if (iVar33 != -99)
							{
								func_1159(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar32 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								func_1159(iParam0, 8, iVar32, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar34 = func_1263(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar34, -1) };
									iVar33 = func_1267(iVar5, iVar34, iParam2, Global_77059[1 /*14*/].f_4);
									iVar35 = func_1271(iVar5, iParam2, 11, 3);
									if ((iVar33 == -99 || unk_0x01758128AAB0BA8F(iVar35, joaat("BIKER_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar35, 1170568373, 0))
									{
										iVar33 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1271(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar33 = 120;
									}
									else
									{
										iVar33 = 48;
									}
								}
								func_1159(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar25, -1) };
						iVar36 = Global_77059[1 /*14*/].f_3;
						Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iParam2, -1) };
						iVar37 = Global_77059[1 /*14*/].f_3;
						if (iVar36 != iVar37)
						{
							iVar39 = func_1265(iParam0, iParam2);
							Global_77059[1 /*14*/] = { func_1309(iVar5, 8, iVar26, -1) };
							iVar38 = Global_77059[1 /*14*/].f_4;
							iVar40 = func_1262(iVar5, iVar26, iVar38);
							if (iVar39 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								iVar41 = iVar39;
							}
							else if (iVar40 == -99)
							{
								iVar41 = iVar26;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar42 = func_1271(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1261(iVar42) == 6) || unk_0x01758128AAB0BA8F(iVar42, joaat("BIKER_VEST"), 0))
									{
										iVar40 = func_1263(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar40, -1) };
										iVar41 = func_1267(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar26 == 32 || iVar26 == 33) || iVar26 == 119))
								{
									if (!unk_0x01758128AAB0BA8F(func_1271(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar40 = func_1263(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar40, -1) };
										iVar41 = func_1267(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								iVar43 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar43 = func_1271(iVar5, iVar26, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar43 = func_1271(iVar5, iVar26, 8, 4);
								}
								if (unk_0x01758128AAB0BA8F(iVar43, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar40 = func_1263(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar40, -1) };
									iVar41 = func_1267(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar41 = func_1267(iVar5, iVar40, iParam2, iVar38);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1271(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1260(iVar5, func_1272(iParam0, 4), iVar40))
										{
											iVar41 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1271(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1260(iVar5, func_1272(iParam0, 4), iVar40))
										{
											iVar41 = 48;
										}
									}
								}
							}
							if (iVar41 != -99)
							{
								func_1159(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar40 = func_1263(iVar5, 11, -1);
								Global_77059[1 /*14*/] = { func_1309(iVar5, 11, iVar40, -1) };
								iVar41 = func_1267(iVar5, iVar40, iParam2, Global_77059[1 /*14*/].f_4);
								if (iVar41 == -99)
								{
									iVar41 = 240;
								}
								func_1159(iParam0, 8, iVar41, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1159(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1257(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x4170FE884DF7426D(iParam0, 10, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 10));
				}
			}
			func_1282(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1270(iVar5, func_1289(iParam0, 8, -1), iParam2, func_1289(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_862(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_862(2160, iParam10, 0);
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
						iVar44 = func_1255(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar44 = func_1253(iParam2);
					}
					if (iVar44 != -99 && iParam2 != iVar44)
					{
						iParam2 = iVar44;
					}
				}
				func_1210(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar45 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar45, joaat("GLOVES"), 0))
			{
				iVar46 = func_1272(iParam0, 11);
				iVar47 = func_1272(iParam0, 4);
				iVar48 = func_1270(iVar5, iParam2, iVar46, iVar47);
				if (iVar48 == -99)
				{
					iVar48 = func_1280(iParam0, iVar5, 11, iVar46, 3, 0);
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
						iVar49 = func_1271(iVar5, iParam2, 11, 4);
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
						if (func_1269(iVar5, iVar48, iVar50) == iVar45)
						{
							iVar11 = iVar50;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar50++;
					}
				}
			}
			func_1282(iParam0, iParam1, iParam2, iParam6, 0);
			iVar51 = func_1272(iParam0, 11);
			if (func_1266(iVar5, iVar51, -1))
			{
				iVar52 = func_1262(iVar5, iParam2, Global_77059[1 /*14*/].f_4);
				func_1257(iVar5, iVar52);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1270(iVar5, iParam2, func_1272(iParam0, 11), func_1272(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar53 = func_1272(iParam0, 7);
				if (!func_1207(iVar5, iVar53, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x4170FE884DF7426D(iParam0, func_1297(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar54 = func_862(2100, iParam10, 0);
				iVar55 = func_862(2101, iParam10, 0);
				iVar56 = func_862(2102, iParam10, 0);
				uVar57 = func_1206(135, iParam10);
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
				func_1193(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar59 = func_1272(iParam0, 11);
			iVar60 = func_1272(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1271(iVar5, iVar59, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1260(iVar5, iParam2, func_1262(iVar5, iVar60, 0)))
					{
						func_1159(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1271(iVar5, iVar59, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1260(iVar5, iParam2, func_1262(iVar5, iVar60, 0)))
					{
						func_1159(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1309(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1270(iVar5, func_1272(iParam0, 8), func_1272(iParam0, 11), iParam2);
			}
			iVar61 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar61, joaat("GLOVES"), 0))
			{
				iVar62 = func_1270(iVar5, iVar60, iVar59, iParam2);
				if (iVar62 == -99)
				{
					iVar62 = func_1280(iParam0, iVar5, 11, iVar59, 3, 0);
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
						iVar63 = func_1271(iVar5, iParam2, 11, 4);
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
						if (func_1269(iVar5, iVar62, iVar64) == iVar61)
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
			unk_0x4170FE884DF7426D(iParam0, func_1297(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1297(iParam1)));
		}
		else
		{
			unk_0x4170FE884DF7426D(iParam0, func_1297(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1159(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1270(iVar5, iVar3, func_1272(iParam0, 11), func_1272(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1159(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1192(iParam0))
				{
					iVar65 = func_1190(iParam0, iVar5, iParam1, iParam2);
					if (iVar65 > 0)
					{
						iVar65 = (iVar65 + unk_0x288277F22D527487(iParam0, 9));
						if (!func_1184(iParam0, 9, iVar65))
						{
							func_1159(iParam0, 9, iVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1159(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_1159(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar66 = func_862(2042, -1, 0);
				if (unk_0x094C1D2DFE050D6E(iParam0, 5) != 0)
				{
					unk_0x4170FE884DF7426D(iParam0, 5, func_1178(iParam0, iVar66), func_1177(iParam0, iVar66), func_1176(iParam0, iVar66));
				}
				if (iParam0 == unk_0x7D2B9E6A64637269())
				{
					unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_1178(unk_0x7D2B9E6A64637269(), iVar66), func_1177(unk_0x7D2B9E6A64637269(), iVar66), 0);
					unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_1176(unk_0x7D2B9E6A64637269(), iVar66));
					func_1175(unk_0x1146A9AE09CE2B14(), iVar66);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_1159(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar67 = func_1289(iParam0, 4, -1);
					iVar68 = iParam2;
				}
				else
				{
					iVar67 = iParam2;
					iVar68 = func_1289(iParam0, 11, -1);
				}
				if (func_1174(iVar5, 11, iVar68, -1))
				{
					if (!func_1173(iVar5, 4, iVar67, -1))
					{
						if (func_1172(iVar5, 4, iVar67, &uVar69))
						{
							func_1159(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1173(iVar5, 4, iVar67, -1))
				{
					if (func_1171(iVar5, 4, iVar67, &uVar69))
					{
						func_1159(iParam0, 4, uVar69, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar76 = func_1272(iParam0, 4);
				iVar77 = func_1272(iParam0, 6);
				if (func_1170(iVar5, iVar72))
				{
					if (unk_0x01758128AAB0BA8F(iVar72, joaat("ALT_FEET"), 0) != func_1169(iVar5, iVar76, iVar72))
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
										iVar77 = func_1166(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_1159(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_1166(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_1159(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar75, joaat("ALT_LEGS"), 0) != func_1165(iVar5, iVar77, iVar75))
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
										iVar76 = func_1166(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_1159(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_1166(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_1159(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
				}
				if (func_1170(iVar5, iVar75))
				{
					if (unk_0x01758128AAB0BA8F(iVar75, joaat("ALT_LEGS"), 0) != func_1165(iVar5, iVar77, iVar75))
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
										iVar76 = func_1166(iVar5, iVar80, 4, 3);
										iVar75 = iVar80;
										func_1159(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar76 = func_1166(iVar5, iVar80, 4, 4);
										iVar75 = iVar80;
										func_1159(iParam0, 4, iVar76, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar79 = iVar78 + 1;
								}
							}
							iVar79++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar72, joaat("ALT_FEET"), 0) != func_1169(iVar5, iVar76, iVar72))
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
										iVar77 = func_1166(iVar5, iVar80, 6, 3);
										iVar72 = iVar80;
										func_1159(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar77 = func_1166(iVar5, iVar80, 6, 4);
										iVar72 = iVar80;
										func_1159(iParam0, 6, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1274(iParam0);
				iVar83 = unk_0x094C1D2DFE050D6E(iParam0, 1);
				iVar84 = unk_0x288277F22D527487(iParam0, 1);
				iVar85 = unk_0xF94D55021DC59203(iParam0, 1, iVar83, iVar84);
				if (unk_0x01758128AAB0BA8F(iVar85, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1159(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1280(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1159(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1160(iParam0, &uVar4))
		{
			func_1159(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1159(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_1159(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1159(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar86 = func_1269(iVar5, func_1289(iParam0, 3, -1), iVar11);
		if (iVar86 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_1166(iVar5, iVar86, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_1166(iVar5, iVar86, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_1159(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_77057 = (Global_77057 - 1);
	return 1;
}

int func_1160(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1289(unk_0x7D2B9E6A64637269(), 2, -1);
	if (func_862(754, Global_77056, 0) != -99 && func_1162())
	{
		if (func_1161() == 4)
		{
			return 1;
		}
		if (func_862(754, Global_77056, 0) == 0 && func_862(755, Global_77056, 0) == 0)
		{
			if (func_573(161, Global_77056))
			{
				if (func_862(2053, Global_77056, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_862(753, Global_77056, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_862(754, Global_77056, 0);
		iVar1 = func_862(755, Global_77056, 0);
		if (!func_1184(iParam0, iVar1, iVar0))
		{
			if (func_573(161, Global_77056))
			{
				*uParam1 = func_862(2053, Global_77056, 0);
			}
			else
			{
				*uParam1 = func_862(753, Global_77056, 0);
			}
			func_675(754, -99, Global_77056, 1, 0);
			func_675(755, 2, Global_77056, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1161()
{
	return Global_1312835;
}

int func_1162()
{
	if (func_1164() && func_1163(0))
	{
		return 1;
	}
	return 0;
}

var func_1163(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_1164()
{
	return func_1163(func_41() + 1);
}

int func_1165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1271(iParam0, iParam1, 6, 3);
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
				iVar0 = func_1271(iParam0, iParam1, 6, 4);
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

int func_1166(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return (func_1168(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_1297(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_1167(iParam0, func_1297(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_1167(int iParam0, int iParam1)
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

int func_1168(int iParam0)
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

int func_1169(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_1271(iParam0, iParam1, 4, 3);
				iVar1 = func_1261(iVar0);
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
				iVar0 = func_1271(iParam0, iParam1, 4, 4);
				iVar1 = func_1261(iVar0);
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

int func_1170(int iParam0, int iParam1)
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

int func_1171(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1271(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_1166(iParam0, iVar3, iParam1, 4);
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

int func_1172(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1271(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_1166(iParam0, iVar3, iParam1, 4);
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

int func_1173(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1271(iParam0, iParam2, 4, 4);
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

int func_1174(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1271(iParam0, iParam2, 11, 4);
						}
						return unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1175(int iParam0, int iParam1)
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

int func_1176(int iParam0, int iParam1)
{
	return 0;
}

int func_1177(int iParam0, int iParam1)
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

var func_1178(int iParam0, int iParam1)
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
		Global_77228 = func_1179(iParam0, iParam1);
	}
	return Global_77228;
}

int func_1179(int iParam0, int iParam1)
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
				return func_1183(iParam0, iParam1, 1);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_1183(iParam0, iParam1, 6);
			}
			if ((unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8)) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		return func_1183(iParam0, iParam1, 9);
	}
	if (func_1182(iParam0))
	{
		if (bVar1)
		{
			return func_1183(iParam0, iParam1, 7);
		}
		else
		{
			return func_1183(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0xF94D55021DC59203(iParam0, 11, iVar0, unk_0x288277F22D527487(iParam0, 11));
		if (unk_0x01758128AAB0BA8F(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1183(iParam0, iParam1, 5);
			}
			else
			{
				return func_1183(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_1183(iParam0, iParam1, 8);
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_1181(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_1183(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_1183(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_1261(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_1183(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_1261(iVar4);
						break;
					}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_1180(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_1183(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1183(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1183(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1183(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1183(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1183(iParam0, iParam1, 9);
					}
					else
					{
						return func_1183(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_1183(iParam0, iParam1, 9);
					}
					else
					{
						return func_1183(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1183(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_1261(iVar4);
					break;
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 8);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_1183(iParam0, iParam1, 10);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, -1086258388, 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_SWEAT"), 0)) || unk_0x01758128AAB0BA8F(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 6);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 9);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
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
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
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
				return func_1183(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
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
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 0);
			}
			else
			{
				return func_1183(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_1183(iParam0, iParam1, 10);
				}
				else
				{
					return func_1183(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 3);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 1);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 9);
			}
			else
			{
				return func_1183(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 10);
			}
			else
			{
				return func_1183(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_1183(iParam0, iParam1, 7);
			}
			else
			{
				return func_1183(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_1183(iParam0, iParam1, 2);
			}
			else
			{
				return func_1183(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_PYJAMAS"), 0) || unk_0x01758128AAB0BA8F(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar4, -826135203, 0))
		{
			return func_1183(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_1261(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 2);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 2);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 2);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 2);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 5);
				}
				else
				{
					return func_1183(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 4);
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
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 3);
				}
				else
				{
					return func_1183(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 5);
				}
				else
				{
					return func_1183(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_1183(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 6);
				}
				else
				{
					return func_1183(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 7);
				}
				else
				{
					return func_1183(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_1183(iParam0, iParam1, 1);
				}
				else
				{
					return func_1183(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_1183(iParam0, iParam1, 0);
	return 0;
}

int func_1180(int iParam0, int iParam1)
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

int func_1181(int iParam0, int iParam1)
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

int func_1182(int iParam0)
{
	if (unk_0x01758128AAB0BA8F(unk_0xF94D55021DC59203(iParam0, 4, unk_0x094C1D2DFE050D6E(iParam0, 4), unk_0x288277F22D527487(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_1183(int iParam0, int iParam1, int iParam2)
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
		