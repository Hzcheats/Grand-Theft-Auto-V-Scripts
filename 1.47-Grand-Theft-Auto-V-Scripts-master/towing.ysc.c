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
	vector3 vLocal_45[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_46[1] = {{ 0f, 0f, 0f } };
	int iLocal_47 = 0;
	int iLocal_48[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_49[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	struct<165> Local_51 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_63[16] = "";
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[16] = "";
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	vector3 vLocal_69[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char cLocal_70[32] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 1132396544;
	var uLocal_78 = 1132396544;
	var uLocal_79 = 1132396544;
	var uLocal_80 = 0;
	var uLocal_81 = -1082130432;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	var uLocal_141 = -1;
	var uLocal_142 = 1092616192;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 1000;
	var uLocal_159 = 1000;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 1097859072;
	var uLocal_165 = 1500;
	var uLocal_166 = 45;
	var uLocal_167 = 1103626240;
	var uLocal_168 = 5;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = 0;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	bool bLocal_192 = 0;
	int iLocal_193 = 0;
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
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	struct<6> Local_225 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_226 = NULL;
	var uLocal_227 = 16;
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
	var uLocal_345 = 0;
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
	var uLocal_366 = 0;
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
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	struct<23> Local_393[53];
	struct<28> Local_394[17];
	int iLocal_395 = 0;
	struct<165> Local_396 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_397 = 0;
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
	int iLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	vector3 vLocal_415 = { 0f, 0f, 0f };
	float fLocal_416 = 0f;
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
	struct<18> Local_438[2];
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	float fLocal_446 = 0f;
	int iLocal_447 = 0;
	bool bLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	char* sLocal_464 = NULL;
	char* sLocal_465 = NULL;
	char* sLocal_466[3] = { NULL, NULL, NULL };
	char* sLocal_467 = NULL;
	vector3 vLocal_468[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_469 = { 0f, 0f, 0f };
	vector3 vLocal_470 = { 0f, 0f, 0f };
	vector3 vLocal_471 = { 0f, 0f, 0f };
	var uLocal_472 = 9;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 7;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 15;
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
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
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
	var uLocal_763 = 1;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	bool bLocal_769 = 0;
	bool bLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	bool bLocal_773 = 0;
	bool bLocal_774 = 0;
	int iLocal_775 = 0;
	bool bLocal_776 = 0;
	bool bLocal_777 = 0;
	var uLocal_778 = 0;
	bool bLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	bool bLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	var uLocal_789 = 0;
	bool bLocal_790 = 0;
	bool bLocal_791 = 0;
	bool bLocal_792 = 0;
	bool bLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	bool bLocal_798 = 0;
	bool bLocal_799 = 0;
	bool bLocal_800 = 0;
	int iLocal_801 = 0;
	bool bLocal_802 = 0;
	var uLocal_803 = 0;
	bool bLocal_804 = 0;
	bool bLocal_805 = 0;
	int iLocal_806 = 0;
	bool bLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	bool bLocal_813 = 0;
	var uLocal_814[2] = { 0, 0 };
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819[1] = { 0 };
	var uLocal_820[2] = { 0, 0 };
	int iLocal_821 = 0;
	struct<2> Local_822 = { 0, 0 } ;
	int iLocal_823 = 0;
	struct<20> Local_824[1];
	struct<7> Local_825 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	vector3 vLocal_862 = { 0f, 0f, 0f };
	vector3 vLocal_863 = { 0f, 0f, 0f };
	float fLocal_864 = 0f;
	float fLocal_865 = 0f;
	char cLocal_866[64] = "";
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	int iLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	int iLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	int iLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	int iLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	int iLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	int iLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	char* sLocal_905 = NULL;
	int iLocal_906 = 0;
	var uLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 8;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	int iLocal_927 = 0;
	bool bLocal_928 = 0;
	struct<9> Local_929 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	vLocal_50 = { 500f, 500f, 500f };
	fLocal_178 = 0f;
	fLocal_179 = 0f;
	fLocal_180 = 0f;
	fLocal_181 = 0.8f;
	fLocal_182 = 1.5f;
	fLocal_183 = 0.5f;
	vLocal_187 = { 401.55f, -1631.309f, 29.3f };
	iLocal_188 = 1;
	iLocal_189 = 1;
	iLocal_392 = joaat("towtruck");
	vLocal_415 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_416 = 275.5635f;
	iLocal_442 = -1;
	iLocal_443 = -1;
	iLocal_444 = -1;
	iLocal_445 = -1;
	fLocal_446 = 0f;
	sLocal_464 = "";
	sLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_765 = 1;
	iLocal_766 = 1;
	iLocal_767 = 1;
	iLocal_775 = 1;
	iLocal_810 = 1;
	iLocal_839 = -1;
	vLocal_862 = { -229.8159f, -1172f, 21.8557f };
	iLocal_906 = 1;
	unk_0xC48A4BABDFAAB2B9(1);
	if (unk_0x9EC5BDC006623C42(67))
	{
		if (!func_295())
		{
			func_293(&Global_105216, 3);
			func_265(unk_0xD178EF744F20B712());
		}
		func_261();
	}
	if (unk_0x765F6FEEFF39224F(ScriptParam_929) && unk_0x765F6FEEFF39224F(ScriptParam_929.f_1))
	{
		if (!unk_0xD62C4419A41F106A(ScriptParam_929, 0) && !unk_0xD62C4419A41F106A(ScriptParam_929.f_1, 0))
		{
			unk_0x0D21E1FDE062ED99(ScriptParam_929, true, 1);
			unk_0x0D21E1FDE062ED99(ScriptParam_929.f_1, true, 1);
		}
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	}
	func_260(&Local_393);
	func_259(&Local_394);
	func_258();
	iVar0 = 0;
	func_257(&iLocal_882);
	switch (ScriptParam_929.f_2)
	{
		case 1:
			if (ScriptParam_929.f_4)
			{
				iLocal_170 = ScriptParam_929.f_3;
				if (iVar0 > 0)
				{
					iLocal_450 = iVar0;
				}
				else
				{
					iLocal_450 = func_256(100000f, iLocal_170, Global_106565.f_19967.f_9);
				}
			}
			else
			{
				if (Global_106565.f_19967.f_3 == 0)
				{
					bLocal_793 = true;
				}
				if (!func_255())
				{
					func_252();
				}
				else
				{
					iLocal_450 = Global_106565.f_19967.f_9;
					iLocal_170 = Global_106565.f_19967.f_2;
				}
				ScriptParam_929.f_3 = iLocal_170;
			}
			iLocal_821 = 0;
			break;
	}
	if (!bLocal_793)
	{
		func_251(&Local_396, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_170 == 0)
	{
		iLocal_796 = 1;
		if ((Global_106565.f_19967.f_6 % 2) == 0)
		{
			bLocal_799 = true;
		}
	}
	else if (iLocal_170 == 2)
	{
		bLocal_800 = true;
		iLocal_796 = 1;
	}
	if (iLocal_170 == 3 || iLocal_170 == 1)
	{
		iLocal_795 = 1;
		iLocal_796 = 1;
		iLocal_853 = 1;
	}
	else if (iLocal_170 == 4)
	{
		iLocal_796 = 1;
		iLocal_853 = Local_394[func_250() /*28*/].f_27;
	}
	func_249();
	func_225(&ScriptParam_929);
	if (Global_106565.f_19967.f_3 >= 5)
	{
		bLocal_779 = true;
		bLocal_779 = bLocal_779;
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iLocal_900 = ScriptParam_929.f_1;
			iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x765F6FEEFF39224F(iVar1) && !unk_0xD62C4419A41F106A(iVar1, 0))
			{
				if (unk_0x541D5C57194E73C4(iVar1) == joaat("towtruck") || unk_0x541D5C57194E73C4(iVar1) == joaat("towtruck2"))
				{
					iLocal_900 = iVar1;
				}
			}
		}
	}
	unk_0x052830EE89C97404(false);
	unk_0x4B06B5746CBEC99F(0.2f);
	if (unk_0x765F6FEEFF39224F(iLocal_900))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
		{
			unk_0x0D21E1FDE062ED99(iLocal_900, true, 1);
			unk_0x320D9994786BCA17(iLocal_900);
			unk_0x17A7D0FC069931EA(iLocal_900, false);
			unk_0x09993E7216CF52C4(iLocal_900, true);
		}
	}
	iLocal_903 = unk_0x0335D8135051EA56(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	iLocal_904 = unk_0x0335D8135051EA56(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	unk_0x5856B9BF2B4E98C4(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), false, 1);
	unk_0x7F327D8D184FAB7F(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), 0);
	func_224();
	while (true)
	{
		wait(0);
		func_220(&uLocal_490);
		func_219();
		unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
		if (bLocal_779 && !unk_0x0281F3C55C2638AC(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xBB5E373390A5F824())
			{
				unk_0x25FBDA8BA15A928A(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!unk_0x4E1190A8D88ABDB7())
				{
					wait(0);
				}
				unk_0x4ABB9EF39DA515D7();
				unk_0xC7E6A5D90DED6E0B(0f);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
				unk_0xB7350047030F7672(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, false, 0);
				unk_0xACCDA78123DB57B0(500);
			}
		}
		if (iLocal_906 < 15)
		{
			func_217(&iLocal_900, &iLocal_817, &Local_824, &vLocal_468, &cLocal_866, &iLocal_854, iLocal_849, bLocal_792, &iLocal_801, iLocal_783, bLocal_773, bLocal_209, iLocal_906, 1);
		}
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			switch (iLocal_821)
			{
				case 0:
					if (iLocal_906 > 4 && iLocal_906 < 15)
					{
						if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_900, 0))
						{
						}
						if (iLocal_170 != 2 && iLocal_170 != 4)
						{
							if (!func_214(&uLocal_913, Local_824[0 /*20*/].f_6, iLocal_900, &uLocal_844, &uLocal_845, bLocal_779))
							{
								iLocal_875 = 15;
								func_261();
							}
						}
						if (bLocal_793 || uLocal_789)
						{
							func_213(&uLocal_914, iLocal_900, &uLocal_847, &uLocal_848, bLocal_779);
						}
					}
					if (bLocal_793)
					{
						if (iLocal_906 >= 7)
						{
							func_208(iLocal_900, Local_824[0 /*20*/].f_6, Local_825, &(Local_824[0 /*20*/].f_8), &vLocal_468, &cLocal_866, &vLocal_187, bLocal_793, &(Local_824[0 /*20*/]));
						}
					}
					bLocal_782 = false;
					if (((iLocal_170 == 0 || iLocal_170 == 2) && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (bLocal_799 && iLocal_810)
						{
							func_206();
							func_205(Local_824[0 /*20*/].f_6, Local_824[0 /*20*/]);
						}
						if (!bLocal_793)
						{
							func_194();
						}
					}
					else if ((iLocal_170 == 1 && iLocal_906 > 4) && iLocal_906 < 17)
					{
						if (func_190())
						{
							func_187();
						}
						if (iLocal_910 > 0)
						{
							func_183();
						}
					}
					else if (iLocal_170 == 3)
					{
						if ((iLocal_906 == 5 && iLocal_908 < 1) && !iLocal_764)
						{
							if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
							{
								if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), Local_824[0 /*20*/].f_6))
								{
									iLocal_764 = 1;
									unk_0xED68CDDDE25A144E(Local_824[0 /*20*/]);
									unk_0x11C4AF4137F2A4B5(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 0);
								}
							}
						}
					}
					if (iLocal_784 && !bLocal_190)
					{
						func_179(&(Local_394[func_250() /*28*/]), &(Local_394[func_250() /*28*/].f_10), Local_393[iLocal_450 /*23*/].f_1, &(Local_824[0 /*20*/]), &(Local_824[0 /*20*/].f_2), &uLocal_820, fLocal_864, sLocal_465, &sLocal_466, iLocal_853);
					}
					if (iLocal_170 == 4)
					{
						func_177(&uLocal_907, iLocal_901, iLocal_902, iLocal_900, &(Local_824[0 /*20*/].f_2), iLocal_853, sLocal_465, &sLocal_466, &iLocal_816, bLocal_779, &(Local_824[0 /*20*/].f_6));
					}
					if (!bLocal_779)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_816) && !unk_0xD62C4419A41F106A(iLocal_816, 0))
						{
							if (func_169(iLocal_816, 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
							{
								bLocal_776 = true;
								unk_0xECCD4FDA45197F97(iLocal_816, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
							}
							if (func_167())
							{
								bLocal_777 = true;
							}
						}
					}
					if (bLocal_190 && !bLocal_798)
					{
						if (func_169(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 1, 1, 0))
						{
							func_166();
							if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
							{
								unk_0xED68CDDDE25A144E(Local_824[0 /*20*/]);
								unk_0x897EF720254BBEA3(Local_824[0 /*20*/], true);
								unk_0xECCD4FDA45197F97(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
								iLocal_875 = 18;
							}
							if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_1, 0))
							{
								unk_0xED68CDDDE25A144E(Local_824[0 /*20*/].f_1);
								unk_0x897EF720254BBEA3(Local_824[0 /*20*/].f_1, true);
								unk_0xA7A57E7757ED035E(&iLocal_171);
								unk_0x99414FB2D30425C1(&iLocal_171);
								unk_0x07C339D4328CA16C(0, 1, 256);
								unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
								unk_0xC734F59A13D39AEF(iLocal_171);
								if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_1, 0))
								{
									unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/].f_1, iLocal_171);
								}
								unk_0xA7A57E7757ED035E(&iLocal_171);
								iLocal_875 = 18;
							}
							if (!bLocal_793)
							{
								switch (iLocal_169)
								{
									case 16:
										if (iLocal_170 == 2)
										{
											iLocal_875 = 17;
											func_261();
										}
										else
										{
											iLocal_875 = 16;
											func_261();
										}
										break;
									
									case 2:
										func_165(&Local_396, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_875 = 3;
										func_261();
										break;
								}
							}
							else
							{
								iLocal_875 = 21;
								func_261();
							}
							if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
							{
								func_261();
							}
						}
						if (func_169(Local_824[0 /*20*/].f_1, Local_824[0 /*20*/].f_6, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 0))
						{
							func_166();
							if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_1, 0))
							{
								unk_0xED68CDDDE25A144E(Local_824[0 /*20*/].f_1);
								unk_0x897EF720254BBEA3(Local_824[0 /*20*/].f_1, true);
								unk_0xECCD4FDA45197F97(Local_824[0 /*20*/].f_1, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
								iLocal_875 = 18;
							}
						}
					}
					else if (bLocal_798)
					{
					}
					if (!bLocal_782 && func_164(0))
					{
						if ((!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xD62C4419A41F106A(iLocal_900, 0)) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_900, 0))
						{
							if (!iLocal_216)
							{
								if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_6))
								{
									if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
									{
										func_140(&uLocal_149, unk_0xFBB1F99A825CAB09(Local_824[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_140(&uLocal_149, vLocal_469, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_164(0))
					{
						func_139(&uLocal_149, 0, 0);
					}
					func_137(&iLocal_885, 7f, 1);
					func_136();
					func_135();
					if (((!bLocal_215 || iLocal_906 >= 15) || uLocal_778) || bLocal_773)
					{
						if (func_49())
						{
							func_43();
						}
					}
					if (iLocal_906 == 9)
					{
						if (iLocal_170 == 1 || iLocal_170 == 3)
						{
							func_13(Local_396, &Local_824, &iLocal_900);
						}
					}
					break;
			}
			if (func_1(ScriptParam_929))
			{
				func_261();
			}
		}
	}
}

int func_1(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_804)
	{
		iLocal_875 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_875 = 11;
		return 1;
	}
	if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_6))
	{
		if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
		{
			if (unk_0x67001C5CC88C66A8(Local_824[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_875 = 15;
				return 1;
			}
		}
	}
	if (bLocal_215)
	{
		if ((unk_0xE3903F59E2F22150() - iLocal_854) > 50000)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			}
			if (unk_0x765F6FEEFF39224F(iLocal_900) && !unk_0xD62C4419A41F106A(iLocal_900, 0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_900, true) };
			}
			if (vdist2(vVar0, vVar1) > 625f)
			{
				iLocal_875 = 0;
				return 1;
			}
		}
	}
	if (bLocal_776)
	{
		iLocal_875 = 22;
		return 1;
	}
	if (bLocal_777)
	{
		iLocal_875 = 23;
		return 1;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_900))
	{
		if (!unk_0x91D5C8283D19AF49(iLocal_900, 0))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_900))
	{
		if (unk_0xD62C4419A41F106A(iLocal_900, 0))
		{
			iLocal_875 = 2;
			return 1;
		}
	}
	switch (vParam0.z)
	{
		case 1:
			if (iLocal_906 > 4 && iLocal_906 < 17)
			{
				if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_6))
				{
					if (unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						iLocal_875 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_190)
					{
						if (!bLocal_798)
						{
							if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/]))
							{
								if (unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
								{
									iLocal_875 = 8;
									return 1;
								}
							}
						}
						if (bLocal_799)
						{
							if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_1))
							{
								if (unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_1, 0))
								{
									iLocal_875 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		iLocal_875 = 3;
		return 1;
	}
	if (!unk_0x8EDBE29FEAB08840(iLocal_900))
	{
		unk_0x320D9994786BCA17(iLocal_900);
	}
	else if (unk_0x948A37B10533FA15(iLocal_900))
	{
		iLocal_875 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_785)
	{
		if (func_3(&iLocal_891, 180f))
		{
			iLocal_785 = 1;
			func_165(&Local_396, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&iLocal_891, 300f))
	{
		if (iLocal_170 != 2)
		{
			iLocal_875 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, float fParam1)
{
	if (func_7(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 2);
}

bool func_7(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 1);
}

int func_8()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (iLocal_170 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_906 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(vLocal_468[0 /*3*/]))
	{
		if (!iLocal_786)
		{
			if (func_9(vLocal_468[0 /*3*/], 0) > (fLocal_180 + 400f))
			{
				func_165(&Local_396, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_786 = 1;
			}
		}
		if (func_9(vLocal_468[0 /*3*/], 0) > (fLocal_180 + 450f))
		{
			iLocal_875 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(vector3 vParam0, bool bParam1)
{
	return func_10(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), vParam0, bParam1);
}

float func_10(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, true), vParam1, bParam2);
}

int func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_93734.f_339 > 0;
}

void func_13(struct<165> Param0, int iParam1, int iParam2)
{
	if (!iLocal_211)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (iLocal_451 > 1)
			{
				if (func_42(iParam1, iParam2))
				{
					if (func_41())
					{
						Local_225 = { func_40() };
						func_38();
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
					else
					{
						iLocal_211 = 1;
						iLocal_451 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_451)
	{
		case 0:
			if (!func_41())
			{
				settimera(0);
				iLocal_451 = 1;
			}
			break;
		
		case 1:
			if ((timera() > 3000 && iLocal_216) && !func_37("TOWT_OBJ_04", 0, 0))
			{
				if (!func_41())
				{
					func_251(&Param0, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					if (unk_0x1BCDA92AD0A7835B(joaat("tonya3")) == 1 || unk_0x1BCDA92AD0A7835B(joaat("tonya4")) == 1)
					{
						if (iLocal_170 == 1)
						{
							func_165(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_226 = "TOW_TRN_C1";
						}
						else if (iLocal_170 == 3)
						{
							func_165(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_C";
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 1)
					{
						if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
						{
							func_251(&Param0, 5, (*iParam1)[0 /*20*/], "TOWTRAINF", 0, 1);
							func_165(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_226 = "TOW_MECH";
						}
						else if (Global_106565.f_19967.f_5 == 2)
						{
							func_251(&Param0, 6, (*iParam1)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_165(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_226 = "TOW_MECH2";
						}
						else
						{
							func_36(Param0, iParam1);
						}
						bLocal_212 = true;
					}
					else if (iLocal_170 == 3)
					{
						if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
						{
							func_251(&Param0, 5, (*iParam1)[0 /*20*/], "TOWBREAKM", 0, 1);
							func_165(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_CONV";
						}
						else if (Global_106565.f_19967.f_7 == 2)
						{
							func_251(&Param0, 6, (*iParam1)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_165(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_226 = "TOW_BRK_CON2";
						}
						else
						{
							func_35(Param0, iParam1);
						}
						bLocal_212 = true;
					}
				}
				else if (func_33(sLocal_226))
				{
					iLocal_451 = 2;
				}
			}
			break;
		
		case 3:
			func_32(Param0, iParam1);
			if (iLocal_213)
			{
				iLocal_451 = 2;
			}
			break;
		
		case 2:
			if (func_31(iParam2))
			{
				if (bLocal_212)
				{
					if (iLocal_211)
					{
						if (!func_41())
						{
							if (func_14(&Local_396, "TOWAUD", sLocal_226, &Local_225, 8, 0, 0))
							{
								iLocal_211 = 0;
								iLocal_451 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_31(iParam2);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_27();
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
				func_20();
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
				if (func_19())
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
			if (func_18())
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
			func_17();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_16();
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
		func_29();
	}
	return 0;
}

void func_16()
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

void func_17()
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

int func_18()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
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

void func_20()
{
	if (func_26(14))
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
		Global_14553 = func_21();
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

int func_21()
{
	func_22();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_25(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_24(unk_0x33CD235DF1E6A94E());
			if (func_23(iVar0) && (!func_26(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_23(Global_106565.f_2357.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_31(var uParam0)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0 && !unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_213 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xD62C4419A41F106A(*uParam0, 0))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), *uParam0, 0))
				{
					iLocal_213 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_452)
	{
		case 1:
			if (unk_0x1BCDA92AD0A7835B(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							unk_0x5560135EA44157F4(unk_0x95B959F18401C09A());
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							unk_0x5560135EA44157F4(unk_0x95B959F18401C09A());
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x1BCDA92AD0A7835B(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x1BCDA92AD0A7835B(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x1BCDA92AD0A7835B(joaat("towing")) == 0)
			{
				if (iLocal_170 == 1)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (iLocal_170 == 3)
				{
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_213)
					{
						if (func_165(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_213 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_33(char* sParam0)
{
	var uVar0;
	
	if (func_41())
	{
		MemCopy(&uVar0, {func_34()}, 4);
		if (unk_0xCE3CFF625BEBAA04(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_34()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;
	
	iVar0 = (unk_0x9EC3B269A34A2BEE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_251(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		func_165(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_251(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		func_165(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_251(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		func_165(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_251(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		func_165(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_226 = "TOW_GEN_MCH4";
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_251(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	func_165(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_226 = "TOW_GEN_MCH2";
}

bool func_37(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1B3E16C485B8DD94(sParam0);
	if (iParam1 == 1)
	{
		unk_0xFA6BEE2B1507FF1E(iParam2);
	}
	return unk_0xC8F93D36F11F7BE8();
}

void func_38()
{
	Global_14732 = 0;
	func_39();
}

void func_39()
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

struct<6> func_40()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar1 = unk_0xF26F606F8B36E2AC();
		iVar1 = (iVar1 + Global_16876);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar2 /*6*/])))
			{
				return Global_14734[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar3 /*6*/])))
					{
						return Global_14734[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14734[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_41()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1)
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0 || unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x60F149B1E077551D(unk_0x95B959F18401C09A()))
		{
			unk_0x5560135EA44157F4(unk_0x95B959F18401C09A());
		}
		iLocal_452 = 1;
		return 1;
	}
	if ((unk_0x765F6FEEFF39224F((uParam0[0 /*20*/])->f_6) && !unk_0xD62C4419A41F106A((uParam0[0 /*20*/])->f_6, 0)) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!bLocal_177)
		{
			if ((unk_0x91BBD269506D61D2((uParam0[0 /*20*/])->f_6, unk_0x33CD235DF1E6A94E(), 1) || unk_0x1145040FA5049E0E((uParam0[0 /*20*/])->f_6)) || unk_0x45AD2119A5B580CD((uParam0[0 /*20*/])->f_6))
			{
				iLocal_452 = 2;
				return 1;
			}
		}
	}
	if ((unk_0x765F6FEEFF39224F((*uParam0)[0 /*20*/]) && !unk_0xD62C4419A41F106A((*uParam0)[0 /*20*/], 0)) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x91BBD269506D61D2(unk_0x33CD235DF1E6A94E(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_452 = 4;
			return 1;
		}
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xD62C4419A41F106A(*uParam1, 0))
	{
		if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), *uParam1, 0))
		{
			iLocal_452 = 6;
			return 1;
		}
	}
	return 0;
}

void func_43()
{
	func_47(&Global_105216, 3);
	func_293(&(Global_106565.f_19967.f_1), 8192);
	func_44();
	func_187();
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

void func_47(var uParam0, int iParam1)
{
	func_48(uParam0, iParam1);
}

void func_48(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_49()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	switch (iLocal_906)
	{
		case 1:
			func_134(14);
			if (iLocal_170 == 3)
			{
				if (func_132(&vLocal_863, &fLocal_864, &uLocal_856, &uLocal_859))
				{
					iLocal_906 = 2;
				}
			}
			else
			{
				iLocal_906 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xC4B7D5901EDA35B5())
			{
				switch (iLocal_170)
				{
					case 3:
						func_251(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_165(&Local_396, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 2:
						func_251(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_165(&Local_396, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 0:
						func_251(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_799)
						{
							if (func_165(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_906 = 4;
							}
						}
						else if (func_165(&Local_396, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 1:
						func_251(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_165(&Local_396, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					
					case 4:
						func_251(&Local_396, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_165(&Local_396, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_906 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_170)
			{
				case 3:
					if (func_125("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 10);
						}
						func_123();
						func_257(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 2:
					if (func_125("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						vLocal_470 = { (vLocal_468[0 /*3*/] + 15f), (vLocal_468[0 /*3*/].f_1 + 15f), (vLocal_468[0 /*3*/].f_2 + 15f) };
						vLocal_471 = { (vLocal_468[0 /*3*/] - 15f), (vLocal_468[0 /*3*/].f_1 - 15f), (vLocal_468[0 /*3*/].f_2 - 15f) };
						unk_0x5856B9BF2B4E98C4(vLocal_470, vLocal_471, false, 1);
						iLocal_797 = 1;
						unk_0xE043FB70A76DE4AE(Local_824[0 /*20*/].f_6, true);
						func_257(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 0:
					if (func_125("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_257(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 1:
					if (func_125("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						unk_0xE043FB70A76DE4AE(Local_824[0 /*20*/].f_6, true);
						func_123();
						unk_0x3F6A41F0B145E78C(0);
						func_122(0, 0);
						func_122(1, 0);
						func_122(2, 0);
						func_122(3, 0);
						func_122(4, 0);
						func_122(5, 0);
						func_122(6, 0);
						func_122(7, 0);
						func_122(8, 0);
						func_122(9, 0);
						func_122(10, 0);
						func_122(11, 0);
						iLocal_794 = 1;
						func_257(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				case 4:
					if (func_125("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						unk_0xE043FB70A76DE4AE(Local_824[0 /*20*/].f_6, true);
						func_123();
						func_257(&iLocal_891);
						iLocal_906 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_8))
			{
				if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_6))
				{
					Local_824[0 /*20*/].f_8 = unk_0x8848A15CBDADDC60(Local_824[0 /*20*/].f_6);
					unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_8, 3);
					unk_0x1C316779E36C1967(Local_824[0 /*20*/].f_8, true);
				}
			}
			break;
		
		case 5:
			func_117();
			if (func_109(&iLocal_908, 0, "TOW_BREAK1"))
			{
				iLocal_906 = 7;
			}
			break;
		
		case 6:
			if (!func_41())
			{
				func_108(sLocal_905, 7500, 1);
				StringCopy(&cLocal_866, sLocal_905, 64);
				if (iLocal_170 == 3)
				{
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_170)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(vLocal_469))
					{
						vLocal_469 = { vLocal_46[0 /*3*/] };
					}
					func_107(8, &Local_825);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_170 == 1 && !unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], iLocal_900, 0))
			{
				bLocal_791 = true;
			}
			func_106();
			if (func_99(sVar2, vLocal_469))
			{
				if (iLocal_170 == 1 && !unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], iLocal_900, 0))
				{
					bLocal_791 = false;
					iLocal_787 = 1;
					if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/]))
					{
						Local_824[0 /*20*/].f_9 = unk_0x8848A15CBDADDC60(Local_824[0 /*20*/]);
						unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_9, 3);
						unk_0xCE5C49921A521962(Local_824[0 /*20*/].f_9, 0.7f);
					}
					iLocal_906 = 5;
				}
				else
				{
					iLocal_906 = 9;
				}
			}
			if (func_97(&uVar3, &uVar4, &uVar5))
			{
				bLocal_769 = true;
				iLocal_906 = 9;
			}
			break;
		
		case 9:
			if (iLocal_170 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_96(sVar2))
			{
				func_139(&uLocal_149, 0, 0);
				unk_0x1C2B995BA5ADE8FF(Local_824[0 /*20*/].f_6, false, 0);
				if (iLocal_840 == 0)
				{
					iLocal_775 = 0;
					iLocal_906 = 15;
				}
				else
				{
					func_108("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_866, "TOWT_OBJ_05", 64);
					iLocal_906 = 7;
				}
			}
			break;
		
		case 15:
			func_95();
			if (bLocal_773)
			{
				if (unk_0xE38E3CF1625A4145(iLocal_817))
				{
					unk_0x1ABDB383C83A336A(&iLocal_817);
				}
			}
			unk_0xEDF90B96BED57BCE(1);
			fLocal_179 = (fLocal_179 + 500f);
			if (iLocal_218 != 0 && !bLocal_769)
			{
				if (bLocal_779)
				{
					if ((unk_0xE3903F59E2F22150() - iLocal_218) < 12000)
					{
						fLocal_179 = (fLocal_179 + 50f);
					}
				}
			}
			if (!bLocal_779)
			{
				fLocal_179 = 0f;
			}
			fLocal_865 = func_4(&iLocal_882);
			fLocal_865 = (fLocal_865 * 1000f);
			iVar1 = round(fLocal_865);
			unk_0x198BCB9897710EAB(iVar1, 14, 0);
			if (iLocal_170 != 2)
			{
			}
			if (bLocal_779)
			{
				fLocal_179 = (fLocal_179 - fLocal_178);
			}
			iLocal_220 = round(fLocal_179);
			func_94(&iLocal_454, "TOW_UI07", 500, round(fLocal_178), round(fLocal_179), "TOW_UI08", 4000, 1);
			if (iLocal_220 > 0)
			{
				func_56(0, iLocal_220);
			}
			func_55(1);
			iLocal_906 = 16;
			break;
		
		case 16:
			if (unk_0x6B59932722922B69())
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			if (!func_50(&iLocal_454, 0))
			{
				unk_0x2E38114179FC5F06("TOW_TUT_04A");
				unk_0x2E38114179FC5F06("TOWT_OBJ_03Ga");
				iLocal_906 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	vLocal_46[0 /*3*/] = { vLocal_46[0 /*3*/] };
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (!func_7(&(iParam0->f_2)))
	{
		func_53(&(iParam0->f_2));
	}
	unk_0x581AE7724ACAD410(14);
	unk_0xFF524AE40FB6301A(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (unk_0x833B1A3D9F713E03(2, 201) || iParam0->f_8)
		{
			if (!func_7(&(iParam0->f_5)))
			{
				func_53(&(iParam0->f_5));
				func_52(iParam0, 1051260355);
			}
		}
		if (func_7(&(iParam0->f_5)))
		{
			if (func_4(&(iParam0->f_5)) > 0.33f)
			{
				func_51(&(iParam0->f_5));
				return 0;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(iParam0->f_2)) * 1000f) > to_float(iParam0->f_1)
	{
		if (!func_7(&(iParam0->f_5)))
		{
			func_53(&(iParam0->f_5));
			func_52(iParam0, 1051260355);
		}
		else if (func_4(&(iParam0->f_5)) > 0.33f)
		{
			func_51(&(iParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_51(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_52(var uParam0, float fParam1)
{
	unk_0xBB698266C5FDF0A7(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4D9DA18AB3C2A466(uParam0->f_9);
	unk_0x8DAB5B12D7B9AD29(fParam1);
	unk_0x818901B332D5541D();
}

void func_53(int iParam0)
{
	func_54(iParam0, 0f);
}

void func_54(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_55(bool bParam0)
{
	char* sVar0;
	
	unk_0xCB7F618CC6FABC72(0);
	switch (func_21())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x29958B7EAA626220(sVar0);
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	func_58(Global_106565.f_24898[iParam0 /*4*/], func_93(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_106565.f_24898.f_69 = (Global_106565.f_24898.f_69 + iParam1);
			break;
		
		case 2:
			Global_106565.f_24898.f_70 = (Global_106565.f_24898.f_70 + iParam1);
			break;
		
		case 0:
			Global_106565.f_24898.f_71 = (Global_106565.f_24898.f_71 + iParam1);
			break;
	}
	unk_0x75D54ED6C1AD1642(func_57(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(func_57(iParam0, 1), iVar0, 1);
}

int func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_59(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_92();
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
					func_91(99, 1);
					func_90(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_75(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_70(5))
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
							func_90(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_70(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_90(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_90(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_90(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_90(joaat("sp2_money_spent_property"), iParam3);
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
									func_90(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_70(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_90(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_90(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_90(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_69(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_91(95, iParam3);
					break;
				
				case 1:
					func_91(97, iParam3);
					break;
				
				case 2:
					func_91(96, iParam3);
					break;
			}
			func_91(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_62(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_62(iVar1);
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
					func_90(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_90(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_90(joaat("sp2_total_cash_earned"), iParam3);
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
	func_61(iParam0);
	if (Global_36425 == 15)
	{
		func_60(0);
	}
	return 1;
}

void func_60(bool bParam0)
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

void func_61(int iParam0)
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

void func_62(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_68(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_68(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_68(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_68(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_65(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_65(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_65(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_65(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_65(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_65(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_64() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_64() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_63(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_63(int iParam0)
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

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_67();
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

int func_67()
{
	return Global_1312745;
}

int func_68(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_67();
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

void func_69(int iParam0)
{
	func_91(93, iParam0);
	func_91(29, iParam0);
	func_91(30, iParam0);
}

bool func_70(int iParam0)
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
		return func_72(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_72(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_72(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_72(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_71(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_71(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_71(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_71(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_71(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_71(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_64() /*10778*/].f_6165.f_10, iParam0);
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_66(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_67();
	}
	iVar1 = func_74(iParam0, iParam1);
	uVar2 = func_73(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_73(int iParam0)
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

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_67();
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

int func_75(bool bParam0)
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
		func_89(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_76(27, 1);
	return 1;
}

int func_76(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_77(iParam0, iParam1);
}

int func_77(int iParam0, int iParam1)
{
	if (func_26(14) && !func_88(iParam0))
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
	if (func_87(&Global_4269608))
	{
		if (func_85(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_78(&Global_4269608, iParam0))
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

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_88(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	if (func_84(uParam0) < 0f)
	{
		func_83(uParam0, 0);
	}
	func_81(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_79(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_79(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_88(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	if (func_84(uParam0) < 0f)
	{
		func_83(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_80(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_80(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_81(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_82(uParam0, iVar0);
		iVar0++;
	}
	func_83(uParam0, (Global_4269607 - 0.5f));
}

void func_82(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_83(var uParam0, float fParam1)
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

float func_84(var uParam0)
{
	return uParam0->f_80;
}

bool func_85(var uParam0, int iParam1)
{
	return func_86(uParam0, iParam1) != -1;
}

int func_86(var uParam0, int iParam1)
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

bool func_87(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_88(int iParam0)
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

int func_89(int iParam0, int iParam1)
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

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_91(int iParam0, int iParam1)
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

void func_92()
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

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	unk_0xBB698266C5FDF0A7(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x713FEBE56D2BD403("STRING");
	unk_0x75D3F9044123D4F9(iParam7);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x36F3AA9FFAAF8606();
	unk_0x713FEBE56D2BD403(sParam5);
	unk_0xE800DC85FDF60F85(iParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0x36F3AA9FFAAF8606();
	unk_0x818901B332D5541D();
	func_53(&(iParam0->f_2));
	iParam0->f_1 = iParam6;
	iParam0->f_9 = 1;
}

void func_95()
{
	Global_106565.f_19967.f_3++;
	Global_106565.f_19967.f_2 = iLocal_170;
	switch (iLocal_170)
	{
		case 2:
			Global_106565.f_19967.f_4++;
			break;
		
		case 3:
			Global_106565.f_19967.f_7++;
			break;
		
		case 0:
			Global_106565.f_19967.f_6++;
			break;
		
		case 1:
			Global_106565.f_19967.f_5++;
			break;
		
		case 4:
			Global_106565.f_19967.f_8++;
			break;
	}
}

int func_96(char* sParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (iLocal_839 == -1)
	{
	}
	if (Local_824[iLocal_839 /*20*/].f_15)
	{
		if ((func_4(&(Local_824[iLocal_839 /*20*/].f_11)) - Local_824[iLocal_839 /*20*/].f_14) > 120f)
		{
			unk_0x87D8DEABF0FEFAE6(Local_824[iLocal_839 /*20*/].f_6, 1, 0);
		}
	}
	if (func_97(&uVar0, &uVar1, &uVar2))
	{
		if (!unk_0xD62C4419A41F106A(Local_824[iLocal_839 /*20*/], 0) && unk_0x10930B9CAD4111C2(Local_824[iLocal_839 /*20*/], iLocal_900, 0))
		{
			unk_0xA4DF1E31BCDF9978(iLocal_900, 6f, 2, 0);
			iLocal_214 = 1;
			if (unk_0x765F6FEEFF39224F(Local_824[iLocal_839 /*20*/]) && !unk_0xD62C4419A41F106A(Local_824[iLocal_839 /*20*/], 0))
			{
				unk_0x99414FB2D30425C1(&iLocal_171);
				unk_0xE0DAC4ABE9900D9A(0);
				unk_0x07C339D4328CA16C(0, 0, 0);
				unk_0x903D86A54A398682(0, Local_824[0 /*20*/].f_6, 20000, 2f, 0f, 1f, 0);
				iVar3 = (unk_0x9EC3B269A34A2BEE(0, 65535) % 3);
				if (iVar3 == 0)
				{
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar3 == 1)
				{
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar3 == 2)
				{
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				unk_0xC734F59A13D39AEF(iLocal_171);
				unk_0x13A2D602CD10CBAC(Local_824[iLocal_839 /*20*/], iLocal_171);
				unk_0xA7A57E7757ED035E(&iLocal_171);
				unk_0x897EF720254BBEA3(Local_824[iLocal_839 /*20*/], true);
			}
			if ((Global_106565.f_19967.f_3 == 0 || Global_106565.f_19967.f_3 == 1) || Global_106565.f_19967.f_3 == 4)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_816) && !unk_0xD62C4419A41F106A(iLocal_816, 0))
				{
					unk_0x99414FB2D30425C1(&iLocal_171);
					unk_0x07C339D4328CA16C(0, 0, 0);
					unk_0xBD4591245C650283(0, 227.082f, 0);
					unk_0xC734F59A13D39AEF(iLocal_171);
					if (!unk_0xD62C4419A41F106A(iLocal_816, 0))
					{
						unk_0x13A2D602CD10CBAC(iLocal_816, iLocal_171);
						unk_0x897EF720254BBEA3(iLocal_816, true);
					}
					unk_0xA7A57E7757ED035E(&iLocal_171);
				}
			}
			if (func_41())
			{
				func_166();
			}
			if ((Global_106565.f_19967.f_3 == 0 || Global_106565.f_19967.f_3 == 1) || Global_106565.f_19967.f_3 == 4)
			{
				if (Global_106565.f_19967.f_3 == 0)
				{
					func_165(&Local_396, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_106565.f_19967.f_3 == 1)
				{
					func_165(&Local_396, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_106565.f_19967.f_3 == 4)
				{
					func_165(&Local_396, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_793)
		{
		}
		iLocal_216 = 0;
		unk_0x1ABDB383C83A336A(&(Local_824[iLocal_839 /*20*/].f_8));
		func_53(&iLocal_879);
		iLocal_840 = (iLocal_840 - 1);
		return 1;
	}
	if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[iLocal_839 /*20*/].f_6, 0))
	{
		if (!unk_0x221C953018491A32(iLocal_900, Local_824[iLocal_839 /*20*/].f_6))
		{
			iLocal_216 = 0;
			func_139(&uLocal_149, 0, 0);
			unk_0x1C316779E36C1967(Local_824[iLocal_839 /*20*/].f_8, false);
			unk_0x1ABDB383C83A336A(&(Local_824[iLocal_839 /*20*/].f_8));
			if (unk_0x765F6FEEFF39224F(Local_824[iLocal_839 /*20*/].f_6) && !unk_0xD62C4419A41F106A(Local_824[iLocal_839 /*20*/].f_6, 0))
			{
				if (!unk_0xE38E3CF1625A4145(Local_824[iLocal_839 /*20*/].f_8))
				{
					Local_824[iLocal_839 /*20*/].f_8 = unk_0x8848A15CBDADDC60(Local_824[iLocal_839 /*20*/].f_6);
					unk_0xB9E84A421C105943(Local_824[iLocal_839 /*20*/].f_8, 3);
				}
			}
			if (iLocal_170 == 1)
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_812)
					{
						if (func_165(&Local_396, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_812)
					{
						if (func_165(&Local_396, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			else if (iLocal_170 == 3)
			{
				if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_812)
					{
						if (func_165(&Local_396, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
				else if (Global_106565.f_19967.f_7 == 2)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_812)
					{
						if (func_165(&Local_396, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_812 = 1;
						}
					}
				}
			}
			func_53(&iLocal_879);
			if (!bLocal_791)
			{
				if (func_41())
				{
					unk_0xD92171BC6C48DB90(true);
					unk_0xD362430CD61A9B08();
					func_108(sParam0, 7500, 1);
				}
				if (!func_41())
				{
					if (iLocal_765)
					{
						unk_0xD362430CD61A9B08();
						func_108(sParam0, 7500, 1);
						iLocal_765 = 0;
					}
					else
					{
						unk_0xD362430CD61A9B08();
						func_108(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_866, sParam0, 64);
				}
			}
			iLocal_906 = 7;
		}
	}
	return 0;
}

int func_97(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_839 != -1)
	{
		if (!func_11(Local_825.f_14))
		{
			vLocal_469 = { Local_825.f_14 };
			*uParam0 = { Local_825.f_7 };
			*uParam1 = { Local_825.f_10 };
			*uParam2 = Local_825.f_13;
		}
		else
		{
			*uParam0 = { Local_825 };
			*uParam1 = { Local_825.f_3 };
			*uParam2 = Local_825.f_6;
		}
		if (!bLocal_793)
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_469, 30f, 30f, 2f, true, true, 0))
				{
					if (iLocal_170 == 0 || iLocal_170 == 4)
					{
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 1);
							bLocal_773 = true;
						}
					}
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(Local_824[iLocal_839 /*20*/].f_6))
		{
			if (unk_0xD4B4F68F3449CBEC(Local_824[iLocal_839 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, false, 0))
			{
				if (iLocal_775)
				{
					func_98("TOWT_HELP_UH", -1);
				}
				if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[iLocal_839 /*20*/].f_6, 0))
				{
					if (!unk_0x221C953018491A32(iLocal_900, Local_824[iLocal_839 /*20*/].f_6) || (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_824[iLocal_839 /*20*/].f_6, 0) && !unk_0x221C953018491A32(iLocal_900, Local_824[iLocal_839 /*20*/].f_6)))
					{
						if (func_41())
						{
							func_166();
						}
						func_139(&uLocal_149, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_98(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

int func_99(char* sParam0, vector3 vParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (!bLocal_779 && !bLocal_790)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_900) && !unk_0xD62C4419A41F106A(iLocal_900, 0))
		{
			iVar2 = unk_0xEF78C7A52A320DDB(iLocal_900);
			if (unk_0x765F6FEEFF39224F(iVar2) && !unk_0xD62C4419A41F106A(iVar2, 0))
			{
				if (unk_0x680558231C80291D(iVar2))
				{
					if (unk_0xEAE1362B9F5C7B18(iVar2) != Local_824[0 /*20*/].f_6)
					{
						if (!iLocal_806)
						{
							func_251(&uLocal_227, 3, iLocal_816, "TONYA", 0, 1);
							if (func_165(&uLocal_227, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_806 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_806 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (unk_0x765F6FEEFF39224F(Local_824[iVar1 /*20*/].f_6))
		{
			if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[iVar1 /*20*/].f_6, 0))
			{
				if (unk_0x221C953018491A32(iLocal_900, Local_824[iVar1 /*20*/].f_6) && func_105())
				{
					unk_0xF0E2D155B834E176(iLocal_900, true);
					func_102();
					func_139(&uLocal_149, 0, 0);
					iLocal_216 = 1;
					if (iLocal_795 && !unk_0x10930B9CAD4111C2(Local_824[iVar1 /*20*/], iLocal_900, 0))
					{
						bVar0 = false;
						if (iLocal_911 < 4)
						{
							settimerb(0);
							iLocal_911 = 5;
						}
					}
					if (bVar0)
					{
						func_101(&iLocal_885);
						unk_0x1C316779E36C1967(Local_824[iVar1 /*20*/].f_8, false);
						iLocal_801 = 0;
						func_100(Local_824[iVar1 /*20*/].f_8);
						Local_824[iVar1 /*20*/].f_14 = func_4(&(Local_824[iVar1 /*20*/].f_11));
						if (iLocal_821 == 0)
						{
							Local_824[iVar1 /*20*/].f_8 = unk_0x2C0ED4741A007C6A(vParam1);
							fLocal_180 = func_9(vParam1, 0);
							vLocal_468[0 /*3*/] = { vParam1 };
						}
						if (iLocal_170 == 4)
						{
							unk_0xB40411FADDCA9CC8(Local_824[0 /*20*/].f_6, 0, 0);
						}
						func_53(&iLocal_891);
						unk_0xB9E84A421C105943(Local_824[iVar1 /*20*/].f_8, 5);
						unk_0x1C316779E36C1967(Local_824[iVar1 /*20*/].f_8, true);
						if (iLocal_170 == 0 && bLocal_799)
						{
						}
						else if (iLocal_766)
						{
							func_108(sParam0, 7500, 1);
							iLocal_766 = 0;
						}
						StringCopy(&cLocal_866, sParam0, 64);
						unk_0xB7350047030F7672(vLocal_468[0 /*3*/], 6f, 0, 0, 0, 0, false, 0);
						iLocal_839 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_100(int iParam0)
{
	if (unk_0xE38E3CF1625A4145(iParam0))
	{
		unk_0x1ABDB383C83A336A(&iParam0);
	}
}

void func_101(int iParam0)
{
	func_51(iParam0);
	StringCopy(&cLocal_70, "", 32);
}

void func_102()
{
	func_103("TOW_TUT_03");
	func_103("TOW_TUT_02");
	func_103("TOW_TUT_01");
	unk_0x2E38114179FC5F06("TOWT_OBJ_03");
	unk_0x2E38114179FC5F06("TOWT_OBJ_03a");
	unk_0x2E38114179FC5F06("TOWT_OBJ_03G");
	unk_0x2E38114179FC5F06("TOWT_OBJ_03Ga");
	unk_0x2E38114179FC5F06("TOWT_OBJS_03");
}

void func_103(char* sParam0)
{
	if (func_104(sParam0))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
}

int func_104(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_105()
{
	if (bLocal_793)
	{
		if (bLocal_448 && !func_41())
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

void func_106()
{
	int iVar0;
	
	if (((!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0)) && unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6)) || (Global_106565.f_19967.f_3 == 0 || Global_106565.f_19967.f_3 > 2))
	{
		return;
	}
	switch (iLocal_852)
	{
		case 0:
			if (!func_7(&iLocal_897))
			{
				func_257(&iLocal_897);
				iLocal_852 = 1;
			}
			break;
		
		case 1:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 10f)
				{
					if (!unk_0x6B59932722922B69() && !func_41())
					{
						iVar0 = (unk_0x9EC3B269A34A2BEE(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_98("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_98("TOW_TUT_02", -1);
						}
						else
						{
							func_98("TOW_TUT_04C", -1);
						}
						func_53(&iLocal_897);
						iLocal_852 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 15f)
				{
					if (!unk_0x6B59932722922B69() && !func_41())
					{
						func_98("TOW_TUT_03", -1);
						func_53(&iLocal_897);
						iLocal_852 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&iLocal_897))
			{
				if (func_4(&iLocal_897) > 15f)
				{
					if (!unk_0x6B59932722922B69() && !func_41())
					{
						func_98("TOW_TUT_01", -1);
						iLocal_852 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_107(int iParam0, var uParam1)
{
	if (func_11(vLocal_45[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { vLocal_45[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { vLocal_45[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { vLocal_45[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { vLocal_45[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { vLocal_45[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { vLocal_45[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { vLocal_45[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { vLocal_45[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { vLocal_46[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_108(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

int func_109(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_792)
			{
				if ((func_116(Local_824[iParam1 /*20*/].f_6, iLocal_900, &iLocal_449, 10, 150f, 4f, 1) || iLocal_787) || iLocal_216)
				{
					if (!bLocal_770)
					{
						iLocal_449 = 0;
						func_115(&iLocal_444);
						if (unk_0xD76D6BCC14B95CE1(Local_824[iParam1 /*20*/], -875674219) != 1)
						{
							unk_0x11C4AF4137F2A4B5(Local_824[iParam1 /*20*/], unk_0x33CD235DF1E6A94E(), -1);
						}
						bLocal_770 = true;
					}
					if (bLocal_770)
					{
						if (unk_0x18FB647D79B09657(iLocal_900, unk_0xFBB1F99A825CAB09(Local_824[iParam1 /*20*/], true), 25f, 25f, 25f, false, true, 0))
						{
							if (unk_0x1CE8F0A08E65CA6A(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								unk_0xCCAF0916949DD646(Local_824[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_114())
							{
								if (iLocal_170 == 1)
								{
									if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
									{
										func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
										func_251(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWTRAINF", 0, 1);
										func_165(&Local_396, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_106565.f_19967.f_5 == 2)
									{
										func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
										func_251(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWILLEGALMAN2", 0, 1);
										func_165(&Local_396, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									unk_0xC838CE9837D0ABAF(Local_824[iParam1 /*20*/], iLocal_900, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_170 == 3)
								{
									if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
									{
										func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
										func_251(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
										func_165(&Local_396, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_106565.f_19967.f_7 == 2)
									{
										func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
										func_251(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
										func_165(&Local_396, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									unk_0xC838CE9837D0ABAF(Local_824[iParam1 /*20*/], iLocal_900, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_787)
								{
									unk_0x1ABDB383C83A336A(&(Local_824[iParam1 /*20*/].f_8));
									if (unk_0x765F6FEEFF39224F(Local_824[iParam1 /*20*/]))
									{
										Local_824[iParam1 /*20*/].f_8 = unk_0x8848A15CBDADDC60(Local_824[iParam1 /*20*/]);
										unk_0xB9E84A421C105943(Local_824[iParam1 /*20*/].f_8, 3);
										unk_0xCE5C49921A521962(Local_824[iParam1 /*20*/].f_8, 0.7f);
									}
								}
								settimera(0);
								*iParam0 = 1;
							}
						}
						else if (unk_0x18FB647D79B09657(iLocal_900, unk_0xFBB1F99A825CAB09(Local_824[iParam1 /*20*/], true), 50f, 50f, 50f, false, true, 0))
						{
							if (!iLocal_811)
							{
								if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
								{
									func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
									func_251(&Local_396, 5, Local_824[iParam1 /*20*/], "TOWBREAKM", 0, 1);
									if (func_165(&Local_396, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
								else if (Global_106565.f_19967.f_7 == 2)
								{
									func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
									func_251(&Local_396, 6, Local_824[iParam1 /*20*/], "TOWBREAKHIPM", 0, 1);
									if (func_165(&Local_396, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_811 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_774 = true;
			func_53(&iLocal_891);
			func_53(&iLocal_876);
			func_100(Local_824[iParam1 /*20*/].f_8);
			if (!unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_9))
			{
				if (unk_0x765F6FEEFF39224F(Local_824[iParam1 /*20*/]))
				{
					Local_824[0 /*20*/].f_9 = unk_0x8848A15CBDADDC60(Local_824[iParam1 /*20*/]);
					unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_9, 3);
					unk_0xCE5C49921A521962(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			func_108("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			unk_0x9315FCF6CFE2AB41("TOWBUDDIES", &iLocal_823);
			unk_0xD2E80177F27FD43F(1, iLocal_823, 1862763509);
			unk_0x0648A75D3F60E864(Local_824[iParam1 /*20*/], iLocal_823);
			func_113(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!unk_0x10930B9CAD4111C2(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				if (func_110(&uLocal_915, Local_824[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_875 = 11;
					func_261();
				}
			}
			if (unk_0x10930B9CAD4111C2(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
				{
					unk_0xD303E20CB0AE4AD0(iLocal_900, 9);
					func_100(Local_824[0 /*20*/].f_9);
				}
			}
			if (unk_0x10930B9CAD4111C2(Local_824[iParam1 /*20*/], iLocal_900, 0) && !unk_0x12BF789190D82474())
			{
				if (iLocal_170 == 1)
				{
					if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
					{
						if (iLocal_787)
						{
							func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_106565.f_19967.f_5 == 2)
					{
						if (iLocal_787)
						{
							func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_170 == 3)
				{
					if (Global_106565.f_19967.f_7 == 0 || Global_106565.f_19967.f_7 == 1)
					{
						if (iLocal_787)
						{
							func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWBREAKM", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_106565.f_19967.f_7 == 2)
					{
						if (iLocal_787)
						{
							func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							func_165(&Local_396, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x10930B9CAD4111C2(Local_824[iParam1 /*20*/], iLocal_900, 0))
			{
				func_113(iParam1);
				if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					if (iLocal_787 && unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_8))
				{
					if (unk_0x765F6FEEFF39224F(Local_824[iParam1 /*20*/].f_6) && !unk_0xD62C4419A41F106A(Local_824[iParam1 /*20*/].f_6, 0))
					{
						Local_824[0 /*20*/].f_8 = unk_0x8848A15CBDADDC60(Local_824[iParam1 /*20*/].f_6);
						unk_0xB9E84A421C105943(Local_824[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					if (!unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						func_108("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_866, "TOWT_OBJ_03", 64);
					}
				}
				func_53(&iLocal_876);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_110(var uParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = unk_0xE3903F59E2F22150();
			uParam0->f_2 = func_111(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			}
			if (!unk_0xD62C4419A41F106A(iParam1, 0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
			}
			if (vdist2(vVar0, vVar1) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_111(int iParam0, bool bParam1)
{
	return func_112(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, bParam1);
}

float func_112(int iParam0, int iParam1, bool bParam2)
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

void func_113(int iParam0)
{
	int iVar0;
	
	bLocal_792 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0xE38E3CF1625A4145(Local_824[iVar0 /*20*/].f_8))
			{
				unk_0x1ABDB383C83A336A(&(Local_824[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_114()
{
	float fVar0;
	
	if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
	{
		if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
		{
			fVar0 = unk_0x8BB475EA09C9A0EB(iLocal_900);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0xCBE6AF58552C63B2(*iParam0);
		unk_0x44D426446FAF55FB(*iParam0);
		*iParam0 = -1;
	}
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x068481DAF84B9654(iParam0))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam0);
		}
	}
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iVar0, 0) && unk_0xBC2FC12AD0FBF72E(iVar0))
		{
			return 0;
		}
	}
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x765F6FEEFF39224F(iParam1))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!unk_0xC30D5C4DCAC8020A(iParam0) && func_111(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_111(iParam0, 1) < 8f) && unk_0x8BB475EA09C9A0EB(iParam1) < fParam5) && !unk_0xC30D5C4DCAC8020A(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	if (!bLocal_774)
	{
		iVar0 = round(((300f - func_121(&iLocal_891)) * 1000f));
		if (iLocal_170 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_118(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_118(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_118(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_120(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_119(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_119(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_120(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

float func_121(int iParam0)
{
	if (func_7(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_122(int iParam0, bool bParam1)
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

void func_123()
{
	int iVar0;
	
	iVar0 = func_124(&vLocal_45, vLocal_468[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		vLocal_469 = { vLocal_45[iVar0 /*3*/] };
		func_107(iVar0, &Local_825);
	}
	else
	{
		vLocal_469 = { vLocal_45[0 /*3*/] };
	}
}

int func_124(var uParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*(uParam0[iVar0 /*3*/])))
		{
			fVar3 = vdist2(*(uParam0[iVar0 /*3*/]), vParam1);
			if (fVar3 < fVar2 && fVar3 > fParam2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_125(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_180 = func_9(vLocal_863, 0);
	vLocal_468[0 /*3*/] = { vLocal_863 };
	sLocal_905 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_131(vLocal_863, fLocal_864, uParam2, 0))
		{
			func_130(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
			unk_0x5766BA01380E23CF(Local_824[0 /*20*/].f_6, 1);
			unk_0x4459178BAF2918E1(Local_824[0 /*20*/].f_6, false);
			unk_0x43D47AD82DA3C6EC(Local_824[0 /*20*/].f_6, true, 1);
			unk_0x09993E7216CF52C4(Local_824[0 /*20*/].f_6, true);
			return 1;
		}
	}
	else if (func_126(bParam4, 0))
	{
		func_130(Local_824[0 /*20*/].f_6, &uLocal_844, &uLocal_846);
		unk_0x5766BA01380E23CF(Local_824[0 /*20*/].f_6, 1);
		unk_0x4459178BAF2918E1(Local_824[0 /*20*/].f_6, false);
		unk_0x43D47AD82DA3C6EC(Local_824[0 /*20*/].f_6, true, 1);
		unk_0x09993E7216CF52C4(Local_824[0 /*20*/].f_6, true);
		return 1;
	}
	return 0;
}

int func_126(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_128(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_180 = func_9(Local_393[iLocal_450 /*23*/].f_1, 0);
	vLocal_468[0 /*3*/] = { Local_393[iLocal_450 /*23*/].f_1 };
	if (Local_393[iLocal_450 /*23*/] == 2)
	{
		unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_393[iLocal_450 /*23*/] == 4)
	{
		fLocal_864 = -1f;
		iLocal_784 = 1;
		iLocal_901 = unk_0xC651C43AB13A15E5(joaat("ambulance"), Local_394[func_250() /*28*/].f_23, Local_394[func_250() /*28*/].f_26, true, true, false);
		if (!unk_0xD62C4419A41F106A(iLocal_901, 0))
		{
			unk_0xF0E2D155B834E176(iLocal_901, true);
			unk_0x9FABD0AB045A5D6E(iLocal_901, true, true, 0);
			iLocal_902 = unk_0xE196503B36B6194B(iLocal_901, 4, joaat("s_m_m_paramedic_01"), -1, 1, true);
		}
		if (!func_11(Local_394[func_250() /*28*/].f_17))
		{
			iLocal_395 = func_127(Local_394[func_250() /*28*/].f_17, Local_394[func_250() /*28*/].f_20);
		}
		switch (Local_393[iLocal_450 /*23*/].f_21)
		{
			case 1:
				unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				unk_0xA3B3E54143896FE9(Local_824[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		unk_0x4A3BD9D189356B69(Local_824[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_190 = true;
		if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
		{
			Local_824[0 /*20*/] = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, joaat("a_f_m_bevhills_01"), -1, 1, true);
		}
		else if (Global_106565.f_19967.f_5 == 2)
		{
			Local_824[0 /*20*/] = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, joaat("a_m_y_genstreet_02"), -1, 1, true);
		}
		else
		{
			Local_824[0 /*20*/] = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], -1, 1, true);
		}
	}
	return 1;
}

int func_127(vector3 vParam0, vector3 vParam1)
{
	unk_0x798B28A324675954(vParam0, vParam1);
	unk_0x47B5CF91AC5D5FFA(vParam0, vParam1, 1);
	return unk_0x0335D8135051EA56(vParam0, vParam1, 0, 1, 1, 1);
}

int func_128(vector3 vParam0, float fParam1, int iParam2, bool bParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam2 = func_129(&Local_824);
	if (*iParam2 == -1)
	{
		return 0;
	}
	if (iLocal_841 >= 2)
	{
		iLocal_841 = 0;
	}
	Local_824[*iParam2 /*20*/].f_6 = unk_0xC651C43AB13A15E5(iLocal_819[iLocal_841], vParam0, fParam1, true, true, false);
	unk_0x43D47AD82DA3C6EC(Local_824[*iParam2 /*20*/].f_6, true, 1);
	iLocal_841++;
	fLocal_180 = func_9(vParam0, 0);
	if (iLocal_170 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_393[iLocal_450 /*23*/].f_10))
	{
		Local_824[*iParam2 /*20*/].f_17 = unk_0xD347320F93F4399A(Local_393[iLocal_450 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_824[*iParam2 /*20*/].f_17 = unk_0xD347320F93F4399A(vParam0, fVar0, 0f, 0);
	}
	Local_824[*iParam2 /*20*/].f_18 = unk_0xD347320F93F4399A(vParam0, fVar1, 2.5f, 0);
	Local_824[*iParam2 /*20*/].f_19 = unk_0xD347320F93F4399A(vParam0, fVar2, 4f, 0);
	if (bParam3)
	{
		if (Local_824[*iParam2 /*20*/].f_15)
		{
			unk_0x0BDE685791F16E73(Local_824[*iParam2 /*20*/].f_6, 1);
			unk_0xB81134EAAC434D76(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0xED061DFFF6E0DC78(Local_824[*iParam2 /*20*/].f_6, 1);
		}
		else
		{
			unk_0x0BDE685791F16E73(Local_824[*iParam2 /*20*/].f_6, 1);
			unk_0xB81134EAAC434D76(Local_824[*iParam2 /*20*/].f_6, 1f);
			unk_0xED061DFFF6E0DC78(Local_824[*iParam2 /*20*/].f_6, 1);
		}
	}
	if (!bLocal_792 && uParam4)
	{
		if (unk_0x765F6FEEFF39224F(Local_824[*iParam2 /*20*/].f_6))
		{
			Local_824[*iParam2 /*20*/].f_8 = unk_0x8848A15CBDADDC60(Local_824[*iParam2 /*20*/].f_6);
			unk_0xB9E84A421C105943(Local_824[*iParam2 /*20*/].f_8, 3);
		}
	}
	iLocal_840++;
	func_257(&(Local_824[*iParam2 /*20*/].f_11));
	return 1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((iParam0[iVar0 /*20*/])->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_130(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		*uParam1 = unk_0xE80842D7B53F8525(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_131(vector3 vParam0, float fParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!func_128(vParam0, fParam1, uParam2, 1, iParam3))
	{
		return 0;
	}
	if (*uParam2 == -1)
	{
	}
	unk_0x4A3BD9D189356B69(Local_824[*uParam2 /*20*/].f_6, 4, 0, 0);
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(Local_824[*uParam2 /*20*/].f_6), &vVar1, &vVar2);
	vVar3 = { vVar2 - vVar1 };
	vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
	iLocal_784 = 1;
	vVar0 = { unk_0x2CA911E7569D12EA(Local_824[*uParam2 /*20*/].f_6, 1.5f, 0f, 0f) };
	vVar4 = { unk_0xFBB1F99A825CAB09(Local_824[*uParam2 /*20*/].f_6, true) };
	fVar5 = unk_0xC472E34C8FBEC678(Local_824[*uParam2 /*20*/].f_6);
	iLocal_850 = unk_0xD347320F93F4399A(unk_0xCD1EDCB38767B47C(vVar4, fVar5, -1.5f, -30f, 0f), 10f, 0f, 0);
	iLocal_851 = unk_0xD347320F93F4399A(unk_0xCD1EDCB38767B47C(vVar4, fVar5, -1.5f, 30f, 0f), 10f, 0f, 0);
	unk_0xB7350047030F7672(vVar0, 30f, 0, 0, 0, 0, false, 0);
	Local_394[func_250() /*28*/][0 /*3*/] = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
	return 1;
}

int func_132(var uParam0, float fParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	fVar4 = 0f;
	fVar5 = 0f;
	iVar6 = (unk_0x9EC3B269A34A2BEE(0, 3999) / 1000);
	if (iVar6 == 0)
	{
		fVar4 = -unk_0x9562E33C057F7589(450f, 700f);
		fVar5 = unk_0x9562E33C057F7589(-100f, 100f);
	}
	else if (iVar6 == 1)
	{
		fVar4 = unk_0x9562E33C057F7589(450f, 700f);
		fVar5 = unk_0x9562E33C057F7589(100f, 100f);
	}
	else if (iVar6 == 2)
	{
		fVar5 = unk_0x9562E33C057F7589(450f, 700f);
		fVar4 = unk_0x9562E33C057F7589(-100f, 100f);
	}
	else
	{
		fVar5 = -unk_0x9562E33C057F7589(450f, 700f);
		fVar4 = unk_0x9562E33C057F7589(-100f, 100f);
	}
	vVar0 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), fVar4, fVar5, 0f) };
	if (!unk_0x5AA3FB798F8141CB(vVar0, 10f, 1, 1, 1, &vVar3, &uVar2))
	{
		return 0;
	}
	unk_0x4CD58AFCE9FC3575(vVar3, 2, uParam2, fParam1, &uVar1, 1, 3f, 0f);
	*uParam0 = { vVar3 };
	if (unk_0x1BCDA92AD0A7835B(joaat("tonya4")) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_133(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_133(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_134(int iParam0)
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

void func_135()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xE38E3CF1625A4145(vLocal_69[iVar0 /*3*/].f_1))
		{
			if (unk_0xD62C4419A41F106A(vLocal_69[iVar0 /*3*/], 0))
			{
				unk_0x1ABDB383C83A336A(&(vLocal_69[iVar0 /*3*/].f_1));
			}
			else if (vLocal_69[iVar0 /*3*/].f_2 && func_111(vLocal_69[iVar0 /*3*/], 1) > 200f)
			{
				unk_0x1ABDB383C83A336A(&(vLocal_69[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_136()
{
	if (!unk_0xCE3CFF625BEBAA04(&cLocal_63, ""))
	{
		if (!func_41())
		{
			func_165(&Local_51, &cLocal_63, &cLocal_66, 9, 0, 0, 0);
			StringCopy(&cLocal_63, "", 16);
		}
	}
}

void func_137(int iParam0, float fParam1, bool bParam2)
{
	if (func_138(iParam0, fParam1))
	{
		if (bParam2)
		{
			func_98(&cLocal_70, -1);
		}
		else
		{
			func_108(&cLocal_70, 7500, 1);
		}
	}
}

int func_138(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_51(iParam0);
		return 1;
	}
	return 0;
}

void func_139(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(iParam2);
		unk_0xA94473FEE1796AED("FocusIn");
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x052830EE89C97404(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x6D2E2622CA149402(sVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x6D2E2622CA149402(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

void func_140(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (unk_0x6D2E2622CA149402(iVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_163();
	}
	if (!unk_0x8D255802EBF1DA76())
	{
		if (func_158(uParam0, bParam4, bParam6, 0))
		{
			func_157(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_145(iVar0))
			{
				if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && iParam5)
					{
						if (!func_104(iVar0))
						{
							func_98(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_144(1);
							}
						}
					}
				}
			}
		}
		else if (func_145(iVar0))
		{
			if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
			{
				if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && iParam5)
				{
					if (!func_104(iVar0))
					{
						func_98(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
						{
							func_144(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x6D2E2622CA149402(iVar0))
		{
			if (func_104(iVar0) && unk_0xFAC8F20FBC764F4D())
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				func_139(uParam0, iVar0, 1);
			}
		}
		if (!func_158(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_143(uParam0))
			{
				func_141(uParam0);
			}
		}
	}
}

void func_141(var uParam0)
{
	if (func_142(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x052830EE89C97404(true);
		unk_0x3754CDF254D9F523(0);
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		unk_0xA94473FEE1796AED("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_142(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x680558231C80291D(iParam0))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x068481DAF84B9654(iParam0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xE3903F59E2F22150()
		{
			return 1;
		}
	}
	return 0;
}

int func_144(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_145(char* sParam0)
{
	if (!func_146(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_144(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_144(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_144(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_146(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		return 0;
	}
	if (func_156(0))
	{
		return 0;
	}
	if (func_155())
	{
		return 0;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				return 0;
			}
			if (unk_0x1E67980B42842E37())
			{
				return 0;
			}
		}
	}
	if ((func_154() || func_153(Global_4456448.f_161209)) || func_152())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_151(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == -1693015116 && iVar1 == 0) && func_150(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_147(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_147(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (func_148(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_148(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_148(int iParam0, bool bParam1, bool bParam2)
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

int func_149()
{
	return -1;
}

int func_150(int iParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x3DE306309922F8D1(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
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

var func_152()
{
	return Global_2448756.f_16;
}

bool func_153(int iParam0)
{
	return iParam0 == 51;
}

var func_154()
{
	return Global_2448756.f_15;
}

bool func_155()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_156(int iParam0)
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

void func_157(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x052830EE89C97404(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0xAB2EAB7DC12EC718(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), vParam1, -1, iVar2, iVar3);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_158(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (func_162(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_161(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_161(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_162(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_143(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (!func_162(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_161(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_161(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_162(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (!func_162(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_161(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_161(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_162(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (func_160(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_159(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_159(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_160(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_143(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_146(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_163();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_159(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_146(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_146(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				unk_0x052830EE89C97404(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_146(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_162(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_146(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				unk_0x052830EE89C97404(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_163()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

int func_164(bool bParam0)
{
	if (bLocal_215 || iLocal_214)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_216)
		{
			return 0;
		}
	}
	return 1;
}

bool func_165(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_166()
{
	Global_14732 = 0;
	func_29();
}

int func_167()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	}
	if (unk_0x765F6FEEFF39224F(iLocal_816) && !unk_0xD62C4419A41F106A(iLocal_816, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_816, true) };
	}
	if (vdist2(vVar0, vVar1) > 2500f)
	{
		if (!bLocal_802)
		{
			func_168("TOW_TUT_RETONYA", 7500, 1);
			bLocal_802 = true;
			if (!unk_0xE38E3CF1625A4145(iLocal_175))
			{
				if (!unk_0xD62C4419A41F106A(iLocal_816, 0))
				{
					iLocal_175 = unk_0x8848A15CBDADDC60(iLocal_816);
					unk_0xB9E84A421C105943(iLocal_175, 3);
					unk_0xCE5C49921A521962(iLocal_175, 0.5f);
				}
			}
			if (unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_8))
			{
				unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_8));
			}
		}
	}
	else if (bLocal_802)
	{
		bLocal_802 = false;
		if (unk_0xE38E3CF1625A4145(iLocal_175))
		{
			unk_0x1ABDB383C83A336A(&iLocal_175);
		}
		if (!unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_8))
		{
			Local_824[0 /*20*/].f_8 = unk_0x2C0ED4741A007C6A(vLocal_468[0 /*3*/]);
			if (iLocal_216)
			{
				unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_8, 5);
				unk_0x1C316779E36C1967(Local_824[0 /*20*/].f_8, true);
				unk_0x5010BC506444793E(Local_824[0 /*20*/].f_8, 5);
			}
			else
			{
				unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_8, 3);
				unk_0x1C316779E36C1967(Local_824[0 /*20*/].f_8, true);
				unk_0x5010BC506444793E(Local_824[0 /*20*/].f_8, 3);
			}
		}
	}
	if (vdist2(vVar0, vVar1) > 22500f)
	{
		if (bLocal_802)
		{
			return 1;
		}
	}
	return 0;
}

void func_168(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 0);
}

int func_169(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (!func_176(*uParam2, 1))
		{
			if (func_175(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_176(*uParam2, 2))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_176(*uParam2, 4))
		{
			if (func_173(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_176(*uParam2, 8))
		{
			if (func_172(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_176(*uParam2, 128);
		if (bParam4)
		{
			if (func_170(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_176(*uParam2, 16))
		{
			if (func_170(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (iParam7 && unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_145)
		{
			iLocal_146 = unk_0xE80842D7B53F8525(iParam0);
			bLocal_145 = true;
		}
		iLocal_147 = unk_0xE80842D7B53F8525(iParam0);
		iLocal_148 = (iLocal_146 - iLocal_147);
		iVar0 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_145)
		{
			if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
			{
				if (IntToFloat(iLocal_148) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0x2E9A4AE2A5B4D8E8(iParam0))
			{
				if (unk_0x457C8D55A1BB6B51(iParam0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x18FB647D79B09657(iParam0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16BA85002E7063C6(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x162E5B814E5F91B3(iParam0))
		{
			return 1;
		}
	}
	if (func_171(unk_0x33CD235DF1E6A94E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3AF2B3B68DD52355(iParam0) && func_111(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), unk_0xF2C96862595654B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iParam0))
		{
			return 1;
		}
		if (!unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (vdist(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0xFBB1F99A825CAB09(iParam1, true)) < 2.5f)
			{
				if (unk_0x910FF514D7BC5674(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_172(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9ED464AAA493C8EF(iParam0, 4))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0) && !unk_0xB15E06E3E9C9AEA5(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	if (unk_0x416C37C19CCE0077(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xEA8CEFB1F41E5992(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9ED464AAA493C8EF(iParam0, 2))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x22B02EC53152632C(iParam1), 0))
			{
				iVar1 = unk_0xF2C96862595654B4(unk_0x22B02EC53152632C(iParam1), 0);
			}
			if (unk_0x105CB7A75E93DC77(iParam0) || func_174(iVar1))
			{
				if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x34DB0AC28A1FDE20((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0) != 0)
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_112(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 40f)
						{
							if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar1))
							{
								if ((unk_0x680558231C80291D(iVar1) && unk_0xEAE1362B9F5C7B18(iVar1) == iParam0) || (unk_0x068481DAF84B9654(iVar1) && unk_0x22B02EC53152632C(iVar1) == unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0)))
								{
									if ((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && unk_0xF1CDE9FD207C4CD8(0, 24)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF1CDE9FD207C4CD8(0, 69)))
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
	}
	return 0;
}

int func_175(int iParam0, var uParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				if (unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 90f))
				{
					if (func_111(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xE3903F59E2F22150();
						}
						else if ((unk_0xE3903F59E2F22150() - uParam1->f_1) > uParam1->f_3)
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

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (unk_0x765F6FEEFF39224F((*uParam4)[iVar0]))
		{
			if (!unk_0xD62C4419A41F106A((*uParam4)[iVar0], 0) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (func_169((*uParam4)[iVar0], 0, &uLocal_162, &iLocal_169, 0, 1, 0, 1, 1))
				{
					unk_0xECCD4FDA45197F97((*uParam4)[iVar0], unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_116(iParam1, iParam3, &iLocal_449, 20, 70f, 65f, 0))
			{
				iLocal_449 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (unk_0x765F6FEEFF39224F(iParam2))
			{
				if (!unk_0xD62C4419A41F106A(iParam1, 0) && !unk_0xD62C4419A41F106A(iParam2, 0))
				{
					unk_0x21D56A8927F5A92A(iParam2, iParam1, 50f, 786469);
					unk_0x897EF720254BBEA3(iParam2, true);
					unk_0x1F45B4626AC4A4C0(&iParam2);
					unk_0x65F544B458249682(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_216)
			{
				func_53(&iLocal_397);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (unk_0x765F6FEEFF39224F((*uParam4)[iVar0]))
				{
					if (!unk_0xD62C4419A41F106A((*uParam4)[iVar0], 0))
					{
						if (func_111((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_219 = iVar0;
							iLocal_219 = iLocal_219;
							func_53(&iLocal_397);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_394[func_250() /*28*/].f_17))
			{
				func_178(iLocal_395, Local_394[func_250() /*28*/].f_17, Local_394[func_250() /*28*/].f_20);
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_251(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_165(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!unk_0xD62C4419A41F106A((*uParam4)[iVar0], 0))
				{
					unk_0x99414FB2D30425C1(&iLocal_171);
					unk_0x108754262311D34F(0, sParam6, (*sParam7)[iVar0], 4f, -4f, unk_0x9EC3B269A34A2BEE(10000, 20000), 0, 0, 0, 0, 0);
					unk_0xBD4591245C650283(0, 1193033728, 0);
					unk_0xC734F59A13D39AEF(iLocal_171);
					unk_0x13A2D602CD10CBAC((*uParam4)[iVar0], iLocal_171);
					unk_0xA7A57E7757ED035E(&iLocal_171);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x1BCDA92AD0A7835B(joaat("tonya5")) == 1)
			{
				if (!iLocal_205)
				{
					func_251(&uLocal_227, 3, *uParam8, "TONYA", 0, 1);
					if (func_165(&uLocal_227, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_205 = 1;
					}
				}
				if (!iLocal_217)
				{
					if (!unk_0xD62C4419A41F106A(iParam3, 0) && !unk_0xD62C4419A41F106A(*uParam10, 0))
					{
						if (!unk_0x221C953018491A32(iParam3, *uParam10))
						{
							if (!func_7(&iLocal_412))
							{
								func_257(&iLocal_412);
							}
							else if (func_4(&iLocal_412) > 20f)
							{
								if (func_165(&uLocal_227, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_217 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_178(int iParam0, vector3 vParam1, vector3 vParam2)
{
	unk_0xF1CFA0046BB67893(iParam0, 0);
	unk_0xBD881F1B7ECAD975();
	unk_0x47B5CF91AC5D5FFA(vParam1, vParam2, 0);
}

int func_179(var uParam0, var uParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, float fParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	vVar3 = { *(uParam0[0 /*3*/]) };
	vVar3.z = (vVar3.z + 1f);
	if (unk_0x8C1596BAD35D957A(vVar3, &uVar0, 0, 0) || func_9(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_181(uParam1);
		unk_0x9C47E5CDFB45F474(vParam2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam9)
		{
			if (fParam6 == -1f)
			{
				fParam6 = func_180(*(uParam0[iVar2 /*3*/]), vParam2);
			}
			else
			{
				fParam6 = (fParam6 + 180f);
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("tonya4")) == 1)
			{
				iVar1 = unk_0x9BA5CF280376EEA4(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
				unk_0x93AA93DA1B137032(iVar1, 0, 0, 1, 0);
				unk_0x93AA93DA1B137032(iVar1, 2, 0, 0, 0);
				unk_0x93AA93DA1B137032(iVar1, 3, 0, 2, 0);
				unk_0x93AA93DA1B137032(iVar1, 4, 1, 2, 0);
				unk_0x93AA93DA1B137032(iVar1, 8, 0, 0, 0);
				unk_0x93AA93DA1B137032(iVar1, 10, 1, 1, 0);
				unk_0x71CA80D41E1338B4(joaat("a_m_m_tourist_01"));
			}
			else if (unk_0x1BCDA92AD0A7835B(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = unk_0x9BA5CF280376EEA4(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
					unk_0x71CA80D41E1338B4(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = unk_0x9BA5CF280376EEA4(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
					unk_0x71CA80D41E1338B4(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = unk_0x9BA5CF280376EEA4(4, (*uParam5)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam6, 1, true);
			}
			unk_0x43D47AD82DA3C6EC(iVar1, true, 1);
			fParam6 = -1f;
			if (iParam9 > 1)
			{
				(*uParam4)[iVar2] = iVar1;
			}
			else
			{
				*uParam3 = iVar1;
			}
			cParam7 = cParam7;
			(*sParam8)[iVar2] = (*sParam8)[iVar2];
			unk_0x4A852F02088ECC9D(iVar1, true);
			unk_0x5FEE418CE11E6DDE(iVar1, 42, true);
			unk_0x511559F67646F1C0(iVar1, "move_m@JOG@", 1048576000);
			unk_0x41E36A540F8F323F(iVar1, 109, true);
			if (iLocal_170 == 3)
			{
				unk_0xA7A57E7757ED035E(&iVar4);
				unk_0x99414FB2D30425C1(&iVar4);
				unk_0x108754262311D34F(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), -1);
				unk_0xC734F59A13D39AEF(iVar4);
				if (!unk_0xD62C4419A41F106A(iVar1, 0))
				{
					unk_0x13A2D602CD10CBAC(iVar1, iVar4);
				}
				unk_0xA7A57E7757ED035E(&iVar4);
			}
			iVar2++;
		}
		bLocal_190 = true;
		return 1;
	}
	else if (func_9(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}

float func_180(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_181(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_438[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_438[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_438[iVar0 /*18*/].f_8 = { func_182(unk_0x9562E33C057F7589(0f, 1f), unk_0x9562E33C057F7589(0f, 1f), 0f) };
		}
		else
		{
			Local_438[iVar0 /*18*/].f_8 = { func_182(0.5f, 1f, 0f) };
		}
		Local_438[iVar0 /*18*/].f_11 = 2f;
		Local_438[iVar0 /*18*/].f_12 = 1f;
		Local_438[iVar0 /*18*/].f_13 = 1f;
		Local_438[iVar0 /*18*/].f_14 = -1f;
		Local_438[iVar0 /*18*/].f_15 = 0.1f;
		Local_438[iVar0 /*18*/].f_17 = 0;
		Local_438[iVar0 /*18*/].f_1 = 1110;
		Local_438[iVar0 /*18*/] = unk_0x8B096ED4BB378AA7(Local_438[iVar0 /*18*/].f_1, Local_438[iVar0 /*18*/].f_2, Local_438[iVar0 /*18*/].f_5, Local_438[iVar0 /*18*/].f_8, Local_438[iVar0 /*18*/].f_11, Local_438[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_182(vector3 vParam0)
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

int func_183()
{
	func_186();
	switch (iLocal_911)
	{
		case 0:
			func_251(&Local_396, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
			func_251(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
			unk_0x4A852F02088ECC9D(Local_824[0 /*20*/], true);
			iLocal_843 = unk_0x9EC3B269A34A2BEE(35, 80);
			iLocal_911 = 1;
			break;
		
		case 1:
			unk_0x99414FB2D30425C1(&iLocal_171);
			unk_0x108754262311D34F(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(iLocal_171);
			unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
			unk_0xA7A57E7757ED035E(&iLocal_171);
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 40f || Local_822.f_1 > 0)
			{
				if (iLocal_170 == 1)
				{
					if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
					{
						func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
						func_165(&Local_396, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
					else if (Global_106565.f_19967.f_5 == 2)
					{
						func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
						func_165(&Local_396, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_911 = 2;
					}
				}
			}
			else if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843 + 10))
			{
				unk_0x108754262311D34F(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_911 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_393[iLocal_450 /*23*/].f_13))
			{
				Local_393[iLocal_450 /*23*/].f_13.f_2 = 45f;
				Local_393[iLocal_450 /*23*/].f_16.f_2 = -45f;
				if (!unk_0xD4B4F68F3449CBEC(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, 0, true, 0))
				{
					func_115(&iLocal_444);
					iLocal_781 = 1;
					iLocal_788 = 1;
					bLocal_177 = true;
					if (unk_0xF0D230FB550CD6EB(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x07C339D4328CA16C(0, 0, 0);
						unk_0x108754262311D34F(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843 + 15))
			{
				if (Global_106565.f_19967.f_5 == 0 || Global_106565.f_19967.f_5 == 1)
				{
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWTRAINF", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_106565.f_19967.f_5 == 2)
				{
					func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_115(&iLocal_444);
				unk_0xC4A347124F39D998(Local_824[0 /*20*/], Local_824[0 /*20*/].f_7, -1, 2, 2);
				settimerb(0);
				iLocal_911 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < IntToFloat(iLocal_843))
			{
				if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
				{
					if (iLocal_842 == 1)
					{
						func_185(&Local_822);
					}
					iLocal_781 = 1;
					if (unk_0xF0D230FB550CD6EB(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x07C339D4328CA16C(0, 0, 0);
						unk_0x7B7A3E5CC3FBE978(0, unk_0xCD1EDCB38767B47C(Local_393[iLocal_450 /*23*/].f_1, Local_393[iLocal_450 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), -1);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x33F6BE48E356DA27(Local_824[0 /*20*/], 64, false);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
						iLocal_911 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_910 == 8 && iLocal_216) || func_184())
			{
				settimerb(3000);
				iLocal_911 = 5;
			}
			break;
		
		case 5:
			iLocal_787 = 1;
			if (timerb() > 3000)
			{
				if (func_109(&iLocal_908, 0, "TOW_TRAIN1"))
				{
					iLocal_911 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_184()
{
	if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
	{
		if (bLocal_177)
		{
			switch (iLocal_855)
			{
				case 0:
					if (unk_0x24CA7139A01083BE(Local_824[0 /*20*/]) == 1)
					{
						iLocal_855 = 1;
					}
					break;
				
				case 1:
					if (!unk_0x1CE8F0A08E65CA6A(Local_824[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_855 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_185(int iParam0)
{
	iParam0->f_1 = 0;
	unk_0x2F8A4DF7D0DFF0A8(*iParam0, 0);
	unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
}

void func_186()
{
	float fVar0;
	
	if (iLocal_781 || ((!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0)) && !unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0)))
	{
		if (iLocal_444 != -1)
		{
			unk_0xCBE6AF58552C63B2(iLocal_444);
			unk_0x44D426446FAF55FB(iLocal_444);
			iLocal_444 = -1;
			return;
		}
	}
	if (!iLocal_772)
	{
		iLocal_444 = unk_0x8CCC0A0504C52531();
		iLocal_772 = 1;
	}
	if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
	{
		if (unk_0x1CE8F0A08E65CA6A(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = unk_0x204DEACC5BECF723(Local_824[0 /*20*/], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_771)
				{
					unk_0xE9739440E5BF08EE(iLocal_444, "TOWING_ENGINE_TURNING_MASTER", Local_824[0 /*20*/].f_6, 0, false, 0);
					iLocal_771 = 1;
				}
			}
			else
			{
				unk_0xCBE6AF58552C63B2(iLocal_444);
				iLocal_771 = 0;
			}
		}
	}
}

void func_187()
{
	int iVar0;
	
	func_189();
	unk_0xEDF90B96BED57BCE(1);
	unk_0xB073DB452891DC0B(2, true);
	if (unk_0x11AE7F6A404414C9(iLocal_454))
	{
		unk_0x83A1D480DB0B52CC(&iLocal_454);
	}
	if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_900, 1);
		unk_0xF0E2D155B834E176(iLocal_900, false);
	}
	unk_0x55A131BBB37B58A1(iLocal_850);
	unk_0x55A131BBB37B58A1(iLocal_851);
	unk_0xF1CFA0046BB67893(iLocal_903, 0);
	unk_0xF1CFA0046BB67893(iLocal_904, 0);
	unk_0x5856B9BF2B4E98C4(vLocal_862 - Vector(15f, 15f, 15f), vLocal_862 + Vector(15f, 15f, 15f), true, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0x55A131BBB37B58A1(Local_824[iVar0 /*20*/].f_17);
		unk_0x55A131BBB37B58A1(Local_824[iVar0 /*20*/].f_18);
		unk_0x55A131BBB37B58A1(Local_824[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!func_11(Local_394[func_250() /*28*/].f_17))
	{
		func_178(iLocal_395, Local_394[func_250() /*28*/].f_17, Local_394[func_250() /*28*/].f_20);
	}
	unk_0x65F544B458249682(&(Local_824[0 /*20*/].f_6));
	if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
	{
		unk_0x1F45B4626AC4A4C0(&(Local_824[0 /*20*/]));
		if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/]))
		{
			if (unk_0xE214B9FCEDF6364A(Local_824[0 /*20*/]))
			{
				unk_0x5D94F4D6FE7DA516(Local_824[0 /*20*/]);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_815))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_815, 0))
		{
			unk_0x1F45B4626AC4A4C0(&iLocal_815);
		}
	}
	if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
	{
		unk_0x0D21E1FDE062ED99(iLocal_900, true, 1);
		unk_0x65F544B458249682(&iLocal_900);
	}
	if (iLocal_797)
	{
		unk_0x5856B9BF2B4E98C4(vLocal_470, vLocal_471, true, 1);
	}
	if (iLocal_794 && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_7, 0))
	{
		unk_0xA1697B947A1613C0(Local_824[0 /*20*/].f_7, true);
		unk_0x6DC4B47C71CD89E9(&(Local_824[0 /*20*/].f_7), 0);
		unk_0x3F6A41F0B145E78C(1);
		func_122(0, 1);
		func_122(1, 0);
		func_122(2, 0);
		func_122(3, 1);
		func_122(4, 0);
		func_122(5, 0);
		func_122(6, 0);
		func_122(7, 0);
		func_122(8, 0);
		func_122(9, 0);
		func_122(10, 0);
		func_122(11, 0);
	}
	func_115(&iLocal_442);
	func_115(&iLocal_443);
	func_188(&uLocal_918);
	func_115(&iLocal_444);
	func_139(&uLocal_149, 0, 0);
	if (unk_0x117DAF3BF7232886(Local_822))
	{
		func_185(&Local_822);
	}
	unk_0x4B06B5746CBEC99F(1f);
	unk_0x8C4EA5F6857553AE(joaat("towtruck"), false);
	unk_0x5894DC159447E10A();
}

void func_188(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x91F3E4311D34B364((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_189()
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

int func_190()
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0) && !unk_0xD62C4419A41F106A(iLocal_900, 0))
	{
		if (unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], iLocal_900, 0))
		{
			if (unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_10))
			{
				unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_10));
				func_115(&iLocal_444);
			}
		}
		else if (!unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
		{
			func_115(&iLocal_444);
		}
	}
	switch (iLocal_910)
	{
		case 0:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 100f)
			{
				Local_824[0 /*20*/].f_7 = unk_0xEB5D8A701BA05E99(6, Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_5);
				if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_7))
				{
					Local_824[0 /*20*/].f_10 = unk_0x8848A15CBDADDC60(Local_824[0 /*20*/].f_7);
				}
				iLocal_815 = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, true);
				unk_0x4A852F02088ECC9D(iLocal_815, true);
				if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_7, 0))
				{
					unk_0xC8F2CB753B5E9422(Local_824[0 /*20*/].f_7, 0f);
				}
				func_108("TOW_OBJ_05", 7500, 1);
				settimera(0);
				func_193("CROSSING_BELL", &iLocal_445, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_910 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_393[iLocal_450 /*23*/].f_1, 1) < 80f || timera() > 10000)
			{
				if (!unk_0x7C71681384076318("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0xDEFB5E2E5CBD460A("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_7, 0))
			{
				unk_0xC8F2CB753B5E9422(Local_824[0 /*20*/].f_7, 26f);
				unk_0x3231F10FD5AE3045(Local_824[0 /*20*/].f_7, 22f);
			}
			iLocal_910 = 3;
			break;
		
		case 3:
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_7, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
			{
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 175f)
				{
					func_192(Local_824[0 /*20*/].f_7);
					func_193("TOWING_TRAIN_BRAKES_MASTER", &iLocal_443, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					func_191(&uLocal_918, Local_824[0 /*20*/].f_7);
					func_193("TOWING_TRAIN_HORN_MASTER", &iLocal_442, 1, Local_824[0 /*20*/].f_7, 0, 0, 0, 0);
					iLocal_910 = 4;
				}
			}
			else
			{
				iLocal_910 = 8;
			}
			break;
		
		case 4:
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_7, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
			{
				func_192(Local_824[0 /*20*/].f_7);
				if (!unk_0xD4B4F68F3449CBEC(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, 0, true, 0))
				{
					func_188(&uLocal_918);
				}
				vVar0 = { unk_0xFBB1F99A825CAB09(Local_824[0 /*20*/].f_7, true) };
				if (func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) < 3f)
				{
					iLocal_768 = 1;
				}
				if (unk_0x4ED4D1D8B2023FD8(Local_824[0 /*20*/].f_7, Local_824[0 /*20*/].f_6))
				{
					if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0x2E4A13D268041E72(iLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0x87D8DEABF0FEFAE6(Local_824[0 /*20*/].f_6, 1, 0);
					iLocal_910 = 6;
				}
				else if (func_10(Local_824[0 /*20*/].f_6, vVar0, 1) < 10f && unk_0xD4B4F68F3449CBEC(Local_824[0 /*20*/].f_6, Local_393[iLocal_450 /*23*/].f_13, Local_393[iLocal_450 /*23*/].f_16, Local_393[iLocal_450 /*23*/].f_19, 0, true, 0))
				{
					iLocal_768 = 1;
					if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
						{
							unk_0x2E4A13D268041E72(iLocal_900, Local_824[0 /*20*/].f_6);
						}
					}
					unk_0x87D8DEABF0FEFAE6(Local_824[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_768 && func_10(Local_824[0 /*20*/].f_7, Local_393[iLocal_450 /*23*/].f_1, 1) > 4f)
				{
					iLocal_910 = 6;
				}
			}
			else
			{
				iLocal_910 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_216)
			{
				func_108("TOWT_OBJ_03G", 7500, 1);
				if (unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_10))
				{
					unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_10));
				}
			}
			unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_10));
			func_115(&iLocal_442);
			func_115(&iLocal_443);
			func_188(&uLocal_918);
			func_115(&iLocal_444);
			func_115(&iLocal_445);
			iLocal_910 = 7;
			break;
		
		case 7:
			if (!func_41())
			{
				if (!iLocal_216)
				{
					func_108("TOWT_OBJ_03G", 7500, 1);
				}
				if (unk_0x7C71681384076318("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					unk_0x7CED302277C0F3D3("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_910 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_191(var uParam0, int iParam1)
{
	(*uParam0)[0] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = unk_0x36F0667378D07B9C("scr_ojtt_train_sparks", iParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_192(int iParam0)
{
	float fVar0;
	
	if (!func_7(&iLocal_439))
	{
		func_257(&iLocal_439);
	}
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			fVar0 = unk_0x8BB475EA09C9A0EB(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&iLocal_439, 0.15f))
	{
		fLocal_446 = (fVar0 - 0.35f);
		if (fLocal_446 < 8f)
		{
			fLocal_446 = 8f;
		}
		func_53(&iLocal_439);
		unk_0xC8F2CB753B5E9422(iParam0, fLocal_446);
		unk_0x3231F10FD5AE3045(iParam0, fLocal_446);
	}
	return 1;
}

void func_193(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	func_115(iParam1);
	if (bParam2)
	{
		*iParam1 = unk_0x8CCC0A0504C52531();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		unk_0xE9739440E5BF08EE(*iParam1, sParam0, iParam3, iParam7, false, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		unk_0xEC95D37A139F1D5C(*iParam1, sParam0, fParam4, fParam5, fParam6, iParam7, 0, 0, 0);
	}
	else
	{
		unk_0x0F8EAEEC97DDBCB3(*iParam1, sParam0, iParam7, true);
	}
}

int func_194()
{
	int iVar0;
	vector3 vVar1;
	
	func_204();
	switch (iLocal_909)
	{
		case 0:
			if (bLocal_799)
			{
				if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					Local_824[0 /*20*/] = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], 1, 1, true);
					unk_0x4A852F02088ECC9D(Local_824[0 /*20*/], true);
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					Local_824[0 /*20*/].f_1 = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, iLocal_47, 2, 1, true);
					unk_0x4A852F02088ECC9D(Local_824[0 /*20*/].f_1, true);
					unk_0x5FEE418CE11E6DDE(Local_824[0 /*20*/].f_1, 42, true);
					func_251(&Local_396, 6, Local_824[0 /*20*/].f_1, "TOWSEXPRISSYGUY", 0, 1);
					unk_0x108754262311D34F(Local_824[0 /*20*/], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x108754262311D34F(Local_824[0 /*20*/].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 10);
					}
					bLocal_190 = true;
					func_251(&Local_396, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_800)
			{
				if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					Local_824[0 /*20*/] = unk_0xE196503B36B6194B(Local_824[0 /*20*/].f_6, 26, uLocal_820[0], 0, 1, true);
					unk_0x4A852F02088ECC9D(Local_824[0 /*20*/], true);
					unk_0x5FEE418CE11E6DDE(Local_824[0 /*20*/], 42, true);
					func_251(&Local_396, 2, Local_824[0 /*20*/], sLocal_467, 0, 1);
					unk_0x108754262311D34F(Local_824[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_190 = true;
				}
			}
			else if (func_203())
			{
				bLocal_798 = true;
			}
			else
			{
				bLocal_798 = false;
			}
			iLocal_909 = 1;
			break;
		
		case 1:
			if (bLocal_799)
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(Local_824[0 /*20*/].f_6, true), 15f, 15f, 15f, false, true, 0))
					{
						if (!iLocal_927)
						{
							if (func_165(&Local_396, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_927 = 1;
							}
						}
					}
				}
			}
			if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
			{
				if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6) || func_202(iLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
				{
					if (func_202(iLocal_900, Local_824[0 /*20*/].f_6, !(bLocal_799 || bLocal_800)))
					{
						bLocal_813 = true;
					}
					if (!bLocal_800)
					{
						func_201(&iLocal_894, 1f);
					}
					else
					{
						func_257(&iLocal_894);
					}
				}
			}
			if (func_7(&iLocal_894) && func_4(&iLocal_894) > 1f)
			{
				if (bLocal_799 && func_7(&iLocal_894))
				{
					if (func_41())
					{
						func_166();
					}
					iLocal_810 = 0;
					if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x07C339D4328CA16C(0, 750, 0);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0x108754262311D34F(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x07C339D4328CA16C(0, 0, 0);
						unk_0x11C4AF4137F2A4B5(0, Local_824[0 /*20*/], 0);
						unk_0x108754262311D34F(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						unk_0xECCD4FDA45197F97(0, Local_824[0 /*20*/], 1000f, -1, 0, 0);
						unk_0xBD4591245C650283(0, 1193033728, 0);
						unk_0xC734F59A13D39AEF(iLocal_171);
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_1, 0))
						{
							unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/].f_1, iLocal_171);
						}
						unk_0xA7A57E7757ED035E(&iLocal_171);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_800)
				{
					if ((Global_106565.f_19967.f_4 % 2) == 0)
					{
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
						{
							unk_0x99414FB2D30425C1(&iLocal_171);
							unk_0x07C339D4328CA16C(0, 0, 0);
							unk_0x3C0F6044C54799A8(0, iLocal_900, 20000, 9f, 1f, 1073741824, 0);
							unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
							unk_0x108754262311D34F(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							unk_0xBD4591245C650283(0, 1193033728, 0);
							unk_0xC734F59A13D39AEF(iLocal_171);
							unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
							unk_0xA7A57E7757ED035E(&iLocal_171);
						}
						func_251(&Local_396, 2, Local_824[0 /*20*/], "TOWABDBITCHM", 0, 1);
						func_165(&Local_396, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
						{
							func_200(Local_824[0 /*20*/]);
							unk_0x28F648743D7DE312(Local_824[0 /*20*/], 0, false);
							unk_0x28F648743D7DE312(Local_824[0 /*20*/], 1, false);
							unk_0x99414FB2D30425C1(&iLocal_171);
							unk_0x07C339D4328CA16C(0, 0, 0);
							unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(iLocal_171);
							unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
							unk_0xA7A57E7757ED035E(&iLocal_171);
							if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/]))
							{
								iLocal_818 = unk_0x8848A15CBDADDC60(Local_824[0 /*20*/]);
								unk_0xB9E84A421C105943(iLocal_818, 1);
								unk_0xCE5C49921A521962(iLocal_818, 0.7f);
								func_199(Local_824[0 /*20*/], iLocal_818, 1);
							}
							bLocal_798 = true;
						}
						func_165(&Local_396, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_909 = 2;
				}
				else if (bLocal_798)
				{
					Local_824[0 /*20*/] = unk_0x9BA5CF280376EEA4(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, 1, true);
					unk_0x4A852F02088ECC9D(Local_824[0 /*20*/], true);
					unk_0x5FEE418CE11E6DDE(Local_824[0 /*20*/], 42, true);
					bLocal_190 = true;
					sLocal_464 = "TOW_PED_ANGR";
					bLocal_190 = false;
					if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x3C0F6044C54799A8(0, iLocal_900, 20000, 15f, 3f, 1073741824, 0);
						unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
					}
					iLocal_909 = 3;
				}
				else
				{
					Local_824[0 /*20*/] = unk_0x9BA5CF280376EEA4(4, uLocal_820[0], Local_393[iLocal_450 /*23*/].f_6, Local_393[iLocal_450 /*23*/].f_9, 1, true);
					unk_0x4A852F02088ECC9D(Local_824[0 /*20*/], true);
					unk_0x5FEE418CE11E6DDE(Local_824[0 /*20*/], 42, true);
					unk_0x43D47AD82DA3C6EC(Local_824[0 /*20*/], true, 1);
					bLocal_190 = true;
					sLocal_464 = "TOW_ILLEG1";
					if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x903D86A54A398682(0, unk_0x33CD235DF1E6A94E(), 20000, 12f, 0f, 3f, 0);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
					}
					iLocal_909 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_799)
			{
				if (!bLocal_807)
				{
					if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6) || bLocal_813)
					{
						if (!unk_0xC4B7D5901EDA35B5())
						{
							if (!func_41())
							{
								if (func_165(&Local_396, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_807 = true;
								}
							}
						}
					}
				}
			}
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
			{
				if (!unk_0xF0D230FB550CD6EB(Local_824[0 /*20*/], 0))
				{
					if (bLocal_800)
					{
						if (!func_41())
						{
							if (unk_0xD76D6BCC14B95CE1(Local_824[0 /*20*/], 242628503) == 1)
							{
								if (unk_0x24CA7139A01083BE(Local_824[0 /*20*/]) == 2)
								{
									if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
									{
										vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
									}
									if (vdist2(vVar1, unk_0xFBB1F99A825CAB09(Local_824[0 /*20*/], true)) < 400f)
									{
										if ((Global_106565.f_19967.f_4 % 2) == 0)
										{
											func_165(&Local_396, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_165(&Local_396, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_909 = 8;
								}
							}
						}
					}
					else if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						if (func_198() || (!unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6) && !bLocal_813))
						{
							func_166();
							iLocal_909 = 5;
						}
						else if (!unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6) && bLocal_813)
						{
							if (bLocal_807)
							{
								if (!func_41())
								{
									iLocal_909 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
			{
				if (func_112(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 1) < 12f)
				{
					unk_0xED68CDDDE25A144E(Local_824[0 /*20*/]);
					if (bLocal_798)
					{
						unk_0x277716E9E7CC0692(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 0, 16);
					}
					else if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
					{
						unk_0x99414FB2D30425C1(&iLocal_171);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0x108754262311D34F(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_171);
						unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iLocal_171);
						unk_0xA7A57E7757ED035E(&iLocal_171);
					}
					iLocal_783 = 1;
					if (bLocal_799)
					{
						iLocal_909 = 5;
					}
					else
					{
						iLocal_909 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/]))
			{
				Local_824[0 /*20*/].f_9 = unk_0x8848A15CBDADDC60(Local_824[0 /*20*/]);
				if (bLocal_798)
				{
					unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_9, 1);
					unk_0xCE5C49921A521962(Local_824[0 /*20*/].f_9, 0.7f);
				}
				else
				{
					unk_0xB9E84A421C105943(Local_824[0 /*20*/].f_9, 3);
					unk_0xCE5C49921A521962(Local_824[0 /*20*/].f_9, 0.7f);
				}
			}
			if (bLocal_798)
			{
				if (iLocal_170 == 0)
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
					func_197(Local_396, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_251(&Local_396, 2, Local_824[0 /*20*/], "TOWABDATTACKM", 0, 1);
					func_197(Local_396, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
				func_251(&Local_396, 3, Local_824[0 /*20*/], sLocal_467, 0, 1);
				func_197(Local_396, "TOWAUD", sLocal_464, 0);
			}
			bLocal_791 = true;
			settimera(0);
			if (bLocal_798)
			{
				func_53(&iLocal_888);
				iLocal_909 = 6;
			}
			else
			{
				iLocal_909 = 5;
			}
			break;
		
		case 5:
			if (!func_41())
			{
				if (bLocal_799)
				{
					settimerb(0);
				}
				func_53(&iLocal_888);
				if ((!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0)) && !unk_0xD62C4419A41F106A(iLocal_900, 0))
				{
					if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						unk_0x38CD0CF7DF213A81(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
						{
							unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 1);
						}
						unk_0xA7A57E7757ED035E(&iVar0);
						unk_0x99414FB2D30425C1(&iVar0);
						unk_0xC838CE9837D0ABAF(0, Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
						unk_0x21D56A8927F5A92A(0, Local_824[0 /*20*/].f_6, 5f, 786597);
						unk_0xC734F59A13D39AEF(iVar0);
						if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
						{
							unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iVar0);
						}
						unk_0xA7A57E7757ED035E(&iVar0);
						bLocal_928 = true;
					}
				}
				iLocal_909 = 6;
			}
			break;
		
		case 6:
			func_195(0);
			if (!bLocal_805)
			{
				if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
				{
					if (!unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
					{
						if (bLocal_799)
						{
							if (timerb() > 8000)
							{
								func_53(&iLocal_888);
								if (!bLocal_928)
								{
									unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 1);
									unk_0xC838CE9837D0ABAF(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
								}
								iLocal_909 = 7;
							}
						}
						else
						{
							func_53(&iLocal_888);
							unk_0xD303E20CB0AE4AD0(Local_824[0 /*20*/].f_6, 1);
							unk_0xC838CE9837D0ABAF(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 20000, -1, 2f, 1, 0);
							iLocal_909 = 7;
						}
					}
					else if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
					{
						if (timerb() > 7000)
						{
							if (!bLocal_798)
							{
								if (unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
								{
									if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
									{
										if (unk_0x8BB475EA09C9A0EB(iLocal_900) < 2f)
										{
											if (unk_0xD76D6BCC14B95CE1(Local_824[0 /*20*/], -258271821) != 1)
											{
												unk_0x21D56A8927F5A92A(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 2f, 786597);
											}
										}
										else
										{
											unk_0xA7A57E7757ED035E(&iVar0);
											unk_0x99414FB2D30425C1(&iVar0);
											unk_0x07C339D4328CA16C(0, 5000, 4096);
											unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
											unk_0xC734F59A13D39AEF(iVar0);
											if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
											{
												unk_0x13A2D602CD10CBAC(Local_824[0 /*20*/], iVar0);
											}
											unk_0xA7A57E7757ED035E(&iVar0);
											iLocal_909 = 7;
										}
									}
								}
								else if (!unk_0xD62C4419A41F106A(iLocal_900, 0))
								{
									if (unk_0x8BB475EA09C9A0EB(iLocal_900) < 5f)
									{
										if (unk_0xD76D6BCC14B95CE1(Local_824[0 /*20*/], -1794415470) != 1)
										{
											if (unk_0x67FFBB75D2430704(Local_824[0 /*20*/].f_6, -1, 0))
											{
												unk_0xC838CE9837D0ABAF(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, -1, -1, 2f, 1, 0);
											}
										}
									}
									else if (unk_0xD76D6BCC14B95CE1(Local_824[0 /*20*/], 1056466932) != 1)
									{
										unk_0x38CD0CF7DF213A81(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_195(1);
			if (unk_0xF0D230FB550CD6EB(Local_824[0 /*20*/], 0) && !unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6))
			{
				if (bLocal_798)
				{
					sLocal_464 = "TOW_PED_ANTH";
				}
				else if (bLocal_799)
				{
					sLocal_464 = "TOW_ILLEG_SE";
				}
				bLocal_804 = true;
				func_165(&Local_396, "TOWAUD", sLocal_464, 9, 0, 0, 0);
				bLocal_791 = false;
				unk_0x21D56A8927F5A92A(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 5f, 786597);
				iLocal_909 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_783 = 0;
			bLocal_791 = false;
			if (unk_0xE38E3CF1625A4145(Local_824[0 /*20*/].f_9))
			{
				unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_195(bool bParam0)
{
	int iVar0;
	float fVar1;
	char* sVar2;
	
	iVar0 = 0;
	fVar1 = func_112(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!unk_0xD62C4419A41F106A(iLocal_900, 0) && !unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
		{
			if (unk_0x221C953018491A32(iLocal_900, Local_824[0 /*20*/].f_6) && !unk_0x10930B9CAD4111C2(Local_824[0 /*20*/], Local_824[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
	{
		if (unk_0x91BBD269506D61D2(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 1) || unk_0x91BBD269506D61D2(unk_0x33CD235DF1E6A94E(), Local_824[0 /*20*/], 1))
		{
			func_53(&iLocal_888);
			unk_0x0D847D71D9E6142E(Local_824[0 /*20*/]);
			unk_0x0D847D71D9E6142E(unk_0x33CD235DF1E6A94E());
		}
	}
	if (unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
	{
		iLocal_909 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&iLocal_888) > 30f && fVar1 > 5f)) || iVar0) || (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6)))
	{
		if (bLocal_798)
		{
			func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_799)
		{
			func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_251(&Local_396, 6, Local_824[0 /*20*/], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_814[0] = Local_824[0 /*20*/];
		uLocal_814[1] = Local_824[0 /*20*/].f_1;
		bLocal_805 = true;
		func_196(Local_396, "TOWAUD", sVar2, &uLocal_814, 0);
		unk_0x1ABDB383C83A336A(&(Local_824[0 /*20*/].f_9));
		if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/], 0))
		{
			unk_0xED68CDDDE25A144E(Local_824[0 /*20*/]);
			unk_0xECCD4FDA45197F97(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
		}
		iLocal_909 = 8;
	}
}

int func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_111((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_165(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_197(struct<165> Param0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xD92171BC6C48DB90(false);
	}
	StringCopy(&cLocal_63, sParam1, 16);
	StringCopy(&cLocal_66, sParam2, 16);
	Local_51 = { Param0 };
}

int func_198()
{
	switch (iLocal_912)
	{
		case 0:
			if (unk_0x24CA7139A01083BE(Local_824[0 /*20*/]) >= 1 && !unk_0xC4B7D5901EDA35B5())
			{
				iLocal_912 = 1;
			}
			break;
		
		case 1:
			if (bLocal_807 && !iLocal_808)
			{
				if (!func_41())
				{
					if (!iLocal_809)
					{
						if (!bLocal_813)
						{
							func_108("TOWT_OBJ_06", 7500, 1);
							iLocal_809 = 1;
						}
					}
					if (iLocal_809 && !unk_0xC4B7D5901EDA35B5())
					{
						if (unk_0xD76D6BCC14B95CE1(Local_824[0 /*20*/], -875674219) != 1)
						{
							unk_0x11C4AF4137F2A4B5(Local_824[0 /*20*/], Local_824[0 /*20*/].f_1, 0);
						}
						iLocal_808 = 1;
						iLocal_912 = 2;
					}
				}
			}
			if (func_111(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0xD92171BC6C48DB90(true);
				return 1;
			}
			break;
		
		case 2:
			if (func_111(Local_824[0 /*20*/], 1) > 20f)
			{
				unk_0xD92171BC6C48DB90(true);
				return 1;
			}
			if (!func_41())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (vLocal_69[iVar0 /*3*/] == iParam0 && !unk_0xE38E3CF1625A4145(vLocal_69[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!unk_0xE38E3CF1625A4145(vLocal_69[iVar0 /*3*/].f_1))
		{
			vLocal_69[iVar0 /*3*/] = iParam0;
			vLocal_69[iVar0 /*3*/].f_1 = iParam1;
			vLocal_69[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_200(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			unk_0x52F5AAAD4824B17E(iParam0, 1);
			unk_0x1E0350F1D7702D6A(iParam0, 1);
			unk_0x28F648743D7DE312(iParam0, 23, false);
			unk_0x34A51926277F67BC(iParam0, 2);
			unk_0x697EBA5CF1A6AB57(iParam0, joaat("weapon_microsmg"), 1000, true, true);
			unk_0x41AAD0031D053A00(iParam0, 500);
		}
	}
}

void func_201(int iParam0, float fParam1)
{
	if (!func_7(iParam0))
	{
		func_54(iParam0, fParam1);
	}
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (unk_0x1578197A616E70FA(unk_0x3EE1295CEFBEFED4()) && func_111(iParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (unk_0x4ED4D1D8B2023FD8(iParam0, iParam1))
	{
		iVar0 = 1;
	}
	if (unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
	{
		iVar0 = 1;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_203()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!iLocal_780)
	{
		if (unk_0x765F6FEEFF39224F(Local_824[0 /*20*/].f_6))
		{
			if (!unk_0xD62C4419A41F106A(Local_824[0 /*20*/].f_6, 0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(Local_824[0 /*20*/].f_6, true) };
			}
		}
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		}
		if (bLocal_799)
		{
			if (vdist2(vVar0, vVar1) < 25f)
			{
				unk_0xD92171BC6C48DB90(true);
				if (!func_41())
				{
					unk_0xC4A347124F39D998(Local_824[0 /*20*/], unk_0x33CD235DF1E6A94E(), 5000, 0, 2);
					func_251(&Local_396, 5, Local_824[0 /*20*/], "TOWSEXMANLYGUY", 0, 1);
					if (func_165(&Local_396, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_780 = 1;
					}
				}
			}
		}
	}
}

int func_205(int iParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		if (!unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (!unk_0xF0D230FB550CD6EB(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&iLocal_184))
	{
		func_53(&iLocal_184);
	}
	if (func_111(iParam0, 0) < 15f)
	{
		fLocal_181 = 0.3f;
		fLocal_182 = 0.5f;
		fLocal_183 = 0.1f;
	}
	else if (func_111(iParam0, 0) < 40f)
	{
		fLocal_181 = 0.6f;
		fLocal_182 = 1f;
		fLocal_183 = 0.2f;
	}
	if (func_3(&iLocal_184, unk_0x9562E33C057F7589(fLocal_181, fLocal_182)))
	{
		func_53(&iLocal_184);
		unk_0x0848C95091F9ECB9(iParam0, 1, 0f, 0f, fLocal_183, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_206()
{
	unk_0x818D1850BE9E44A9();
	func_207();
}

void func_207()
{
	Global_17272.f_134 = 1;
}

int func_208(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16, var uParam17, char* sParam18, var uParam19, bool bParam20, var uParam21)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_447 != 12)
	{
		func_212(Param2, iParam0, iParam1);
	}
	if (!bLocal_215)
	{
		if (iLocal_447 >= 6 && iLocal_447 <= 11)
		{
			if (bParam20)
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, true, true, 0))
					{
					}
				}
			}
		}
		switch (iLocal_447)
		{
			case 0:
				if (func_116(iParam1, iParam0, &iLocal_449, 10, 90f, 100f, 0))
				{
					unk_0x4459178BAF2918E1(iParam1, false);
					func_251(&Local_396, 3, *uParam21, "TONYA", 0, 1);
					func_251(&Local_396, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
					func_165(&Local_396, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_447 = 1;
				}
				break;
			
			case 1:
				if (!func_41())
				{
					func_98("TOW_TUT_03", -1);
					settimera(0);
					iLocal_447 = 2;
				}
				break;
			
			case 2:
				if (iLocal_216)
				{
					unk_0xEDF90B96BED57BCE(1);
					iLocal_447 = 4;
				}
				if (timera() > 5000)
				{
					if (((timera() > 12000 || func_112(iParam0, iParam1, 1) < 15f) && func_112(iParam0, iParam1, 1) < 30f) && !func_41())
					{
						func_165(&Local_396, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_447 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_216)
				{
					if (!func_41() && !func_104("TOW_TUT_03"))
					{
						func_211("TOW_TUT_02");
						iLocal_447 = 4;
					}
				}
				else
				{
					iLocal_447 = 4;
				}
				break;
			
			case 4:
				if (timera() > 5000 || iLocal_216)
				{
					if ((timera() > 12000 || func_112(iParam0, iParam1, 1) < 7.5f) || (iLocal_216 && func_112(iParam0, iParam1, 1) < 30f))
					{
						iLocal_191 = 1;
						iLocal_191 = iLocal_191;
						func_211("TOW_TUT_01");
						iLocal_447 = 5;
					}
				}
				break;
			
			case 5:
				if (timera() > 8000)
				{
					iLocal_447 = 6;
				}
				break;
			
			case 6:
				if ((!func_41() && !unk_0xC4B7D5901EDA35B5()) && timera() > 12000)
				{
					if (!iLocal_208)
					{
						func_98("TOWT_HELP_CR", -1);
						iLocal_208 = 1;
					}
				}
				if (unk_0xD4B4F68F3449CBEC(iParam0, Param2, Param2.f_3, Param2.f_6, 0, false, 0))
				{
					func_165(&Local_396, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (unk_0xE38E3CF1625A4145(*iParam16))
					{
						unk_0x1C316779E36C1967(*iParam16, false);
						unk_0x1ABDB383C83A336A(iParam16);
					}
					StringCopy(sParam18, "TOW_TUT_04A", 64);
					*(uParam17[0 /*3*/]) = { Param2.f_14 };
					fLocal_180 = func_9(Param2.f_14, 0);
					*iParam16 = unk_0x2C0ED4741A007C6A(Param2.f_14);
					settimerb(0);
					iLocal_447 = 7;
				}
				break;
			
			case 7:
				if (!func_41())
				{
					if (timerb() > 6000)
					{
						settimera(0);
						func_108("TOW_TUT_04A", 7500, 1);
						iLocal_447 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_447 = 10;
				}
				if (!func_41())
				{
					if (unk_0xD4B4F68F3449CBEC(iParam0, Param2, Param2.f_3, Param2.f_6, 0, true, 0))
					{
						iLocal_218 = unk_0xE3903F59E2F22150();
						if (bLocal_192)
						{
							unk_0x1C316779E36C1967(*iParam16, false);
							unk_0x1ABDB383C83A336A(iParam16);
							*(uParam17[0 /*3*/]) = { Param2.f_14 };
							fLocal_180 = func_9(Param2.f_14, 0);
							*iParam16 = unk_0x2C0ED4741A007C6A(Param2.f_14);
						}
						if (unk_0xE38E3CF1625A4145(*iParam16))
						{
							unk_0xB9E84A421C105943(*iParam16, 5);
						}
						iLocal_447 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					vVar0 = { Param2.f_7 };
					vVar1 = { Param2.f_10 };
					fVar2 = Param2.f_13;
				}
				else
				{
					vVar0 = { Param2 };
					vVar1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (unk_0xD4B4F68F3449CBEC(iParam1, vVar0, vVar1, fVar2, 0, true, 0))
				{
					func_98("TOWT_HELP_UH", -1);
					func_210();
					if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
					{
						if (unk_0x221C953018491A32(iParam0, iParam1))
						{
							iLocal_447 = 11;
						}
					}
				}
				else
				{
					func_209();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					vVar0 = { Param2.f_7 };
					vVar1 = { Param2.f_10 };
					fVar2 = Param2.f_13;
				}
				else
				{
					vVar0 = { Param2 };
					vVar1 = { Param2.f_3 };
					fVar2 = Param2.f_6;
				}
				if (unk_0xD4B4F68F3449CBEC(iParam1, vVar0, vVar1, fVar2, 0, true, 0))
				{
					func_98("TOWT_HELP_UH", -1);
					func_210();
				}
				if (((unk_0x765F6FEEFF39224F(iParam0) && unk_0x765F6FEEFF39224F(iParam1)) && !unk_0xD62C4419A41F106A(iParam0, 0)) && !unk_0xD62C4419A41F106A(iParam1, 0))
				{
					if (!unk_0x221C953018491A32(iParam0, iParam1))
					{
						unk_0xEDF90B96BED57BCE(1);
						unk_0xD362430CD61A9B08();
						func_139(&uLocal_149, 0, 0);
						iLocal_447 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam20)
		{
			if (((unk_0x765F6FEEFF39224F(iParam0) && unk_0x765F6FEEFF39224F(iParam1)) && !unk_0xD62C4419A41F106A(iParam0, 0)) && !unk_0xD62C4419A41F106A(iParam1, 0))
			{
				if (unk_0x221C953018491A32(iParam0, iParam1) && !bLocal_448)
				{
					if (func_41())
					{
						if (unk_0xFAC8F20FBC764F4D())
						{
							unk_0xEDF90B96BED57BCE(1);
						}
						func_166();
						iLocal_447 = 6;
					}
					else
					{
						func_100(*iParam16);
						settimera(0);
						iLocal_447 = 6;
						func_165(&Local_396, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_448 = true;
					}
				}
			}
			if (!iLocal_210)
			{
				if (bLocal_448)
				{
					if (!func_41())
					{
						unk_0xEDF90B96BED57BCE(1);
						func_108("TOWT_OBJ_06", 7500, 1);
						iLocal_210 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_209()
{
	switch (iLocal_224)
	{
		case 0:
			if (!func_7(&iLocal_409))
			{
				func_257(&iLocal_409);
			}
			else if (func_4(&iLocal_409) > 10f)
			{
				if (func_165(&uLocal_227, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_224 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_41())
			{
				if (func_165(&uLocal_227, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_53(&iLocal_409);
					iLocal_224 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&iLocal_409))
			{
				if (func_4(&iLocal_409) > 15f)
				{
					if (!func_41())
					{
						if (func_165(&uLocal_227, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_224 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_210()
{
	if (!iLocal_207)
	{
		if (!unk_0xC4B7D5901EDA35B5())
		{
			if (!func_41())
			{
				if (func_165(&uLocal_227, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_207 = 1;
				}
			}
		}
	}
}

void func_211(char* sParam0)
{
	settimera(0);
	func_98(sParam0, -1);
}

void func_212(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam14) || !unk_0x765F6FEEFF39224F(iParam15))
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(iParam14, 0) || unk_0xD62C4419A41F106A(iParam15, 0))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		vVar0 = { Param0.f_7 };
		vVar1 = { Param0.f_10 };
		fVar2 = Param0.f_13;
	}
	else
	{
		vVar0 = { Param0 };
		vVar1 = { Param0.f_3 };
		fVar2 = Param0.f_6;
	}
	if (!iLocal_193)
	{
		if (unk_0xD4B4F68F3449CBEC(iParam15, vVar0, vVar1, fVar2, 0, true, 0))
		{
			if (!unk_0xD62C4419A41F106A(iParam14, 0) && !unk_0xD62C4419A41F106A(iParam15, 0))
			{
				if (!unk_0x221C953018491A32(iParam14, iParam15))
				{
					unk_0xEDF90B96BED57BCE(1);
					unk_0xD362430CD61A9B08();
					iLocal_447 = 12;
					iLocal_193 = 1;
				}
			}
		}
	}
}

int func_213(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		iVar0 = (*uParam2 - unk_0xE80842D7B53F8525(iParam1));
	}
	if (fLocal_178 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (!unk_0xD62C4419A41F106A(iParam1, 0))
			{
				if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam1, 0)) || unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (unk_0x765F6FEEFF39224F(iParam1))
				{
					*uParam2 = unk_0xE80842D7B53F8525(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_165(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_165(&Local_396, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_165(&Local_396, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_165(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_165(&Local_396, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_165(&Local_396, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_178 = (fLocal_178 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		*uParam2 = unk_0xE80842D7B53F8525(iParam1);
	}
	return 0;
}

int func_214(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		iVar0 = (*uParam3 - unk_0xE80842D7B53F8525(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (unk_0x765F6FEEFF39224F(iParam1) && unk_0x765F6FEEFF39224F(iParam2))
			{
				if (!unk_0xD62C4419A41F106A(iParam1, 0) && !unk_0xD62C4419A41F106A(iParam2, 0))
				{
					if ((unk_0x4ED4D1D8B2023FD8(iParam1, iParam2) || unk_0x221C953018491A32(iParam2, iParam1)) || unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (unk_0x765F6FEEFF39224F(iParam1))
					{
						*uParam3 = unk_0xE80842D7B53F8525(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_216("TOW_DMG_01", 25, -1);
					func_215(func_21(), 1, 25);
					fLocal_178 = (fLocal_178 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_216("TOW_DMG_01", 75, -1);
					func_215(func_21(), 1, 75);
					fLocal_178 = (fLocal_178 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_98("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		*uParam3 = unk_0xE80842D7B53F8525(iParam1);
	}
	return 1;
}

int func_215(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_59(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

void func_216(char* sParam0, int iParam1, int iParam2)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	unk_0x092150016C06C431(0, 0, true, iParam2);
}

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (unk_0xE38E3CF1625A4145(*iParam1))
		{
			unk_0x1ABDB383C83A336A(iParam1);
		}
		*uParam5 = unk_0xE3903F59E2F22150();
		bLocal_215 = !func_218(iParam0);
		return;
	}
	else if (!unk_0xE38E3CF1625A4145(*iParam1) && bLocal_215)
	{
		*iParam1 = unk_0x8848A15CBDADDC60(*iParam0);
		unk_0xB9E84A421C105943(*iParam1, 3);
		unk_0x1C316779E36C1967(*iParam1, true);
	}
	if (!bParam9)
	{
		if (!bLocal_215)
		{
			if (!func_218(iParam0))
			{
				unk_0xCE6723D95898CCE9();
				*uParam5 = unk_0xE3903F59E2F22150();
				if (bParam13)
				{
					if (iLocal_188)
					{
						func_108("DTRSHRD_03", 7500, 1);
						iLocal_188 = 0;
					}
					if (!unk_0xE38E3CF1625A4145(*iParam1))
					{
						*iParam1 = unk_0x8848A15CBDADDC60(*iParam0);
						unk_0xB9E84A421C105943(*iParam1, 3);
						unk_0x1C316779E36C1967(*iParam1, true);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (unk_0xE38E3CF1625A4145((uParam2[iVar0 /*20*/])->f_8))
					{
						unk_0x1C316779E36C1967((uParam2[iVar0 /*20*/])->f_8, false);
						unk_0x1ABDB383C83A336A(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (unk_0xE38E3CF1625A4145((uParam2[0 /*20*/])->f_9))
				{
					unk_0x1ABDB383C83A336A(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_215 = true;
			}
		}
		else if (func_218(iParam0))
		{
			if (unk_0xE38E3CF1625A4145(*iParam1))
			{
				unk_0x1ABDB383C83A336A(iParam1);
			}
			if (!unk_0xBC2FC12AD0FBF72E((*uParam2)[0 /*20*/]))
			{
				if (!unk_0x10930B9CAD4111C2((*uParam2)[0 /*20*/], *iParam0, 0) && !unk_0x10930B9CAD4111C2((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xE38E3CF1625A4145((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = unk_0x8848A15CBDADDC60((*uParam2)[iVar0 /*20*/]);
						unk_0xB9E84A421C105943((uParam2[0 /*20*/])->f_9, 3);
						unk_0xCE5C49921A521962((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_189)
			{
				func_108(sParam4, 7500, 1);
				iLocal_189 = 0;
			}
			if (!func_11(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!unk_0xE38E3CF1625A4145((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = unk_0x2C0ED4741A007C6A(*(uParam3[0 /*3*/]));
					unk_0x1C316779E36C1967((uParam2[0 /*20*/])->f_8, true);
				}
			}
			else if (bParam7)
			{
				if (!unk_0xD62C4419A41F106A((uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!unk_0xE38E3CF1625A4145((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = unk_0x8848A15CBDADDC60((uParam2[iParam6 /*20*/])->f_6);
						unk_0xB9E84A421C105943((uParam2[iParam6 /*20*/])->f_8, 3);
						unk_0x1C316779E36C1967((uParam2[0 /*20*/])->f_8, true);
					}
				}
				else
				{
					if (iLocal_170 == 3)
					{
						Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!unk_0xE38E3CF1625A4145((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = unk_0x2C0ED4741A007C6A(Local_393[iLocal_450 /*23*/].f_1);
						unk_0xB9E84A421C105943((uParam2[0 /*20*/])->f_8, 3);
						unk_0x1C316779E36C1967((uParam2[0 /*20*/])->f_8, true);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!unk_0xD62C4419A41F106A((uParam2[iVar0 /*20*/])->f_6, 0))
					{
						if (!unk_0xE38E3CF1625A4145((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = unk_0x8848A15CBDADDC60((uParam2[iVar0 /*20*/])->f_6);
							unk_0xB9E84A421C105943((uParam2[iVar0 /*20*/])->f_8, 3);
							unk_0x1C316779E36C1967((uParam2[iVar0 /*20*/])->f_8, true);
						}
					}
					else
					{
						if (iLocal_170 == 3)
						{
							Local_393[iLocal_450 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!unk_0xE38E3CF1625A4145((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = unk_0x2C0ED4741A007C6A(Local_393[iLocal_450 /*23*/].f_1);
							unk_0xB9E84A421C105943((uParam2[0 /*20*/])->f_8, 3);
							unk_0x1C316779E36C1967((uParam2[0 /*20*/])->f_8, true);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_215 = false;
		}
	}
}

int func_218(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0) != *uParam0)
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

void func_219()
{
	int iVar0;
	
	iVar0 = func_21();
	if (iVar0 != 1)
	{
		func_187();
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xE77FA521699F639C() >= (uParam0->f_272 + uParam0->f_273) || unk_0x0E4018692D92041D(Global_93682.f_20, 2)) || unk_0x0E4018692D92041D(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
					{
						func_221(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_221(int iParam0)
{
	func_222(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_222(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_223(*iParam0))
		{
			case 0:
				unk_0xB815670C37E03CDE(iParam2);
				break;
			
			case 1:
				unk_0x0483D0035D6E46FD(sParam1);
				break;
			
			case 2:
				unk_0x1FCB57E33CEA24E8(sParam1);
				break;
			
			case 3:
				unk_0x0A06DEFFF267C21E(sParam1, unk_0x0E4018692D92041D(*iParam0, 28));
				break;
			
			case 4:
				unk_0xD51062C52BCD2AE8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBC6AA949398C551E(sParam1);
				break;
			
			case 6:
				unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA70F5BB55D0343E6(iParam2);
				break;
			
			case 8:
				unk_0x2EE8D1440C9060EF(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x13157A56158089D8();
				break;
			
			default:
				break;
		}
		unk_0x8950ED5730F62EE8(iParam0, 29);
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x0E4018692D92041D(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_224()
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

void func_225(var uParam0)
{
	int iVar0;
	int iVar1;
	
	func_248();
	iLocal_454 = func_247();
	if (uParam0->f_3 == 3)
	{
		sLocal_466[0] = "base";
		func_245(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_245(&uLocal_482, "oddjobs@towingcome_here");
		func_245(&uLocal_482, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_793)
	{
		func_245(&uLocal_482, "Ped");
		func_245(&uLocal_482, "oddjobs@towing");
		func_245(&uLocal_482, "oddjobs@towingangryidle_a");
		func_245(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_245(&uLocal_482, "oddjobs@towingpleadingidle_a");
		func_245(&uLocal_482, "move_m@JOG@");
	}
	else if (bLocal_793)
	{
		func_245(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_245(&uLocal_482, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_245(&uLocal_482, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_465 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_245(&uLocal_482, sLocal_465);
		func_243(&uLocal_472, joaat("ambulance"));
		func_243(&uLocal_472, joaat("s_m_m_paramedic_01"));
		sLocal_466[0] = "react_big_variations_a";
		sLocal_466[1] = "react_big_variations_b";
		sLocal_466[2] = "react_big_variations_c";
		func_245(&uLocal_482, "move_m@JOG@");
	}
	unk_0x8C4EA5F6857553AE(joaat("towtruck"), true);
	if (uParam0->f_3 == 1)
	{
		unk_0x13157A56158089D8();
		func_245(&uLocal_482, "oddjobs@towing");
		func_245(&uLocal_482, "amb@world_human_smoking@male@male_a@base");
		func_245(&uLocal_482, "oddjobs@towingpleadingidle_b");
		func_243(&uLocal_472, joaat("freightcont1"));
		func_243(&uLocal_472, joaat("tankercar"));
		func_243(&uLocal_472, joaat("freight"));
		func_243(&uLocal_472, joaat("freightcar"));
		func_243(&uLocal_472, joaat("s_m_m_lsmetro_01"));
		func_243(&uLocal_472, joaat("a_f_m_bevhills_01"));
		func_243(&uLocal_472, joaat("a_m_y_genstreet_02"));
	}
	if (uParam0->f_3 == 2)
	{
		func_242();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_819[iVar0] = Local_393[iLocal_450 /*23*/].f_20;
	}
	else
	{
		func_241();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_819[iVar0] == 0)
		{
			iLocal_819[iVar0] = func_239(&iLocal_819, &iLocal_49, 10);
			unk_0x2D0FA45744C7540C(iLocal_819[iVar0], 3);
		}
		if (bLocal_799)
		{
			iLocal_819[iVar0] = joaat("landstalker");
			func_243(&uLocal_472, iLocal_819[iVar0]);
			unk_0x2D0FA45744C7540C(iLocal_819[iVar0], 3);
		}
		else if (iLocal_819[iVar0] != 0)
		{
			func_243(&uLocal_472, iLocal_819[iVar0]);
			unk_0x2D0FA45744C7540C(iLocal_819[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_793 && iLocal_796)
	{
		if (bLocal_799)
		{
			func_238(&iVar1);
			iLocal_47 = joaat("a_m_m_tranvest_01");
			iLocal_47 = iLocal_47;
			func_243(&uLocal_472, iLocal_47);
		}
		else if (bLocal_800)
		{
			func_237(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_236(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_799)
		{
			func_236(&iVar1, 1);
		}
		else
		{
			func_236(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_820[iVar0] = func_239(&uLocal_820, &iLocal_48, iVar1);
			if (uLocal_820[iVar0] != 0)
			{
				func_243(&uLocal_472, uLocal_820[iVar0]);
			}
			iVar0++;
		}
	}
	func_243(&uLocal_472, iLocal_392);
	func_235(&uLocal_490, "TOW", 2, 0);
	func_235(&uLocal_490, "DTRSHRD", 3, 0);
	func_234(&uLocal_472);
	func_231(&uLocal_482, &uLocal_490);
	while (!unk_0x11AE7F6A404414C9(iLocal_454))
	{
		func_220(&uLocal_490);
		wait(0);
	}
	while (!func_230(&uLocal_472) || !unk_0x4FFB62F63D342B1B(iLocal_819[0]))
	{
		func_220(&uLocal_490);
		wait(0);
	}
	while (!func_226(&uLocal_490))
	{
		func_220(&uLocal_490);
		wait(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!unk_0x3C05A6D663EA1B6A("SCRIPT\TOWING_TRAIN", false, -1) || !unk_0xD3957903B061A8C8())
		{
			func_220(&uLocal_490);
			wait(0);
		}
	}
	while (!unk_0x8A7F864DAB908749(2) || !unk_0x8A7F864DAB908749(3))
	{
		func_220(&uLocal_490);
		wait(0);
	}
}

bool func_226(var uParam0)
{
	return func_227(uParam0);
}

int func_227(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_228(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_228(var uParam0)
{
	return func_229(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_229(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_223(iParam0))
			{
				case 0:
					return unk_0x5D98D654CDC2165A(iParam2);
					break;
				
				case 1:
					return unk_0xE9CCF312047EBEE0(sParam1);
					break;
				
				case 2:
					return unk_0xCDA107F8BEE35F40(sParam1);
					break;
				
				case 3:
					return unk_0xD83C9F072D059CC4(sParam1);
					break;
				
				case 4:
					return unk_0x371855A6F27F144B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB6596C29F3179D0C(sParam1);
					break;
				
				case 6:
					return unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x854F5F1E3A6FEA55(iParam2);
					break;
				
				case 8:
					return unk_0x8A7F864DAB908749(iParam2);
					break;
				
				case 9:
					return unk_0xD3957903B061A8C8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_230(var uParam0)
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

void func_231(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			func_232(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_232(var uParam0, char* sParam1)
{
	func_233(uParam0, 1, -1, sParam1, 0);
}

void func_233(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xCE3CFF625BEBAA04(sParam3, "NULL"))
					{
						if (unk_0xCE3CFF625BEBAA04(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], iParam1);
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_234(var uParam0)
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

void func_235(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	if (bParam3)
	{
		unk_0x8950ED5730F62EE8(&uVar0, 26);
	}
	func_233(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_48[0] = joaat("a_m_y_genstreet_02");
		iLocal_48[1] = joaat("a_m_y_beach_03");
		iLocal_48[2] = joaat("g_m_y_salvagoon_01");
		iLocal_48[3] = joaat("a_m_m_bevhills_02");
		*uParam0 = 4;
	}
	else
	{
		iLocal_48[0] = joaat("a_f_m_bevhills_01");
		iLocal_48[1] = joaat("a_m_y_genstreet_02");
		iLocal_48[2] = joaat("a_f_y_hipster_02");
		iLocal_48[3] = joaat("a_m_y_beach_03");
		iLocal_48[4] = joaat("s_f_y_sweatshop_01");
		iLocal_48[5] = joaat("g_m_y_salvagoon_01");
		*uParam0 = 6;
	}
}

void func_237(var uParam0)
{
	iLocal_48[0] = joaat("a_m_m_tramp_01");
	iLocal_48[1] = joaat("a_m_y_methhead_01");
	iLocal_48[2] = joaat("a_m_m_tramp_01");
	iLocal_48[3] = joaat("a_m_y_methhead_01");
	*uParam0 = 4;
}

void func_238(var uParam0)
{
	iLocal_48[0] = joaat("a_m_y_yoga_01");
	iLocal_48[1] = joaat("a_m_y_beach_03");
	iLocal_48[2] = joaat("a_m_y_musclbeac_01");
	*uParam0 = 3;
}

var func_239(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x9EC3B269A34A2BEE(0, (iParam2 - 1));
	while (func_240((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = unk_0x9EC3B269A34A2BEE(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_240(int iParam0, var uParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_241()
{
	iLocal_49[0] = joaat("tailgater");
	iLocal_49[1] = joaat("asterope");
	iLocal_49[2] = joaat("primo");
	iLocal_49[3] = joaat("primo");
	iLocal_49[4] = joaat("schwarzer");
	iLocal_49[5] = joaat("emperor");
	iLocal_49[6] = joaat("premier");
	iLocal_49[7] = joaat("buffalo");
	iLocal_49[8] = joaat("intruder");
	iLocal_49[9] = joaat("intruder");
}

void func_242()
{
	iLocal_49[0] = joaat("buccaneer");
	iLocal_49[1] = joaat("voodoo2");
	iLocal_49[2] = joaat("manana");
	iLocal_49[3] = joaat("ruiner");
	iLocal_49[4] = joaat("ruiner");
	iLocal_49[5] = joaat("voodoo2");
	iLocal_49[6] = joaat("surfer2");
	iLocal_49[7] = joaat("emperor2");
	iLocal_49[8] = joaat("stanier");
	iLocal_49[9] = joaat("tailgater");
}

int func_243(var uParam0, int iParam1)
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
	iVar1 = func_244(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_244(var uParam0)
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

int func_245(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			if (unk_0xCE3CFF625BEBAA04((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_246(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_246(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247()
{
	return unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
}

void func_248()
{
	func_293(&uLocal_162, 1);
}

void func_249()
{
	switch (iLocal_170)
	{
		case 2:
			if ((Global_106565.f_19967.f_4 % 2) == 0)
			{
				sLocal_467 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_467 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_467 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_799)
			{
			}
			else
			{
				sLocal_467 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_467 = "TOWTRAINM";
			break;
	}
}

int func_250()
{
	return Local_393[iLocal_450 /*23*/].f_22;
}

void func_251(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_252()
{
	iLocal_170 = func_254(Global_106565.f_19967.f_2);
	if (!func_253(iLocal_170))
	{
		iLocal_170 = 3;
	}
	if (iLocal_170 == 3)
	{
	}
	else
	{
		iLocal_450 = func_256(1300f, iLocal_170, Global_106565.f_19967.f_9);
		Global_106565.f_19967.f_9 = iLocal_450;
	}
	if (iLocal_450 == 0)
	{
		iLocal_170 = 3;
	}
	Global_106565.f_19967.f_2 = iLocal_170;
}

int func_253(int iParam0)
{
	iLocal_450 = func_256(1300f, iParam0, Global_106565.f_19967.f_9);
	if (iLocal_450 == -1)
	{
		return 0;
	}
	return 1;
}

int func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_106565.f_19967.f_4 < iVar0)
		{
			iVar0 = Global_106565.f_19967.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_106565.f_19967.f_6 < iVar0)
		{
			iVar0 = Global_106565.f_19967.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_106565.f_19967.f_5 < iVar0)
		{
			iVar0 = Global_106565.f_19967.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_106565.f_19967.f_7 < iVar0)
		{
			iVar0 = Global_106565.f_19967.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_106565.f_19967.f_8 < iVar0)
		{
			iVar0 = Global_106565.f_19967.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_255()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

int func_256(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar4;
	int iVar5;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 53)
	{
		fVar2 = func_9(Local_393[iVar5 /*23*/].f_1, 1);
		if (!func_11(Local_393[iVar5 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar5 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
				else if (Local_393[iVar5 /*23*/] == iParam1)
				{
					iVar3[iVar4] = iVar5;
					iVar4++;
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 1)
	{
		iVar1 = iVar3[unk_0x9EC3B269A34A2BEE(0, (iVar4 - 1))];
	}
	else if (iVar4 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_257(int iParam0)
{
	if (!func_7(iParam0))
	{
		func_53(iParam0);
	}
}

void func_258()
{
	vLocal_45[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	vLocal_45[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	vLocal_45[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	vLocal_45[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	vLocal_45[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	vLocal_45[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	vLocal_45[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	vLocal_46[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_259(var uParam0)
{
	*(uParam0[0 /*28*/][0 /*3*/]) = { 568.8983f, -1698.723f, 28.2631f };
	*(uParam0[0 /*28*/][1 /*3*/]) = { 575.1474f, -1697.549f, 28.2631f };
	*(uParam0[0 /*28*/][2 /*3*/]) = { 584.8786f, -1703.875f, 28.2631f };
	(uParam0[0 /*28*/])->f_27 = 3;
	(uParam0[0 /*28*/])->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	(uParam0[0 /*28*/])->f_26 = 58.4094f;
	(uParam0[0 /*28*/])->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	(uParam0[0 /*28*/])->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*(uParam0[1 /*28*/][0 /*3*/]) = { 240.0033f, -1141.433f, 28.3033f };
	*(uParam0[1 /*28*/][1 /*3*/]) = { 240.5303f, -1137.75f, 28.3091f };
	*(uParam0[1 /*28*/][2 /*3*/]) = { 229.8743f, -1145.763f, 28.3013f };
	(uParam0[1 /*28*/])->f_27 = 3;
	(uParam0[1 /*28*/])->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	(uParam0[1 /*28*/])->f_26 = 266.7983f;
	(uParam0[1 /*28*/])->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	(uParam0[1 /*28*/])->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	(uParam0[1 /*28*/])->f_10[0 /*3*/] = { 232.3824f, -1137.855f, 28.1944f };
	(uParam0[1 /*28*/])->f_10[1 /*3*/] = { 230.8579f, -1136.252f, 28.0348f };
	*(uParam0[2 /*28*/][0 /*3*/]) = { -95.1473f, -1716.656f, 28.4491f };
	*(uParam0[2 /*28*/][1 /*3*/]) = { -93.1677f, -1717.84f, 28.4239f };
	(uParam0[2 /*28*/])->f_27 = 2;
	(uParam0[2 /*28*/])->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	(uParam0[2 /*28*/])->f_26 = 105.1153f;
	(uParam0[2 /*28*/])->f_10[0 /*3*/] = { -99.8953f, -1726.702f, 28.4622f };
	(uParam0[2 /*28*/])->f_10[1 /*3*/] = { -101.1025f, -1728.689f, 28.6286f };
	*(uParam0[3 /*28*/][0 /*3*/]) = { -117.7085f, -1321.069f, 28.2857f };
	*(uParam0[3 /*28*/][1 /*3*/]) = { -116.6308f, -1325.362f, 28.3192f };
	(uParam0[3 /*28*/])->f_27 = 2;
	(uParam0[3 /*28*/])->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	(uParam0[3 /*28*/])->f_26 = 179.9845f;
	(uParam0[3 /*28*/])->f_10[0 /*3*/] = { -113.1683f, -1319.459f, 28.2125f };
	(uParam0[3 /*28*/])->f_10[1 /*3*/] = { -112.2886f, -1322.422f, 28.2633f };
	*(uParam0[4 /*28*/][0 /*3*/]) = { 308.2367f, -1706.026f, 28.3827f };
	*(uParam0[4 /*28*/][1 /*3*/]) = { 298.1392f, -1700.768f, 28.3234f };
	(uParam0[4 /*28*/])->f_27 = 2;
	(uParam0[4 /*28*/])->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	(uParam0[4 /*28*/])->f_26 = 227.316f;
	(uParam0[4 /*28*/])->f_10[0 /*3*/] = { 304.5671f, -1697.522f, 28.2629f };
	(uParam0[4 /*28*/])->f_10[1 /*3*/] = { 308.3995f, -1699.695f, 28.3051f };
	*(uParam0[5 /*28*/][0 /*3*/]) = { 776.3322f, -2046.078f, 28.2818f };
	*(uParam0[5 /*28*/][1 /*3*/]) = { 776.0253f, -2048.392f, 28.2653f };
	(uParam0[5 /*28*/])->f_27 = 2;
	(uParam0[5 /*28*/])->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	(uParam0[5 /*28*/])->f_26 = 348.1702f;
	(uParam0[5 /*28*/])->f_10[0 /*3*/] = { 782.5989f, -2047.48f, 28.159f };
	(uParam0[5 /*28*/])->f_10[1 /*3*/] = { 783.3265f, -2051.183f, 28.1589f };
	*(uParam0[6 /*28*/][0 /*3*/]) = { 28.2787f, -986.7457f, 28.5094f };
	*(uParam0[6 /*28*/][1 /*3*/]) = { 35.6153f, -988.3468f, 28.4971f };
	*(uParam0[6 /*28*/][2 /*3*/]) = { 38.553f, -985.1667f, 28.5576f };
	(uParam0[6 /*28*/])->f_27 = 3;
	(uParam0[6 /*28*/])->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	(uParam0[6 /*28*/])->f_26 = 251.1427f;
	(uParam0[6 /*28*/])->f_10[0 /*3*/] = { 30.5244f, -980.0237f, 28.4037f };
	(uParam0[6 /*28*/])->f_10[1 /*3*/] = { 34.0509f, -979.3044f, 28.4079f };
	*(uParam0[7 /*28*/][0 /*3*/]) = { 99.1579f, -1521.963f, 28.3247f };
	*(uParam0[7 /*28*/][1 /*3*/]) = { 105.699f, -1527.331f, 28.3186f };
	(uParam0[7 /*28*/])->f_27 = 2;
	(uParam0[7 /*28*/])->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	(uParam0[7 /*28*/])->f_26 = 51.3731f;
	(uParam0[7 /*28*/])->f_10[0 /*3*/] = { 100.3829f, -1529.783f, 28.2238f };
	(uParam0[7 /*28*/])->f_10[1 /*3*/] = { 97.5322f, -1531.58f, 28.3374f };
	*(uParam0[8 /*28*/][0 /*3*/]) = { 370.2508f, -871.9623f, 28.2916f };
	*(uParam0[8 /*28*/][1 /*3*/]) = { 364.377f, -872.4929f, 28.2916f };
	(uParam0[8 /*28*/])->f_27 = 2;
	(uParam0[8 /*28*/])->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	(uParam0[8 /*28*/])->f_26 = 271.3831f;
	(uParam0[8 /*28*/])->f_10[0 /*3*/] = { 363.9474f, -865.3307f, 28.2621f };
	(uParam0[8 /*28*/])->f_10[1 /*3*/] = { 361.2415f, -866.9158f, 28.1908f };
	*(uParam0[9 /*28*/][0 /*3*/]) = { 258.1324f, -2035.098f, 17.2524f };
	*(uParam0[9 /*28*/][1 /*3*/]) = { 263.1343f, -2026.365f, 17.7171f };
	(uParam0[9 /*28*/])->f_27 = 2;
	(uParam0[9 /*28*/])->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	(uParam0[9 /*28*/])->f_26 = 140.9065f;
	(uParam0[9 /*28*/])->f_10[0 /*3*/] = { 264.5263f, -2036.198f, 17.2682f };
	(uParam0[9 /*28*/])->f_10[1 /*3*/] = { 264.3815f, -2032.379f, 17.329f };
	*(uParam0[10 /*28*/][0 /*3*/]) = { 411.4076f, -1869.433f, 25.5691f };
	*(uParam0[10 /*28*/][1 /*3*/]) = { 416.1884f, -1862.589f, 26.0458f };
	(uParam0[10 /*28*/])->f_27 = 2;
	(uParam0[10 /*28*/])->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	(uParam0[10 /*28*/])->f_26 = 135.5291f;
	(uParam0[10 /*28*/])->f_10[0 /*3*/] = { 418.299f, -1872.54f, 25.6552f };
	(uParam0[10 /*28*/])->f_10[1 /*3*/] = { 419.0923f, -1869.039f, 25.6907f };
	*(uParam0[11 /*28*/][0 /*3*/]) = { 500.9577f, -1664.881f, 28.7134f };
	*(uParam0[11 /*28*/][1 /*3*/]) = { 501.1261f, -1668.809f, 28.7152f };
	(uParam0[11 /*28*/])->f_27 = 2;
	(uParam0[11 /*28*/])->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	(uParam0[11 /*28*/])->f_26 = 50.8842f;
	(uParam0[11 /*28*/])->f_10[0 /*3*/] = { 507.0525f, -1670.254f, 28.7152f };
	(uParam0[11 /*28*/])->f_10[1 /*3*/] = { 507.7841f, -1665.116f, 28.4902f };
	*(uParam0[12 /*28*/][0 /*3*/]) = { -208.9247f, -660.1125f, 32.629f };
	*(uParam0[12 /*28*/][1 /*3*/]) = { -204.0615f, -660.8978f, 32.7011f };
	*(uParam0[12 /*28*/][2 /*3*/]) = { -198.1905f, -664.2867f, 32.8159f };
	(uParam0[12 /*28*/])->f_27 = 3;
	(uParam0[12 /*28*/])->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	(uParam0[12 /*28*/])->f_26 = 70.1131f;
	(uParam0[12 /*28*/])->f_10[0 /*3*/] = { -210.6179f, -667.8796f, 32.6494f };
	(uParam0[12 /*28*/])->f_10[1 /*3*/] = { -204.9018f, -667.8836f, 32.6425f };
	*(uParam0[13 /*28*/][0 /*3*/]) = { -310.1606f, -869.7873f, 30.6891f };
	*(uParam0[13 /*28*/][1 /*3*/]) = { -315.0338f, -869.8134f, 30.6555f };
	*(uParam0[13 /*28*/][2 /*3*/]) = { -319.5981f, -868.6276f, 30.6449f };
	(uParam0[13 /*28*/])->f_27 = 3;
	(uParam0[13 /*28*/])->f_23 = { -309.987f, -864.1183f, 30.6228f };
	(uParam0[13 /*28*/])->f_26 = 261.3995f;
	(uParam0[13 /*28*/])->f_10[0 /*3*/] = { -316.0121f, -862.7733f, 30.6267f };
	(uParam0[13 /*28*/])->f_10[1 /*3*/] = { -317.526f, -863.8655f, 30.5453f };
	*(uParam0[14 /*28*/][0 /*3*/]) = { 407.2907f, -1479.637f, 28.2895f };
	*(uParam0[14 /*28*/][1 /*3*/]) = { 404.6483f, -1483.57f, 28.2895f };
	(uParam0[14 /*28*/])->f_27 = 2;
	(uParam0[14 /*28*/])->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	(uParam0[14 /*28*/])->f_26 = 301.9695f;
	(uParam0[14 /*28*/])->f_10[0 /*3*/] = { 399.232f, -1477.783f, 28.2928f };
	(uParam0[14 /*28*/])->f_10[1 /*3*/] = { 401.2551f, -1479.737f, 28.1369f };
	*(uParam0[15 /*28*/][0 /*3*/]) = { -686.6597f, -851.2509f, 22.9054f };
	*(uParam0[15 /*28*/][1 /*3*/]) = { -696.9954f, -852.1266f, 22.6746f };
	(uParam0[15 /*28*/])->f_27 = 2;
	(uParam0[15 /*28*/])->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	(uParam0[15 /*28*/])->f_26 = 269.1391f;
	(uParam0[15 /*28*/])->f_10[0 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
	(uParam0[15 /*28*/])->f_10[1 /*3*/] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_260(var uParam0)
{
	(uParam0[0 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[0 /*23*/])->f_4 = 180.477f;
	(uParam0[0 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[0 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[0 /*23*/] = 0;
	(uParam0[1 /*23*/])->f_1 = { 123.999f, -1081.618f, 28.1919f };
	(uParam0[1 /*23*/])->f_4 = 180.477f;
	(uParam0[1 /*23*/])->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	(uParam0[1 /*23*/])->f_9 = 253.9961f;
	(*uParam0)[1 /*23*/] = 0;
	(uParam0[2 /*23*/])->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	(uParam0[2 /*23*/])->f_4 = 168.6079f;
	(uParam0[2 /*23*/])->f_6 = { -301.0894f, -934.515f, 30.0813f };
	(uParam0[2 /*23*/])->f_9 = 66.2119f;
	(*uParam0)[2 /*23*/] = 0;
	(uParam0[3 /*23*/])->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	(uParam0[3 /*23*/])->f_4 = 145.3635f;
	(*uParam0)[3 /*23*/] = 2;
	(uParam0[4 /*23*/])->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	(uParam0[4 /*23*/])->f_4 = 51.8577f;
	(*uParam0)[4 /*23*/] = 2;
	(uParam0[5 /*23*/])->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	(uParam0[5 /*23*/])->f_4 = 55f;
	(*uParam0)[5 /*23*/] = 1;
	(uParam0[5 /*23*/])->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	(uParam0[5 /*23*/])->f_5 = 1;
	(uParam0[5 /*23*/])->f_13 = { 331.456f, -1789.7f, 26.817f };
	(uParam0[5 /*23*/])->f_16 = { 190.235f, -1957.1f, 26.816f };
	(uParam0[5 /*23*/])->f_19 = 7.2f;
	(uParam0[6 /*23*/])->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	(uParam0[6 /*23*/])->f_4 = 41.1599f;
	(*uParam0)[6 /*23*/] = 2;
	(uParam0[7 /*23*/])->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	(uParam0[7 /*23*/])->f_4 = 131.5235f;
	(*uParam0)[7 /*23*/] = 2;
	(uParam0[8 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[8 /*23*/])->f_4 = 263.5155f;
	(uParam0[8 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[8 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[8 /*23*/] = 0;
	(uParam0[9 /*23*/])->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	(uParam0[9 /*23*/])->f_4 = 276.5309f;
	(*uParam0)[9 /*23*/] = 2;
	(uParam0[10 /*23*/])->f_1 = { -32.488f, -1354.867f, 28.1676f };
	(uParam0[10 /*23*/])->f_4 = 90.8486f;
	(*uParam0)[10 /*23*/] = 2;
	(uParam0[11 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[11 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[11 /*23*/] = 1;
	(uParam0[11 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[11 /*23*/])->f_5 = 0;
	(uParam0[11 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[11 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[11 /*23*/])->f_19 = 7.8f;
	(uParam0[12 /*23*/])->f_1 = { 220.6214f, -852.1f, 29.1084f };
	(uParam0[12 /*23*/])->f_4 = 249.5924f;
	(*uParam0)[12 /*23*/] = 2;
	(uParam0[13 /*23*/])->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	(uParam0[13 /*23*/])->f_4 = 270.3139f;
	(*uParam0)[13 /*23*/] = 2;
	(uParam0[14 /*23*/])->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	(uParam0[14 /*23*/])->f_4 = 265.591f;
	(*uParam0)[14 /*23*/] = 2;
	(uParam0[15 /*23*/])->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	(uParam0[15 /*23*/])->f_4 = 352.601f;
	(*uParam0)[15 /*23*/] = 2;
	(uParam0[16 /*23*/])->f_1 = { 211.0682f, -791.7485f, 29.9f };
	(uParam0[16 /*23*/])->f_4 = 68.5508f;
	(*uParam0)[16 /*23*/] = 2;
	(uParam0[17 /*23*/])->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	(uParam0[17 /*23*/])->f_4 = 179.9431f;
	(*uParam0)[17 /*23*/] = 2;
	(uParam0[18 /*23*/])->f_1 = { -596.5739f, -889.578f, 24.4759f };
	(uParam0[18 /*23*/])->f_4 = 269.5022f;
	(uParam0[18 /*23*/])->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	(uParam0[18 /*23*/])->f_9 = 83.1267f;
	(*uParam0)[18 /*23*/] = 0;
	(uParam0[19 /*23*/])->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	(uParam0[19 /*23*/])->f_4 = 233.0824f;
	(*uParam0)[19 /*23*/] = 2;
	(uParam0[20 /*23*/])->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	(uParam0[20 /*23*/])->f_4 = 142.2298f;
	(*uParam0)[20 /*23*/] = 1;
	(uParam0[20 /*23*/])->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	(uParam0[20 /*23*/])->f_5 = 0;
	(uParam0[20 /*23*/])->f_13 = { -111.725f, -1538.781f, -29.292f };
	(uParam0[20 /*23*/])->f_16 = { 41.484f, -1667.339f, 29.292f };
	(uParam0[20 /*23*/])->f_19 = 7.8f;
	(uParam0[21 /*23*/])->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	(uParam0[21 /*23*/])->f_4 = 263.5155f;
	(uParam0[21 /*23*/])->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	(uParam0[21 /*23*/])->f_9 = 62.5486f;
	(*uParam0)[21 /*23*/] = 0;
	(uParam0[22 /*23*/])->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	(uParam0[22 /*23*/])->f_4 = 269.6159f;
	(uParam0[22 /*23*/])->f_6 = { -373.468f, -672.849f, 30.4925f };
	(uParam0[22 /*23*/])->f_9 = 274.2857f;
	(*uParam0)[22 /*23*/] = 0;
	(uParam0[23 /*23*/])->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	(uParam0[23 /*23*/])->f_4 = 347.1421f;
	(*uParam0)[23 /*23*/] = 2;
	(uParam0[24 /*23*/])->f_1 = { 53.578f, -1417.226f, 28.3517f };
	(uParam0[24 /*23*/])->f_4 = 224.8985f;
	(*uParam0)[24 /*23*/] = 2;
	(uParam0[25 /*23*/])->f_1 = { 401.6395f, -2054.658f, 20.575f };
	(uParam0[25 /*23*/])->f_4 = 168.9083f;
	(*uParam0)[25 /*23*/] = 2;
	(uParam0[26 /*23*/])->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	(uParam0[26 /*23*/])->f_4 = 265.1393f;
	(*uParam0)[26 /*23*/] = 1;
	(uParam0[26 /*23*/])->f_6 = { 339.577f, -1779.002f, 28.1454f };
	(uParam0[26 /*23*/])->f_5 = 0;
	(uParam0[26 /*23*/])->f_13 = { 149.063f, -2005.992f, -18.327f };
	(uParam0[26 /*23*/])->f_16 = { 144.98f, -2095.9f, 18.327f };
	(uParam0[26 /*23*/])->f_19 = 8.5f;
	(uParam0[27 /*23*/])->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	(uParam0[27 /*23*/])->f_4 = 229.6858f;
	(*uParam0)[27 /*23*/] = 1;
	(uParam0[27 /*23*/])->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	(uParam0[27 /*23*/])->f_5 = 1;
	(uParam0[27 /*23*/])->f_13 = { 428.271f, -1674.163f, -29.211f };
	(uParam0[27 /*23*/])->f_16 = { 299.18f, -1826.923f, 29.211f };
	(uParam0[27 /*23*/])->f_19 = 9f;
	(uParam0[28 /*23*/])->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	(uParam0[28 /*23*/])->f_4 = 321.1031f;
	(*uParam0)[28 /*23*/] = 1;
	(uParam0[28 /*23*/])->f_6 = { -92.782f, -1554.607f, 32.2626f };
	(uParam0[28 /*23*/])->f_5 = 1;
	(uParam0[28 /*23*/])->f_13 = { 94.446f, -1712.766f, -29.071f };
	(uParam0[28 /*23*/])->f_16 = { 248.549f, -1840.251f, 29.211f };
	(uParam0[28 /*23*/])->f_19 = 8f;
	(uParam0[29 /*23*/])->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	(uParam0[29 /*23*/])->f_4 = 359.101f;
	(uParam0[29 /*23*/])->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	(uParam0[29 /*23*/])->f_9 = 97.7539f;
	(*uParam0)[29 /*23*/] = 0;
	(uParam0[30 /*23*/])->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	(uParam0[30 /*23*/])->f_4 = 52.932f;
	(uParam0[30 /*23*/])->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	(uParam0[30 /*23*/])->f_9 = 263.4376f;
	(*uParam0)[30 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	(uParam0[31 /*23*/])->f_4 = 322.6262f;
	(*uParam0)[31 /*23*/] = 0;
	(uParam0[31 /*23*/])->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	(uParam0[32 /*23*/])->f_1 = { 538.7713f, -1524.826f, 28.168f };
	(uParam0[32 /*23*/])->f_4 = 50.4239f;
	(*uParam0)[32 /*23*/] = 1;
	(uParam0[32 /*23*/])->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	(uParam0[32 /*23*/])->f_5 = 0;
	(uParam0[32 /*23*/])->f_13 = { 557.229f, -1501.367f, -29.273f };
	(uParam0[32 /*23*/])->f_16 = { 518.983f, -1547.597f, 29.273f };
	(uParam0[32 /*23*/])->f_19 = 8.2f;
	(uParam0[33 /*23*/])->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	(uParam0[33 /*23*/])->f_4 = 212.2787f;
	(*uParam0)[33 /*23*/] = 1;
	(uParam0[33 /*23*/])->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	(uParam0[33 /*23*/])->f_5 = 0;
	(uParam0[33 /*23*/])->f_13 = { 512.849f, -1198.747f, -29.311f };
	(uParam0[33 /*23*/])->f_16 = { 483.086f, -1202.507f, 29.311f };
	(uParam0[33 /*23*/])->f_19 = 8f;
	(uParam0[34 /*23*/])->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	(uParam0[34 /*23*/])->f_4 = 43.2791f;
	(*uParam0)[34 /*23*/] = 4;
	(uParam0[34 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[34 /*23*/])->f_21 = 0;
	(uParam0[34 /*23*/])->f_22 = 0;
	(uParam0[34 /*23*/])->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	(uParam0[35 /*23*/])->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	(uParam0[35 /*23*/])->f_4 = 311.5479f;
	(*uParam0)[35 /*23*/] = 4;
	(uParam0[35 /*23*/])->f_20 = joaat("emperor");
	(uParam0[35 /*23*/])->f_21 = 0;
	(uParam0[35 /*23*/])->f_22 = 1;
	(uParam0[36 /*23*/])->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	(uParam0[36 /*23*/])->f_4 = 81.5938f;
	(*uParam0)[36 /*23*/] = 4;
	(uParam0[36 /*23*/])->f_20 = joaat("intruder");
	(uParam0[36 /*23*/])->f_21 = 1;
	(uParam0[36 /*23*/])->f_22 = 2;
	(uParam0[36 /*23*/])->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	(uParam0[37 /*23*/])->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	(uParam0[37 /*23*/])->f_4 = 157.6585f;
	(*uParam0)[37 /*23*/] = 4;
	(uParam0[37 /*23*/])->f_20 = joaat("asterope");
	(uParam0[37 /*23*/])->f_21 = 0;
	(uParam0[37 /*23*/])->f_22 = 3;
	(uParam0[37 /*23*/])->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	(uParam0[38 /*23*/])->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	(uParam0[38 /*23*/])->f_4 = 213.8354f;
	(*uParam0)[38 /*23*/] = 4;
	(uParam0[38 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[38 /*23*/])->f_21 = 0;
	(uParam0[38 /*23*/])->f_22 = 4;
	(uParam0[38 /*23*/])->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	(uParam0[39 /*23*/])->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	(uParam0[39 /*23*/])->f_4 = 12.6961f;
	(*uParam0)[39 /*23*/] = 4;
	(uParam0[39 /*23*/])->f_20 = joaat("blista");
	(uParam0[39 /*23*/])->f_21 = 1;
	(uParam0[39 /*23*/])->f_22 = 5;
	(uParam0[39 /*23*/])->f_10 = { 784.365f, -2070.999f, 28.3414f };
	(uParam0[40 /*23*/])->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	(uParam0[40 /*23*/])->f_4 = 221.9553f;
	(*uParam0)[40 /*23*/] = 4;
	(uParam0[40 /*23*/])->f_20 = joaat("emperor");
	(uParam0[40 /*23*/])->f_21 = 0;
	(uParam0[40 /*23*/])->f_22 = 6;
	(uParam0[40 /*23*/])->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	(uParam0[41 /*23*/])->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	(uParam0[41 /*23*/])->f_4 = 31.1362f;
	(*uParam0)[41 /*23*/] = 4;
	(uParam0[41 /*23*/])->f_20 = joaat("premier");
	(uParam0[41 /*23*/])->f_21 = 1;
	(uParam0[41 /*23*/])->f_22 = 7;
	(uParam0[41 /*23*/])->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	(uParam0[42 /*23*/])->f_1 = { 360.6348f, -867.98f, 28.1345f };
	(uParam0[42 /*23*/])->f_4 = 249.799f;
	(*uParam0)[42 /*23*/] = 4;
	(uParam0[42 /*23*/])->f_20 = joaat("buffalo");
	(uParam0[42 /*23*/])->f_21 = 0;
	(uParam0[42 /*23*/])->f_22 = 8;
	(uParam0[42 /*23*/])->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	(uParam0[43 /*23*/])->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	(uParam0[43 /*23*/])->f_4 = 339.6013f;
	(*uParam0)[43 /*23*/] = 4;
	(uParam0[43 /*23*/])->f_20 = joaat("premier");
	(uParam0[43 /*23*/])->f_21 = 1;
	(uParam0[43 /*23*/])->f_22 = 9;
	(uParam0[43 /*23*/])->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	(uParam0[44 /*23*/])->f_1 = { 418.623f, -1867.903f, 25.6724f };
	(uParam0[44 /*23*/])->f_4 = 103.9975f;
	(*uParam0)[44 /*23*/] = 4;
	(uParam0[44 /*23*/])->f_20 = joaat("intruder");
	(uParam0[44 /*23*/])->f_21 = 0;
	(uParam0[44 /*23*/])->f_22 = 10;
	(uParam0[44 /*23*/])->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	(uParam0[45 /*23*/])->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	(uParam0[45 /*23*/])->f_4 = 78.9463f;
	(*uParam0)[45 /*23*/] = 4;
	(uParam0[45 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[45 /*23*/])->f_21 = 1;
	(uParam0[45 /*23*/])->f_22 = 11;
	(uParam0[45 /*23*/])->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	(uParam0[46 /*23*/])->f_1 = { -203.7249f, -667.237f, 32.6054f };
	(uParam0[46 /*23*/])->f_4 = 34.4328f;
	(*uParam0)[46 /*23*/] = 4;
	(uParam0[46 /*23*/])->f_20 = joaat("asterope");
	(uParam0[46 /*23*/])->f_21 = 0;
	(uParam0[46 /*23*/])->f_22 = 12;
	(uParam0[46 /*23*/])->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	(uParam0[47 /*23*/])->f_1 = { -318.031f, -865.0022f, 30.482f };
	(uParam0[47 /*23*/])->f_4 = 238.9396f;
	(*uParam0)[47 /*23*/] = 4;
	(uParam0[47 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[47 /*23*/])->f_21 = 0;
	(uParam0[47 /*23*/])->f_22 = 13;
	(uParam0[47 /*23*/])->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	(uParam0[48 /*23*/])->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	(uParam0[48 /*23*/])->f_4 = 281.6565f;
	(*uParam0)[48 /*23*/] = 4;
	(uParam0[48 /*23*/])->f_20 = joaat("blista");
	(uParam0[48 /*23*/])->f_21 = 2;
	(uParam0[48 /*23*/])->f_22 = 14;
	(uParam0[48 /*23*/])->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	(uParam0[49 /*23*/])->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	(uParam0[49 /*23*/])->f_4 = 51.9751f;
	(*uParam0)[49 /*23*/] = 4;
	(uParam0[49 /*23*/])->f_20 = joaat("emperor2");
	(uParam0[49 /*23*/])->f_21 = 0;
	(uParam0[49 /*23*/])->f_22 = 15;
	(uParam0[49 /*23*/])->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	(uParam0[50 /*23*/])->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	(uParam0[50 /*23*/])->f_4 = 337.6293f;
	(*uParam0)[50 /*23*/] = 4;
	(uParam0[50 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[50 /*23*/])->f_21 = 1;
	(uParam0[50 /*23*/])->f_22 = 16;
	(uParam0[50 /*23*/])->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	(uParam0[51 /*23*/])->f_1 = { 217.386f, -2545.061f, 5.1932f };
	(uParam0[51 /*23*/])->f_4 = 95.5124f;
	(*uParam0)[51 /*23*/] = 1;
	(uParam0[51 /*23*/])->f_6 = { 150.731f, -2066.663f, 17.2342f };
	(uParam0[51 /*23*/])->f_5 = 0;
	(uParam0[51 /*23*/])->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	(uParam0[51 /*23*/])->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	(uParam0[51 /*23*/])->f_19 = 8f;
	(uParam0[52 /*23*/])->f_1 = { -692.027f, -847.6826f, 22.6477f };
	(uParam0[52 /*23*/])->f_4 = 245.055f;
	(*uParam0)[52 /*23*/] = 4;
	(uParam0[52 /*23*/])->f_20 = joaat("tailgater");
	(uParam0[52 /*23*/])->f_21 = 0;
	(uParam0[52 /*23*/])->f_22 = 15;
	(uParam0[52 /*23*/])->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_261()
{
	char* sVar0;
	
	if (iLocal_906 < 16)
	{
		unk_0xD362430CD61A9B08();
		unk_0xD92171BC6C48DB90(true);
		func_293(&Global_105216, 3);
		switch (iLocal_875)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!unk_0x786AF4A44E1B5B4B(sVar0))
		{
			func_264(sVar0);
		}
		func_263();
		func_265(unk_0xD178EF744F20B712());
		while (!func_262())
		{
			wait(0);
		}
		func_187();
	}
}

int func_262()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93682 == 7 || Global_93682 == 8)
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	Global_93717 = 1;
	if (unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
	}
	else if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_21())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
		unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 25);
	}
}

void func_264(char* sParam0)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (unk_0x625A8786A9CA5F9A(sParam0) <= 16)
		{
			StringCopy(&Global_71822, sParam0, 16);
			StringCopy(&Global_71826, "", 16);
			if (unk_0x239E30C22D4EE2C6())
			{
				unk_0x692BB84FC63FB91E();
			}
		}
	}
}

void func_265(char* sParam0)
{
	if (Global_93682 != 12)
	{
		func_266(sParam0, 5, -1);
	}
}

int func_266(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	
	func_290();
	func_289();
	Global_93682 = 0;
	StringCopy(&(Global_93682.f_3), sParam0, 32);
	Global_93682.f_11 = iParam1;
	unk_0xF84B1ACDA9DC2C16(1);
	unk_0x7848BCC2A9FF04C2(0);
	unk_0x61FC243328EB16DD(0);
	func_286(1);
	func_284(1);
	func_281(0);
	func_280(1);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 9);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 6);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 20);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 21);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 5);
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if (unk_0x95BBE5C8D52FE24B(iVar0))
				{
					unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 5);
				}
			}
		}
	}
	unk_0xEDF90B96BED57BCE(1);
	unk_0xD362430CD61A9B08();
	func_279(0);
	func_278(1);
	Global_93682.f_2 = Global_93719;
	if (func_277())
	{
		if (func_276())
		{
			if (Global_93719 >= func_273())
			{
				if (!unk_0x0E4018692D92041D(Global_84500[iParam2 /*34*/].f_15, 16))
				{
					if (Global_106565.f_9079.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_87888 = 1;
					}
				}
			}
		}
		else if (Global_93682.f_11 == 6)
		{
			func_268(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_106565.f_18568[iParam2 /*6*/].f_4 >= 2)
				{
					Global_87888 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_267(unk_0xD178EF744F20B712());
			if (iVar2 > -1)
			{
				if (Global_106565.f_24980.f_4[iVar2] >= 2)
				{
					Global_87888 = 1;
				}
			}
		}
	}
	return 1;
}

int func_267(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_268(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_269(uParam1, "Abigail1", func_271(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 1:
			func_269(uParam1, "Abigail2", func_271(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 2:
			func_269(uParam1, "Barry1", func_271(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 3:
			func_269(uParam1, "Barry2", func_271(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 4:
			func_269(uParam1, "Barry3", func_271(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 5:
			func_269(uParam1, "Barry3A", func_271(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 6:
			func_269(uParam1, "Barry3C", func_271(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 7:
			func_269(uParam1, "Barry4", func_271(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_270(iParam0), 0, 0);
			break;
		
		case 8:
			func_269(uParam1, "Dreyfuss1", func_271(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 9:
			func_269(uParam1, "Epsilon1", func_271(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 10:
			func_269(uParam1, "Epsilon2", func_271(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 11:
			func_269(uParam1, "Epsilon3", func_271(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 12:
			func_269(uParam1, "Epsilon4", func_271(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 13:
			func_269(uParam1, "Epsilon5", func_271(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 14:
			func_269(uParam1, "Epsilon6", func_271(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 15:
			func_269(uParam1, "Epsilon7", func_271(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 16:
			func_269(uParam1, "Epsilon8", func_271(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 17:
			func_269(uParam1, "Extreme1", func_271(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 18:
			func_269(uParam1, "Extreme2", func_271(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 19:
			func_269(uParam1, "Extreme3", func_271(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 20:
			func_269(uParam1, "Extreme4", func_271(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 21:
			func_269(uParam1, "Fanatic1", func_271(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_270(iParam0), 1, 0);
			break;
		
		case 22:
			func_269(uParam1, "Fanatic2", func_271(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_270(iParam0), 1, 0);
			break;
		
		case 23:
			func_269(uParam1, "Fanatic3", func_271(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_270(iParam0), 0, 1);
			break;
		
		case 24:
			func_269(uParam1, "Hao1", func_271(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_270(iParam0), 0, 1);
			break;
		
		case 25:
			func_269(uParam1, "Hunting1", func_271(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 26:
			func_269(uParam1, "Hunting2", func_271(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 27:
			func_269(uParam1, "Josh1", func_271(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 28:
			func_269(uParam1, "Josh2", func_271(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 29:
			func_269(uParam1, "Josh3", func_271(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 30:
			func_269(uParam1, "Josh4", func_271(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 31:
			func_269(uParam1, "Maude1", func_271(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 32:
			func_269(uParam1, "Minute1", func_271(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 33:
			func_269(uParam1, "Minute2", func_271(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 34:
			func_269(uParam1, "Minute3", func_271(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 35:
			func_269(uParam1, "MrsPhilips1", func_271(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 36:
			func_269(uParam1, "MrsPhilips2", func_271(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 37:
			func_269(uParam1, "Nigel1", func_271(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 38:
			func_269(uParam1, "Nigel1A", func_271(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 39:
			func_269(uParam1, "Nigel1B", func_271(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_270(iParam0), 1, 1);
			break;
		
		case 40:
			func_269(uParam1, "Nigel1C", func_271(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_270(iParam0), 1, 1);
			break;
		
		case 41:
			func_269(uParam1, "Nigel1D", func_271(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_270(iParam0), 1, 1);
			break;
		
		case 42:
			func_269(uParam1, "Nigel2", func_271(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 43:
			func_269(uParam1, "Nigel3", func_271(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_270(iParam0), 1, 1);
			break;
		
		case 44:
			func_269(uParam1, "Omega1", func_271(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 45:
			func_269(uParam1, "Omega2", func_271(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 46:
			func_269(uParam1, "Paparazzo1", func_271(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 47:
			func_269(uParam1, "Paparazzo2", func_271(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 48:
			func_269(uParam1, "Paparazzo3", func_271(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 49:
			func_269(uParam1, "Paparazzo3A", func_271(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 50:
			func_269(uParam1, "Paparazzo3B", func_271(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 51:
			func_269(uParam1, "Paparazzo4", func_271(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 52:
			func_269(uParam1, "Rampage1", func_271(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 54:
			func_269(uParam1, "Rampage3", func_271(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 55:
			func_269(uParam1, "Rampage4", func_271(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 56:
			func_269(uParam1, "Rampage5", func_271(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_270(iParam0), 0, 0);
			break;
		
		case 53:
			func_269(uParam1, "Rampage2", func_271(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_270(iParam0), 1, 0);
			break;
		
		case 57:
			func_269(uParam1, "TheLastOne", func_271(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 58:
			func_269(uParam1, "Tonya1", func_271(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 59:
			func_269(uParam1, "Tonya2", func_271(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 60:
			func_269(uParam1, "Tonya3", func_271(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 61:
			func_269(uParam1, "Tonya4", func_271(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		case 62:
			func_269(uParam1, "Tonya5", func_271(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_270(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_269(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_270(int iParam0)
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

struct<2> func_271(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_272(iParam0) };
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

struct<2> func_272(int iParam0)
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

int func_273()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_274(&(Global_93682.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_274(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36163153849DFDA1(sParam0);
	iVar1 = func_275(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_275(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84500[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_276()
{
	if ((((Global_93682.f_11 == 0 || Global_93682.f_11 == 1) || Global_93682.f_11 == 2) || Global_93682.f_11 == 3) || Global_93682.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_277()
{
	if ((((Global_93682.f_11 == 0 || Global_93682.f_11 == 1) || Global_93682.f_11 == 2) || Global_93682.f_11 == 6) || Global_93682.f_11 == 3)
	{
		return 1;
	}
	if (Global_93682.f_11 == 5)
	{
		if (func_267(&(Global_93682.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_278(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36974 = 1;
	}
	else
	{
		Global_36974 = 0;
	}
}

void func_279(bool bParam0)
{
	unk_0x35675D19812BDF22(bParam0);
	unk_0xDFF589A2149528CE(bParam0);
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x68F7298CC6F16961();
		unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 3);
	}
	else if (unk_0x0E4018692D92041D(Global_93682.f_20, 3))
	{
		unk_0xD384C2E6BE0D5ABF();
		unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 3);
	}
}

void func_281(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x0E4018692D92041D(Global_93682.f_20, 4))
		{
			func_283();
			unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 4);
		}
	}
	else
	{
		func_282();
		unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 4);
	}
}

void func_282()
{
	Global_17272.f_5 = 1;
}

void func_283()
{
	Global_17272.f_5 = 0;
}

void func_284(bool bParam0)
{
	if (bParam0)
	{
		func_285();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_156(0))
		{
			func_286(0);
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

void func_285()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_286(int iParam0)
{
	if (func_288())
	{
		return;
	}
	if (Global_14725)
	{
		func_287(0, 0);
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
	if (!func_18())
	{
		Global_14553.f_1 = 3;
	}
}

void func_287(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_156(0))
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

bool func_288()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_289()
{
	Global_87888 = 0;
	Global_87889 = 0;
}

void func_290()
{
	Global_93682 = 13;
	Global_93682.f_1 = -1;
	Global_93682.f_2 = 0;
	Global_93682.f_30 = 0f;
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 25);
	Global_93716 = 0;
	func_278(0);
	func_292();
	func_291();
	Global_93682.f_18 = -1;
	Global_93682.f_19 = -1;
}

void func_291()
{
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 22);
	unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 8);
}

void func_292()
{
	if (Global_93682.f_16 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(Global_93682.f_16));
		Global_93682.f_16 = 0;
	}
	if (Global_93682.f_17 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(Global_93682.f_17));
		Global_93682.f_17 = 0;
	}
}

void func_293(var uParam0, int iParam1)
{
	func_294(uParam0, iParam1);
}

void func_294(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_295()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

