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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<5> Local_80 = { 0, 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 21;
	var uLocal_84 = 6;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[4] = { 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99[2] = { 0, 0 };
	int iLocal_100[2] = { 0, 0 };
	var uLocal_101[2] = { 0, 0 };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	struct<3> Local_116[15];
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122 = { 0, 0, 0 } ;
	float fLocal_123 = 0f;
	struct<3> Local_124 = { 0, 0, 0 } ;
	float fLocal_125 = 0f;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_127 = 0f;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	float fLocal_130 = 0f;
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_132 = 0f;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	float fLocal_145 = 0f;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	bool bLocal_175 = 0;
	bool bLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	char* sLocal_201 = NULL;
	char[] cLocal_202[8] = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 100;
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
	struct<3> Local_514 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	struct<3> Local_516 = { 0, 0, 0 } ;
	float fLocal_517 = 0f;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
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
	int iLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	struct<2> Local_543 = { 0, 0 } ;
	struct<2> Local_544 = { 0, 0 } ;
	struct<2> Local_545 = { 0, 0 } ;
	struct<2> Local_546 = { 0, 0 } ;
	int iLocal_547 = 0;
	char[] cLocal_548[8] = 0;
	struct<10> Local_549[16];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	struct<7> Local_561[2];
	int iLocal_562[2] = { 0, 0 };
	int iLocal_563[2] = { 0, 0 };
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	float fLocal_570 = 0f;
	int iLocal_571 = 0;
	struct<8> Local_572[2];
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	float fLocal_598 = 0f;
	float fLocal_599 = 0f;
	float fLocal_600 = 0f;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	struct<3> Local_603[4];
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	bool bLocal_607 = 0;
	struct<3> Local_608 = { 0, 0, 0 } ;
	float fLocal_609 = 0f;
	char* sLocal_610[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614[3] = { 0, 0, 0 };
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	bool bLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	float fLocal_626 = 0f;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	float fLocal_631 = 0f;
	struct<3> Local_632[4];
	struct<3> Local_633[6];
	struct<3> Local_634[6];
	struct<3> Local_635[5];
	struct<3> Local_636[4];
	struct<3> Local_637[5];
	struct<3> Local_638[5];
	float fLocal_639[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_640 = 4;
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
	var uLocal_653 = 4;
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
	var uLocal_666 = 15;
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
	var uLocal_712 = 15;
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
	var uLocal_758 = 8;
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
	var uLocal_783 = 8;
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
	struct<25> Local_808[2];
	var uLocal_809 = 8;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 6;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 6;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872[2] = { 0, 0 };
	bool bLocal_873 = 0;
	int iLocal_874[2] = { 0, 0 };
	int iLocal_875[2] = { 0, 0 };
	int iLocal_876 = 0;
	bool bLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880[2] = { 0, 0 };
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	float fLocal_886 = 0f;
	float fLocal_887 = 0f;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	bool bLocal_890 = 0;
	float fLocal_891 = 0f;
	int iLocal_892 = 0;
	float fLocal_893[2] = { 0f, 0f };
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	bool bLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	bool bLocal_902 = 0;
	float fLocal_903 = 0f;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	uLocal_68 = unk_0x7B826893B2E27385();
	uLocal_69 = unk_0x19F6152D9806BBF8();
	iLocal_70 = -1;
	iLocal_78 = 6;
	Local_118 = { -1614.526f, -1137.882f, 0.9178f };
	Local_119 = { -1626.046f, -1137.165f, 0.47598f };
	Local_120 = { -805.4391f, 175.644f, 75.7407f };
	fLocal_121 = 336.1657f;
	Local_122 = { -804.3638f, 178.5257f, 75.7407f };
	fLocal_123 = 14.3431f;
	Local_124 = { -1862.529f, -1211.253f, 12.017f };
	fLocal_125 = 45.6064f;
	Local_126 = { -823.2707f, 181.5663f, 70.6967f };
	fLocal_127 = 136.7262f;
	Local_128 = { -2019.921f, -1030.525f, 0.001f };
	Local_129 = { -2008.722f, -1033.154f, 0f };
	fLocal_130 = 280.6858f;
	Local_131 = { -1072.8f, -1703.924f, 3.514f };
	fLocal_132 = 181.9476f;
	Local_133 = { -1105.932f, -1695.893f, 3.3731f };
	Local_134 = { -1106.255f, -1694.977f, 3.3742f };
	fLocal_135 = 122.5477f;
	Local_136 = { -1866.951f, -1208.529f, 12.63051f };
	Local_137 = { -1865.153f, -1210.694f, 12.60679f };
	fLocal_138 = 54.5399f;
	fLocal_139 = 65.01204f;
	Local_140 = { -1627.998f, -1143.906f, -0.612126f };
	Local_141 = { -1608.71f, -1116.125f, 7.893201f };
	fLocal_142 = 45f;
	Local_143 = { -1084.216f, -1707.052f, -6.638385f };
	Local_144 = { -967.2344f, -1829.366f, 40.31441f };
	fLocal_145 = 116f;
	Local_146 = { -1851.92f, -1217.777f, 12.01752f };
	fLocal_147 = 332.3918f;
	fLocal_148 = 113.3809f;
	fLocal_149 = -107.7502f;
	bLocal_154 = true;
	sLocal_156 = "fam2";
	sLocal_157 = "fam2stairs";
	iLocal_158 = 2;
	iLocal_164 = 4;
	iLocal_165 = 4;
	iLocal_166 = 1;
	iLocal_168 = -1;
	iLocal_169 = -1;
	iLocal_170 = -1;
	iLocal_171 = 900;
	bLocal_174 = true;
	sLocal_201 = "family_2_mcs_4";
	cLocal_202 = "FAM2AUD";
	Local_209 = { -2030.409f, -1039.463f, -23.59287f };
	Local_210 = { -1797.853f, -982.6022f, 0f };
	Local_211 = { -934.5598f, -1360.544f, 0f };
	fLocal_212 = 288.2051f;
	Local_514 = { -816.716f, 179.098f, 72.8274f };
	Local_515 = { -816.1068f, 177.5108f, 72.8274f };
	cLocal_548 = cLocal_202;
	StringCopy(&Local_556, "", 24);
	iLocal_602 = -1;
	fLocal_631 = 0f;
	fLocal_887 = 0f;
	fLocal_891 = 0f;
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_591(3);
		func_589();
		unk_0x1CF3F44FC2EB9F99("FAM2_STOP");
		func_587();
	}
	unk_0xBD1F51FB3FA2C6E4(1);
	func_549();
	func_548(0, 1);
	iLocal_907 = 0;
	while (true)
	{
		if (!iLocal_173)
		{
			func_545();
		}
		if (!iLocal_172)
		{
			func_477();
		}
		func_474();
		func_471();
		unk_0x6D3F703013ED87D3("M_DaddysLittleGirl", 0);
		switch (iLocal_70)
		{
			case -1:
				if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0xCAC4D1050F2E6899(unk_0xE2D3D51028F0428A(), 1f);
				}
				switch (iLocal_159)
				{
					case 0:
						if (!unk_0xE5965CDF24F93A9F(iLocal_89))
						{
							if (!unk_0xE5965CDF24F93A9F(Global_96471.f_9[0]))
							{
								func_470(-808.0422f, 168.5755f, 75.7504f, 244.0649f);
							}
							else
							{
								unk_0x2D58A6131679D82C(Global_96471.f_9[0], 1, 1);
								iLocal_89 = Global_96471.f_9[0];
							}
						}
						if (!unk_0xBCC73B466E2B2350(iLocal_113))
						{
							iLocal_113 = unk_0xA0F62C1038208492(-813.1963f, 179.4912f, 71.1592f);
						}
						unk_0x8FB472886552D737("missfam2mcs_intp1");
						unk_0x70F260358D1A42C4(sLocal_157);
						unk_0xD69A0C3662175E68(joaat("v_ilev_mm_doorm_l"));
						unk_0xD69A0C3662175E68(joaat("v_ilev_mm_doorm_r"));
						unk_0x249A0D3C5714BCF4("FAMILY2", 0);
						unk_0x249A0D3C5714BCF4(cLocal_202, 6);
						if (!iLocal_907)
						{
							unk_0x0728C4D61E5ACE06("family_2_Timelapse_srl");
							iLocal_907 = 1;
						}
						if ((((((((((unk_0xEA02B859DE237081(iLocal_113) && unk_0x6F940C2636C076AD("missfam2mcs_intp1")) && unk_0xE5965CDF24F93A9F(iLocal_89)) && unk_0x8133A5F807883BC6("TIME_LAPSE", 0, -1)) && unk_0xE5965CDF24F93A9F(iLocal_89)) && unk_0x0152AA00FA3130F1(joaat("v_ilev_mm_doorm_l"))) && unk_0x0152AA00FA3130F1(joaat("v_ilev_mm_doorm_r"))) && unk_0xBD3CEA9CD36E271E(sLocal_157)) && unk_0xD66FB6B74EE3DA66()) && unk_0x01896B71C5AC966E(0)) && unk_0x01896B71C5AC966E(6))
						{
							unk_0x584B286572B48431();
							unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
							iLocal_906 = unk_0x8F5F4164BF5FB513(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
							unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), iLocal_906, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 8, 0, 1148846080, 0);
							unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
							if (unk_0xEC32121F2E3875C8(-2097039789))
							{
								unk_0x1B3E1454BD86FCE6(-2097039789, 1f, 0, 0);
								unk_0x7E15597AA5F53F9A(-2097039789, 1, 0, 1);
							}
							if (unk_0xEC32121F2E3875C8(-2127416656))
							{
								unk_0x1B3E1454BD86FCE6(-2127416656, -1f, 0, 0);
								unk_0x7E15597AA5F53F9A(-2127416656, 1, 0, 1);
							}
							unk_0xE87A5B1B96B0EC6F(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
							unk_0xE87A5B1B96B0EC6F(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
							iLocal_109 = unk_0x0E536D72AB30F4C8(joaat("v_ilev_mm_doorm_l"), Local_514, 1, 1, 0);
							iLocal_110 = unk_0x0E536D72AB30F4C8(joaat("v_ilev_mm_doorm_r"), Local_515, 1, 1, 0);
							unk_0xAA8557AFE4A4A184(iLocal_109, iLocal_906, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0xAA8557AFE4A4A184(iLocal_110, iLocal_906, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0xEC5CB2A3F2052039(iLocal_109);
							unk_0xEC5CB2A3F2052039(iLocal_110);
							unk_0x4B248030F70A5D8B(0);
							uLocal_111 = unk_0xAE96F9AFF21228DC(964613260, 1);
							unk_0x7B8CE3A05613F41C(uLocal_111, iLocal_906, "fam_2_int_p1_cam", "missfam2mcs_intp1");
							unk_0x43F21FA00A1CE779(1, 0);
							unk_0x850D4EF3D40FB068(true, 0, 3000, 1, 0, 0);
							func_469(18);
							unk_0x125F5E3A0150AB0D(5, 5, 5, 5);
							unk_0x670BAA84466115CA();
							settimera(0);
							unk_0xF1A23B343DFEDFD0(joaat("v_ilev_mm_doorm_l"));
							unk_0xF1A23B343DFEDFD0(joaat("v_ilev_mm_doorm_r"));
							func_467(unk_0xE2D3D51028F0428A(), 32);
							unk_0xF7438EF713CBDAAC(unk_0xE2D3D51028F0428A(), 3, 17, 0);
							unk_0xF7438EF713CBDAAC(unk_0xE2D3D51028F0428A(), 4, 16, 0);
							unk_0xF7438EF713CBDAAC(unk_0xE2D3D51028F0428A(), 6, 1, 0);
							unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 1);
							if (unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632()))
							{
								if (func_466(unk_0x9993EF7FDBCDB632()))
								{
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (unk_0xE5965CDF24F93A9F(Global_97335[iVar0]))
										{
											if (vdist2(unk_0x6B62510F212526DC(Global_97335[iVar0], 1), Local_126) < 900f)
											{
												unk_0x2D58A6131679D82C(Global_97335[iVar0], 1, 1);
												unk_0xD59CC8123FD1A789(&(Global_97335[iVar0]));
												iVar0 = 3;
											}
										}
										iVar0++;
									}
								}
							}
							func_462(Local_122, 1000f, 0);
							if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								iVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
							}
							else
							{
								iVar1 = unk_0x78291C96EFBBDC75();
							}
							if (unk_0xE5965CDF24F93A9F(iVar1) && unk_0x55A0C756C4A8220C(iVar1, 0))
							{
								if (!unk_0x7010991FDA59D3F2(iVar1, joaat("taxi")) && !func_460(iVar1, 0, 1))
								{
									if (func_459(iVar1) && vdist(unk_0x6B62510F212526DC(iVar1, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 50f)
									{
										unk_0x2D58A6131679D82C(iVar1, 1, 1);
										if (func_458(iVar1) == 0)
										{
											unk_0xD59CC8123FD1A789(&iVar1);
										}
										else
										{
											func_447(iVar1, -822.4229f, 157.8134f, 69.0913f, 91.16499f, 24, 0);
											unk_0xC64B6E13A6A7F517(iVar1, -822.4229f, 157.8134f, 69.0913f, 1, 0, 0, 1);
											unk_0xBBF86885619695CE(iVar1, 91.16499f);
											unk_0x0E97FAE15BEE6379(iVar1, 1);
										}
									}
								}
							}
							unk_0x7A997A0A971D305F(Local_126, 200f, 1, 0, 0, 0);
							func_446(24);
							unk_0x85050CAC8798CDD0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 300f);
							unk_0x3E100889F69B5149(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 300f);
							unk_0x66136F80D9C9251E(unk_0xE2D3D51028F0428A(), 1);
							iLocal_159++;
						}
						break;
					
					case 1:
						unk_0x584B286572B48431();
						unk_0x7E887F52DE52D931(to_float(timera()));
						if (func_445(1000))
						{
							func_444(500);
							iLocal_159 += 2;
						}
						if ((unk_0xCE2C78E9FC0B01E3(iLocal_906) && unk_0x54DE1614490C2A83(iLocal_906) > 0.95f) || !unk_0xCE2C78E9FC0B01E3(iLocal_906))
						{
							iLocal_906 = -1;
							Local_80.f_4 = unk_0xB93A4265CB0F5B1F("DEFAULT_SPLINE_CAMERA", 0);
							unk_0x8BE9D374DA4BB99B(Local_80.f_4, -835.1494f, 180.1434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							unk_0x8BE9D374DA4BB99B(Local_80.f_4, -835.7494f, 180.2434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							unk_0x0A18C027350D3C19(Local_80.f_4, 47.9931f);
							unk_0xDD786B89B15AA63F(Local_80.f_4, 1);
							unk_0x91DFC8F68F6D9B05(-1, "TIME_LAPSE_MASTER", 0, 1);
							func_443(&Local_80, 1, 0, 2000, 1, 1, 0, 1);
							unk_0xDD786B89B15AA63F(uLocal_111, 0);
							iLocal_905 = 10;
							unk_0x66136F80D9C9251E(unk_0xE2D3D51028F0428A(), 0);
							iLocal_159++;
						}
						break;
					
					case 2:
						unk_0x584B286572B48431();
						unk_0x7E887F52DE52D931(to_float(timera()));
						if (func_412(iLocal_905, 0, "EXTRASUNNY", "cirrocumulus", &Local_80, -1082130432, 0, 1, 1065353216))
						{
							unk_0x257D98D0E399F50E();
							settimera(0);
							iLocal_159++;
						}
						if (func_411())
						{
							func_443(&Local_80, 0, 0, 2000, 1, 1, 0, 1);
							wait(0);
							func_444(500);
							iLocal_159++;
						}
						break;
					
					case 3:
						unk_0x584B286572B48431();
						if ((timera() > 300 && unk_0x5E34706DEBC06639(unk_0xE2D3D51028F0428A())) && unk_0xBD3CEA9CD36E271E("fam2Stairs"))
						{
							func_383(0, 0);
							if (unk_0xE5965CDF24F93A9F(iLocal_89))
							{
								unk_0x1C2ED929474DC6FE(iLocal_89, 1, 0);
								unk_0x959E1626CBC7D38A(iLocal_89, 1, 0);
								unk_0x5C65DDDC219B3AA5(iLocal_89, 0);
							}
							unk_0xAA27C85E5BE092AA(10, 0, 0);
							iLocal_159++;
						}
						break;
					
					case 4:
						unk_0x584B286572B48431();
						iLocal_159 = 0;
						iLocal_70 = 0;
						break;
				}
				break;
			
			case 0:
				func_372();
				break;
			
			case 1:
				func_316();
				break;
			
			case 2:
				func_283();
				break;
			
			case 3:
				func_274();
				break;
			
			case 4:
				func_272();
				break;
			
			case 5:
				func_261();
				break;
			
			case 6:
				func_259();
				break;
			
			case 7:
				func_221();
				func_218();
				break;
			
			case 8:
				func_200();
				break;
			
			case 9:
				func_178();
				break;
			
			case 11:
				func_147();
				break;
			
			default:
				break;
		}
		func_146();
		if (unk_0x55A0C756C4A8220C(iLocal_95, 0) && !unk_0xF68107C40359970C(iLocal_89))
		{
			if (unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0))
			{
				unk_0xA3400358EEE2B4A2(iLocal_89, 0);
			}
		}
		func_144(0);
		func_101();
		func_1();
		if (unk_0xE5965CDF24F93A9F(iLocal_89) && !unk_0xF68107C40359970C(iLocal_89))
		{
			unk_0x3E3D339BAD67F6F2(iLocal_89, 328, 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_88) && !unk_0xF68107C40359970C(iLocal_88))
		{
			unk_0x3E3D339BAD67F6F2(iLocal_88, 328, 1);
		}
		if (iLocal_152)
		{
			iLocal_152 = 0;
		}
		if (iLocal_153)
		{
			iLocal_153 = 0;
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_567)
	{
		case 0:
			if (iLocal_70 == 5 && vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), -2033.821f, -1031.864f, 4.89f) < 62500f)
			{
				unk_0xD69A0C3662175E68(joaat("csb_porndudes"));
				unk_0xD69A0C3662175E68(joaat("a_f_y_beach_01"));
				unk_0x8FB472886552D737("missfam2leadinoutmcs3");
				if (((unk_0x0152AA00FA3130F1(joaat("csb_porndudes")) && unk_0x0152AA00FA3130F1(joaat("a_f_y_beach_01"))) && unk_0x6F940C2636C076AD("missfam2leadinoutmcs3")) && func_96(-2033.23f, -1032.27f, 4.89f, 0f))
				{
					if (!unk_0xF68107C40359970C(iLocal_88))
					{
						iLocal_91[0] = unk_0xA8D58C3AADA2C41C(26, joaat("csb_porndudes"), -2032.69f, -1031.36f, 5.59f, 0f, 1, 1);
						unk_0x9D4D63EB83A103AD(iLocal_91[0], 1.75f);
						iLocal_91[1] = unk_0xA8D58C3AADA2C41C(26, joaat("csb_porndudes"), -2034.42f, -1032.71f, 5.54f, 0f, 1, 1);
						iLocal_91[2] = unk_0xA8D58C3AADA2C41C(26, joaat("a_f_y_beach_01"), -2033.32f, -1031.07f, 5.54f, 0f, 1, 1);
						iLocal_91[3] = unk_0xA8D58C3AADA2C41C(26, joaat("a_f_y_beach_01"), -2034.48f, -1031.6f, 5.48f, 0f, 1, 1);
						uLocal_568 = unk_0x8F5F4164BF5FB513(-2033.821f, -1031.864f, 4.89f, 0f, 0f, -4.4f, 2);
						unk_0x950B26F4C891073F(iLocal_91[0], uLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x950B26F4C891073F(iLocal_91[1], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x950B26F4C891073F(iLocal_91[2], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x950B26F4C891073F(iLocal_91[3], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x950B26F4C891073F(iLocal_88, iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_tracy", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xE3752B10DC995E95(iLocal_91[0], 0, 0, 0, 0);
						unk_0xE3752B10DC995E95(iLocal_91[0], 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(iLocal_91[0], 4, 0, 0, 0);
						unk_0xD9D122A54FFE62B8(iLocal_91[0], 1, 0, 0, false);
						unk_0xE3752B10DC995E95(iLocal_91[1], 0, 2, 0, 0);
						unk_0xE3752B10DC995E95(iLocal_91[1], 3, 2, 0, 0);
						unk_0xE3752B10DC995E95(iLocal_91[1], 4, 2, 0, 0);
						unk_0xD9D122A54FFE62B8(iLocal_91[1], 0, 0, 0, false);
						unk_0xFE1CD80C2F7CBCFB(iLocal_568, 1);
						unk_0xF1A23B343DFEDFD0(joaat("csb_porndudes"));
						unk_0xF1A23B343DFEDFD0(joaat("a_f_y_beach_01"));
						unk_0xF1A23B343DFEDFD0(joaat("ig_tracydisanto"));
						iLocal_567++;
					}
				}
			}
			break;
		
		case 1:
			func_95("family_2_mcs_3", -2033.821f, -1031.864f, 4.89f, 100f, &iLocal_178);
			if (iLocal_178)
			{
				if (unk_0x2566F947AAB7B2A7())
				{
					unk_0xB018BAA4ED9AA217(1, "famtwoplayer");
					func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
					if (unk_0xE5965CDF24F93A9F(iLocal_91[0]) && !unk_0xF68107C40359970C(iLocal_91[0]))
					{
						func_2("Guy_on_sofa", iLocal_91[0], 0, 2);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_91[1]) && !unk_0xF68107C40359970C(iLocal_91[1]))
					{
						func_2("Man_getting_wood", iLocal_91[1], 0, 2);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_91[2]) && !unk_0xF68107C40359970C(iLocal_91[2]))
					{
						func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_91[3]) && !unk_0xF68107C40359970C(iLocal_91[3]))
					{
						func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_88) && !unk_0xF68107C40359970C(iLocal_88))
					{
						func_2("Tracy", iLocal_88, 0, 2);
					}
				}
			}
			if (iLocal_178)
			{
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), -2033.821f, -1031.864f, 4.89f) > (120f * 120f))
				{
					iLocal_178 = 0;
					unk_0x6D23F8C14190D353();
				}
			}
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), -2033.821f, -1031.864f, 4.89f) > 75625f || (iLocal_70 != 5 && iLocal_70 != 6))
			{
				if (iLocal_70 != 6)
				{
					bVar1 = true;
					iVar0 = 0;
					while (iVar0 < iLocal_91)
					{
						if (!unk_0xF68107C40359970C(iLocal_91[iVar0]))
						{
							if (!unk_0x4D21C9FB671ED18F(iLocal_91[iVar0]))
							{
								bVar1 = false;
							}
						}
						iVar0++;
					}
					if (!unk_0xF68107C40359970C(iLocal_88))
					{
						if (!unk_0x4D21C9FB671ED18F(iLocal_88))
						{
							bVar1 = false;
						}
					}
					if (bVar1)
					{
						iVar0 = 0;
						while (iVar0 < iLocal_91)
						{
							if (unk_0xE5965CDF24F93A9F(iLocal_91[iVar0]))
							{
								unk_0x51BB443B279E4104(iLocal_91[iVar0]);
								unk_0x05CB75C0837196F9(&(iLocal_91[iVar0]));
							}
							iVar0++;
						}
					}
					iLocal_567 = 0;
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_3(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0x44F8EFEFF0CDA3FE(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0x6D690024C2BB1053(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0x6D690024C2BB1053(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_3(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = unk_0x15CAA6D7B11F1A7C(iParam0);
	func_87(iParam0, &Var2, 0, -1);
	func_87(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_84(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_84(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_85(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_85(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_4(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_14(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_4(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_11(iParam3);
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	iVar1 = unk_0x7ABBACADFB201C3A(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_7(unk_0x15CAA6D7B11F1A7C(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_7(unk_0x15CAA6D7B11F1A7C(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x83174885C2F9E9D2(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x7827F3E641387AB3(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_6(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_11(iParam3);
}

int func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(uParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_7(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return (func_10(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_9(iParam2));
		iVar1 = unk_0x8F3F503BADA161ED(iParam1);
		if (iVar1 != -1)
		{
			return (func_8(iParam0, func_9(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_8(int iParam0, int iParam1)
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

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_13(iParam0);
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_83();
	if (iParam0 == joaat("player_zero"))
	{
		func_65(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_46(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_15(iParam1, iParam2);
	}
	return Global_77663[0 /*14*/];
}

void func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_45(iParam1);
			break;
		
		case 2:
			func_44(iParam1);
			break;
		
		case 3:
			func_41(iParam1);
			break;
		
		case 4:
			func_40(iParam1);
			break;
		
		case 6:
			func_39(iParam1);
			break;
		
		case 5:
			func_38(iParam1);
			break;
		
		case 8:
			func_37(iParam1);
			break;
		
		case 9:
			func_36(iParam1);
			break;
		
		case 10:
			func_35(iParam1);
			break;
		
		case 1:
			func_34(iParam1);
			break;
		
		case 7:
			func_33(iParam1);
			break;
		
		case 11:
			func_32(iParam1);
			break;
		
		case 12:
			func_31(iParam1);
			break;
		
		case 13:
			func_30(iParam1);
			break;
		
		case 14:
			func_16(iParam1);
			break;
	}
}

void func_16(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_28(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x2E87280918B16506(sParam3) != unk_0x2E87280918B16506("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 6);
		if (func_27(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x036D1EA7243F2CCC(Global_2883588, joaat("REBREATHER"), 0))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_25(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_25(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_25(Global_2883588, 1, 1, 1, -1))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2883588, 2, 1, 1, -1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 5);
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
		}
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
		if (!func_24(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_20(func_23(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			}
			iVar0 = func_20(func_19(iParam1, uParam0->f_2), Global_77660, 0);
			if (unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
			}
			if (func_18(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_20(iVar1, Global_77660, 0);
				if (!unk_0xE2D0C323A1AE5D85(iVar0, uParam0->f_1))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_6), 2);
		}
	}
}

bool func_18(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_19(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_21(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1574907;
}

int func_23(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xB0550BC91B0159D6(&(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xE2D0C323A1AE5D85(Global_112915.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		return unk_0xE2D0C323A1AE5D85(iVar3, iVar1);
	}
	return 0;
}

bool func_26(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12597;
	if ((bParam4 && Global_4532516) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4532516)
		{
			iVar0 = unk_0xA713D1504E921B62(iParam0);
		}
		else
		{
			iVar0 = unk_0x033025C1430DD8E8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA713D1504E921B62(iParam0);
	}
	else
	{
		iVar0 = unk_0x033025C1430DD8E8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10302;
					break;
				
				case 232:
					*uParam2 = 10303;
					break;
				
				case 233:
					*uParam2 = 10304;
					break;
				
				case 234:
					*uParam2 = 10305;
					break;
				
				case 235:
					*uParam2 = 10306;
					break;
				
				case 236:
					*uParam2 = 10307;
					break;
				
				case 237:
					*uParam2 = 10308;
					break;
				
				case 238:
					*uParam2 = 10309;
					break;
				
				case 239:
					*uParam2 = 10310;
					break;
				
				case 240:
					*uParam2 = 10311;
					break;
				
				case 241:
					*uParam2 = 10312;
					break;
				
				case 242:
					*uParam2 = 10313;
					break;
				
				case 243:
					*uParam2 = 10314;
					break;
				
				case 244:
					*uParam2 = 10315;
					break;
				
				case 245:
					*uParam2 = 10316;
					break;
				
				case 246:
					*uParam2 = 10317;
					break;
				
				case 247:
					*uParam2 = 10318;
					break;
				
				case 248:
					*uParam2 = 10319;
					break;
				
				case 249:
					*uParam2 = 10320;
					break;
				
				case 250:
					*uParam2 = 10321;
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10322;
					break;
				
				case 232:
					*uParam2 = 10323;
					break;
				
				case 233:
					*uParam2 = 10324;
					break;
				
				case 234:
					*uParam2 = 10325;
					break;
				
				case 235:
					*uParam2 = 10326;
					break;
				
				case 236:
					*uParam2 = 10327;
					break;
				
				case 237:
					*uParam2 = 10328;
					break;
				
				case 238:
					*uParam2 = 10329;
					break;
				
				case 239:
					*uParam2 = 10330;
					break;
				
				case 240:
					*uParam2 = 10331;
					break;
				
				case 241:
					*uParam2 = 10332;
					break;
				
				case 242:
					*uParam2 = 10333;
					break;
				
				case 243:
					*uParam2 = 10334;
					break;
				
				case 244:
					*uParam2 = 10335;
					break;
				
				case 245:
					*uParam2 = 10336;
					break;
				
				case 246:
					*uParam2 = 10337;
					break;
				
				case 247:
					*uParam2 = 10338;
					break;
				
				case 248:
					*uParam2 = 10339;
					break;
				
				case 249:
					*uParam2 = 10340;
					break;
				
				case 250:
					*uParam2 = 10341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12597;
}

bool func_27(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_77663[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0x30264A1C9ADAAE62(iVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x43FFB630E515D7A1(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2;
				func_17(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_17(&(Global_77663[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0xA188D1127A77C942(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0xC99CE91134872039(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5;
				func_17(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x036D1EA7243F2CCC(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var9);
		if (iParam3 != -1 && Global_77833)
		{
			unk_0x37E8462BC2A63393(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9;
			func_17(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0xA188D1127A77C942(iVar1, 10, -1, 0, -1, func_9(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xEA030AC498B5F181(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9;
				func_17(&(Global_77663[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x036D1EA7243F2CCC(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_30(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_31(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_32(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_33(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_34(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_35(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_29(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_29(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_37(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_38(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_39(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_29(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_40(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_29(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_41(int iParam0)
{
	if (iParam0 < 136)
	{
		func_43(iParam0);
	}
	else
	{
		func_42(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 242, -1);
	}
}

void func_42(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_43(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_44(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_64(iParam1);
			break;
		
		case 2:
			func_63(iParam1);
			break;
		
		case 3:
			func_59(iParam1);
			break;
		
		case 4:
			func_58(iParam1);
			break;
		
		case 6:
			func_57(iParam1);
			break;
		
		case 5:
			func_56(iParam1);
			break;
		
		case 8:
			func_55(iParam1);
			break;
		
		case 9:
			func_54(iParam1);
			break;
		
		case 10:
			func_53(iParam1);
			break;
		
		case 1:
			func_52(iParam1);
			break;
		
		case 7:
			func_51(iParam1);
			break;
		
		case 11:
			func_50(iParam1);
			break;
		
		case 12:
			func_49(iParam1);
			break;
		
		case 13:
			func_48(iParam1);
			break;
		
		case 14:
			func_47(iParam1);
			break;
	}
}

void func_47(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_49(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_50(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_29(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_51(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_52(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_53(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_54(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_55(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_56(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_57(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_29(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_58(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_29(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_59(int iParam0)
{
	if (iParam0 < 107)
	{
		func_62(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_61(iParam0);
	}
	else
	{
		func_60(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 318, -1);
	}
}

void func_60(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_61(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_62(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_64(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_29(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_82(iParam1);
			break;
		
		case 2:
			func_81(iParam1);
			break;
		
		case 3:
			func_78(iParam1);
			break;
		
		case 4:
			func_77(iParam1);
			break;
		
		case 6:
			func_76(iParam1);
			break;
		
		case 5:
			func_75(iParam1);
			break;
		
		case 8:
			func_74(iParam1);
			break;
		
		case 9:
			func_73(iParam1);
			break;
		
		case 10:
			func_72(iParam1);
			break;
		
		case 1:
			func_71(iParam1);
			break;
		
		case 7:
			func_70(iParam1);
			break;
		
		case 11:
			func_69(iParam1);
			break;
		
		case 12:
			func_68(iParam1);
			break;
		
		case 13:
			func_67(iParam1);
			break;
		
		case 14:
			func_66(iParam1);
			break;
	}
}

void func_66(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_29(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_67(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_68(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_69(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_70(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_71(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_72(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_29(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_73(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_74(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_75(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_29(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_76(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_29(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_78(int iParam0)
{
	if (iParam0 < 60)
	{
		func_80(iParam0);
	}
	else
	{
		func_79(iParam0);
	}
	if (Global_77663[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 181, -1);
	}
}

void func_79(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_80(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_81(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_82(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77663[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77663[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_83()
{
	Global_77663[0 /*14*/].f_1 = -1;
	Global_77663[0 /*14*/].f_2 = -1;
	Global_77663[0 /*14*/].f_5 = -1;
	Global_77663[0 /*14*/].f_3 = -1;
	Global_77663[0 /*14*/].f_4 = -1;
	Global_77663[0 /*14*/].f_7 = 0;
	Global_77663[0 /*14*/].f_6 = 0;
	Global_77663[0 /*14*/].f_13 = -1;
	Global_77663[0 /*14*/].f_12 = 0;
	Global_77663[0 /*14*/] = 0;
	StringCopy(&(Global_77663[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_13(iParam0);
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_112915.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_9(iParam3);
	iVar1 = unk_0x37684F94E628D1AC(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x91E7DA9EAFFB9499(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = func_92(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_89(iVar0))
		{
			uParam1->f_59 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x9315DBF7D972F07A() && unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			if (func_88(161, iParam3))
			{
				uParam1->f_59 = func_20(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_20(753, iParam3, 0);
			}
			uParam1->f_60 = func_20(754, iParam3, 0);
			uParam1->f_61 = func_20(755, iParam3, 0);
		}
		if (unk_0x9315DBF7D972F07A() && iParam0 == unk_0xE2D3D51028F0428A())
		{
			if (func_88(161, iParam3))
			{
				uParam1->f_59 = func_20(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_20(753, iParam3, 0);
			}
		}
	}
}

int func_88(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_89(int iParam0)
{
	return iParam0 < 3;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xF2BC143F97765619(iParam0, iParam1);
		*uParam3 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x5540488889EC816A(iParam0) && unk_0x88FED828C9DFBE76(iParam0) != -1)
				{
					*uParam2 = unk_0x88FED828C9DFBE76(iParam0);
					*uParam3 = unk_0x2FB3EE2B80255AFD(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x5355BAA621C153CF(iParam0, iParam1);
		*uParam3 = unk_0xF1050E548C37F4A5(iParam0, iParam1);
		*uParam4 = unk_0x272AB65A4E7277B4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_93(int iParam0)
{
	if (func_89(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_95(char* sParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Param1, 1) < fParam2 && !*bParam3)
	{
		unk_0xD536FD78D8A135F1(sParam0, 8);
		*bParam3 = 1;
	}
}

int func_96(struct<3> Param0, float fParam1)
{
	switch (iLocal_566)
	{
		case 0:
			if (func_98(&iLocal_88, 15, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_566++;
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(iLocal_88))
			{
				unk_0xF7438EF713CBDAAC(iLocal_88, 2, 3, 0);
				unk_0xF7438EF713CBDAAC(iLocal_88, 3, 4, 0);
				unk_0xF7438EF713CBDAAC(iLocal_88, 4, 4, 0);
				unk_0xF7438EF713CBDAAC(iLocal_88, 6, 2, 0);
				unk_0x00B2FA06032579D8(iLocal_88, 0, 0, 0);
				unk_0x00B2FA06032579D8(iLocal_88, 1, 1, 0);
				iLocal_566++;
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(iLocal_88))
			{
				if (unk_0x5E34706DEBC06639(iLocal_88))
				{
					unk_0xE3752B10DC995E95(iLocal_88, 2, 3, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_88, 3, 4, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_88, 4, 4, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_88, 6, 2, 0, 0);
					unk_0xD9D122A54FFE62B8(iLocal_88, 0, 0, 0, false);
					unk_0xD9D122A54FFE62B8(iLocal_88, 1, 1, 0, false);
					unk_0xC64B6E13A6A7F517(iLocal_88, Param0, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_88, fParam1);
					func_97(iLocal_88);
					unk_0x6475234C10008E58(iLocal_88);
					unk_0x5AA75AD81DAE23C0(iLocal_88);
					iLocal_566 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_97(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		unk_0x027BDA95C9BD0667(iParam0, 0);
		unk_0xA7266A50941DBAEA(iParam0, 0);
		unk_0x5D1D64E01B76705C(iParam0, 0);
		unk_0xD6A76BAB45A4B460(iParam0, 104, 1);
		unk_0x3F990964E4A5669A(iParam0, 0);
		unk_0x508EA490C0230199(iParam0, 1);
		unk_0x96C405257A1BD81B(iParam0, 0);
		unk_0x50274A7EACA3133A(iParam0, 1);
		unk_0xFF4BEB6CFF55A013(iParam0, iLocal_114);
	}
}

int func_98(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_89(iParam1))
	{
		iVar0 = func_100(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*iParam0))
			{
				unk_0x05CB75C0837196F9(iParam0);
			}
			*iParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, fParam3, 0, 0);
			unk_0xDCB52C614B3660EC(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*iParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*iParam0, 5, 2, 0, 0);
				}
			}
			func_99(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_99(var uParam0, int iParam1)
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

int func_100(int iParam0)
{
	if (!func_89(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_101()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_569)
	{
		case 0:
			if (iLocal_70 < 3 || (iLocal_70 == 11 && iLocal_72 < 3))
			{
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_133) < 40000f)
				{
					iLocal_569++;
				}
			}
			break;
		
		case 1:
			bVar0 = false;
			if ((iLocal_70 > 2 && iLocal_70 != 11) || (iLocal_70 == 11 && iLocal_72 > 2))
			{
				bVar0 = true;
			}
			if (func_142(bVar0))
			{
				fLocal_570 = 0f;
				iLocal_569++;
			}
			break;
		
		case 2:
			if (!iLocal_571)
			{
				if (unk_0x574E2A23F0F76E35(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0))
				{
					iVar1 = unk_0x87A467676BDF8C35(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 1, 0, 1);
					unk_0xBED097BB6359F09C(iVar1, 1, 1, 1, 1, 1, 1, 0, 0);
					unk_0x5C65DDDC219B3AA5(iVar1, 1);
					iLocal_571 = 1;
				}
			}
			if (!unk_0xF68107C40359970C(iLocal_90))
			{
				if (!unk_0x51B334B227EC8042(iLocal_90))
				{
					if (!unk_0xFB9EB8DE7A01979A(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
					{
						unk_0xC64B6E13A6A7F517(iLocal_90, Local_133, 1, 0, 0, 1);
						if (unk_0x48D8C2729764DE01(Local_133, "PROP_HUMAN_SEAT_CHAIR", 2f, 1))
						{
							unk_0x8CEB5D8B56025AA2(iLocal_90, -1105.241f, -1697.025f, 3.3678f, 2f, 0);
						}
					}
				}
			}
			iVar2 = 0;
			while (iVar2 < iLocal_96)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_96[iVar2]) && unk_0x55A0C756C4A8220C(iLocal_96[iVar2], 0))
				{
					if (iLocal_70 <= 2)
					{
						if (vdist2(unk_0x6B62510F212526DC(iLocal_96[iVar2], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 9f)
						{
							unk_0x7653D561C9574763(0, 263, 1);
							unk_0x7653D561C9574763(0, 141, 1);
							unk_0x7653D561C9574763(0, 140, 1);
						}
					}
					if (iLocal_70 < 2)
					{
						if (unk_0xA09765D2ADE13CAE(iLocal_96[iVar2]) != 2)
						{
							unk_0x3B2646B62E7BBE11(iLocal_96[iVar2], 2);
						}
					}
					else if (unk_0xA09765D2ADE13CAE(iLocal_96[iVar2]) == 2)
					{
						unk_0x3B2646B62E7BBE11(iLocal_96[iVar2], 1);
					}
				}
				iVar2++;
			}
			func_103();
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_133) > 44100f)
			{
				func_102();
				iLocal_569 = 0;
			}
			break;
	}
}

void func_102()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_90))
	{
		unk_0x05CB75C0837196F9(&iLocal_90);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_96)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_96[iVar0]))
		{
			unk_0xD59CC8123FD1A789(&(iLocal_96[iVar0]));
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(joaat("tribike"));
	unk_0xF1A23B343DFEDFD0(joaat("bmx"));
	unk_0xF1A23B343DFEDFD0(joaat("cruiser"));
	unk_0xF1A23B343DFEDFD0(joaat("scorcher"));
	unk_0xF1A23B343DFEDFD0(joaat("u_m_m_bikehire_01"));
}

void func_103()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	else if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
	{
		iVar0 = unk_0x9993EF7FDBCDB632();
	}
	if (((((unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0)) && !unk_0x7010991FDA59D3F2(iVar0, joaat("scorcher"))) && !unk_0x7010991FDA59D3F2(iVar0, joaat("cruiser"))) && !unk_0x7010991FDA59D3F2(iVar0, joaat("tribike"))) && !unk_0x7010991FDA59D3F2(iVar0, joaat("bmx")))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iVar0)) > 2f)
		{
			if (unk_0x8F41785F110B0DA0(iVar0, -1106.309f, -1693.715f, 5.12379f, 6.25f, 7f, 3.25f, 0, 1, 0))
			{
				iVar4 = 0;
				while (iVar4 < iLocal_96)
				{
					if (unk_0x55A0C756C4A8220C(iLocal_96[iVar4], 0))
					{
						if (unk_0x72F6AE51B7E34865(iLocal_96[iVar4], iVar0))
						{
							bVar2 = true;
						}
					}
					iVar4++;
				}
			}
		}
	}
	if (iVar1 || bVar2)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0x55A0C756C4A8220C(iLocal_96[iVar4], 0))
			{
				unk_0x5C65DDDC219B3AA5(iLocal_96[iVar4], 0);
				unk_0x3F6DE6DBA9A99FEA(iLocal_96[iVar4], 0, 0f, 0f, -0.001f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			iVar4++;
		}
		if (!unk_0xF68107C40359970C(iLocal_90))
		{
			if (bVar2)
			{
				func_104("FM2_BIKES");
			}
		}
	}
	bVar5 = false;
	if (!unk_0xF68107C40359970C(iLocal_90))
	{
		if ((((unk_0x89D0E0233F6E59A7(-1, unk_0x6B62510F212526DC(iLocal_90, 1), 20f) || unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_90, 1), 20f, 1)) || unk_0x863026E0C5C2E52B(unk_0x6B62510F212526DC(iLocal_90, 1) + Vector(20f, 20f, 20f), unk_0x6B62510F212526DC(iLocal_90, 1) - Vector(20f, 20f, 20f), 0)) || unk_0x51B334B227EC8042(iLocal_90)) || ((iLocal_70 == 2 && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_133, 40f, 40f, 20f, 0, 1, 0)))
		{
			bVar5 = true;
		}
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_90, 1)) < 100f)
		{
			if (unk_0x7E006F2E24F03BB4(iLocal_90, unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6) && unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_90))
				{
					fLocal_570 = (fLocal_570 + unk_0x51109C28352EC9A3());
					if (fLocal_570 > 0.5f)
					{
						bVar5 = true;
					}
				}
				else if (fLocal_570 > 0f)
				{
					fLocal_570 = (fLocal_570 - (unk_0x51109C28352EC9A3() * 2f));
				}
				else if (fLocal_570 != 0f)
				{
					fLocal_570 = 0f;
				}
			}
			if (unk_0x0747E45CFF1F74AA(iLocal_90, unk_0xE2D3D51028F0428A(), 1) || unk_0x32DCDA1B2F8A0694(iLocal_90))
			{
				bVar5 = true;
			}
		}
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_90, 1)) < 400f && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
		{
			iVar3 = 1;
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_96[iVar4]))
			{
				unk_0x5C65DDDC219B3AA5(iLocal_96[iVar4], 0);
			}
			iVar4++;
		}
		if ((!unk_0xF68107C40359970C(iLocal_90) && !unk_0x51B334B227EC8042(iLocal_90)) && unk_0xBFF766829E7783C7(iLocal_90))
		{
			unk_0x63AC696EE80D33D1(iLocal_90, unk_0x6B62510F212526DC(iLocal_90, 1) + unk_0x63BEA94AB58D4E6D(iLocal_90));
			unk_0x7734082B0EDB0BE0(iLocal_90, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
		}
		if (unk_0x55A0C756C4A8220C(iLocal_94, 0))
		{
			if (unk_0xE896049AD1887FF0(iLocal_94))
			{
				unk_0x90F8F7D270431FAE(iLocal_94);
			}
		}
		if (((iLocal_70 == 1 || iLocal_70 == 2) || (iLocal_70 == 3 && unk_0x77A43AFA9AAEC041(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			if (!unk_0xF68107C40359970C(iLocal_89))
			{
				unk_0xDC6110E0F8FF9DA0(iLocal_89, 2, 0);
				unk_0x7734082B0EDB0BE0(iLocal_89, unk_0xE2D3D51028F0428A(), 200f, 20000, 0, 0);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_90) && (unk_0x55B23FE400FCEA6B(iLocal_90, 0) || unk_0xF68107C40359970C(iLocal_90)))
	{
		if ((iLocal_70 < 3 || (iLocal_70 == 3 && unk_0x77A43AFA9AAEC041(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			func_104("FM2_BGHIT");
		}
	}
	else if ((((!unk_0xF68107C40359970C(iLocal_90) && unk_0x51B334B227EC8042(iLocal_90)) && iLocal_70 < 3) || fLocal_570 > 0.5f) || iVar3)
	{
		func_104("FM2_BGRUN");
	}
	else if (!unk_0xF68107C40359970C(iLocal_89) && unk_0x51B334B227EC8042(iLocal_89))
	{
		func_104("FM2_JSPOOK");
	}
	if (unk_0xE5965CDF24F93A9F(iVar0))
	{
		iVar0 = 0;
	}
}

void func_104(char* sParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1CF3F44FC2EB9F99("FAM2_STOP");
	if (unk_0x3C57C2F07FEE34D2(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0xEF9410C312F2B117(iLocal_89))
		{
			sParam0 = "FM2_JIMHIT";
		}
	}
	func_129(sParam0);
	if (unk_0x3C57C2F07FEE34D2(sParam0, "FM2_TSPOOK") || unk_0x3C57C2F07FEE34D2(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_88))
		{
			if (unk_0x2F52E009BBC0AFCE(iLocal_88, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9())))
			{
				unk_0x6221A52631154EF7(iLocal_88);
			}
			unk_0x7734082B0EDB0BE0(iLocal_88, unk_0xE2D3D51028F0428A(), 500f, 60000, 0, 0);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_89))
		{
			if (unk_0x2F52E009BBC0AFCE(iLocal_89, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9())))
			{
				unk_0x6221A52631154EF7(iLocal_89);
			}
			unk_0x7734082B0EDB0BE0(iLocal_89, unk_0xE2D3D51028F0428A(), 500f, 60000, 0, 0);
		}
	}
	while (!func_128())
	{
		wait(0);
	}
	if (iLocal_70 == 1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
		else
		{
			iVar0 = unk_0x78291C96EFBBDC75();
		}
		bVar1 = false;
		if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0))
		{
			if (func_466(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xE5965CDF24F93A9F(Global_97335[iVar2]))
					{
						bVar1 = true;
						iVar2 = 3;
					}
					iVar2++;
				}
			}
			if (!unk_0x7010991FDA59D3F2(iVar0, joaat("taxi")) && !bVar1)
			{
				if (vdist(unk_0x6B62510F212526DC(iVar0, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 50f)
				{
					if (func_458(iVar0) != 0)
					{
						func_107(iVar0, 0, 145);
					}
				}
			}
		}
	}
	unk_0x9D2ACCF306F3A0C5("smboat");
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_101[iVar3]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_101[iVar3]));
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_100[iVar3]))
		{
			unk_0x05CB75C0837196F9(&(iLocal_100[iVar3]));
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_99[iVar3]))
		{
			unk_0xD59CC8123FD1A789(&(iLocal_99[iVar3]));
		}
		iVar3++;
	}
	if (iLocal_70 >= 5 && iLocal_70 != 11)
	{
		while (!func_383(1, 1))
		{
			wait(0);
		}
		func_105(Local_124, fLocal_125);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_89))
	{
		unk_0x05CB75C0837196F9(&iLocal_89);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_88))
	{
		unk_0x05CB75C0837196F9(&iLocal_88);
	}
	if (unk_0x55A0C756C4A8220C(iLocal_93, 0))
	{
		unk_0x3D81769BEC61BFF8(&iLocal_93);
	}
	if (unk_0x55A0C756C4A8220C(iLocal_94, 0))
	{
		unk_0x3D81769BEC61BFF8(&iLocal_94);
	}
	func_587();
}

void func_105(struct<3> Param0, float fParam1)
{
	if (func_106(Global_78092, 0f, 0f, 0f, 0))
	{
		Global_78092 = { Param0 };
		Global_78095 = fParam1;
	}
}

bool func_106(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x24466A99E2719412(iParam0, &uVar0);
		if (!unk_0xACC32B78196FBC2A(sVar1))
		{
			if (unk_0x2E87280918B16506(sVar1) == unk_0x2E87280918B16506("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_108(iParam0, iParam2);
	return 1;
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_114(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (!unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, -1);
		}
		if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0xF68107C40359970C(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112915.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_112915.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xACC32B78196FBC2A(&(Global_112915.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_112915.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112915.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112915.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_112915.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_112915.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_112915.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112915.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112915.f_32749.f_5590 = iParam1;
	Global_77575 = iParam0;
	Global_112915.f_32749.f_5588 = 1;
	func_109(iParam0, &(Global_112915.f_32749.f_5510));
}

void func_109(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_113(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_112(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_111(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, var uParam2)
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
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_112(int iParam0)
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

void func_113(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_114(int iParam0)
{
	if ((((((((((!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0)) || func_460(iParam0, 0, 0)) || func_460(iParam0, 1, 0)) || func_460(iParam0, 2, 0)) || func_458(iParam0) != 145) || func_127(iParam0)) || func_126(iParam0)) || func_466(iParam0)) || func_125(iParam0)) || !func_115(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		if (func_126(iParam0))
		{
		}
		if (func_126(iParam0))
		{
		}
		if (func_460(iParam0, 0, 0))
		{
		}
		if (func_460(iParam0, 1, 0))
		{
		}
		if (func_460(iParam0, 2, 0))
		{
		}
		if (func_458(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_116(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD2B5B1C8FC84FE0F(iParam0) || unk_0xD6F7D32A98E07F93(iParam0)) || unk_0x4262B4DCEADC2695(iParam0)) || unk_0xF4AD75B2D964D8AB(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_116(int iParam0, bool bParam1)
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
		if (!func_124())
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
		if ((((!func_123() && !func_122()) && !func_121()) && !func_120()) && !func_124())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3EBD3AF4E5D7A08C() || unk_0x8FE9914D4872D601()) || unk_0xA7384DAD7CF469DA())
		{
		}
		else if (!func_121())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_119(iParam0))
		{
			return 0;
		}
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_118())
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

int func_118()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_119(int iParam0)
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

int func_120()
{
	return 0;
}

int func_121()
{
	return 1;
}

int func_122()
{
	return 1;
}

int func_123()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_124()
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

int func_125(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	sVar1 = unk_0x80D16DB58890B7BC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3C57C2F07FEE34D2(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_116(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(Global_97305[iVar0]) && unk_0x55A0C756C4A8220C(Global_97305[iVar0], 0))
			{
				if (Global_97305[iVar0] == iParam0 && unk_0x15CAA6D7B11F1A7C(Global_97305[iVar0]) == unk_0x15CAA6D7B11F1A7C(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(Global_76670.f_484[24]))
	{
		if (iParam0 == Global_76670.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_76670.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76670.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_99974 == 7 || Global_99974 == 8)
	{
		return 1;
	}
	return 0;
}

void func_129(char* sParam0)
{
	func_141(sParam0);
	func_130(0);
}

void func_130(int iParam0)
{
	int iVar0;
	
	if (Global_112915.f_9085 || func_140(0))
	{
		iVar0 = func_139();
		if (!func_131(iVar0))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_90726[iVar0 /*5*/].f_1), 5);
		Global_100010 = iParam0;
	}
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_136();
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x3B97C4414E778C45(5000);
	}
	iVar0 = Global_90726[iParam0 /*5*/];
	iVar1 = Global_78121.f_109[iVar0 /*4*/];
	func_135(iVar1, 1);
	unk_0xA131CC850DA50CF0(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
	func_132(&(Global_112915.f_2363.f_539), iVar1);
	if (Global_94149 == Global_100011)
	{
		Global_112915.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_90762[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x3E49EF84C421E367(0);
		}
	}
	Global_112915.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94149 = Global_100011;
	if (iParam0 == -1)
	{
		if (Global_112915.f_9085)
		{
		}
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_90726[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_90726[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_112915.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_134(Global_112915.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_112915.f_18533[iVar0] = 318;
				func_133(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97364[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_9 = 0f;
				Global_97364[iVar0 /*29*/].f_12 = 0f;
				Global_97364[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_10 = 0f;
				Global_97364[iVar0 /*29*/].f_13 = 0f;
				Global_97364[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_11 = 0f;
				Global_97364[iVar0 /*29*/].f_14 = 0f;
				Global_97364[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_26 = 0f;
				Global_97364[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_27 = 0f;
				Global_97364[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97364[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_133(var uParam0)
{
	*uParam0 = -15;
}

int func_134(int iParam0, var uParam1, float fParam2)
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
			return func_134(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_134(8, uParam1, fParam2);
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

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93959[iParam0 /*2*/] = 0;
	}
}

void func_136()
{
	Global_100009 = 1;
	if (unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78084))
		{
			switch (func_137())
			{
				case 0:
					StringCopy(&Global_78084, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78084, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78084, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78088, "", 16);
		}
		Global_100009 = 0;
	}
	else if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78084))
		{
			switch (func_137())
			{
				case 0:
					StringCopy(&Global_78084, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78084, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78084, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78088, "", 16);
		}
		Global_100009 = 0;
		unk_0xCED9E32812D6C7C7(&(Global_99974.f_20), 25);
	}
}

int func_137()
{
	func_138();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_138()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_93(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_92(unk_0xE2D3D51028F0428A());
			if (func_89(iVar0) && (!func_27(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_89(Global_112915.f_2363.f_539.f_4321))
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

int func_139()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_90726[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_141(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (unk_0xEE91150B7F06C500(sParam0) <= 16)
		{
			StringCopy(&Global_78084, sParam0, 16);
			StringCopy(&Global_78088, "", 16);
			if (unk_0x6C85295E4E1FB8B3())
			{
				unk_0x0FCCD6087693AA00();
			}
		}
	}
}

bool func_142(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0xD69A0C3662175E68(joaat("u_m_m_bikehire_01"));
	unk_0xD69A0C3662175E68(joaat("cruiser"));
	unk_0xD69A0C3662175E68(joaat("bmx"));
	unk_0xD69A0C3662175E68(joaat("scorcher"));
	unk_0xD69A0C3662175E68(joaat("tribike"));
	if ((((unk_0x0152AA00FA3130F1(joaat("u_m_m_bikehire_01")) && unk_0x0152AA00FA3130F1(joaat("cruiser"))) && unk_0x0152AA00FA3130F1(joaat("bmx"))) && unk_0x0152AA00FA3130F1(joaat("scorcher"))) && unk_0x0152AA00FA3130F1(joaat("tribike")))
	{
		if (iLocal_166 != 0 || !bParam0)
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_96[0]))
			{
				iLocal_96[0] = unk_0xBA715A7BEBA5A1F9(joaat("scorcher"), -1106.885f, -1692.229f, 4.0189f, 0f, 1, 1, 0);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_96[0], 0))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_96[0], -1106.885f, -1692.229f, 4.0189f, 0, 0, 1);
				unk_0x03F4139102BA4AFC(iLocal_96[0], -0.0504f, -0.0723f, -0.4427f, 0.8923f);
				unk_0xD584204572DF0440(iLocal_96[0], 2);
			}
		}
		if ((iLocal_165 != 1 && iLocal_166 != 1) || !bParam0)
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_96[1]))
			{
				iLocal_96[1] = unk_0xBA715A7BEBA5A1F9(joaat("cruiser"), -1108.396f, -1690.399f, 3.9549f, 0f, 1, 1, 0);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_96[1], 0))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_96[1], -1108.396f, -1690.399f, 3.9549f, 0, 0, 1);
				unk_0x03F4139102BA4AFC(iLocal_96[1], -0.0466f, -0.074f, -0.4628f, 0.8822f);
				unk_0xD584204572DF0440(iLocal_96[1], 1);
			}
		}
		if (iLocal_166 != 2 || !bParam0)
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_96[2]))
			{
				iLocal_96[2] = unk_0xBA715A7BEBA5A1F9(joaat("bmx"), -1109.405f, -1688.704f, 3.7501f, 0f, 1, 1, 0);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_96[2], 0))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_96[2], -1109.405f, -1688.704f, 3.7501f, 0, 0, 1);
				unk_0x03F4139102BA4AFC(iLocal_96[2], 0.0178f, 0.0525f, -0.4469f, 0.8929f);
			}
		}
		if (iLocal_166 != 3 || !bParam0)
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_96[3]))
			{
				iLocal_96[3] = unk_0xBA715A7BEBA5A1F9(joaat("tribike"), -1111.001f, -1686.629f, 3.9705f, 0f, 1, 1, 0);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_96[3], 0))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_96[3], -1111.001f, -1686.629f, 3.9705f, 0, 0, 1);
				unk_0x03F4139102BA4AFC(iLocal_96[3], -0.0563f, -0.0702f, -0.5377f, 0.8383f);
			}
		}
		if ((iLocal_165 != 4 && iLocal_166 != 4) || !bParam0)
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_96[4]))
			{
				iLocal_96[4] = unk_0xBA715A7BEBA5A1F9(joaat("cruiser"), -1105.606f, -1693.98f, 3.9518f, 0f, 1, 1, 0);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_96[4], 0))
			{
				unk_0xA539EDE8DA5BBC22(iLocal_96[4], -1105.606f, -1693.98f, 3.9518f, 0, 0, 1);
				unk_0x03F4139102BA4AFC(iLocal_96[4], -0.0437f, -0.0759f, -0.4104f, 0.9077f);
				unk_0xD584204572DF0440(iLocal_96[4], 0);
				unk_0x5C65DDDC219B3AA5(iLocal_96[4], 1);
			}
		}
		if (!unk_0xE5965CDF24F93A9F(iLocal_90))
		{
			iLocal_90 = unk_0xA8D58C3AADA2C41C(26, joaat("u_m_m_bikehire_01"), Local_133, fLocal_147, 1, 1);
		}
		unk_0x51BB443B279E4104(iLocal_90);
		unk_0xBC12D08EE7559CCD(iLocal_90, 17, 1);
		unk_0xDC6110E0F8FF9DA0(iLocal_90, 128, 1);
		unk_0xDC6110E0F8FF9DA0(iLocal_90, 1024, 1);
		func_143(&Local_549, 4, iLocal_90, "FAM2BIKEHIRE", 0, 1);
		unk_0x50274A7EACA3133A(iLocal_90, 1);
		unk_0xFF4BEB6CFF55A013(iLocal_90, -2065892691);
		unk_0xA7266A50941DBAEA(iLocal_90, 0);
		unk_0x9DA17163846E32FC(iLocal_90, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_96)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_96[iVar0]))
			{
				unk_0xBED097BB6359F09C(iLocal_96[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			iVar0++;
		}
	}
	if (bParam0)
	{
		iVar2 = 1;
		iVar3 = 0;
		while (iVar3 < iLocal_96)
		{
			if (iVar3 != iLocal_166 && iVar3 != iLocal_165)
			{
				if (!unk_0xE5965CDF24F93A9F(iLocal_96[iVar3]))
				{
					iVar2 = 0;
				}
			}
			iVar3++;
		}
		bVar1 = iVar2;
	}
	else
	{
		bVar1 = (((((unk_0xE5965CDF24F93A9F(iLocal_96[0]) && unk_0xE5965CDF24F93A9F(iLocal_96[1])) && unk_0xE5965CDF24F93A9F(iLocal_96[2])) && unk_0xE5965CDF24F93A9F(iLocal_96[3])) && unk_0xE5965CDF24F93A9F(iLocal_96[4])) && unk_0xE5965CDF24F93A9F(iLocal_90));
	}
	return bVar1;
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77852)
	{
		if (!unk_0xF68107C40359970C(iParam2))
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

void func_144(bool bParam0)
{
	if (!iLocal_540 && !bParam0)
	{
		if (iLocal_70 < 5)
		{
			uLocal_539 = unk_0x2915D98110F23A29(-1120.292f, -1681.018f, 13.274f, -1081.289f, -1706.522f, 1.5344f, 0, 1, 1, 1);
			unk_0x208B14CA225DC5A0(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 0, 0, 1);
			unk_0x84A65E2E9CFB6A77(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 0, 1);
			uLocal_564 = unk_0x7AFC31F33CB9B8D5(-1107.517f, -1692.887f, 4.374f, 4.161f, 13.858f, 4.5f, func_145(36.0244f), 0, 1);
			iLocal_540 = 1;
		}
	}
	else if (iLocal_70 >= 5 || bParam0)
	{
		unk_0x7BACBB4C6A7B18B7(uLocal_539, 0);
		unk_0x13A2865660B9B033(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 1);
		unk_0x84A65E2E9CFB6A77(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 1, 1);
		if (unk_0x046B574E2CF3F2CC(uLocal_564))
		{
			unk_0xB251DDFA99084C56(uLocal_564);
		}
		iLocal_540 = 0;
	}
}

float func_145(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		iVar0 = unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A());
		if (unk_0x55A0C756C4A8220C(iVar0, 0))
		{
			iVar1 = unk_0xAB793EA186AB8DAA(iVar0, 0, 0);
			if (!unk_0xF68107C40359970C(iVar1))
			{
				if (iVar1 != unk_0xE2D3D51028F0428A())
				{
					if (unk_0xA6A089369417736E(iVar1))
					{
						if (!unk_0x60B3C5BE23BF3368(iVar1, unk_0xE2D3D51028F0428A()))
						{
							unk_0xF30F15F203736DE4(iVar1, unk_0xE2D3D51028F0428A(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_147()
{
	if (iLocal_70 != 11)
	{
		iLocal_72 = iLocal_70;
		iLocal_70 = 11;
		if (unk_0x12DD4A0B247D9B4D(uLocal_102))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_102);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_103))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_103);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_104))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_104);
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_105))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_105);
		}
		if (func_177())
		{
			if (!iLocal_555)
			{
				Local_556 = { func_176() };
				func_174();
				iLocal_555 = 1;
				iLocal_583 = 0;
				iLocal_585 = 0;
				iLocal_584 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
	if (iLocal_72 == 1)
	{
		func_103();
		if (!unk_0xF68107C40359970C(iLocal_89))
		{
			if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 625f)
			{
				if ((!iLocal_583 && !unk_0x559C03F53E6937FC()) && !func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_WANTED", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0x320D1840B6DAA1CC();
						iLocal_583 = 1;
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() - iLocal_584) > 15000 && !func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_LOSE", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0x320D1840B6DAA1CC();
					}
				}
			}
			if (func_157(iLocal_89))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_104))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_104);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
			{
				func_155();
				uLocal_104 = func_152(iLocal_89, 0, 145);
			}
			else
			{
				if (!bLocal_176 && !unk_0x559C03F53E6937FC())
				{
					func_151("FM2_JIMGB", 7500, 1);
					bLocal_176 = true;
				}
				if (func_150(iLocal_89, 300f))
				{
					func_104("FM2_JIMAB");
				}
			}
		}
	}
	else if (iLocal_72 == 8)
	{
		if (!unk_0xF68107C40359970C(iLocal_88))
		{
			if (func_157(iLocal_88))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_104))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_104);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
			{
				func_155();
				uLocal_104 = func_152(iLocal_88, 0, 145);
			}
			else
			{
				if (!bLocal_177 && !unk_0x559C03F53E6937FC())
				{
					func_151("FM2_TRAGB", 7500, 1);
					bLocal_177 = true;
				}
				if (func_150(iLocal_88, 300f))
				{
					func_104("FM2_TRAAB");
				}
			}
		}
		if (!iLocal_585)
		{
			iLocal_585 = 1;
		}
	}
	else if (!iLocal_585)
	{
		iLocal_585 = 1;
	}
	if (!func_177())
	{
		func_148(&Local_546);
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
	{
		if (!iLocal_585)
		{
			if (iLocal_72 == 1)
			{
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 625f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_LOSTCOP", 8, 0, 0, 0))
						{
							iLocal_585 = 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_70 = iLocal_72;
			Local_546.f_1 = 0;
			unk_0xBA6C3C5E9E5A9442();
		}
	}
}

void func_148(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (!unk_0xE8F6C1F695B25B91(*uParam0))
		{
			func_149(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_149(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

int func_150(int iParam0, float fParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			if (!unk_0xF68107C40359970C(iParam0))
			{
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1), 1) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_151(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 0);
}

var func_152(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_153(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_154(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_154(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_154(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155()
{
	Global_20151 = 0;
	func_156();
}

void func_156()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

int func_157(int iParam0)
{
	if (unk_0x2F52E009BBC0AFCE(iParam0, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9())))
	{
		if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0x0C285F0981CE9E32(iLocal_89, 0, 1, 0, 0, 0, 0, 1, -1))
			{
				unk_0x6221A52631154EF7(iParam0);
			}
		}
		return 1;
	}
	else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xF23E6F5690771F71(iParam0, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9()));
	}
	if (unk_0x0C285F0981CE9E32(iParam0, 0, 1, 0, 0, 0, 0, 1, -1))
	{
	}
	if (unk_0x0C285F0981CE9E32(iParam0, 0, 1, 0, 0, 0, 0, 0, -1))
	{
	}
	return 0;
}

bool func_158(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_173(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_159(sParam2, iParam3, 0);
}

int func_159(char* sParam0, int iParam1, bool bParam2)
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
					func_172();
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
		if (func_171(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_170();
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
				func_169();
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
				if (func_168())
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
			if (func_167())
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
			func_166();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_165();
		func_160();
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
		func_172();
	}
	return 0;
}

void func_160()
{
	if (!func_161())
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

int func_161()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_164())
	{
		return 0;
	}
	if (func_162(unk_0x9E2D6C50374FCFA9()))
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

bool func_162(int iParam0)
{
	return func_163(iParam0, 20);
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_164()
{
	return -1;
}

void func_165()
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

void func_166()
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

int func_167()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
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

void func_169()
{
	if (func_27(14))
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
		Global_19954 = func_137();
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

void func_170()
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

bool func_171(int iParam0, int iParam1)
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

void func_172()
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

void func_173(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_174()
{
	Global_20151 = 0;
	func_175();
}

void func_175()
{
	if (unk_0x2E5F8A288A954523())
	{
		unk_0x82B0661A78CC39CF();
		Global_22296 = 0;
		unk_0xD681CC2BC1084DB6(1);
		Global_21285 = 6;
		return;
	}
}

struct<6> func_176()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21285 == 4)
	{
		iVar1 = unk_0xBEE29398902B0435();
		iVar1 = (iVar1 + Global_22295);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xE73671E3D37CF79E(&(Global_20153[iVar2 /*6*/])))
			{
				return Global_20153[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xE73671E3D37CF79E(&(Global_20153[iVar3 /*6*/])))
					{
						return Global_20153[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20153[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_177()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	if (unk_0xA829C9A2767AC8EF())
	{
		unk_0x7653D561C9574763(0, 199, 1);
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 1);
			unk_0x9E63031C188793E1();
			unk_0x8FB472886552D737("missfam2_pier");
			unk_0xD69A0C3662175E68(joaat("prop_cigar_01"));
			unk_0xD69A0C3662175E68(joaat("cruiser"));
			if (!unk_0x496531E41FCF5116())
			{
				if (bLocal_174)
				{
					unk_0xD536FD78D8A135F1("family_2_mcs_4", 8);
				}
				else
				{
					unk_0xCB3859A62F123AEF("family_2_mcs_4", 2, 8);
				}
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0x2566F947AAB7B2A7())
			{
				func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
				unk_0x3817498C7B1515DD("Tracy", iLocal_88, 0);
				unk_0x6D690024C2BB1053("Tracy", 1, 1, 0, 0);
				unk_0x6D690024C2BB1053("Tracy", 0, 0, 0, 0);
				if (unk_0xA37204C64473B324("FAMILY_2_JETSKI_GO_TO_BEACH"))
				{
					unk_0x0AF8D3A06BB92903("FAMILY_2_JETSKI_GO_TO_BEACH");
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
			unk_0x3817498C7B1515DD("Tracy", iLocal_88, 0);
			unk_0x6D690024C2BB1053("Tracy", 1, 1, 0, 0);
			unk_0x6D690024C2BB1053("Tracy", 0, 0, 0, 0);
			if (func_199())
			{
				func_155();
				func_191(1, 1, 1, 0, 0, 0, 0);
				if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					unk_0x371D594409A68A18(iLocal_92, 0, 1, 0);
					unk_0x48F297980C708DB7(iLocal_92, "Michaels_seashark", 0, 0, 0);
				}
				if (!unk_0xF68107C40359970C(iLocal_88))
				{
					unk_0x48F297980C708DB7(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					unk_0x48F297980C708DB7(iLocal_89, "Jimmy", 0, 0, 0);
				}
				unk_0xBA6C3C5E9E5A9442();
				unk_0x3410421C60BF7143(1);
				func_155();
				unk_0x1CF3F44FC2EB9F99("FAM2_COMPLETE");
				unk_0xF44EE79112016B61(0);
				unk_0x6CD556854F94F942(4);
				unk_0x8FB472886552D737("missfam2_pier");
				unk_0xD69A0C3662175E68(joaat("prop_cigar_01"));
				unk_0xD69A0C3662175E68(joaat("cruiser"));
				func_190();
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(500);
			}
			unk_0xEF071F2FF93BC37F(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 100f);
			func_189(1, 1);
			unk_0x6CE6C3A402C3E20C("AvoidMissionCompleteDelay", 0);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0x6F2E1326DB60D575("MICHAEL", 0))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					unk_0x9F65B3BAFA302A65(iLocal_92, 1084227584);
					unk_0x3F6DE6DBA9A99FEA(iLocal_92, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_89))
				{
					unk_0x05CB75C0837196F9(&iLocal_89);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_88))
				{
					unk_0x05CB75C0837196F9(&iLocal_88);
				}
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1607.251f, -1138.103f, 1.1443f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 262.2968f);
			}
			unk_0x9B8B94A1196F345F(1.5f);
			if (unk_0xA829C9A2767AC8EF() && unk_0x1AF916E03DDF8D8A())
			{
				settimera(0);
				unk_0x859006DB870314C5(0);
			}
			if (unk_0x496531E41FCF5116())
			{
				if (unk_0xC10FE9051DBB0E91() > 31400)
				{
					if (!unk_0xCB1EF1E7B77ADF4C() && !unk_0xA829C9A2767AC8EF())
					{
						unk_0x859006DB870314C5(1500);
					}
					unk_0x7653D561C9574763(0, 18, 1);
				}
			}
			if (!unk_0x496531E41FCF5116())
			{
				unk_0x94953C3FF0664F66(0);
				unk_0x080C97B891E2F3AA(0, 1065353216);
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				if (!unk_0xCB1EF1E7B77ADF4C() && !unk_0xA829C9A2767AC8EF())
				{
					unk_0x859006DB870314C5(500);
				}
				unk_0x8F70948CB5539BEB();
				iLocal_159++;
			}
			break;
		
		case 5:
			if (unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0x1CF3F44FC2EB9F99("FAM2_STOP");
				if (unk_0xE5965CDF24F93A9F(iLocal_95))
				{
					func_447(iLocal_95, -1060.518f, -1691.88f, 3.5097f, 185.4265f, 24, 0);
				}
				unk_0xB954D6528BFADFE8(unk_0xE2D3D51028F0428A(), 0);
				unk_0xB954D6528BFADFE8(unk_0xE2D3D51028F0428A(), 3);
				unk_0xB954D6528BFADFE8(unk_0xE2D3D51028F0428A(), 2);
				while (!func_383(0, 1))
				{
					wait(0);
					unk_0x7653D561C9574763(0, 199, 1);
				}
				settimera(0);
				unk_0x9D2ACCF306F3A0C5("smboat");
				iLocal_159 = 100;
			}
			break;
		
		case 100:
			unk_0x9E63031C188793E1();
			func_186(-1850.139f, -1250.253f, 8.59f, -120.1799f, 1);
			unk_0x8FB472886552D737("missfam2_pier");
			unk_0xD69A0C3662175E68(joaat("prop_cigar_01"));
			unk_0xD69A0C3662175E68(joaat("cruiser"));
			while ((!unk_0x6F940C2636C076AD("missfam2_pier") || !unk_0x0152AA00FA3130F1(joaat("prop_cigar_01"))) || !unk_0x0152AA00FA3130F1(joaat("cruiser")))
			{
				wait(0);
				unk_0x7653D561C9574763(0, 199, 1);
			}
			unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 0);
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1850.139f, -1250.253f, 8.59f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 134.28f);
			iLocal_208 = unk_0xBA715A7BEBA5A1F9(joaat("cruiser"), -1846.573f, -1214.731f, 12.5755f, 0f, 1, 1, 0);
			unk_0x03F4139102BA4AFC(iLocal_208, -0.0155f, -0.0834f, -0.306f, 0.9483f);
			unk_0x9F65B3BAFA302A65(iLocal_208, 1084227584);
			unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
			iLocal_207 = unk_0x0E536D72AB30F4C8(joaat("prop_cigar_01"), -1850.139f, -1250.253f, 8.59f, 1, 1, 0);
			unk_0x9A97DC6DBC7B223D(iLocal_207, unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422), 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			unk_0x2D649DA6DC187D35("cs_cig_smoke", iLocal_207, 0.05f, 0f, 0f, 0f, 0f, 90f, 1065353216, 0, 0, 0);
			uLocal_206 = unk_0xAE96F9AFF21228DC(26379945, 1);
			unk_0x15F5DB94F871E803(uLocal_206, -1852.002f, -1250.224f, 8.9706f, -3.6975f, 0f, -120.1799f, 45f, 0, 1, 1, 2);
			unk_0x15F5DB94F871E803(uLocal_206, -1852.087f, -1250.395f, 8.9706f, -1.3266f, 0f, -102.4498f, 45f, 10000, 1, 1, 2);
			unk_0x43F21FA00A1CE779(1, 0);
			if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("mission_stat_watcher")) > 0)
			{
				func_189(1, 1);
				while (!Global_78112)
				{
					wait(0);
					unk_0x7653D561C9574763(0, 199, 1);
				}
				while (Global_78112)
				{
					wait(0);
					unk_0x7653D561C9574763(0, 199, 1);
				}
			}
			else
			{
				wait(3000);
			}
			unk_0xF96094A43D443C41(-1850.15f, -1250.253f, 8.625f, 5f, 0);
			uLocal_205 = unk_0x8F5F4164BF5FB513(-1850.15f, -1250.253f, 8.625f, 0f, 0f, 134.28f, 2);
			unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_205, "missfam2_pier", "pier_lean_toss_cigarette", 1000f, -4f, 0, 0, 1148846080, 0);
			unk_0x850D4EF3D40FB068(true, 0, 3000, 1, 0, 0);
			settimera(0);
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
			if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 0);
			}
			if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(1500);
			}
			iLocal_159++;
			break;
		
		case 101:
			if (unk_0xCE2C78E9FC0B01E3(iLocal_205) && unk_0x54DE1614490C2A83(iLocal_205) > 0.227f)
			{
				unk_0xE4084DC6AF8BE020("cs_cig_exhale_nose", unk_0xE2D3D51028F0428A(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 102:
			if (unk_0xCE2C78E9FC0B01E3(iLocal_205) && unk_0x54DE1614490C2A83(iLocal_205) > 0.563f)
			{
				unk_0x15F5DB94F871E803(uLocal_206, unk_0x97A9BB81C66772B5(uLocal_206), unk_0xE42645792657F001(uLocal_206, 2), unk_0x703CB0B4057DDDF5(uLocal_206), 0, 1, 1, 2);
				if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) != 4)
				{
					unk_0x15F5DB94F871E803(uLocal_206, -1852.922f, -1252.698f, 9.3524f, -2.9046f, 0f, -46.5763f, 50f, 4000, 1, 1, 2);
				}
				else
				{
					unk_0x15F5DB94F871E803(uLocal_206, -1851.685f, -1251.438f, 9.3524f, -0.0547f, 0.0543f, -38.2308f, 50f, 4000, 1, 1, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 103:
			if (unk_0xE5965CDF24F93A9F(iLocal_207) && unk_0xE85F749F6D5C809E(iLocal_207))
			{
				if (unk_0x54DE1614490C2A83(iLocal_205) > 0.711f)
				{
					unk_0xE6451C2F193342C7(iLocal_207, 1, 1);
					unk_0xB96633932C330B51(iLocal_207, Vector(8.3737f, -1250.913f, -1852.43f) - Vector(9.2628f, -1250.44f, -1850.899f));
				}
			}
			if (unk_0xCE2C78E9FC0B01E3(iLocal_205) && unk_0x54DE1614490C2A83(iLocal_205) > 0.768f)
			{
				unk_0xE4084DC6AF8BE020("cs_cig_exhale_mouth", unk_0xE2D3D51028F0428A(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 104:
			if (unk_0xCE2C78E9FC0B01E3(iLocal_205) && unk_0x54DE1614490C2A83(iLocal_205) > 0.7116f)
			{
				unk_0xE4084DC6AF8BE020("cs_cig_exhale_mouth", unk_0xE2D3D51028F0428A(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				func_185(&uLocal_521, unk_0xE2D3D51028F0428A(), 0, 1069547520, 1000, 1000, 700, 0, 1045220557);
				iLocal_159++;
			}
			break;
		
		case 105:
			if (unk_0xCE2C78E9FC0B01E3(iLocal_205))
			{
				if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
				{
					if (unk_0x876B1078E90C91CB(uLocal_206))
					{
						if (unk_0x54DE1614490C2A83(iLocal_205) > 0.85f && func_181(&uLocal_521, 0, 1, 1, 0, 0, 0))
						{
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
							if (unk_0x876B1078E90C91CB(uLocal_206))
							{
								unk_0x94953C3FF0664F66(0);
								unk_0x080C97B891E2F3AA(0, 1065353216);
								unk_0x850D4EF3D40FB068(false, 1, 1000, 1, 0, 0);
								unk_0x588DDCB644C6486A(uLocal_206, 0);
							}
						}
					}
				}
				if (unk_0x54DE1614490C2A83(iLocal_205) > 0.98f)
				{
					if (unk_0x876B1078E90C91CB(uLocal_206))
					{
						unk_0x94953C3FF0664F66(0);
						unk_0x080C97B891E2F3AA(0, 1065353216);
						unk_0x850D4EF3D40FB068(false, 1, 1000, 1, 0, 0);
						unk_0x588DDCB644C6486A(uLocal_206, 0);
					}
					unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
					unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
					unk_0x43F21FA00A1CE779(0, 100);
					if (unk_0xE5965CDF24F93A9F(iLocal_207))
					{
						unk_0x4BDA5AFD88C085EB(&iLocal_207);
					}
					settimera(0);
					iLocal_159++;
				}
			}
			break;
		
		case 106:
			if (timera() > 100)
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
				func_179(0, 0);
				func_587();
			}
			break;
	}
}

void func_179(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_62692)
	{
		Global_62692 = iParam1;
	}
	if (bParam0)
	{
		if ((func_140(0) && Global_78098.f_1 == 1) && func_180(Global_78098))
		{
		}
		else
		{
			Global_62690 = 1;
		}
	}
	if (Global_112915.f_9085 || func_140(0))
	{
		iVar0 = func_139();
		iVar1 = Global_90726[iVar0 /*5*/];
		uVar2 = Global_78121.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_112915.f_9085)
			{
			}
			return;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_90726[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_90726[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_90726[iVar0 /*5*/].f_1), 4);
		unk_0xCED9E32812D6C7C7(&Global_78100, 1);
		Global_78116 = uVar2;
		Global_78117 = unk_0x320D1840B6DAA1CC();
	}
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_183();
			if (!unk_0x55B23FE400FCEA6B(uParam0->f_5, 0))
			{
				func_182(uParam0);
				Var0 = { unk_0x524171C8263E7C3E() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xC35FBD95659582C4(uParam0->f_5) * FtoV(unk_0x51109C28352EC9A3()) };
				}
				Var1 = { unk_0x37B78BEF7C4625D4(uParam0->f_5, Var0) };
				Var2 = { unk_0x52BD0FA2342C7246(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0x63A8BF5E6C2BF85C(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.x)), (cos(Var3.f_2) * cos(Var3.x)), sin(Var3.x) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.x)), (cos(Var4.f_2) * cos(Var4.x)), sin(Var4.x) };
				fVar7 = unk_0x07C8C8B0CBD44D3B();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xAE96F9AFF21228DC(1775630800, 0);
				}
				uParam0->f_1 = unk_0xAE96F9AFF21228DC(26379945, 1);
				if (bParam1)
				{
					unk_0x3FB84450A94CB528(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					unk_0xDEE4F5F0B93BE664(uParam0->f_1, Var0);
				}
				unk_0x93150D31CE38FE75(uParam0->f_1, Var2, 2);
				unk_0x0A18C027350D3C19(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0xAE96F9AFF21228DC(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x3FB84450A94CB528(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xDEE4F5F0B93BE664(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x93150D31CE38FE75(uParam0->f_2, Var2, 2);
				unk_0x0A18C027350D3C19(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xAE96F9AFF21228DC(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x3FB84450A94CB528(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xDEE4F5F0B93BE664(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x93150D31CE38FE75(uParam0->f_4, Var2, 2);
					unk_0x0A18C027350D3C19(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x6C12D23212020231(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x6C12D23212020231(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x6C12D23212020231(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xADB0920102000613(uParam0->f_3, iParam6);
					unk_0xDD786B89B15AA63F(uParam0->f_3, 1);
				}
				else
				{
					unk_0x889B4F9D52E23DEE(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x850D4EF3D40FB068(true, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x320D1840B6DAA1CC();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_183();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9DCF157443EA30D6("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9DCF157443EA30D6("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9DCF157443EA30D6("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
						}
						unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_182(uParam0);
					unk_0x850D4EF3D40FB068(false, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_182(var uParam0)
{
	if (unk_0x876B1078E90C91CB(uParam0->f_1))
	{
		unk_0x588DDCB644C6486A(uParam0->f_1, 0);
	}
	if (unk_0x876B1078E90C91CB(uParam0->f_2))
	{
		unk_0x588DDCB644C6486A(uParam0->f_2, 0);
	}
	if (unk_0x876B1078E90C91CB(uParam0->f_3))
	{
		unk_0x588DDCB644C6486A(uParam0->f_3, 0);
	}
	if (unk_0x876B1078E90C91CB(uParam0->f_4))
	{
		unk_0x588DDCB644C6486A(uParam0->f_4, 0);
	}
}

void func_183()
{
	unk_0x16E09CCC0BD508DA();
	func_184();
}

void func_184()
{
	Global_22691.f_134 = 1;
}

void func_185(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

void func_186(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_187())
	{
		unk_0x7D5C42A7CDB11DB6(Param0, 0f, 0f, 0f);
		unk_0xB37C5672EE23D04F(Param0, cos((fParam1 + 90f)), sin((fParam1 + 90f)), 0f, 25f, 0);
		settimera(0);
		iVar0 = unk_0x320D1840B6DAA1CC();
		while (!unk_0x8A6AB093D1EE5368() && (unk_0x320D1840B6DAA1CC() - iVar0) < 12000)
		{
			wait(0);
		}
		if (bParam2)
		{
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam1);
		}
		unk_0x5639E771F6085BF6();
		unk_0xEE3A19A84A10F8B9();
	}
}

bool func_187()
{
	return unk_0xE2D0C323A1AE5D85(Global_99974.f_20, 13);
}

void func_188()
{
	Global_62696 = 0;
}

void func_189(int iParam0, int iParam1)
{
	Global_78120 = iParam1;
	if (Global_62684)
	{
		return;
	}
	if (Global_62711)
	{
		Global_62711 = 0;
		return;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_62684)
		{
		}
		Global_62710 = iParam0;
		Global_62684 = 1;
		Global_62695 = 1;
	}
}

void func_190()
{
	Global_62696 = 1;
}

void func_191(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_198(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_167())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_197(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_198(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_197(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_195(unk_0x9E2D6C50374FCFA9())) && !func_193(unk_0x9E2D6C50374FCFA9(), 0)) && !func_192()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_195(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_192()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_193(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_194(-1, 0) == 8;
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

int func_194(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_195(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return 1;
	}
	if (func_196())
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

bool func_196()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_197(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_198(int iParam0)
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

bool func_199()
{
	bool bVar0;
	
	bVar0 = unk_0xC6398AABC3E92273();
	if (!Global_77851)
	{
		if (!bVar0)
		{
			Global_77851 = 1;
		}
	}
	return bVar0;
}

void func_200()
{
	bool bVar0;
	bool bVar1;
	
	unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
	if (!unk_0xF68107C40359970C(iLocal_88))
	{
		if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_209) < 10f)
		{
			unk_0x7653D561C9574763(0, 22, 1);
		}
		if (iLocal_159 < 100)
		{
			if (func_217(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0x55A0C756C4A8220C(iLocal_92, 0))
			{
				iLocal_159 = 100;
			}
		}
		if (!unk_0xA37204C64473B324("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			unk_0x66B27A59829491D3("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		switch (iLocal_159)
		{
			case 0:
				if ((!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
				{
					if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
					{
						unk_0x5A7ACD1CDF509B0D(500);
					}
					if (!unk_0xA37204C64473B324("FAMILY_2_JETSKI_GO_TO_BEACH"))
					{
						unk_0x66B27A59829491D3("FAMILY_2_JETSKI_GO_TO_BEACH");
					}
					Local_545.f_1 = 0;
					iLocal_630 = 0;
					fLocal_631 = 0f;
					iLocal_170 = 0;
					iLocal_178 = 0;
					iLocal_159++;
					if (iLocal_155)
					{
						iLocal_159 = -1;
					}
				}
				break;
			
			case -1:
				unk_0x13A763A67BA2A95B("smboat");
				while (!unk_0x8DD54478CFA35F08("smBoat"))
				{
					unk_0x6D3F703013ED87D3("M_DaddysLittleGirl", 0);
					wait(0);
				}
				iLocal_159 = 1;
				break;
			
			case 1:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (!func_177() && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
				{
					unk_0x2DA9F9D8E5530E75(5f, 5f, 4);
					unk_0xC89EA639A6F338A6(iLocal_88);
					unk_0xBED097BB6359F09C(iLocal_92, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x8576657A629C4B0A(0.2f);
					if (!iLocal_155)
					{
						func_149("FM2_DRIVE", 5000, 1);
					}
					settimera(0);
					if (iLocal_155)
					{
						iLocal_159 = -2;
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case -2:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (func_158(&Local_549, cLocal_202, "FAM2_TALK1", 8, 0, 0, 0))
				{
					iLocal_155 = 0;
					iLocal_159 = -3;
				}
				break;
			
			case -3:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (!func_177())
				{
					settimera(0);
					func_149("FM2_DRIVE", 5000, 1);
					iLocal_159 = 2;
				}
				break;
			
			case 2:
				if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					if (timera() > 5000 || (timera() > 2000 && unk_0x5D851A9195129CE9(203) == 0))
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0) && !func_177())
						{
							if (!unk_0xB15EF36AD557325B(iLocal_88, unk_0xE2D3D51028F0428A()))
							{
								unk_0xF30F15F203736DE4(iLocal_88, unk_0xE2D3D51028F0428A(), -1, 16, 2);
							}
							iLocal_186 = unk_0x320D1840B6DAA1CC();
							iLocal_518 = 0;
							iLocal_519 = 0;
							iLocal_554 = 0;
							iLocal_555 = 0;
							iLocal_159++;
						}
					}
					func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				}
				break;
			
			case 3:
				bVar0 = ((unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0)) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0));
				switch (iLocal_630)
				{
					case 0:
						if (!bLocal_191 && !bLocal_193)
						{
							if (func_213())
							{
								func_211("FAM2_TALK2", bVar0);
							}
							else
							{
								func_211("FAM2_TALK2b", bVar0);
							}
						}
						else
						{
							func_211("FAM2_KILTALK", bVar0);
						}
						if ((!func_177() && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)) && !iLocal_555)
						{
							iLocal_554 = 0;
							iLocal_555 = 0;
							unk_0xC89EA639A6F338A6(iLocal_88);
							iLocal_630++;
						}
						break;
					
					case 1:
						if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_118) > 10000f)
						{
							if (((unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0)) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)) && unk_0x207D53F9E0190691(iLocal_92) < 5f)
							{
								fLocal_631 = (fLocal_631 + unk_0x51109C28352EC9A3());
							}
							else if (fLocal_631 > 0f)
							{
								fLocal_631 = (fLocal_631 - (unk_0x51109C28352EC9A3() * 5f));
							}
						}
						if (fLocal_631 > 10f)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_GOBACK", 8, 0, 0, 0))
							{
								fLocal_631 = 0f;
							}
						}
						if (!bLocal_191 && !bLocal_193)
						{
						}
						break;
				}
				func_210();
				if (!unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
				{
					if (unk_0x174CED88B97C78D9(iLocal_88, -1794415470) != 1)
					{
						unk_0xB486640392EC50BB(iLocal_88, iLocal_92, 20000, 0, 2f, 1, 0);
					}
				}
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
						{
							unk_0xBA6C3C5E9E5A9442();
							func_155();
							if (!bLocal_177)
							{
								func_151("FM2_WAIT2", 7500, 1);
								bLocal_177 = true;
							}
							uLocal_104 = func_152(iLocal_88, 0, 145);
						}
						if (unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
						}
					}
					else if (unk_0x12DD4A0B247D9B4D(uLocal_104))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_104);
					}
					if (func_217(&iLocal_92, &uLocal_151, &iLocal_152))
					{
						if (vdist(unk_0x6B62510F212526DC(iLocal_92, 1), Local_119) < 50f)
						{
							bVar1 = true;
						}
					}
					if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_140, Local_141, fLocal_142, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_119 + Vector(0.3f, 0f, 0f), 1f, 1f, 2.5f, 1, 1, 0)) && unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_92))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						bLocal_174 = true;
						iLocal_159++;
					}
				}
				if (!bVar1)
				{
					if (func_217(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0x55A0C756C4A8220C(iLocal_92, 0))
					{
						iLocal_159 = 100;
					}
					else if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_118) < 10000f)
					{
						if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
						{
							if (unk_0x07B3D89ED0C66854(iLocal_88) < 2f)
							{
								iLocal_159 = 100;
							}
						}
					}
				}
				if (iLocal_159 < 100)
				{
					func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				}
				break;
			
			case 4:
				func_174();
				if (func_208(iLocal_92, 5f, 1, 1056964608, 0, 1, 0) || !unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_92))
				{
					func_174();
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 256);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (!func_177())
				{
					unk_0x2DA9F9D8E5530E75(4f, 3f, 4);
					func_207(9);
				}
				break;
			
			case 100:
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_118) < pow(100f, 2f))
				{
					if (!unk_0xF68107C40359970C(iLocal_89))
					{
						unk_0x3410421C60BF7143(1);
						Local_556 = { func_176() };
						func_155();
						iLocal_555 = 1;
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						sLocal_201 = "family_2_mcs_4p2";
						iLocal_178 = 0;
						iLocal_519 = 0;
						unk_0x6D23F8C14190D353();
						unk_0xCB3859A62F123AEF("family_2_mcs_4", 2, 8);
						settimera(0);
						if (unk_0x12DD4A0B247D9B4D(uLocal_105))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_105);
						}
						uLocal_102 = func_152(iLocal_89, 0, 145);
						func_149("FM2_ONFOOT", 7500, 1);
						if (!unk_0x2F52E009BBC0AFCE(iLocal_88, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9())))
						{
							unk_0xF23E6F5690771F71(iLocal_88, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9()));
							unk_0x950D2D7EA1BFF54C(iLocal_88, 0);
						}
						bLocal_177 = false;
						iLocal_159++;
					}
				}
				else if (unk_0x55B23FE400FCEA6B(iLocal_92, 0))
				{
					func_104("FM2_SKIDED");
				}
				else
				{
					func_104("FM2_SKIGRN");
				}
				break;
			
			case 101:
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					if (func_157(iLocal_88))
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							uLocal_102 = func_152(iLocal_89, 0, 145);
						}
						if (unk_0x12DD4A0B247D9B4D(uLocal_104))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_104);
						}
						if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_89, 1)) < 30f)
						{
							settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						if (unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
						}
						if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
						{
							if (!bLocal_177)
							{
								func_151("FM2_TRAGB", 7500, 1);
							}
							uLocal_104 = func_152(iLocal_88, 0, 145);
						}
					}
				}
				if (!bLocal_191 && !bLocal_193)
				{
					bVar0 = false;
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (!unk_0xD5C6B5E3B93A5EDC(iLocal_88, 0) && vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_88, 1)) < 400f)
						{
							bVar0 = true;
						}
					}
					else if (unk_0xD5C6B5E3B93A5EDC(iLocal_88, 0) && unk_0xB3FF0049C1FD38EC(iLocal_88, 0) == unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0))
					{
						bVar0 = true;
					}
				}
				break;
			
			case 102:
				if (timera() > 1000)
				{
					bLocal_174 = false;
					iLocal_159++;
				}
				break;
			
			case 103:
				func_174();
				if (!func_177())
				{
					func_207(9);
				}
				break;
		}
		if (iLocal_159 > 0)
		{
			func_204(9);
		}
		func_95(sLocal_201, Local_118, 100f, &iLocal_178);
		if (iLocal_178)
		{
			if (!iLocal_519)
			{
				if (unk_0x2566F947AAB7B2A7())
				{
					func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
					unk_0x3817498C7B1515DD("Tracy", iLocal_88, 0);
					unk_0x6D690024C2BB1053("Tracy", 1, 1, 0, 0);
					unk_0x6D690024C2BB1053("Tracy", 0, 0, 0, 0);
					iLocal_519 = 1;
				}
			}
		}
		if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
		{
			if (!func_177() && (unk_0x320D1840B6DAA1CC() - iLocal_169) > 7500)
			{
				func_202(iLocal_88, "GENERIC_SHOCKED_MED", "Tracey", 3);
				iLocal_169 = unk_0x320D1840B6DAA1CC();
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_89))
		{
			if (!iLocal_518)
			{
				if (!unk_0xF68107C40359970C(iLocal_88))
				{
					if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 5625f && vdist2(unk_0x6B62510F212526DC(iLocal_88, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 225f)
					{
						func_174();
						if (!func_177())
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_SEES", 8, 0, 0, 0))
							{
								iLocal_518 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_170)
		{
			case 0:
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_118) < 90000f)
				{
					if (!unk_0x0318E2EE6FB4563F(Local_118, 5f))
					{
						unk_0x7A997A0A971D305F(Local_118, 4f, 1, 0, 0, 0);
						if (!unk_0xE5965CDF24F93A9F(iLocal_89))
						{
							func_201(&iLocal_89, 14, Local_118, fLocal_148);
						}
						iLocal_170 = 2;
					}
					else
					{
						if (!unk_0xE5965CDF24F93A9F(iLocal_89))
						{
							func_201(&iLocal_89, 14, -1611.595f, -1121.009f, 1.544f, 42.8275f);
						}
						iLocal_170++;
					}
				}
				break;
			
			case 1:
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					unk_0x50274A7EACA3133A(iLocal_89, 1);
					unk_0x7D1424753688EE7A(iLocal_89, Local_118, 1f, -1, 0.25f, 512, fLocal_148);
					iLocal_170++;
				}
				break;
			
			case 2:
				if (!unk_0xF68107C40359970C(iLocal_89) && unk_0x8F41785F110B0DA0(iLocal_89, Local_118, Global_22, 0, 1, 0))
				{
					if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < pow(200f, 2f))
					{
						if (!unk_0x2E7F5417D4F4DD69(iLocal_89, unk_0xE2D3D51028F0428A(), 60f))
						{
							if (unk_0x174CED88B97C78D9(iLocal_89, 242628503) != 1)
							{
								unk_0x03A927199A2DFE46(iLocal_89);
								unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 16, 2);
								unk_0xA888F8CC04F25CC8(&uLocal_520);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 16, 2);
								unk_0xC963A45B50851768(uLocal_520);
								unk_0x8ACADA903FCAA42F(iLocal_89, uLocal_520);
								unk_0x7461D7C5BA953BC7(&uLocal_520);
							}
						}
						else if (unk_0x174CED88B97C78D9(iLocal_89, 242628503) != 1)
						{
							if (!unk_0xF68107C40359970C(iLocal_89))
							{
								unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 16, 2);
							}
						}
					}
				}
				break;
		}
		if (iLocal_70 != 8)
		{
			if (unk_0xA37204C64473B324("FAMILY_2_JETSKI_GO_TO_BEACH"))
			{
				unk_0x0AF8D3A06BB92903("FAMILY_2_JETSKI_GO_TO_BEACH");
			}
		}
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
		{
			func_147();
		}
	}
}

void func_201(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	if (!unk_0xE5965CDF24F93A9F(*iParam0))
	{
		if (iParam1 == 15)
		{
			while (!func_96(Param2, fParam3))
			{
				wait(0);
			}
		}
		else
		{
			while (!func_470(Param2, fParam3))
			{
				wait(0);
			}
		}
		if (!unk_0xF68107C40359970C(*iParam0))
		{
			unk_0x03A927199A2DFE46(*iParam0);
		}
	}
	else if (!unk_0xF68107C40359970C(*iParam0))
	{
		unk_0xC64B6E13A6A7F517(*iParam0, Param2, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(*iParam0, fParam3);
	}
}

void func_202(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(iParam0, sParam1, sParam2, func_203(iParam3), 0);
}

int func_203(int iParam0)
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

int func_204(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar2[3];
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar2[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("cruiser");
			iVar1[3] = func_205(15, 1);
			break;
		
		case 2:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 3:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 4:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			break;
		
		case 5:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			iVar1[2] = joaat("seashark");
			iVar1[3] = joaat("a_m_y_musclbeac_01");
			break;
		
		case 6:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			break;
		
		case 7:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("csb_porndudes");
			iVar1[3] = joaat("ig_jimmydisanto");
			break;
		
		case 8:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
		
		case 9:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar1[iVar0] != 0)
		{
			unk_0xD69A0C3662175E68(iVar1[iVar0]);
			if (!unk_0x0152AA00FA3130F1(iVar1[iVar0]))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar2[iVar0] != 0)
		{
			unk_0xB018BAA4ED9AA217(iVar2[iVar0], "fam2");
			if (!unk_0xF777CAA43F4B281A(iVar2[iVar0], "fam2"))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_205(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (!func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_206(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_206(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	Var1.f_88 = 1;
	Var1.f_84 = 255;
	Var1.f_85 = 255;
	Var1.f_86 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("tribike");
			}
			else
			{
				iVar0 = joaat("tribike");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("tribike"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("issi2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("issi2");
			}
			switch (iVar0)
			{
				case joaat("issi2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "P3RSEUS", 16);
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("sentinel2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("faggio2");
			}
			else
			{
				iVar0 = joaat("sentinel2");
			}
			switch (iVar0)
			{
				case joaat("sentinel2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "KRYST4L", 16);
					break;
				
				case joaat("faggio2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("speedo");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("emperor");
			}
			else
			{
				iVar0 = joaat("speedo");
			}
			switch (iVar0)
			{
				case joaat("speedo"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_27), "LAMAR G", 16);
					break;
				
				case joaat("emperor"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("adder");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_10 = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_27), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("oracle2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_27), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("asterope");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("sanchez");
			}
			else
			{
				iVar0 = joaat("asterope");
			}
			switch (iVar0)
			{
				case joaat("asterope"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("sanchez"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_207(int iParam0)
{
	iLocal_172 = 0;
	iLocal_70 = iParam0;
}

int func_208(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_209(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_209(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

void func_210()
{
	if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && (unk_0x320D1840B6DAA1CC() - iLocal_167) > 5000)
	{
		if ((((((((unk_0x55A0C756C4A8220C(iLocal_92, 0) && !unk_0xF68107C40359970C(iLocal_88)) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0)) && unk_0xD8F9DF94CD871327(iLocal_92)) && unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()) != iLocal_92) && vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_88, 1)) < 35f) && !unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) && Local_545.f_1)
		{
			if ((unk_0x320D1840B6DAA1CC() - iLocal_186) > 6000)
			{
				if (func_158(&Local_549, cLocal_202, "FAM2_GETOFF", 8, 0, 0, 0))
				{
					iLocal_186 = unk_0x320D1840B6DAA1CC();
				}
			}
		}
	}
}

void func_211(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_554)
		{
			if (func_158(&Local_549, cLocal_548, sParam0, 8, 0, 0, 0))
			{
				iLocal_555 = 0;
				iLocal_554 = 1;
			}
		}
		if (iLocal_555)
		{
			if (func_212(&Local_549, cLocal_548, sParam0, &Local_556, 8, 0, 0))
			{
				iLocal_555 = 0;
			}
		}
	}
	if (!bParam1)
	{
		if (!iLocal_555)
		{
			Local_556 = { func_176() };
			func_174();
			iLocal_555 = 1;
		}
	}
}

bool func_212(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_173(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_159(sParam2, iParam4, 0);
}

int func_213()
{
	if (Global_99974 == 10 || Global_99974 == 9)
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, var uParam1, struct<3> Param2, var uParam3, var uParam4)
{
	if (unk_0x55A0C756C4A8220C(*iParam0, 0) && unk_0xE5965CDF24F93A9F(*iParam0))
	{
		if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *iParam0, 0))
		{
			if (!unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xBA6C3C5E9E5A9442();
				if (!uParam4->f_1)
				{
					iLocal_167 = unk_0x320D1840B6DAA1CC();
					func_148(uParam4);
				}
				*uParam1 = func_216(*iParam0, 0, 0);
			}
			if (unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				unk_0xFFD8EB5462B07B59(uParam3);
			}
		}
		else
		{
			if (!unk_0x12DD4A0B247D9B4D(*uParam3))
			{
				*uParam3 = func_215(Param2, 1);
			}
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xBA6C3C5E9E5A9442();
				unk_0xFFD8EB5462B07B59(uParam1);
			}
		}
	}
}

var func_215(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_154(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam1);
	return uVar0;
}

int func_216(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_217(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 1;
	if (!unk_0x55B23FE400FCEA6B(*iParam0, 0))
	{
		if (!unk_0xD8F9DF94CD871327(*iParam0) && unk_0x207D53F9E0190691(*iParam0) < 2f)
		{
			*uParam1 = (*uParam1 + unk_0x51109C28352EC9A3());
			return *uParam1 > 3f;
		}
		else
		{
			*uParam1 = 0f;
		}
	}
	return 0;
}

void func_218()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Local_572)
	{
		switch (Local_572[iVar0 /*8*/].f_2)
		{
			case 0:
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_572[iVar0 /*8*/].f_4) < 2500f)
				{
					Var1 = { func_220(iVar0) };
					if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_572[iVar0 /*8*/].f_4, Var1.f_3, 0, 1, 0))
					{
						if (func_219(iVar0, joaat("squalo"), Var1))
						{
							unk_0x2DA9F9D8E5530E75(2f, 8f, 3);
							Local_572[iVar0 /*8*/].f_2++;
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0xF68107C40359970C(Local_572[iVar0 /*8*/].f_1) && unk_0x55A0C756C4A8220C(Local_572[iVar0 /*8*/], 0))
				{
					if (unk_0xE896049AD1887FF0(Local_572[iVar0 /*8*/]) && !unk_0x8F33D7496432068D(Local_572[iVar0 /*8*/]))
					{
						if ((unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0) || (unk_0x55A0C756C4A8220C(iLocal_99[0], 0) && unk_0x77A43AFA9AAEC041(iLocal_99[0], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0))) || (unk_0x55A0C756C4A8220C(iLocal_99[1], 0) && unk_0x77A43AFA9AAEC041(iLocal_99[1], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0)))
						{
							unk_0x40D396D9ECF69ADD(Local_572[iVar0 /*8*/], 5000, 786469, 1);
						}
					}
				}
				if ((unk_0xE5965CDF24F93A9F(Local_572[iVar0 /*8*/]) && unk_0xE5965CDF24F93A9F(Local_572[iVar0 /*8*/].f_1)) && (((!unk_0xF68107C40359970C(Local_572[iVar0 /*8*/].f_1) && !unk_0xE896049AD1887FF0(Local_572[iVar0 /*8*/])) || unk_0xF68107C40359970C(Local_572[iVar0 /*8*/].f_1)) || !unk_0x55A0C756C4A8220C(Local_572[iVar0 /*8*/], 0)))
				{
					if (vdist2(unk_0x6B62510F212526DC(Local_572[iVar0 /*8*/].f_1, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 10000f && vdist2(unk_0x6B62510F212526DC(Local_572[iVar0 /*8*/], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 10000f)
					{
						unk_0xB3822DB3D538C8F3(&(Local_572[iVar0 /*8*/].f_1));
						unk_0x3D81769BEC61BFF8(&(Local_572[iVar0 /*8*/]));
					}
				}
				break;
		}
		iVar0++;
	}
}

int func_219(int iParam0, int iParam1, struct<3> Param2)
{
	unk_0xD69A0C3662175E68(iParam1);
	unk_0xD69A0C3662175E68(joaat("a_m_y_genstreet_01"));
	unk_0xB018BAA4ED9AA217(iParam0 + 1, "fam2amb");
	if ((unk_0x0152AA00FA3130F1(iParam1) && unk_0x0152AA00FA3130F1(joaat("a_m_y_genstreet_01"))) && unk_0xF777CAA43F4B281A(iParam0 + 1, "fam2amb"))
	{
		Local_572[iParam0 /*8*/] = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, 0f, 1, 1, 0);
		Local_572[iParam0 /*8*/].f_1 = unk_0x487C17B41938052C(Local_572[iParam0 /*8*/], 26, joaat("a_m_y_genstreet_01"), -1, 1, 1);
		unk_0x50274A7EACA3133A(Local_572[iParam0 /*8*/].f_1, 1);
		unk_0x2F4DB11A0DB3685A(Local_572[iParam0 /*8*/], iParam0 + 1, "fam2amb", 1);
		unk_0x3B2646B62E7BBE11(Local_572[iParam0 /*8*/], 2);
		unk_0xF1A23B343DFEDFD0(iParam1);
		unk_0xF1A23B343DFEDFD0(joaat("a_m_y_genstreet_01"));
		return 1;
	}
	return 0;
}

struct<10> func_220(int iParam0)
{
	struct<10> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -935.5378f, -1633.737f, 0.3306f };
			Var0.f_3 = { 62.75f, 48.75f, 11f };
			Var0.f_6 = { -997.8688f, -1383.004f, 0.406f };
			Var0.f_9 = 314.1291f;
			break;
		
		case 1:
			Var0 = { -928.3334f, -1359.194f, 0.3531f };
			Var0.f_3 = { 28.25f, 34.75f, 11f };
			Var0.f_6 = { -723.3589f, -1350.093f, 0.3208f };
			Var0.f_9 = 294.1011f;
			break;
	}
	return Var0;
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	
	if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
	{
		if ((!iLocal_895 && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)) && vmag2(unk_0xC35FBD95659582C4(iLocal_92)) > 324f)
		{
			iLocal_895 = 1;
		}
		if ((iLocal_895 && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && vmag2(unk_0xC35FBD95659582C4(iLocal_92)) < 225f)
		{
			iLocal_895 = 0;
		}
		if (!iLocal_896)
		{
			if (!unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_92))
			{
				iLocal_896 = 1;
			}
		}
		else
		{
			iLocal_896 = 0;
		}
		if ((iLocal_896 && iLocal_895) && unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
		{
			unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), 0, 0);
		}
	}
	iLocal_73 = func_256();
	if (iLocal_73 < 7 && iLocal_73 > iLocal_75)
	{
		iLocal_75 = iLocal_73;
	}
	if (iLocal_73 != iLocal_74)
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_76, iLocal_73))
		{
			unk_0xCED9E32812D6C7C7(&iLocal_76, iLocal_73);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_99[0]))
		{
			if (unk_0xE896049AD1887FF0(iLocal_99[0]))
			{
				unk_0x90F8F7D270431FAE(iLocal_99[0]);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_99[1]))
		{
			if (unk_0xE896049AD1887FF0(iLocal_99[1]))
			{
				unk_0x90F8F7D270431FAE(iLocal_99[1]);
			}
		}
	}
	if (unk_0x8F33D7496432068D(iLocal_92) && timera() > 500)
	{
		unk_0x90F8F7D270431FAE(iLocal_92);
	}
	iLocal_74 = iLocal_73;
	if (!unk_0xE5965CDF24F93A9F(iLocal_107))
	{
		unk_0xD69A0C3662175E68(joaat("prop_ld_test_01"));
		if (unk_0x0152AA00FA3130F1(joaat("prop_ld_test_01")))
		{
			iLocal_107 = unk_0x0E536D72AB30F4C8(joaat("prop_ld_test_01"), Local_118, 1, 1, 0);
			unk_0x959E1626CBC7D38A(iLocal_107, 0, 0);
			unk_0x1C2ED929474DC6FE(iLocal_107, 0, 0);
			unk_0x5C65DDDC219B3AA5(iLocal_107, 1);
		}
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0xC0F70A3CDEC87ECE(0);
			if ((((func_255() && func_254(0, 0)) && func_254(1, 0)) && func_253()) && func_252())
			{
				if (!unk_0xF68107C40359970C(iLocal_91[0]))
				{
					unk_0x7734082B0EDB0BE0(iLocal_91[0], unk_0xE2D3D51028F0428A(), 300f, -1, 0, 0);
					unk_0xFF4BEB6CFF55A013(iLocal_91[0], iLocal_79);
				}
				if (!unk_0xF68107C40359970C(iLocal_88))
				{
					unk_0x8FB472886552D737("missfam2_tracy_jetski");
					unk_0x2EE80CD0EAEB9B5B(iLocal_92, 1000f);
					unk_0xBED097BB6359F09C(iLocal_92, 1, 0, 0, 1, 0, 0, 0, 0);
					unk_0x40A4FA5C4B5DA318(iLocal_88, 0);
					unk_0xF160248D9083ED0C(iLocal_88, 5000, 0);
					unk_0xBC12D08EE7559CCD(iLocal_88, 20, 0);
					unk_0xBC12D08EE7559CCD(iLocal_88, 2, 0);
					unk_0x50274A7EACA3133A(iLocal_88, 1);
					unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
					unk_0x9210F85E9CD785F1(iLocal_88, 1);
				}
				unk_0x9972EFADA7A2A47D(5, iLocal_79, 1862763509);
				func_251(&Local_549, 2);
				func_143(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
				func_250(1);
				func_249();
				func_248();
				iLocal_190 = 0;
				fLocal_887 = 0f;
				fLocal_891 = 0f;
				iLocal_876 = 0;
				bLocal_877 = false;
				iLocal_875[0] = 0;
				iLocal_875[1] = 0;
				bLocal_191 = false;
				iLocal_192 = 0;
				iLocal_194 = 0;
				iLocal_195 = 0;
				bLocal_193 = false;
				iLocal_878 = 0;
				bLocal_894 = false;
				iLocal_77 = 0;
				iLocal_78 = 6;
				iLocal_75 = 0;
				unk_0x1CF3F44FC2EB9F99("FAM2_ON_JETSKI");
				unk_0x5337C7397BD43696(iLocal_99[0], 1);
				unk_0x5337C7397BD43696(iLocal_99[1], 1);
				unk_0x1B70646075A0F088(iLocal_99[0], 101, "famtwo", 15f, 262144);
				unk_0x1B70646075A0F088(iLocal_99[1], 102, "famtwo", 15f, 262144);
				unk_0x1B70646075A0F088(iLocal_92, 1, "famtwoplayer", 24f, 262144);
				unk_0x2A375326652F1B50(iLocal_99[0], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0x2A375326652F1B50(iLocal_99[1], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0xB11C0CF5CCDFE10A(unk_0xE2D3D51028F0428A(), 3);
				if (unk_0xE5965CDF24F93A9F(iLocal_92) && unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					unk_0x211C581B8AACD11C("OFF");
					unk_0xD501428969A52C0F(iLocal_92, "OFF");
					unk_0x5337C7397BD43696(iLocal_92, 1);
				}
				if (!unk_0xA37204C64473B324("FAMILY_2_JETSKI_CHASE"))
				{
					unk_0x66B27A59829491D3("FAMILY_2_JETSKI_CHASE");
				}
				unk_0x371D594409A68A18(iLocal_92, 1, 1, 0);
				unk_0x9B8A09AAD1CFEFB3(2);
				settimerb(0);
				unk_0x2DA9F9D8E5530E75(0f, 8f, 4);
				func_247(0, 4f);
				iLocal_76 = 0;
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case -1:
			unk_0x13A763A67BA2A95B("smboat");
			while (!unk_0x8DD54478CFA35F08("smBoat"))
			{
				wait(0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(500);
			}
			if (unk_0x876B1078E90C91CB(uLocal_112))
			{
				if (timerb() > 1000)
				{
					unk_0x588DDCB644C6486A(uLocal_112, 0);
				}
			}
			if (!unk_0xE5965CDF24F93A9F(Local_549[7 /*10*/]) || unk_0xF68107C40359970C(Local_549[7 /*10*/]))
			{
				if (!unk_0xF68107C40359970C(iLocal_100[0]))
				{
					func_143(&Local_549, 7, iLocal_100[0], "FAM2MAN2", 0, 1);
				}
				else if (!unk_0xF68107C40359970C(iLocal_100[1]))
				{
					func_143(&Local_549, 7, iLocal_100[1], "FAM2MAN2", 0, 1);
				}
			}
			if (!iLocal_888)
			{
				if (bLocal_890)
				{
					iVar0 = 0;
					while (iVar0 <= 1)
					{
						if (!unk_0xF68107C40359970C(iLocal_100[iVar0]))
						{
							unk_0x395228F7A14C6543(iLocal_100[iVar0], 0);
							unk_0x3DAB02AAC9E9EC02(iLocal_100[iVar0], 2);
							unk_0x348A212511C78DBF(iLocal_100[iVar0], 0);
							unk_0x8913620F26B565CE(iLocal_100[iVar0], 2055493265);
							unk_0xC97BA48BC273A1F3(iLocal_100[iVar0], 50);
						}
						iVar0++;
					}
					bLocal_890 = false;
				}
				if ((((((iLocal_73 == 7 && iLocal_190 < 100) || iLocal_874[0]) || iLocal_874[1]) || iLocal_73 < iLocal_75) || iLocal_889) || (unk_0x55A0C756C4A8220C(iLocal_92, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)))
				{
					if (!unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
					{
						iLocal_562[0] = unk_0x320D1840B6DAA1CC();
						iLocal_562[1] = (unk_0x320D1840B6DAA1CC() - 1500);
						iLocal_888 = 1;
					}
				}
			}
			else
			{
				if (fLocal_891 > 10f && fLocal_891 < 12f)
				{
				}
				else if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					if ((!unk_0xF68107C40359970C(iLocal_100[0]) && vdist2(unk_0x6B62510F212526DC(iLocal_100[0], 1), unk_0x6B62510F212526DC(iLocal_92, 1)) < 225f) || (!unk_0xF68107C40359970C(iLocal_100[1]) && vdist2(unk_0x6B62510F212526DC(iLocal_100[1], 1), unk_0x6B62510F212526DC(iLocal_92, 1)) < 225f))
					{
						fLocal_891 = (fLocal_891 + unk_0x51109C28352EC9A3());
					}
				}
				if (!bLocal_890)
				{
					iVar1 = 0;
					while (iVar1 <= 1)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_100[iVar1]) && !unk_0xF68107C40359970C(iLocal_100[iVar1]))
						{
							unk_0x395228F7A14C6543(iLocal_100[iVar1], 1);
							unk_0x3DAB02AAC9E9EC02(iLocal_100[iVar1], 2);
							unk_0x348A212511C78DBF(iLocal_100[iVar1], 20);
							unk_0x8913620F26B565CE(iLocal_100[iVar1], 1566631136);
							unk_0xC97BA48BC273A1F3(iLocal_100[iVar1], 40);
							if (unk_0xE5965CDF24F93A9F(iLocal_99[iVar1]))
							{
								if (unk_0xE896049AD1887FF0(iLocal_99[iVar1]))
								{
									unk_0x90F8F7D270431FAE(iLocal_99[iVar1]);
								}
							}
						}
						iVar1++;
					}
					bLocal_890 = true;
				}
				else if ((iLocal_73 != 2 || (iLocal_73 == 2 && iLocal_77 == 0)) && !iLocal_876)
				{
					func_245();
				}
				if (((((!iLocal_874[0] && !iLocal_874[1]) && iLocal_73 != 7) && iLocal_73 >= iLocal_75) && !iLocal_889) && (unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)))
				{
					iLocal_888 = 0;
				}
				if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
				{
					iLocal_888 = 0;
				}
			}
			if (!unk_0xF68107C40359970C(iLocal_91[0]))
			{
				if (vdist2(unk_0x6B62510F212526DC(iLocal_91[0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 10000f)
				{
					unk_0xB3822DB3D538C8F3(&(iLocal_91[0]));
				}
			}
			func_242();
			func_229();
			if (iLocal_190 < 100)
			{
				if (!iLocal_194)
				{
					if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4) && unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
					{
						iLocal_194 = 1;
					}
				}
				else if (!iLocal_195)
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_SHOOT", 8, 0, 0, 0))
					{
						iLocal_195 = 1;
					}
				}
				if (!bLocal_191 || !bLocal_193)
				{
					bLocal_193 = true;
					iVar2 = 0;
					while (iVar2 < iLocal_100)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_100[iVar2]))
						{
							if (unk_0xF68107C40359970C(iLocal_100[iVar2]) || unk_0x55B23FE400FCEA6B(iLocal_100[iVar2], 0))
							{
								bLocal_191 = true;
							}
							else
							{
								bLocal_193 = false;
							}
						}
						iVar2++;
					}
				}
				if ((bLocal_191 && !iLocal_192) && !bLocal_193)
				{
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
					{
						func_155();
						if (iLocal_190 < 50 || iLocal_190 >= 100)
						{
							iLocal_163 = iLocal_190;
						}
						if (unk_0x12DD4A0B247D9B4D(uLocal_105))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_105);
						}
						iLocal_190 = 50;
						iLocal_192 = 1;
					}
				}
				if (iLocal_73 == 1)
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						if (unk_0x559C03F53E6937FC() && !func_177())
						{
							unk_0xBA6C3C5E9E5A9442();
						}
					}
				}
				if (iLocal_190 < 5)
				{
					if (iLocal_73 == 1)
					{
						iLocal_190 = 5;
					}
				}
				func_227();
			}
			if (iLocal_190 != 60 && iLocal_190 != 61)
			{
				if (unk_0x55A0C756C4A8220C(iLocal_92, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
				{
					if (iLocal_190 < 50 || iLocal_190 >= 100)
					{
						iLocal_163 = iLocal_190;
					}
					iLocal_190 = 60;
				}
			}
			if (unk_0x12DD4A0B247D9B4D(uLocal_102) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
			{
				if (iLocal_73 == 1)
				{
					unk_0xFFD8EB5462B07B59(&uLocal_102);
				}
			}
			switch (iLocal_190)
			{
				case 0:
					if (unk_0x6F940C2636C076AD("missfam2_tracy_jetski"))
					{
						if (!unk_0xF68107C40359970C(iLocal_88))
						{
							if (!unk_0xFCF559C8631ABED7(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 3))
							{
								if (func_226(0))
								{
									unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_158(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0x1CF3F44FC2EB9F99("FAM2_COMING");
									unk_0xF30F15F203736DE4(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									settimera(0);
								}
							}
							else if (unk_0xD01FAFCE275C94F3(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a") > 0.12f)
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0x1CF3F44FC2EB9F99("FAM2_COMING");
									iLocal_190++;
									settimera(0);
								}
							}
						}
					}
					break;
				
				case 1:
					if (timera() > 1000)
					{
						Var3 = { Local_210 - unk_0x6B62510F212526DC(iLocal_92, 1) };
						Var4 = { unk_0x63BEA94AB58D4E6D(iLocal_92) };
						fVar5 = unk_0x952F3FA2E7880565(Var4.x, Var4.f_1, Var3.x, Var3.f_1);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
						if (fVar5 < -180f)
						{
							fVar5 = (fVar5 + 360f);
						}
						if (fVar5 < 0f)
						{
							if (fVar5 > -90f)
							{
								if (!unk_0xF68107C40359970C(iLocal_88))
								{
									unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_point_right", 4f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
						}
						else if (fVar5 < 90f)
						{
							if (!unk_0xF68107C40359970C(iLocal_88))
							{
								unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_point_left", 4f, -8f, -1, 0, 0, 0, 0, 0);
							}
						}
					}
					if ((((!func_177() || timera() > 3000) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0)) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0)) && !unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						uLocal_102 = func_215(Local_210, 0);
						iLocal_190++;
					}
					break;
				
				case 2:
					if (func_158(&Local_549, cLocal_202, "FAM2_MRESP", 8, 0, 0, 0))
					{
						unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Local_210, 7500, 1, 2);
						settimera(0);
						iLocal_190++;
					}
					break;
				
				case 3:
					if (!func_177())
					{
						func_151("FM2_CHASE1", 7500, 1);
						settimera(0);
						iLocal_190++;
					}
					break;
				
				case 4:
					if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_210) > 900f)
					{
						func_225("FAM2_OLREM", "", 9000);
					}
					break;
				
				case 5:
					if (((unk_0xE5965CDF24F93A9F(iLocal_100[0]) && !unk_0xF68107C40359970C(iLocal_100[0])) && unk_0xE323E6755636A70E(iLocal_100[0])) || ((unk_0xE5965CDF24F93A9F(iLocal_100[1]) && !unk_0xF68107C40359970C(iLocal_100[1])) && unk_0xE323E6755636A70E(iLocal_100[1])))
					{
						iLocal_190++;
					}
					break;
				
				case 6:
					if (!func_177())
					{
						if (!unk_0xF68107C40359970C(iLocal_88))
						{
							if (!unk_0xFCF559C8631ABED7(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 3))
							{
								if (func_226(0))
								{
									unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_158(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0x1CF3F44FC2EB9F99("FAM2_SHOOTING");
									unk_0xF30F15F203736DE4(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									settimera(0);
								}
							}
							else if (unk_0xD01FAFCE275C94F3(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c") > 0.12f)
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0x1CF3F44FC2EB9F99("FAM2_SHOOTING");
									iLocal_190++;
									settimera(0);
								}
							}
						}
					}
					break;
				
				case 7:
					if (!func_177())
					{
						func_151("FM2_CHASE3", 7500, 1);
						settimerb(0);
						iLocal_190++;
					}
					break;
				
				case 8:
					if (timerb() > 5000)
					{
						if (!func_177())
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_LOSEM", 8, 0, 0, 0))
							{
								iLocal_190++;
							}
						}
					}
					break;
				
				case 9:
					if (!func_177())
					{
						if (func_222(&Local_549, cLocal_202, "FAM2_WHO", "FAM2_WHO_3", "FAM2_WHO", "FAM2_WHO_5", "FAM2_WHO", "FAM2_WHO_7", "FAM2_WHO", "FAM2_WHO_9", 8, 0, 0))
						{
							iLocal_190++;
						}
					}
					break;
				
				case 10:
					func_225("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					if (iLocal_73 == 2)
					{
						iLocal_190++;
					}
					break;
				
				case 11:
					if (func_158(&Local_549, cLocal_202, "FAM2_LOSET", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 12:
					func_225("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					break;
				
				case 50:
					func_174();
					if (func_158(&Local_549, cLocal_202, "FAM2_KILLONE", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 51:
					if (func_158(&Local_549, cLocal_202, "FAM2_KILLER", 8, 0, 0, 0))
					{
						iLocal_190 = iLocal_163;
					}
					break;
				
				case 60:
					func_155();
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_105))
						{
							uLocal_105 = func_216(iLocal_92, 0, 0);
							func_148(&Local_545);
						}
						if (unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
						}
						iLocal_881 = unk_0x320D1840B6DAA1CC();
						iLocal_190++;
					}
					break;
				
				case 61:
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
					{
						if (!unk_0x559C03F53E6937FC())
						{
							if ((((!unk_0xF68107C40359970C(iLocal_88) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_88, 20f, 20f, 20f, 0, 1, 0)) && unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A())) && !unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 1))
							{
								if ((unk_0x320D1840B6DAA1CC() - iLocal_881) > 6000)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_FALL", 8, 0, 0, 0))
									{
										iLocal_881 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
						{
							func_155();
							if (((iLocal_73 == 0 || iLocal_73 == 7) && !unk_0x12DD4A0B247D9B4D(uLocal_102)) && iLocal_163 < 5)
							{
								uLocal_102 = func_215(Local_210, 0);
							}
							if (unk_0x12DD4A0B247D9B4D(uLocal_105))
							{
								unk_0xFFD8EB5462B07B59(&uLocal_105);
							}
							unk_0xBA6C3C5E9E5A9442();
							iLocal_190 = iLocal_163;
						}
					}
					break;
				
				case 100:
					if (unk_0x12DD4A0B247D9B4D(uLocal_101[0]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_101[0]));
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_101[1]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_101[1]));
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
					}
					func_174();
					if (!func_177())
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_88))
							{
								if (!unk_0xFCF559C8631ABED7(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 3))
								{
									unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (unk_0xD01FAFCE275C94F3(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d") > 0.25f)
								{
									if (unk_0xA37204C64473B324("FAMILY_2_JETSKI_CHASE"))
									{
										unk_0x0AF8D3A06BB92903("FAMILY_2_JETSKI_CHASE");
									}
									unk_0xC89EA639A6F338A6(iLocal_88);
									iLocal_190++;
								}
							}
						}
					}
					break;
				
				case 101:
					if (bLocal_193)
					{
						sVar6 = "FAM2_KILLTWO";
					}
					else if (bLocal_191)
					{
						sVar6 = "FAM2_ESCAPE";
					}
					else
					{
						sVar6 = "FAM2_LOST";
					}
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_211(sVar6, bLocal_894);
					if ((iLocal_554 && !func_177()) && !iLocal_555)
					{
						unk_0x2DA9F9D8E5530E75(5f, 5f, 3);
						iLocal_554 = 0;
						iLocal_190++;
					}
					break;
				
				case 102:
					if (bLocal_193 || bLocal_191)
					{
						sVar7 = "FAM2_KILLER2";
					}
					else
					{
						sVar7 = "FAM2_TALK1";
					}
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_211(sVar7, bLocal_894);
					if ((iLocal_554 && !func_177()) && !iLocal_555)
					{
						unk_0xAFC1FBF3F6AE7B9A("missfam2_tracy_jetski");
						unk_0xB11C0CF5CCDFE10A(unk_0xE2D3D51028F0428A(), 0);
						iLocal_554 = 0;
						func_207(8);
					}
					break;
			}
			if ((((!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0) && !unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A())) && !unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_88, 1)) > 30f)
			{
				iLocal_159 = 2;
			}
			if (!unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
			{
				iLocal_159 = 3;
			}
			if (!unk_0x55A0C756C4A8220C(iLocal_92, 0) || func_217(&iLocal_92, &uLocal_151, &iLocal_152))
			{
				iLocal_159 = 4;
			}
			if ((((iLocal_190 < 100 && ((unk_0xF68107C40359970C(iLocal_100[0]) || unk_0x55B23FE400FCEA6B(iLocal_100[0], 0)) || iLocal_875[0])) && ((unk_0xF68107C40359970C(iLocal_100[1]) || unk_0x55B23FE400FCEA6B(iLocal_100[1], 0)) || iLocal_875[1])) && iLocal_190 != 60) && iLocal_190 != 61)
			{
				unk_0x9B8A09AAD1CFEFB3(0);
				unk_0x1CF3F44FC2EB9F99("FAM2_LOST_HIM");
				iLocal_190 = 100;
			}
			if (iLocal_159 > 1)
			{
				unk_0xBA6C3C5E9E5A9442();
				func_174();
				iVar8 = 0;
				while (iVar8 < iLocal_100)
				{
					if (((!unk_0xF68107C40359970C(iLocal_100[iVar8]) && unk_0xE5965CDF24F93A9F(iLocal_99[iVar8])) && unk_0x55A0C756C4A8220C(iLocal_99[iVar8], 0)) && unk_0xF6F5D18EF8EAB859(iLocal_100[iVar8], iLocal_99[iVar8], 0))
					{
						unk_0x03A927199A2DFE46(iLocal_100[iVar8]);
						if (unk_0xE896049AD1887FF0(iLocal_99[iVar8]))
						{
							unk_0x90F8F7D270431FAE(iLocal_99[iVar8]);
						}
					}
					iVar8++;
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_102))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_102);
				}
				settimera(0);
			}
			break;
		
		case 2:
			if (timera() > 2000)
			{
				func_104("FM2_TRAAB");
			}
			break;
		
		case 3:
			if (timera() > 2000)
			{
				func_104("FM2_TRAFELL");
			}
			break;
		
		case 4:
			if (timera() > 1000)
			{
				unk_0xB11C0CF5CCDFE10A(unk_0xE2D3D51028F0428A(), 3);
				if (unk_0x55B23FE400FCEA6B(iLocal_92, 0))
				{
					func_104("FM2_SKIDED");
				}
				else
				{
					func_104("FM2_SKIGRN");
				}
			}
			break;
	}
}

bool func_222(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	var uVar0;
	var uVar1;
	
	func_173(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_224(4, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return func_223(&uVar0, &uVar1, iParam10, 0);
}

int func_223(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam2 > Global_21287)
			{
				if (bParam3 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
				}
				else
				{
					func_172();
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
		if (func_171(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_170();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22281 = Global_22282;
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_20904.f_370 = Global_22274;
		Global_21281 = Global_21282;
		Global_21283 = Global_21284;
		if (Global_21543 == 0)
		{
			Global_21439[0 /*6*/] = { Global_21465[0 /*6*/] };
			Global_21439[1 /*6*/] = { Global_21465[1 /*6*/] };
			Global_21491[0 /*6*/] = { Global_21517[0 /*6*/] };
			Global_21491[1 /*6*/] = { Global_21517[1 /*6*/] };
			Global_21452[0 /*6*/] = { Global_21478[0 /*6*/] };
			Global_21452[1 /*6*/] = { Global_21478[1 /*6*/] };
			Global_21504[0 /*6*/] = { Global_21530[0 /*6*/] };
			Global_21504[1 /*6*/] = { Global_21530[1 /*6*/] };
		}
		if (Global_21291)
		{
			unk_0xB0550BC91B0159D6(&Global_7824, 20);
			unk_0xB0550BC91B0159D6(&Global_7825, 17);
			unk_0xB0550BC91B0159D6(&Global_7826, 0);
			if (bParam3)
			{
				func_169();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_168())
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
					if (Global_21543 == 0)
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
			}
			if (func_167())
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
			}
			func_166();
			Global_21295 = bParam3;
		}
		Global_21287 = iParam2;
		if (Global_21281 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21281)
			{
				StringCopy(&(Global_20904.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20904.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20151 = 0;
		func_165();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21287 || iParam2 == Global_21287)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_172();
	}
	return 0;
}

void func_224(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21282 = iParam0;
	Global_21292 = 0;
	Global_21299 = 0;
	Global_21294 = 0;
	Global_22276 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_225(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_892 > iLocal_881)
	{
		iParam2 = 3000;
	}
	if (((unk_0x320D1840B6DAA1CC() - iLocal_881) > iParam2 && !func_177()) && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0))
	{
		iVar0 = unk_0x5853B15F78E1A265(1, 3);
		if (((!unk_0xF68107C40359970C(iLocal_100[0]) && unk_0x55A0C756C4A8220C(iLocal_99[0], 0)) && unk_0x77A43AFA9AAEC041(iLocal_99[0], iLocal_92, 20f, 20f, 5f, 0, 1, 0)) && iLocal_892 < iLocal_881)
		{
			iVar0 = unk_0x5853B15F78E1A265(1, 6);
		}
		if (iVar0 == 1 && bLocal_191)
		{
			iVar0 = 2;
		}
		if (iVar0 == 1 && !unk_0xACC32B78196FBC2A(sParam1))
		{
			if (func_158(&Local_549, cLocal_202, sParam1, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0x320D1840B6DAA1CC();
			}
		}
		else if (iVar0 == 2)
		{
			if (unk_0x3C57C2F07FEE34D2(sParam0, "FAM2_TSHOUT"))
			{
				if (func_226(0))
				{
					iVar1 = unk_0x5853B15F78E1A265(0, 4);
					switch (iVar1)
					{
						case 0:
							unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 1:
							unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 2:
							unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_g", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 3:
							unk_0x49D97B076E3590AC(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_h", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						}
					}
			}
			if (bLocal_191)
			{
				if (!unk_0x3C57C2F07FEE34D2(sParam0, "FAM2_ONE"))
				{
					sParam0 = "FAM2_ONE";
				}
			}
			if (func_158(&Local_549, cLocal_202, sParam0, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0x320D1840B6DAA1CC();
			}
		}
		else if (iVar0 >= 3)
		{
			if (unk_0xE5965CDF24F93A9F(Local_549[7 /*10*/]) && !unk_0xF68107C40359970C(Local_549[7 /*10*/]))
			{
				if (func_158(&Local_549, cLocal_202, "FAM2_BGUY2", 8, 0, 0, 0))
				{
					iLocal_892 = unk_0x320D1840B6DAA1CC();
				}
			}
		}
	}
}

int func_226(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xF68107C40359970C(iLocal_100[iParam0]) && !unk_0xF68107C40359970C(iLocal_88))
	{
		Var0 = { unk_0x6B62510F212526DC(iLocal_100[iParam0], 1) - unk_0x6B62510F212526DC(iLocal_88, 1) };
		Var1 = { unk_0x63BEA94AB58D4E6D(iLocal_88) };
		if (unk_0x48053974ED6F63CE(unk_0x952F3FA2E7880565(Var1.x, Var1.f_1, Var0.x, Var0.f_1)) >= 60f)
		{
			return 1;
		}
	}
	return 0;
}

void func_227()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (bLocal_877)
	{
		if (iLocal_876)
		{
			fVar1 = 3f;
			fVar2 = 50f;
		}
		else if (iLocal_73 == 7)
		{
			fVar1 = 5f;
			fVar2 = 250f;
		}
		else
		{
			fVar1 = 5f;
			fVar2 = 100f;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (func_228(iVar0, fVar2, fVar1))
			{
				iLocal_875[iVar0] = 1;
				unk_0x05CB75C0837196F9(&(iLocal_100[iVar0]));
				unk_0xD59CC8123FD1A789(&(iLocal_99[iVar0]));
				if (unk_0x12DD4A0B247D9B4D(uLocal_101[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_101[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_876)
	{
		iLocal_876 = 0;
	}
	if (!iLocal_875[0] || !iLocal_875[1])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (!iLocal_875[iVar0])
			{
				if ((unk_0xE5965CDF24F93A9F(iLocal_100[iVar0]) && (unk_0xF68107C40359970C(iLocal_100[iVar0]) || unk_0x55B23FE400FCEA6B(iLocal_100[iVar0], 0))) || !unk_0xE5965CDF24F93A9F(iLocal_100[iVar0]))
				{
					iLocal_875[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_228(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0xF68107C40359970C(iLocal_100[iParam0]))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
		{
			fVar0 = vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_100[iParam0], 1));
			if ((fVar0 > (fParam1 * fParam1) && unk_0x4D21C9FB671ED18F(iLocal_100[iParam0])) || fVar0 > 90000f)
			{
				if (fVar0 > 90000f)
				{
					fLocal_893[iParam0] = (fLocal_893[iParam0] + (unk_0x51109C28352EC9A3() * 10f));
				}
				fLocal_893[iParam0] = (fLocal_893[iParam0] + unk_0x51109C28352EC9A3());
			}
			else if (fLocal_893[iParam0] > 0f)
			{
				fLocal_893[iParam0] = (fLocal_893[iParam0] - (unk_0x51109C28352EC9A3() * 3f));
			}
			else
			{
				fLocal_893[iParam0] = 0f;
			}
		}
		if (fLocal_893[iParam0] > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_229()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xF68107C40359970C(iLocal_100[iVar0]))
		{
			if ((!unk_0xD5C6B5E3B93A5EDC(iLocal_100[iVar0], 0) && unk_0xD8F9DF94CD871327(iLocal_100[iVar0])) && vdist2(unk_0x6B62510F212526DC(iLocal_100[iVar0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 100f)
			{
				unk_0x978C27CCE53D6781(iLocal_100[iVar0], joaat("weapon_sniperrifle"));
			}
		}
		iVar0++;
	}
	switch (iLocal_73)
	{
		case 0:
			if (timerb() > 5000)
			{
				func_240(0, &uLocal_640, 101, "famtwo", 1, 0);
				func_240(1, &uLocal_653, 102, "famtwo", 1, 0);
			}
			if (timerb() < 2000)
			{
				unk_0x7653D561C9574763(0, 76, 1);
				unk_0x7653D561C9574763(0, 72, 1);
				unk_0x7653D561C9574763(0, 69, 1);
				unk_0x7653D561C9574763(0, 23, 1);
				unk_0x7653D561C9574763(0, 27, 1);
				unk_0x7653D561C9574763(0, 31, 1);
				unk_0x7653D561C9574763(0, 30, 1);
				unk_0x7653D561C9574763(0, 26, 1);
			}
			if (fLocal_887 < 1f)
			{
				fLocal_887 = (fLocal_887 + 0.01f);
			}
			else
			{
				fLocal_887 = 1f;
			}
			break;
		
		case 1:
			func_240(0, &uLocal_666, 201, "famtwo", 0, 0);
			func_240(1, &uLocal_712, 202, "famtwo", 0, 0);
			break;
		
		case 2:
			iLocal_77 = func_239();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_237(&(Local_808[0 /*25*/]), 1, func_238(iLocal_77));
					func_237(&(Local_808[1 /*25*/]), 2, func_238(iLocal_77));
					if (unk_0xE5965CDF24F93A9F(iLocal_99[0]))
					{
						if (unk_0xE896049AD1887FF0(iLocal_99[0]))
						{
							unk_0x90F8F7D270431FAE(iLocal_99[0]);
						}
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_99[1]))
					{
						if (unk_0xE896049AD1887FF0(iLocal_99[1]))
						{
							unk_0x90F8F7D270431FAE(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_234(0);
			if (!iLocal_889)
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_99[0], 0))
				{
					if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_99[0], 1)) < 100f && unk_0x207D53F9E0190691(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
				if (!unk_0x55B23FE400FCEA6B(iLocal_99[1], 0))
				{
					if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_99[1], 1)) < 100f && unk_0x207D53F9E0190691(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
			}
			else if (unk_0x207D53F9E0190691(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			if (iLocal_77 == 0)
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_99[1], 0))
				{
					if (func_232(unk_0x6B62510F212526DC(iLocal_99[1], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_232(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[1] = 1;
					}
				}
				if (!unk_0x55B23FE400FCEA6B(iLocal_99[0], 0))
				{
					if (func_232(unk_0x6B62510F212526DC(iLocal_99[0], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_232(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[0] = 1;
					}
				}
				func_240(1, &uLocal_809, 1, "famtwoCanalsAlt", 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_100[1]))
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1061.247f, -1027.52f, -1.839872f, -1158.562f, -864.5836f, 17.98512f, 250f, 0, 1, 0))
				{
					Var1 = { -1191.48f, -1002.427f, 0f };
				}
				else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1061.247f, -1027.52f, -1.839872f, -1006.939f, -1120.256f, 6.144058f, 250f, 0, 1, 0))
				{
					Var1 = { -1137.652f, -1097.164f, 0f };
				}
				else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -900.0117f, -1305.718f, 15.90007f, -1006.939f, -1120.256f, -8.855943f, 250f, 0, 1, 0))
				{
					Var1 = { -1083.993f, -1189.703f, 0f };
				}
				if (!func_231(Var1))
				{
					if (!unk_0x8F41785F110B0DA0(iLocal_99[1], Var1, 2.5f, 2.5f, 2f, 0, 1, 0))
					{
						Var2 = { Vector(-1.599754f, -1082.671f, -1114.952f) + Vector(17.75f, 133.25f, 81.25f) };
						Var3 = { Vector(-1.599754f, -1082.671f, -1114.952f) - Vector(17.75f, 133.25f, 81.25f) };
						if (unk_0x2EE5FFF3E1E3400D(Var3.x, Var3.f_1, Var2.x, Var2.f_1))
						{
							if (unk_0x174CED88B97C78D9(iLocal_100[1], -1817882002) != 1)
							{
								unk_0x3B8F94419979A0B1(iLocal_100[1], iLocal_99[1], Var1, 10f, 0, joaat("seashark"), 262144, 1f, 3f);
							}
						}
						if (!unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(iLocal_99[1], 1), 2f) && !unk_0x0318E2EE6FB4563F(Var1, 2f))
						{
							unk_0xC64B6E13A6A7F517(iLocal_99[1], Var1, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(iLocal_99[1], 214f);
						}
					}
				}
			}
			break;
		
		case 3:
			if ((((!unk_0xF68107C40359970C(iLocal_100[1]) && !unk_0x55B23FE400FCEA6B(iLocal_100[1], 0)) && unk_0x55A0C756C4A8220C(iLocal_99[1], 0)) && unk_0xF6F5D18EF8EAB859(iLocal_100[1], iLocal_99[1], 0)) && unk_0x55A0C756C4A8220C(iLocal_92, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
				{
					if (unk_0x174CED88B97C78D9(iLocal_100[1], 579380604) != 1 && unk_0x174CED88B97C78D9(iLocal_100[1], 579380604) != 2)
					{
						unk_0x9286A110A3FD81F1(iLocal_100[1], unk_0xE2D3D51028F0428A());
					}
				}
				if (unk_0x77A43AFA9AAEC041(iLocal_100[1], unk_0xE2D3D51028F0428A(), 10f, 10f, 5f, 0, 1, 0))
				{
					iLocal_878 = 1;
				}
			}
			break;
		
		case 4:
			iLocal_77 = func_239();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_237(&(Local_808[0 /*25*/]), 1, func_238(iLocal_77));
					func_237(&(Local_808[1 /*25*/]), 2, func_238(iLocal_77));
					if (unk_0xE5965CDF24F93A9F(iLocal_99[1]))
					{
						if (unk_0xE896049AD1887FF0(iLocal_99[1]))
						{
							unk_0x90F8F7D270431FAE(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_234(1);
			if (!iLocal_889)
			{
				if ((vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_99[0], 1)) < 100f || vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_99[1], 1)) < 100f) && unk_0x207D53F9E0190691(iLocal_92) < 7f)
				{
					iLocal_889 = 1;
				}
			}
			else if (unk_0x207D53F9E0190691(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			break;
		
		case 5:
			func_240(0, &uLocal_758, 301, "famtwo", 0, 0);
			func_240(1, &uLocal_783, 302, "famtwo", 0, 0);
			break;
		
		case 6:
			if (!iLocal_876)
			{
				func_240(0, &uLocal_834, 401, "famtwo", 1, 0);
				func_240(1, &uLocal_853, 402, "famtwo", 1, 0);
				if (!bLocal_890)
				{
					if (fLocal_887 > 0.1f)
					{
						fLocal_887 = (fLocal_887 - 0.01f);
					}
					else
					{
						fLocal_887 = 0.1f;
					}
				}
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_143, Local_144, fLocal_145, 0, 1, 0))
				{
					iVar4 = 0;
					while (iVar4 < iLocal_100)
					{
						if (!unk_0xF68107C40359970C(iLocal_100[iVar4]))
						{
							unk_0x03A927199A2DFE46(iLocal_100[iVar4]);
							unk_0xFDB121077308E944(iLocal_100[iVar4], iLocal_99[iVar4], -901.3011f, -1359.937f, 0f, 14, 20f, 262144, 3f, 3f, 1);
						}
						iVar4++;
					}
					iLocal_876 = 1;
				}
			}
			break;
	}
	func_230(0);
	func_230(1);
	if ((iLocal_73 == 6 || iLocal_73 == 7) || iLocal_876)
	{
		if (!bLocal_877)
		{
			bLocal_877 = true;
		}
	}
	else if (bLocal_877)
	{
		bLocal_877 = false;
	}
}

void func_230(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_101[iParam0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_100[iParam0]))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0) && unk_0xF6F5D18EF8EAB859(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					uLocal_101[iParam0] = func_215(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), 0);
					unk_0xAF62582F3EA39095(uLocal_101[iParam0], "FM2_PURSUER");
					unk_0xA582EE8380437B1B(uLocal_101[iParam0], 1);
					unk_0x7A610B2EC5DA34E7(uLocal_101[iParam0], 9);
					iLocal_880[iParam0] = 1;
				}
				else
				{
					uLocal_101[iParam0] = func_152(iLocal_100[iParam0], 1, 145);
					iLocal_880[iParam0] = 0;
				}
			}
		}
		else if (!unk_0xF68107C40359970C(iLocal_100[iParam0]))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0) && unk_0xF6F5D18EF8EAB859(iLocal_100[iParam0], iLocal_99[iParam0], 0))
			{
				if (iLocal_880[iParam0])
				{
					Var0 = { unk_0x1A3931A61B3223A2(uLocal_101[iParam0]) };
					Var1 = { unk_0x6B62510F212526DC(iLocal_99[iParam0], 1) };
					Var0.x = (Var0.x + ((Var1.x - Var0.x) / 25f));
					Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 25f));
					Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 25f));
					unk_0xFB7ACC9D9D6401A8(uLocal_101[iParam0], Var0);
				}
				else
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_101[iParam0]));
				}
			}
			else if (iLocal_880[iParam0])
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_101[iParam0]));
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uLocal_101[iParam0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_101[iParam0]));
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(uLocal_101[iParam0]))
	{
		unk_0xFFD8EB5462B07B59(&(uLocal_101[iParam0]));
	}
}

int func_231(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_232(struct<3> Param0, int iParam1, char* sParam2, var uParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = func_233(Param0, uParam3);
	fVar1 = (unk_0x733908DBFA08CEAD(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
	fVar2 = (unk_0xD7500BC8646DAB0D(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1) * fVar1);
	if (bParam4)
	{
	}
	return ((fVar2 + (IntToFloat(iVar0) * fVar1)) - 0.1f);
}

int func_233(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < (*uParam1 - 1))
	{
		if (vdist2(unk_0x291018E753A9A0AD(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), Param0) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = vdist2(unk_0x291018E753A9A0AD(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_234(int iParam0)
{
	if (bLocal_873)
	{
		func_240(iParam0, &(Local_808[0 /*25*/]), 1, func_238(iLocal_78), 0, 1);
	}
	else
	{
		func_240(iParam0, &(Local_808[1 /*25*/]), 2, func_238(iLocal_78), 0, 1);
	}
	if ((unk_0x320D1840B6DAA1CC() - iLocal_879) > 500)
	{
		bLocal_873 = func_235(iLocal_78);
		iLocal_879 = unk_0x320D1840B6DAA1CC();
	}
}

bool func_235(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x63BEA94AB58D4E6D(unk_0xE2D3D51028F0428A()) };
	Var1 = { func_236(Local_638[iParam0 /*3*/] - Local_637[iParam0 /*3*/]) };
	return unk_0x48053974ED6F63CE(unk_0x952F3FA2E7880565(Var1.x, Var1.f_1, Var0.x, Var0.f_1)) < 90f;
}

Vector3 func_236(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_237(var uParam0, int iParam1, char* sParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	unk_0xB018BAA4ED9AA217(iParam1, sParam2);
	if (unk_0xF777CAA43F4B281A(iParam1, sParam2))
	{
		fVar0 = unk_0x733908DBFA08CEAD(iParam1, sParam2);
		fVar1 = (fVar0 / IntToFloat((*uParam0 - 1)));
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { unk_0xA53596FA06DE5ECB(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "famtwoCanalsbottom";
			break;
		
		case 1:
			return "famtwoCanalstop";
			break;
		
		case 2:
			return "famtwoCanalsLeft";
			break;
		
		case 3:
			return "famtwoCanalsMiddle";
			break;
		
		case 4:
			return "famtwoCanalsRight";
			break;
	}
	return "famtwoCanalsbottom";
}

int func_239()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_637[iVar0 /*3*/], Local_638[iVar0 /*3*/], fLocal_639[iVar0], 0, 1, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 6;
}

void func_240(int iParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if ((((((!unk_0xF68107C40359970C(iLocal_100[iParam0]) && !unk_0x55B23FE400FCEA6B(iLocal_100[iParam0], 0)) && unk_0xE5965CDF24F93A9F(iLocal_99[iParam0])) && unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0)) && unk_0xF6F5D18EF8EAB859(iLocal_100[iParam0], iLocal_99[iParam0], 0)) && unk_0x55A0C756C4A8220C(iLocal_92, 0)) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
	{
		fVar0 = func_232(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), iParam2, sParam3, uParam1, 0);
		fVar1 = func_232(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iParam2, sParam3, uParam1, 0);
		Var2 = { unk_0xA53596FA06DE5ECB(iParam2, fVar0, sParam3) };
		Var3 = { unk_0xA53596FA06DE5ECB(iParam2, fVar1, sParam3) };
		if (!iLocal_872[iParam0])
		{
			if (!bLocal_890)
			{
				if (((fVar0 < fVar1 && !unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), 3f)) && !unk_0x0318E2EE6FB4563F(Var2, 3f)) && vdist2(Var3, unk_0x6B62510F212526DC(iLocal_99[iParam0], 1)) > 25f)
				{
					unk_0x584B286572B48431();
					unk_0x90F8F7D270431FAE(iLocal_99[iParam0]);
					unk_0x2F4DB11A0DB3685A(iLocal_99[iParam0], iParam2, sParam3, 1);
					unk_0xE98F26077277CEC7(iLocal_99[iParam0], 0f, 0f, 0.1f);
					unk_0x4030F85138A50DF6(iLocal_99[iParam0], func_241((fVar0 + (IntToFloat(iParam0) * 0.5f)), 0f, 999999f));
					iLocal_872[iParam0] = 1;
				}
			}
			if (iLocal_73 != 2)
			{
				iLocal_874[iParam0] = fVar0 > fVar1;
			}
			else
			{
				iLocal_874[iParam0] = 0;
			}
		}
		else
		{
			fVar4 = vdist2(Var3, Var2);
			fVar5 = 999999f;
			if (!unk_0x55B23FE400FCEA6B(iLocal_99[0], 0) && !unk_0x55B23FE400FCEA6B(iLocal_99[1], 0))
			{
				fVar5 = vdist2(unk_0x6B62510F212526DC(iLocal_99[0], 1), unk_0x6B62510F212526DC(iLocal_99[1], 1));
			}
			if (((((unk_0x0318E2EE6FB4563F(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), 3f) && (fVar4 < 25f || iParam4)) || fVar4 < 9f) || fVar0 > fVar1) || !unk_0xE896049AD1887FF0(iLocal_99[iParam0])) || fVar5 < (1.5f * 1.5f))
			{
				if (unk_0xE896049AD1887FF0(iLocal_99[iParam0]))
				{
					unk_0xF4E68EBD83914967(iLocal_99[iParam0], 262144);
				}
				else
				{
					unk_0x1B70646075A0F088(iLocal_99[iParam0], iParam2, sParam3, 20f, 262144);
				}
				if (iParam5 && (fVar0 > 0.85f || fVar0 < 0.15f))
				{
				}
				unk_0x9286A110A3FD81F1(iLocal_100[iParam0], unk_0xE2D3D51028F0428A());
				iLocal_872[iParam0] = 0;
			}
			else
			{
				fVar6 = 40f;
				if (iParam5 && (fVar0 > 0.8f || fVar0 < 0.2f))
				{
					fVar7 = 1f;
					unk_0xFFE9FF137BAFDFD8(iLocal_99[iParam0], func_241(((vdist(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0.2f, fVar7));
				}
				else
				{
					fVar7 = 1.3f;
					unk_0xFFE9FF137BAFDFD8(iLocal_99[iParam0], func_241(((vdist(unk_0x6B62510F212526DC(iLocal_99[iParam0], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0.8f, fVar7));
				}
			}
		}
	}
	else if (unk_0xE5965CDF24F93A9F(iLocal_99[iParam0]))
	{
		if (unk_0xE896049AD1887FF0(iLocal_99[iParam0]))
		{
			unk_0x90F8F7D270431FAE(iLocal_99[iParam0]);
		}
	}
}

float func_241(float fParam0, float fParam1, float fParam2)
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

void func_242()
{
	if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
	{
		switch (iLocal_882)
		{
			case 0:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP1", 12000);
					iLocal_883 = unk_0x320D1840B6DAA1CC();
					iLocal_884 = 1;
				}
				if (unk_0x4C1B8C5717647539(0, 71))
				{
					fLocal_886 = (fLocal_886 + unk_0x51109C28352EC9A3());
				}
				if (fLocal_886 > 3f || (unk_0x320D1840B6DAA1CC() - iLocal_883) > 10000)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 1:
				if (func_243("FM2_JSHLP1"))
				{
					if (!iLocal_885)
					{
						unk_0x3410421C60BF7143(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0x320D1840B6DAA1CC();
					iLocal_882++;
				}
				break;
			
			case 2:
				if ((unk_0x320D1840B6DAA1CC() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 3:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP2", 12000);
					iLocal_883 = unk_0x320D1840B6DAA1CC();
					iLocal_884 = 1;
				}
				if (unk_0x4C1B8C5717647539(0, 72))
				{
					fLocal_886 = (fLocal_886 + unk_0x51109C28352EC9A3());
				}
				if (fLocal_886 > 1f || (unk_0x320D1840B6DAA1CC() - iLocal_883) > 10000)
				{
					iLocal_882++;
				}
				break;
			
			case 4:
				if (func_243("FM2_JSHLP2"))
				{
					if (!iLocal_885)
					{
						iLocal_885 = 1;
						unk_0x3410421C60BF7143(0);
					}
				}
				else
				{
					iLocal_882++;
				}
				break;
			
			case 5:
				if ((unk_0x320D1840B6DAA1CC() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 6:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP3", 12000);
					iLocal_883 = unk_0x320D1840B6DAA1CC();
					iLocal_884 = 1;
				}
				if (unk_0x4C1B8C5717647539(0, 76))
				{
					fLocal_886 = (fLocal_886 + unk_0x51109C28352EC9A3());
				}
				if (fLocal_886 > 2f || (unk_0x320D1840B6DAA1CC() - iLocal_883) > 7500)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 7:
				if (func_243("FM2_JSHLP3"))
				{
					if (!iLocal_885)
					{
						unk_0x3410421C60BF7143(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0x320D1840B6DAA1CC();
					iLocal_882++;
				}
				break;
		}
	}
	else if ((func_243("FM2_JSHLP1") || func_243("FM2_JSHLP2")) || func_243("FM2_JSHLP3"))
	{
		unk_0x3410421C60BF7143(1);
	}
}

bool func_243(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_244(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_245()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	if (unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if ((unk_0x55A0C756C4A8220C(iLocal_99[iVar0], 0) && !unk_0xF68107C40359970C(iLocal_100[iVar0])) && unk_0x87B449F4C26E764A(iLocal_100[iVar0], iLocal_99[iVar0]))
			{
				Var1 = { unk_0x6B62510F212526DC(iLocal_99[iVar0], 1) };
				Var2 = { unk_0x6B62510F212526DC(iLocal_92, 1) };
				if (vdist2(Var2, Local_561[0 /*7*/]) > 100f && vdist2(Var2, Local_561[1 /*7*/]) > 100f)
				{
					if (vdist2(Var2, Local_561[iVar0 /*7*/]) > 400f)
					{
						if (func_246(iLocal_99[iVar0], iLocal_92, iLocal_107, Var2, unk_0x63A8BF5E6C2BF85C(iLocal_92, 2)))
						{
							Local_561[iVar0 /*7*/] = { Var2 };
							Local_561[iVar0 /*7*/].f_3 = { unk_0x63A8BF5E6C2BF85C(iLocal_92, 2) };
							Local_561[iVar0 /*7*/].f_6 = vmag(unk_0xC35FBD95659582C4(iLocal_99[iVar0]));
						}
					}
				}
				if (!func_231(Local_561[iVar0 /*7*/]) && Local_561[iVar0 /*7*/].f_2 < 1f)
				{
					if (!unk_0x4D21C9FB671ED18F(iLocal_99[iVar0]))
					{
						iLocal_563[iVar0] = unk_0x320D1840B6DAA1CC();
					}
					else if ((unk_0x320D1840B6DAA1CC() - iLocal_563[iVar0]) > 1000 && (unk_0x320D1840B6DAA1CC() - iLocal_562[iVar0]) > 2000)
					{
						if (!unk_0x0318E2EE6FB4563F(Local_561[iVar0 /*7*/], 3f) && !unk_0x0318E2EE6FB4563F(Var1, 3f))
						{
							fVar3 = 99f;
							iVar4 = 0;
							if (iVar0 == 0)
							{
								iVar4 = 1;
							}
							if (unk_0x55A0C756C4A8220C(iLocal_99[iVar4], 0))
							{
								fVar3 = vdist(unk_0x6B62510F212526DC(iLocal_99[iVar4], 1), Local_561[iVar0 /*7*/]);
							}
							if ((((vdist2(Var1, Var2) > 225f && vdist2(Var1, Local_561[iVar0 /*7*/]) < vdist2(Var1, Var2)) && vdist2(Var2, Local_561[iVar0 /*7*/]) > 225f) && fVar3 > 5f) && func_246(iLocal_99[iVar0], iLocal_92, iLocal_107, Local_561[iVar0 /*7*/], Local_561[iVar0 /*7*/].f_3))
							{
								unk_0xF96094A43D443C41(Local_561[iVar0 /*7*/], 3f, 0);
								unk_0x02B222EADC9DC566(Local_561[iVar0 /*7*/], 3f, 0, 0, 0, 0, 0, 0, 0);
								unk_0xC64B6E13A6A7F517(iLocal_99[iVar0], Local_561[iVar0 /*7*/], 1, 0, 0, 1);
								unk_0x8CE3D365F064F69E(iLocal_99[iVar0], Local_561[iVar0 /*7*/].f_3, 2, 1);
								unk_0xB2D5451CC5606248(iLocal_99[iVar0], (Local_561[iVar0 /*7*/].f_6 + 5f));
								unk_0x9286A110A3FD81F1(iLocal_100[iVar0], unk_0xE2D3D51028F0428A());
								unk_0x371D594409A68A18(iLocal_99[iVar0], 1, 1, 0);
								iLocal_562[iVar0] = unk_0x320D1840B6DAA1CC();
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_246(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (unk_0xE5965CDF24F93A9F(iParam2))
	{
		unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var3, &Var4);
		unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam1), &Var5, &uVar6);
		fVar7 = unk_0x48053974ED6F63CE((Var4.f_2 - Var3.f_2));
		fVar8 = unk_0x48053974ED6F63CE((Var4.x - Var3.x));
		fVar9 = unk_0x48053974ED6F63CE((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x48053974ED6F63CE(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x48053974ED6F63CE(Var3.x));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		unk_0xC64B6E13A6A7F517(iParam2, Param3, 1, 0, 0, 1);
		unk_0x8CE3D365F064F69E(iParam2, Param4, 2, 1);
		Var1 = { unk_0xCACAD935C0BEE14F(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { unk_0xCACAD935C0BEE14F(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		uVar17 = unk_0x9D2C476A7D8D9385(Var2, Var1, fVar10, 19, unk_0xE2D3D51028F0428A(), 4);
		if (unk_0xB2D581BD7446BBE9(uVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_247(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		unk_0x5D5D57E564E3D07B(fParam1);
		unk_0xFEA2C505215523D7(0.35f);
		unk_0x77048CB9A5FB0916(0.3f);
		unk_0x09282630F7E20396(0.25f);
		unk_0x84CAFC0A42FD76A0(0.35f);
		unk_0xB252B5EFBE5EAC46(0.4f);
		unk_0x72FCB447B822FF47(0.25f);
		unk_0x86EDE07C99406BA7(0.55f);
		unk_0x5AA6D432576DF799(0.45f);
		unk_0x81A6481340F8990D(0.5f);
		unk_0x8786D241002BC8D3(0.6f);
		unk_0x1A821C0C65EC99AF(0.25f);
		unk_0xD25CAD13A0BD46C9(0.75f);
	}
	else
	{
		unk_0x871782F14F0D7B2D(fParam1);
	}
}

void func_248()
{
	Local_637[0 /*3*/] = { -1237.274f, -923.97f, 5.135533f };
	Local_638[0 /*3*/] = { -985.1348f, -1359.68f, -7.479084f };
	fLocal_639[0] = 23f;
	Local_637[1 /*3*/] = { -1003.908f, -914.4536f, -1.611186f };
	Local_638[1 /*3*/] = { -880.5477f, -1124.602f, 6.150022f };
	fLocal_639[1] = 29f;
	Local_637[2 /*3*/] = { -1169.471f, -1027.087f, 5.78508f };
	Local_638[2 /*3*/] = { -1003.961f, -932.3284f, -2.993861f };
	fLocal_639[2] = 29f;
	Local_637[3 /*3*/] = { -1116.554f, -1119.791f, 5.784778f };
	Local_638[3 /*3*/] = { -950.7761f, -1023.823f, -1.496439f };
	fLocal_639[3] = 29f;
	Local_637[4 /*3*/] = { -1062.391f, -1213.474f, -2.315868f };
	Local_638[4 /*3*/] = { -897.3085f, -1116.901f, 4.92553f };
	fLocal_639[4] = 29f;
}

void func_249()
{
	Local_632[0 /*3*/] = { -2033.74f, -1004.776f, 1f };
	Local_632[1 /*3*/] = { -1801.432f, -975.5541f, 1f };
	Local_632[2 /*3*/] = { -1796.255f, -988.166f, 1f };
	Local_632[3 /*3*/] = { -2012.245f, -1073.776f, 1f };
	Local_633[5 /*3*/] = { -1241.138f, -933.0004f, 1f };
	Local_633[4 /*3*/] = { -1227.203f, -924.2169f, 1f };
	Local_633[3 /*3*/] = { -1240.015f, -751.6861f, 1f };
	Local_633[2 /*3*/] = { -1431.875f, -747.558f, 1f };
	Local_633[1 /*3*/] = { Local_632[1 /*3*/] };
	Local_633[0 /*3*/] = { Local_632[2 /*3*/] };
	Local_634[0 /*3*/] = { -988.3516f, -908.0377f, 1f };
	Local_634[1 /*3*/] = { -866.9206f, -1116.04f, 1f };
	Local_634[2 /*3*/] = { -978.9424f, -1351.054f, 1f };
	Local_634[3 /*3*/] = { -1007.62f, -1362.316f, 1f };
	Local_634[4 /*3*/] = { Local_633[5 /*3*/] };
	Local_634[5 /*3*/] = { Local_633[4 /*3*/] };
	Local_635[0 /*3*/] = { Local_634[3 /*3*/] };
	Local_635[1 /*3*/] = { Local_634[2 /*3*/] };
	Local_635[2 /*3*/] = { -844.5858f, -1302.006f, 4.1001f };
	Local_635[3 /*3*/] = { -768.9856f, -1524.338f, 4.98f };
	Local_635[4 /*3*/] = { -1052.374f, -1553.313f, 13.0317f };
	Local_636[0 /*3*/] = { Local_635[4 /*3*/] };
	Local_636[1 /*3*/] = { Local_635[3 /*3*/] };
	Local_636[2 /*3*/] = { -1165.894f, -1923.179f, 2.5698f };
	Local_636[3 /*3*/] = { -1226.947f, -1873.531f, 4.8338f };
}

void func_250(bool bParam0)
{
	if (bParam0)
	{
		Global_21341 = 1;
	}
	else
	{
		Global_21341 = 0;
	}
}

void func_251(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_252()
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iLocal_91[0]))
	{
		unk_0xD69A0C3662175E68(joaat("csb_porndudes"));
		if (unk_0x0152AA00FA3130F1(joaat("csb_porndudes")))
		{
			iLocal_91[0] = unk_0xA8D58C3AADA2C41C(26, joaat("csb_porndudes"), -2028.336f, -1026.387f, 0.0897f, 222.4424f, 1, 1);
			if (bLocal_115)
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					unk_0xE3752B10DC995E95(iLocal_91[0], iVar0, Local_116[iVar0 /*3*/][0], Local_116[iVar0 /*3*/][1], 0);
					iVar0++;
				}
			}
			unk_0x96C405257A1BD81B(iLocal_91[0], 0);
			unk_0xBC12D08EE7559CCD(iLocal_91[0], 17, 1);
			unk_0x9D4D63EB83A103AD(iLocal_91[0], 1.75f);
			unk_0x50274A7EACA3133A(iLocal_91[0], 1);
			unk_0xF30F15F203736DE4(iLocal_91[0], unk_0xE2D3D51028F0428A(), -1, 4, 3);
		}
	}
	return unk_0xE5965CDF24F93A9F(iLocal_91[0]);
}

int func_253()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		unk_0xB018BAA4ED9AA217(1, func_238(iVar1));
		unk_0xB018BAA4ED9AA217(2, func_238(iVar1));
		if (!unk_0xF777CAA43F4B281A(1, func_238(iVar1)) || !unk_0xF777CAA43F4B281A(2, func_238(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_254(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	
	unk_0xD69A0C3662175E68(joaat("seashark"));
	unk_0xD69A0C3662175E68(joaat("csb_porndudes"));
	if (unk_0x0152AA00FA3130F1(joaat("seashark")) && unk_0x0152AA00FA3130F1(joaat("csb_porndudes")))
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_99[iParam0]))
		{
			if (iParam0 == 0)
			{
				if (bParam1)
				{
					Var0 = { -2023.64f, -1047.04f, 0.6916f };
					fVar1 = -108f;
				}
				else
				{
					Var0 = { -2024.716f, -1046.387f, 0f };
					fVar1 = -108.9627f;
				}
			}
			else if (bParam1)
			{
				Var0 = { -2027.4f, -1045.88f, 0.6916f };
				fVar1 = -108f;
			}
			else
			{
				Var0 = { -2021.2f, -1046.926f, 0f };
				fVar1 = -84.578f;
			}
			if (unk_0x182029C7E52A1E4F(Var0, &uVar2))
			{
				Var0.f_2 = uVar2;
				iLocal_99[iParam0] = unk_0xBA715A7BEBA5A1F9(joaat("seashark"), Var0, fVar1, 1, 1, 0);
				if (iParam0 == 0)
				{
					unk_0xD584204572DF0440(iLocal_99[iParam0], 3);
				}
				else
				{
					unk_0xD584204572DF0440(iLocal_99[iParam0], 1);
				}
				unk_0x9F5508FED14C9E13(iLocal_99[iParam0], 100f);
				unk_0xAE2662F6A912F71E(iLocal_99[iParam0], bParam1);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_99[iParam0]) && unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0))
		{
			unk_0x398C962F550CF3B4(iLocal_99[iParam0], 1);
			unk_0xBED097BB6359F09C(iLocal_99[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			unk_0x3B2646B62E7BBE11(iLocal_99[iParam0], 3);
			if (bParam1)
			{
				unk_0x371D594409A68A18(iLocal_99[iParam0], 0, 1, 0);
			}
			else
			{
				unk_0x371D594409A68A18(iLocal_99[iParam0], 1, 1, 0);
			}
			unk_0x82B0E749922635BC(iLocal_99[iParam0], 0);
		}
		if (!unk_0xE5965CDF24F93A9F(iLocal_100[iParam0]) && unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				iLocal_100[iParam0] = unk_0x487C17B41938052C(iLocal_99[iParam0], 26, joaat("csb_porndudes"), -1, 1, 1);
			}
			else
			{
				iLocal_100[iParam0] = unk_0xA8D58C3AADA2C41C(26, joaat("csb_porndudes"), Vector(10.9101f, -1024.399f, -2068.027f) + Vector(0f, 0f, IntToFloat(iParam0)), 0f, 1, 1);
			}
		}
		if (((unk_0xE5965CDF24F93A9F(iLocal_100[iParam0]) && !unk_0xF68107C40359970C(iLocal_100[iParam0])) && unk_0xE5965CDF24F93A9F(iLocal_99[iParam0])) && unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				unk_0x5C65DDDC219B3AA5(iLocal_100[iParam0], 0);
				if (!unk_0xF6F5D18EF8EAB859(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					unk_0xA9F390242F9EB2E1(iLocal_100[iParam0], iLocal_99[iParam0], -1);
				}
			}
			else
			{
				unk_0x5C65DDDC219B3AA5(iLocal_100[iParam0], 1);
			}
			unk_0xD07E491BDA082CED(iLocal_100[iParam0], 1);
			unk_0xBED097BB6359F09C(iLocal_100[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			unk_0x9521FB98DB6DDF50(iLocal_100[iParam0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0xBC12D08EE7559CCD(iLocal_100[iParam0], 3, 0);
			unk_0xBC12D08EE7559CCD(iLocal_100[iParam0], 1, 1);
			unk_0x395228F7A14C6543(iLocal_100[iParam0], 0);
			unk_0x3DAB02AAC9E9EC02(iLocal_100[iParam0], 2);
			unk_0x348A212511C78DBF(iLocal_100[iParam0], 0);
			unk_0xC97BA48BC273A1F3(iLocal_100[iParam0], 15);
			unk_0x006574E87E6F1942(iLocal_100[iParam0], 1, 1);
			unk_0x398C962F550CF3B4(iLocal_100[iParam0], 1);
			unk_0x027BDA95C9BD0667(iLocal_100[iParam0], 0);
			unk_0xF3D629AF368D6BE8(iLocal_100[iParam0], 1);
			unk_0xFF4BEB6CFF55A013(iLocal_100[iParam0], iLocal_79);
			unk_0x5D1D64E01B76705C(iLocal_100[iParam0], 0);
			if (iParam0 == 0)
			{
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 0, 2, 0, 0);
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 3, 2, 0, 0);
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 4, 2, 0, 0);
				unk_0xD9D122A54FFE62B8(iLocal_100[iParam0], 0, 0, 0, false);
			}
			else
			{
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 0, 1, 0, 0);
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 3, 1, 0, 0);
				unk_0xE3752B10DC995E95(iLocal_100[iParam0], 4, 1, 0, 0);
				unk_0xD9D122A54FFE62B8(iLocal_100[iParam0], 1, 1, 0, false);
			}
		}
	}
	if ((((unk_0xE5965CDF24F93A9F(iLocal_100[iParam0]) && unk_0xE5965CDF24F93A9F(iLocal_99[iParam0])) && !unk_0xF68107C40359970C(iLocal_100[iParam0])) && unk_0x55A0C756C4A8220C(iLocal_99[iParam0], 0)) && (unk_0xF6F5D18EF8EAB859(iLocal_100[iParam0], iLocal_99[iParam0], 0) || bParam1))
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	unk_0xB018BAA4ED9AA217(101, "famtwo");
	unk_0xB018BAA4ED9AA217(102, "famtwo");
	unk_0xB018BAA4ED9AA217(201, "famtwo");
	unk_0xB018BAA4ED9AA217(202, "famtwo");
	unk_0xB018BAA4ED9AA217(301, "famtwo");
	unk_0xB018BAA4ED9AA217(302, "famtwo");
	unk_0xB018BAA4ED9AA217(1, "famtwoCanalsAlt");
	unk_0xB018BAA4ED9AA217(1, "famtwoplayer");
	if ((((((unk_0xF777CAA43F4B281A(101, "famtwo") && unk_0xF777CAA43F4B281A(102, "famtwo")) && unk_0xF777CAA43F4B281A(201, "famtwo")) && unk_0xF777CAA43F4B281A(202, "famtwo")) && unk_0xF777CAA43F4B281A(301, "famtwo")) && unk_0xF777CAA43F4B281A(302, "famtwo")) && unk_0xF777CAA43F4B281A(1, "famtwoCanalsAlt"))
	{
		func_237(&uLocal_640, 101, "famtwo");
		func_237(&uLocal_653, 102, "famtwo");
		func_237(&uLocal_666, 201, "famtwo");
		func_237(&uLocal_712, 202, "famtwo");
		func_237(&uLocal_758, 301, "famtwo");
		func_237(&uLocal_783, 302, "famtwo");
		func_237(&uLocal_834, 401, "famtwo");
		func_237(&uLocal_853, 402, "famtwo");
		func_237(&uLocal_809, 1, "famtwoCanalsAlt");
		return 1;
	}
	return 0;
}

int func_256()
{
	if (func_257(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_632, 0))
	{
		return 0;
	}
	if (func_257(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_633, 0))
	{
		return 1;
	}
	if (func_257(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_634, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_100[0]) && !unk_0x55B23FE400FCEA6B(iLocal_100[0], 0))
		{
			return 2;
		}
		else if (iLocal_878)
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	if (func_257(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_635, 0))
	{
		return 5;
	}
	if (func_257(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), &Local_636, 0))
	{
		return 6;
	}
	return 7;
}

int func_257(struct<3> Param0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	if (!func_258(Param0, *(uParam1[0 /*3*/]), *(uParam1[(*uParam1 - 1) /*3*/])))
	{
		if (bParam2)
		{
		}
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < (*uParam1 - 1))
	{
		if (!func_258(Param0, *(uParam1[iVar1 + 1 /*3*/]), *(uParam1[iVar1 /*3*/])))
		{
			if (bParam2)
			{
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_258(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)
{
	return (((Param4 - Param2) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0 - Param2))) >= 0f;
}

void func_259()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	switch (iLocal_159)
	{
		case 0:
			bLocal_902 = false;
			unk_0xB018BAA4ED9AA217(1, "famtwoplayer");
			unk_0xB018BAA4ED9AA217(101, "famtwo");
			unk_0xB018BAA4ED9AA217(102, "famtwo");
			unk_0x8FB472886552D737("missfam2_tracy_jetski");
			if (!unk_0x496531E41FCF5116())
			{
				unk_0xD536FD78D8A135F1("family_2_mcs_3", 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			iLocal_901 = 0;
			break;
		
		case -1:
			unk_0x13A763A67BA2A95B("smboat");
			while (!unk_0x8DD54478CFA35F08("smBoat"))
			{
				wait(0);
			}
			iLocal_159 = 3;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0x2566F947AAB7B2A7())
			{
				func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
				if (unk_0xE5965CDF24F93A9F(iLocal_91[0]) && !unk_0xF68107C40359970C(iLocal_91[0]))
				{
					unk_0x3817498C7B1515DD("Guy_on_sofa", iLocal_91[0], 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[1]) && !unk_0xF68107C40359970C(iLocal_91[1]))
				{
					unk_0x3817498C7B1515DD("Man_getting_wood", iLocal_91[1], 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[2]) && !unk_0xF68107C40359970C(iLocal_91[2]))
				{
					func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[3]) && !unk_0xF68107C40359970C(iLocal_91[3]))
				{
					func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_88) && !unk_0xF68107C40359970C(iLocal_88))
				{
					func_2("Tracy", iLocal_88, 0, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			if (func_254(0, 1) && func_254(1, 1))
			{
				iVar0 = 1;
			}
			if (iVar0 && unk_0xF777CAA43F4B281A(1, "famtwoplayer"))
			{
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case 3:
			if (func_199())
			{
				bLocal_115 = false;
				func_191(1, 1, 1, 0, 0, 0, 0);
				if (!unk_0xF68107C40359970C(iLocal_88))
				{
					unk_0x48F297980C708DB7(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
				{
					unk_0xAE2662F6A912F71E(iLocal_92, false);
					unk_0x48F297980C708DB7(iLocal_92, "Michaels_seashark", 0, 0, 0);
					unk_0x371D594409A68A18(iLocal_92, 0, 1, 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_106))
				{
					unk_0x48F297980C708DB7(iLocal_106, "Prop_MP3_Dock", 0, 0, 0);
				}
				if (!unk_0xF68107C40359970C(iLocal_100[0]))
				{
					unk_0x5C65DDDC219B3AA5(iLocal_100[0], 0);
					unk_0xC252F409BDE7A700(iLocal_100[0], 1);
					unk_0x48F297980C708DB7(iLocal_100[0], "Porn_Dude", 0, 0, 0);
				}
				if (!unk_0xF68107C40359970C(iLocal_100[1]))
				{
					unk_0x5C65DDDC219B3AA5(iLocal_100[1], 0);
					unk_0xC252F409BDE7A700(iLocal_100[1], 1);
					unk_0x48F297980C708DB7(iLocal_100[1], "Porn_Dude^1", 0, 0, 0);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_99[0], 0))
				{
					unk_0x48F297980C708DB7(iLocal_99[0], "Porn_Dude_seashark", 0, 0, 0);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_99[1], 0))
				{
					unk_0x48F297980C708DB7(iLocal_99[1], "Porn_Dude_^1_seashark", 0, 0, 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[0]) && !unk_0xF68107C40359970C(iLocal_91[0]))
				{
					unk_0x96C405257A1BD81B(iLocal_91[0], 0);
					unk_0xBC12D08EE7559CCD(iLocal_91[0], 17, 1);
					unk_0x9D4D63EB83A103AD(iLocal_91[0], 1.75f);
					unk_0x50274A7EACA3133A(iLocal_91[0], 1);
					unk_0xF30F15F203736DE4(iLocal_91[0], unk_0xE2D3D51028F0428A(), -1, 4, 3);
					bLocal_115 = true;
					unk_0x48F297980C708DB7(iLocal_91[0], "Guy_on_sofa", 0, 0, 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[1]) && !unk_0xF68107C40359970C(iLocal_91[1]))
				{
					unk_0x48F297980C708DB7(iLocal_91[1], "Man_getting_wood", 0, 0, 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[2]) && !unk_0xF68107C40359970C(iLocal_91[2]))
				{
					unk_0x48F297980C708DB7(iLocal_91[2], "Girl_on_sofa", 0, 0, 0);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_91[3]) && !unk_0xF68107C40359970C(iLocal_91[3]))
				{
					unk_0x48F297980C708DB7(iLocal_91[3], "Girl_being_chatted_up", 0, 0, 0);
				}
				unk_0xF44EE79112016B61(2048);
				unk_0xBA6C3C5E9E5A9442();
				unk_0x3410421C60BF7143(1);
				unk_0x6CD556854F94F942(4);
				func_155();
				func_204(7);
				func_190();
				unk_0x63B063064DC08617("FAM2_NECK_GRAB");
				bLocal_899 = false;
				iLocal_900 = 0;
				iLocal_159++;
			}
			break;
		
		case 4:
			if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(500);
			}
			unk_0x7A997A0A971D305F(-2006.247f, -1043.832f, -1.481001f, 200f, 1, 0, 0, 0);
			iLocal_159++;
			break;
		
		case 5:
			if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
			{
				if (unk_0x6F2E1326DB60D575("Tracy", 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(iLocal_88, iLocal_92, 0))
					{
						unk_0xA9F390242F9EB2E1(iLocal_88, iLocal_92, 0);
						unk_0x9210F85E9CD785F1(iLocal_88, 1);
						unk_0xEB087B19F63AB053(iLocal_88, 0, 0);
					}
				}
				if (unk_0xA337B111DF07BB88(0))
				{
				}
				if (unk_0x6F2E1326DB60D575("Porn_Dude", 0))
				{
				}
				if (unk_0x6F2E1326DB60D575("Porn_Dude^1", 0))
				{
				}
				if (unk_0x6F2E1326DB60D575("Porn_Dude_seashark", 0))
				{
				}
				if (unk_0x6F2E1326DB60D575("Porn_Dude^1_seashark", 0))
				{
				}
				if (unk_0x6F2E1326DB60D575("Michaels_seashark", 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_92, 0))
					{
						unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iLocal_92, -1);
					}
					func_247(1, 0f);
					unk_0x2F4DB11A0DB3685A(iLocal_92, 1, "famtwoplayer", 1);
					unk_0xFFE9FF137BAFDFD8(iLocal_92, 0.66f);
					unk_0x94953C3FF0664F66(0f);
					unk_0x080C97B891E2F3AA(0f, 1065353216);
					unk_0xC64B6E13A6A7F517(iLocal_92, Local_129, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_92, fLocal_130);
					unk_0x371D594409A68A18(iLocal_92, 1, 1, 0);
					unk_0xB2D5451CC5606248(iLocal_92, 15f);
					unk_0x90F8F7D270431FAE(iLocal_92);
					unk_0x182029C7E52A1E4F(Local_129, &fLocal_903);
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
					{
						unk_0xC64B6E13A6A7F517(iLocal_92, Local_129.x, Local_129.f_1, fLocal_903, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(iLocal_92, fLocal_130);
						unk_0x371D594409A68A18(iLocal_92, 1, 1, 0);
						unk_0xB2D5451CC5606248(iLocal_92, 17f);
						unk_0x94953C3FF0664F66(0f);
						unk_0x080C97B891E2F3AA(0f, 1065353216);
					}
					iVar1 = 0;
					while (iVar1 < iLocal_99)
					{
						if (((unk_0xE5965CDF24F93A9F(iLocal_99[iVar1]) && unk_0x55A0C756C4A8220C(iLocal_99[iVar1], 0)) && unk_0xE5965CDF24F93A9F(iLocal_100[iVar1])) && !unk_0xF68107C40359970C(iLocal_100[iVar1]))
						{
							unk_0x5C65DDDC219B3AA5(iLocal_100[iVar1], 0);
							unk_0xC252F409BDE7A700(iLocal_100[iVar1], 1);
							unk_0xAE2662F6A912F71E(iLocal_99[iVar1], false);
							if (!unk_0xF6F5D18EF8EAB859(iLocal_100[iVar1], iLocal_99[iVar1], 0))
							{
								unk_0xA9F390242F9EB2E1(iLocal_100[iVar1], iLocal_99[iVar1], -1);
							}
							Var2 = { unk_0x6B62510F212526DC(iLocal_99[iVar1], 1) };
							unk_0x182029C7E52A1E4F(Var2, &fVar3);
							unk_0xC64B6E13A6A7F517(iLocal_99[iVar1], Var2.x, Var2.f_1, fVar3, 1, 0, 0, 1);
							unk_0xB2D5451CC5606248(iLocal_99[iVar1], (10f + (2f * to_float(iVar1))));
						}
						iVar1++;
					}
					if (!unk_0x1AF916E03DDF8D8A())
					{
						unk_0x4B248030F70A5D8B(0);
						uLocal_112 = unk_0xB93A4265CB0F5B1F("DEFAULT_SPLINE_CAMERA", 0);
						unk_0xADB0920102000613(uLocal_112, 1);
						unk_0x6C12D23212020231(uLocal_112, unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", -2023.174f, -1052.98f, 1.529f, 2.1162f, 0f, -39.8484f, 50f, 1, 2), 0, 3);
						unk_0x6C12D23212020231(uLocal_112, unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", -2008.224f, -1037.217f, 1.8555f, -2.0921f, 0.0684f, -60.6791f, 50f, 1, 2), 1400, 1);
						unk_0x6C12D23212020231(uLocal_112, unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", -1985.437f, -1024.533f, 2.0868f, -3.9139f, 0f, -78.7979f, 50f, 1, 2), 1850, 3);
						unk_0xDD786B89B15AA63F(uLocal_112, 1);
						unk_0x98A99A554B458431(uLocal_112, unk_0xE2D3D51028F0428A(), 0f, 0f, 0.3f, 1);
						unk_0x850D4EF3D40FB068(true, 0, 3000, 1, 0, 0);
						func_185(&uLocal_521, unk_0xE2D3D51028F0428A(), 0, 20f, 1000, 1000, 500, 0, 1045220557);
						settimerb(0);
					}
					else
					{
						bLocal_902 = true;
						unk_0x90F8F7D270431FAE(iLocal_92);
						func_247(1, 0.1f);
						unk_0x182029C7E52A1E4F(Local_129, &fLocal_903);
						if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
						{
							unk_0xC64B6E13A6A7F517(iLocal_92, Local_129.x, Local_129.f_1, fLocal_903, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(iLocal_92, fLocal_130);
							unk_0x371D594409A68A18(iLocal_92, 1, 1, 0);
							unk_0xB2D5451CC5606248(iLocal_92, 18f);
							unk_0x94953C3FF0664F66(0f);
							unk_0x080C97B891E2F3AA(0f, 1065353216);
						}
					}
				}
			}
			if (!bLocal_899)
			{
				if (unk_0x63B063064DC08617("FAM2_NECK_GRAB") && unk_0xC10FE9051DBB0E91() > 31250)
				{
					unk_0x1CF3F44FC2EB9F99("FAM2_NECK_GRAB");
					bLocal_899 = true;
				}
			}
			if (!iLocal_900)
			{
				if (unk_0xC10FE9051DBB0E91() > 9700)
				{
					unk_0x380313FF4CEF9B49("SE_FAMILY_2_BOAT_RADIO", 0);
					iLocal_900 = 1;
				}
			}
			if (unk_0xC10FE9051DBB0E91() > 37500)
			{
				if (!iLocal_904)
				{
					func_247(1, 1065353216);
					iLocal_904 = 1;
				}
			}
			if (!iLocal_901)
			{
				if (unk_0xC10FE9051DBB0E91() > 45000)
				{
					if (!unk_0xF68107C40359970C(iLocal_91[0]))
					{
						unk_0x13C3030981EA7C3B(iLocal_91[0], -2097.867f, -973.0261f, -1f, 2f, -1, 1193033728, 1056964608);
						iLocal_901 = 1;
					}
				}
			}
			if (!bLocal_115)
			{
				if (unk_0xE5965CDF24F93A9F(unk_0xE621FDA45E283BE7("Guy_on_sofa", 0)) && !unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(unk_0xE621FDA45E283BE7("Guy_on_sofa", 0))))
				{
					iVar4 = 0;
					while (iVar4 < 12)
					{
						Local_116[iVar4 /*3*/][0] = unk_0x5355BAA621C153CF(unk_0x28AA31872A651BC7(unk_0xE621FDA45E283BE7("Guy_on_sofa", 0)), iVar4);
						Local_116[iVar4 /*3*/][1] = unk_0xF1050E548C37F4A5(unk_0x28AA31872A651BC7(unk_0xE621FDA45E283BE7("Guy_on_sofa", 0)), iVar4);
						iVar4++;
					}
					bLocal_115 = true;
				}
			}
			else if (!unk_0xE5965CDF24F93A9F(iLocal_91[0]))
			{
				func_252();
			}
			if (unk_0xA337B111DF07BB88(0))
			{
			}
			if (!unk_0x496531E41FCF5116())
			{
				unk_0x8F70948CB5539BEB();
				unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
				if (unk_0xE5965CDF24F93A9F(iLocal_106))
				{
					unk_0x4BDA5AFD88C085EB(&iLocal_106);
					unk_0xF1A23B343DFEDFD0(joaat("prop_mp3_dock"));
				}
				if (!bLocal_899)
				{
					unk_0x1CF3F44FC2EB9F99("FAM2_CS_SKIP");
				}
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				unk_0x06055697AD0BC5EB(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
				if (!bLocal_899)
				{
					unk_0x0709E99F1DDFFF26("FAM2_GRAB_NECK");
				}
				settimera(0);
				if (!bLocal_902)
				{
					iLocal_159++;
				}
				else
				{
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0) && unk_0xE896049AD1887FF0(iLocal_92))
					{
						unk_0x90F8F7D270431FAE(iLocal_92);
					}
					func_207(7);
				}
			}
			break;
		
		case 6:
			if (unk_0x5E29B0CF10CECB34() != 4 && unk_0x2B1D7439C26D5642() != 4)
			{
				if (timerb() > 2350)
				{
					unk_0x850D4EF3D40FB068(false, 1, 1500, 0, 0, 0);
				}
				if (timerb() > 2500)
				{
					if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
					{
						if (unk_0xE896049AD1887FF0(iLocal_92))
						{
							unk_0x90F8F7D270431FAE(iLocal_92);
						}
						func_207(7);
					}
				}
			}
			else if (timerb() > 2350)
			{
				if (func_181(&uLocal_521, 1, 1, 1, 0, 1, 0))
				{
					unk_0x850D4EF3D40FB068(false, 1, 1500, 0, 0, 0);
					if (unk_0xE896049AD1887FF0(iLocal_92))
					{
						unk_0x90F8F7D270431FAE(iLocal_92);
					}
					func_260(&uLocal_521);
					func_207(7);
				}
			}
			break;
	}
}

void func_260(var uParam0)
{
	func_182(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_261()
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	func_270();
	if (((unk_0xE5965CDF24F93A9F(iLocal_92) && !unk_0x55A0C756C4A8220C(iLocal_92, 0)) || (unk_0xE5965CDF24F93A9F(iLocal_99[0]) && !unk_0x55A0C756C4A8220C(iLocal_99[0], 0))) || (unk_0xE5965CDF24F93A9F(iLocal_99[1]) && !unk_0x55A0C756C4A8220C(iLocal_99[1], 0)))
	{
		func_104("FM2_TSPOOK");
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_106))
	{
		func_269();
	}
	iVar0 = 0;
	while (iVar0 < iLocal_99)
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_99[iVar0]))
		{
			func_254(iVar0, 1);
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_91[iVar0]))
		{
			if (unk_0xF68107C40359970C(iLocal_91[iVar0]) || unk_0x55B23FE400FCEA6B(iLocal_91[iVar0], 0))
			{
				func_104("FM2_TSPOOK");
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (((((((((((((((((unk_0x9AC74C7EF847A074(-2033.821f, -1031.864f, 4.89f, 5f, 1) || unk_0x89D0E0233F6E59A7(4, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(0, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(1, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(20, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(19, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(3, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(15, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x89D0E0233F6E59A7(2, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_rpg"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenade"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher_smoke"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_bzgas"), 5f, 1)) || unk_0xEDF30C9168B336D8(-2033.821f, -1031.864f, 4.89f, joaat("weapon_molotov"), 5f, 1)) || (unk_0x955815B1A675A225(unk_0xE2D3D51028F0428A(), Vector(4.89f, -1031.864f, -2033.821f) - Vector(30f, 30f, 30f), Vector(4.89f, -1031.864f, -2033.821f) + Vector(30f, 30f, 30f), 0, 1) && !unk_0x807D601FA146717A(unk_0xE2D3D51028F0428A())))
		{
			func_104("FM2_TSPOOK");
		}
	}
	if (!unk_0x12DD4A0B247D9B4D(uLocal_102))
	{
		uLocal_102 = func_215(-2034.37f, -1032.23f, 4.88f, 0);
		unk_0xA582EE8380437B1B(uLocal_102, 3);
		unk_0x293A9399E902A33B(uLocal_102, 1f);
		unk_0xAF62582F3EA39095(uLocal_102, "FM2_YACHTL");
	}
	switch (iLocal_159)
	{
		case 0:
			if (!func_243("FM2_DIVOFF"))
			{
				func_244("FM2_DIVOFF", -1);
			}
			unk_0x2DA9F9D8E5530E75(0f, 10f, 4);
			func_158(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0);
			func_268(207, 0);
			func_204(6);
			settimera(0);
			if (unk_0x3A76A0944BE2C291(0))
			{
				sLocal_610[2] = "FM2_USWIM1_KM";
				sLocal_610[0] = "FM2_SWIM_KM";
			}
			else if (unk_0x4DE6A646AFB7CF5C(0) == 4)
			{
				sLocal_610[2] = "FM2_SWIM_FP";
				sLocal_610[0] = "FM2_SWIM_FP";
			}
			else
			{
				sLocal_610[2] = "FM2_USWIM1";
				sLocal_610[0] = "FM2_SWIM";
			}
			sLocal_610[3] = "FM2_USWIM2";
			sLocal_610[1] = "FM2_DIVE";
			sLocal_610[4] = "FM2_STAT1";
			sLocal_610[5] = "FM2_DROWN";
			iLocal_614[0] = "shouting_jimmy_idle_a";
			iLocal_614[1] = "shouting_jimmy_idle_b";
			iLocal_614[2] = "shouting_jimmy_idle_c";
			iLocal_615 = 0;
			iLocal_159++;
			iLocal_168 = -1;
			iLocal_618 = -1;
			iLocal_611 = -1;
			iLocal_616 = 0;
			bLocal_620 = false;
			iLocal_619 = 0;
			iLocal_178 = 0;
			unk_0x8FB472886552D737("missfam2ig_3");
			unk_0x8576657A629C4B0A(0.1f);
			if (iLocal_155)
			{
				iLocal_159 = -1;
			}
			iLocal_617 = 1;
			break;
		
		case -1:
			unk_0x13A763A67BA2A95B("smboat");
			while (!unk_0x8DD54478CFA35F08("smBoat"))
			{
				wait(0);
			}
			if (unk_0xA829C9A2767AC8EF())
			{
				unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -1115154469, 0, 0, 0);
				unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 3f, iLocal_171, 0, 1, 0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0xA829C9A2767AC8EF() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(500);
			}
			if (iLocal_617)
			{
				unk_0x3DBD501D46E6A2BE(unk_0xE2D3D51028F0428A(), 3f);
				if (timera() < 1000 || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1871.083f, -1203.116f, 13.01658f, 2.5f, 2.5f, 3f, 0, 1, 0))
				{
					iLocal_617 = 0;
				}
			}
			if (iLocal_618 == -1 && (!func_177() || unk_0x5D851A9195129CE9(203) == 0))
			{
				func_151("FM2_YACHT", 7500, 1);
				iLocal_618 = unk_0x320D1840B6DAA1CC();
			}
			fVar2 = vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_89, 1));
			if (unk_0x6F940C2636C076AD("missfam2ig_3"))
			{
				if (vdist(unk_0x6B62510F212526DC(iLocal_89, 1), -1859.264f, -1216.776f, 13.0174f) > 3f)
				{
					if (unk_0x174CED88B97C78D9(iLocal_89, 713668775) != 1)
					{
						unk_0x03A927199A2DFE46(iLocal_89);
						iLocal_611 = 0;
						unk_0x7D1424753688EE7A(iLocal_89, -1859.264f, -1216.776f, 13.0174f, 1f, -1, 0.25f, 0, 1193033728);
					}
				}
				else if (fVar2 < 900f)
				{
					if (!unk_0x2E7F5417D4F4DD69(iLocal_89, unk_0xE2D3D51028F0428A(), 10f))
					{
						if (unk_0x174CED88B97C78D9(iLocal_89, -875674219) != 1 && unk_0xFCF559C8631ABED7(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
						{
							unk_0x03A927199A2DFE46(iLocal_89);
							unk_0x529D306014D3C29A(iLocal_89, unk_0xE2D3D51028F0428A(), 0);
							unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 0, 2);
							iLocal_611 = 0;
						}
					}
					else
					{
						switch (iLocal_611)
						{
							case -1:
								unk_0x8FB472886552D737("missfam2ig_3");
								if (unk_0x6F940C2636C076AD("missfam2ig_3"))
								{
									iLocal_611 = 0;
								}
								break;
							
							case 0:
								if ((unk_0x320D1840B6DAA1CC() - iLocal_613) > 1000)
								{
									if (!unk_0xFCF559C8631ABED7(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
									{
										unk_0x49D97B076E3590AC(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 4f, -4f, -1, 49, 0, 0, 0, 0);
									}
									else
									{
										iLocal_611++;
									}
									iLocal_613 = unk_0x320D1840B6DAA1CC();
								}
								break;
							
							case 1:
								if ((((unk_0x320D1840B6DAA1CC() - iLocal_618) > 5000 || unk_0x5D851A9195129CE9(203) == 0) && fVar2 < 900f) && (iLocal_168 == -1 || (unk_0x320D1840B6DAA1CC() - iLocal_168) > 10000))
								{
									unk_0x03A927199A2DFE46(iLocal_89);
									if (func_158(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0))
									{
										unk_0x49D97B076E3590AC(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 4f, -4f, -1, 48, 0, 0, 0, 0);
										iLocal_168 = unk_0x320D1840B6DAA1CC();
										iLocal_611++;
									}
								}
								break;
							
							case 2:
								if ((unk_0x320D1840B6DAA1CC() - iLocal_168) > 1000)
								{
									if (!unk_0xFCF559C8631ABED7(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 3))
									{
										unk_0x03A927199A2DFE46(iLocal_89);
										iLocal_612++;
										if (iLocal_612 >= iLocal_614)
										{
											iLocal_612 = 0;
										}
										iLocal_611 = 0;
									}
								}
								break;
							}
						}
					}
			}
			if (!unk_0xA37204C64473B324("FAMILY_2_DIVE_INTO_WATER"))
			{
				if (unk_0x58D958E5F5B6A54C(unk_0xE2D3D51028F0428A()))
				{
					unk_0x66B27A59829491D3("FAMILY_2_DIVE_INTO_WATER");
				}
			}
			if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()) || vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_209) < 100f)
			{
				Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				if (Var3.f_2 < 2f)
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_89))
					{
						unk_0xB3822DB3D538C8F3(&iLocal_89);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_93))
					{
						unk_0x3D81769BEC61BFF8(&iLocal_93);
					}
					if (unk_0xE5965CDF24F93A9F(iLocal_94))
					{
						unk_0x3D81769BEC61BFF8(&iLocal_94);
					}
				}
				if (unk_0xA37204C64473B324("FAMILY_2_DIVE_INTO_WATER"))
				{
					unk_0x0AF8D3A06BB92903("FAMILY_2_DIVE_INTO_WATER");
				}
				iLocal_159++;
				settimera(0);
				if (func_243("FM2_DIVOFF"))
				{
					unk_0x3410421C60BF7143(0);
				}
				unk_0xAFC1FBF3F6AE7B9A("missfam2ig_3");
				unk_0x1CF3F44FC2EB9F99("FAM2_SPLASH");
			}
			break;
		
		case 2:
			if (!func_243("FM2_DIVOFF") && timera() > 3000)
			{
				unk_0x6CE6C3A402C3E20C("DisableReplayScriptStreamRecording", 1);
				unk_0x2DA9F9D8E5530E75(3f, 10f, 4);
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!iLocal_616)
			{
				if (unk_0x01FE3D0E34407698("FAM2_BOAT_PARTY_MASTER", 0))
				{
					unk_0xC2512E3805388B5B(-2032.599f, -1032.639f, 4.8831f);
					iLocal_616 = 1;
				}
			}
			func_263();
			if (unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
				{
					if (!bLocal_620)
					{
						bLocal_620 = true;
					}
				}
				else if (bLocal_620)
				{
					if (!unk_0xA37204C64473B324("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0x66B27A59829491D3("FAMILY_2_SWIM_TO_YACHT");
					}
				}
			}
			if (((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2033.124f, -1042.981f, 0f, -2028.863f, -1028.328f, 8.97435f, 18.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2017.999f, -1035.053f, 5.946373f, -2023.154f, -1033.719f, 1.287564f, 3.25f, 0, 1, 0)) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
			{
				unk_0xACC66366E248A4CA();
				if (unk_0xA37204C64473B324("FAMILY_2_SWIM_TO_YACHT"))
				{
					unk_0x0AF8D3A06BB92903("FAMILY_2_SWIM_TO_YACHT");
				}
				unk_0x2DA9F9D8E5530E75(5f, 4f, 3);
				func_207(6);
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2030.86f, -1035.417f, 7.882243f, -2006.247f, -1043.832f, -1.481001f, 21.25f, 0, 1, 0))
			{
				unk_0x1CF3F44FC2EB9F99("FAM2_NEAR_YACHT");
				iLocal_615 = 1;
				iLocal_159++;
			}
			if (!iLocal_615)
			{
				if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), -2017.155f, -1040.214f, 1.4499f) < 400f && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					unk_0x1CF3F44FC2EB9F99("FAM2_NEAR_YACHT");
					iLocal_615 = 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
			{
				if (func_208(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
				{
					unk_0x6CE6C3A402C3E20C("DisableReplayScriptStreamRecording", 0);
					unk_0xACC66366E248A4CA();
					if (unk_0xA37204C64473B324("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0x0AF8D3A06BB92903("FAMILY_2_SWIM_TO_YACHT");
					}
					unk_0x2DA9F9D8E5530E75(0f, 8f, 3);
					func_207(6);
				}
			}
			break;
	}
	if (func_262(&uLocal_606, &iLocal_604, &uLocal_605))
	{
		func_104("FM2_JSPOOK");
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_89) && vdist(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 30f)
		{
			func_104("FM2_JSPOOK");
		}
		else
		{
			func_147();
		}
	}
	if (!iLocal_619)
	{
		if (unk_0x55A0C756C4A8220C(iLocal_92, 0))
		{
			unk_0x3B2646B62E7BBE11(iLocal_92, 3);
			iLocal_619 = 1;
		}
	}
	if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
	{
		unk_0x7653D561C9574763(0, 23, 1);
	}
	if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_209) > 250000f)
	{
		func_104("FM2_TRAAB");
	}
	if (!unk_0xF68107C40359970C(iLocal_89))
	{
		Var4 = { unk_0x6B62510F212526DC(iLocal_89, 1) };
		fVar5 = Var4.f_2;
		if (fVar5 < 10f)
		{
			func_104("FM2_JIMHIT");
		}
	}
}

int func_262(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_89))
	{
		if (!*uParam0)
		{
			if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()) || unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iLocal_89, 1), 10f, 1))
			{
				*uParam0 = 1;
			}
		}
		else if ((unk_0x320D1840B6DAA1CC() - *uParam2) > 200)
		{
			*iParam1++;
			*uParam2 = unk_0x320D1840B6DAA1CC();
			*uParam0 = 0;
		}
		if ((*iParam1 > 0 && !*uParam0) && (unk_0x320D1840B6DAA1CC() - *uParam2) > 1000)
		{
			*iParam1 = (*iParam1 - 1);
		}
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &uVar0, 1);
		if (!func_177() && (unk_0x320D1840B6DAA1CC() - iLocal_169) > 7500)
		{
			func_202(iLocal_89, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0x320D1840B6DAA1CC();
		}
		if ((((((((*iParam1 > 5 || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenade"), 0)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher"), 0)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher_smoke"), 0)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_rpg"), 0)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_molotov"), 0)) || unk_0xA1C6623FC1047DAD(unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_bzgas"), 0)) || unk_0x8FE34BF4165F5104(2, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(2f, 10f, 10f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(2f, 10f, 10f))) || (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4) && unk_0xEEF1A3C0E56FC8FF(iLocal_94, uVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_263()
{
	iLocal_622 = iLocal_621;
	if (unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 5) && unk_0x8D856FF63E29934B(unk_0x9E2D6C50374FCFA9()) <= 5f)
			{
				if (iLocal_621 != 5)
				{
					iLocal_621 = 5;
				}
			}
			else if (!unk_0xF847447D4467709D())
			{
				if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 2))
				{
					if (iLocal_621 != 2)
					{
						iLocal_621 = 2;
					}
				}
				else if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 3))
				{
					if (iLocal_621 != 3)
					{
						iLocal_621 = 3;
					}
				}
				else if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 4))
				{
					if (iLocal_621 != 4)
					{
						iLocal_621 = 4;
					}
				}
			}
		}
		else if (!unk_0xF847447D4467709D())
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 0))
			{
				if (iLocal_621 != 0)
				{
					iLocal_621 = 0;
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 1))
			{
				if (iLocal_621 != 1)
				{
					iLocal_621 = 1;
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(iLocal_627, 4))
			{
				if (iLocal_621 != 4)
				{
					iLocal_621 = 4;
				}
			}
		}
	}
	if (iLocal_621 != iLocal_622)
	{
		iLocal_624 = 0;
		iLocal_623 = 0;
		iLocal_625 = 0;
		fLocal_626 = 0f;
	}
	if (!iLocal_623)
	{
		if ((iLocal_621 != 1 && iLocal_621 != 2) && iLocal_621 != 3)
		{
			if (func_266(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else if (unk_0x4DE6A646AFB7CF5C(0) != 4)
		{
			if (func_266(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else
		{
			iLocal_623 = 1;
		}
	}
	else if (func_243(sLocal_610[iLocal_621]))
	{
		fLocal_626 = (fLocal_626 + unk_0x51109C28352EC9A3());
		if (fLocal_626 > 2f || !func_265(iLocal_621))
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_627, iLocal_621))
			{
				unk_0xCED9E32812D6C7C7(&iLocal_627, iLocal_621);
			}
			if (!iLocal_624 && func_265(iLocal_621))
			{
				if (func_264(iLocal_621))
				{
					iLocal_624 = 1;
				}
			}
			else if (!iLocal_625)
			{
				unk_0x3410421C60BF7143(0);
				iLocal_625 = 1;
			}
		}
	}
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 0:
			if (unk_0xF09A4F413B0D30EB(0, 21) && unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 4f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xF09A4F413B0D30EB(0, 30) || unk_0xF09A4F413B0D30EB(0, 31))
			{
				return 1;
			}
			break;
		
		case 5:
			if (!unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
		{
			if (((iParam0 == 5 || iParam0 == 3) || iParam0 == 2) || iParam0 == 4)
			{
				return 1;
			}
		}
		else if ((iParam0 == 1 || iParam0 == 0) || iParam0 == 4)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_266(char* sParam0, bool bParam1)
{
	if (unk_0xF847447D4467709D() && !func_243(sParam0))
	{
		unk_0x3410421C60BF7143(1);
	}
	else if (bParam1)
	{
		func_267(sParam0);
	}
	else
	{
		func_244(sParam0, -1);
	}
	if (func_243(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_267(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

void func_268(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_62700 = iParam0;
	if (!Global_62698)
	{
		Global_62698 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74785)
		{
			if (Global_74786[iVar0 /*9*/] == iParam0)
			{
				Global_74786[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

bool func_269()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_106))
	{
		unk_0xD69A0C3662175E68(joaat("prop_mp3_dock"));
		if (unk_0x0152AA00FA3130F1(joaat("prop_mp3_dock")))
		{
			iLocal_106 = unk_0x0E536D72AB30F4C8(joaat("prop_mp3_dock"), -2032.539f, -1032.35f, 5.421927f, 1, 1, 0);
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_106))
	{
		unk_0xC64B6E13A6A7F517(iLocal_106, -2032.539f, -1032.35f, 5.421927f, 1, 0, 0, 1);
		unk_0x8CE3D365F064F69E(iLocal_106, 0f, 0f, 66.5523f, 2, 1);
	}
	return unk_0xE5965CDF24F93A9F(iLocal_106);
}

void func_270()
{
	struct<3> Var0;
	
	switch (iLocal_628)
	{
		case 0:
			unk_0xD69A0C3662175E68(joaat("a_c_stingray"));
			iLocal_628++;
			break;
		
		case 1:
			if (unk_0x0152AA00FA3130F1(joaat("a_c_stingray")))
			{
				iLocal_628++;
			}
			break;
		
		case 2:
			Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (Var0.f_2 < 1f)
			{
				iLocal_629 = unk_0xA8D58C3AADA2C41C(26, joaat("a_c_stingray"), -1885.497f, -1189.883f, -8.2945f, -136.1128f, 1, 1);
				unk_0x13C3030981EA7C3B(iLocal_629, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1f, 20000, 1193033728, 1056964608);
				iLocal_628++;
			}
			break;
		
		case 3:
			if (func_271(iLocal_629, unk_0xE2D3D51028F0428A(), 1) > 20f || unk_0x174CED88B97C78D9(iLocal_629, 2106541073) == 7)
			{
				unk_0xF1A23B343DFEDFD0(joaat("a_c_stingray"));
				unk_0xB3822DB3D538C8F3(&iLocal_629);
				iLocal_628++;
			}
			break;
	}
}

float func_271(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

void func_272()
{
	switch (iLocal_159)
	{
		case 0:
			if (!unk_0x496531E41FCF5116())
			{
				unk_0xCB3859A62F123AEF("family_2_mcs_2", 6, 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0x2566F947AAB7B2A7())
			{
				func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
				iLocal_159++;
			}
			break;
		
		case 2:
			func_155();
			if (func_199())
			{
				if (func_273("family_2_mcs_2"))
				{
					unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
					unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
					func_191(1, 1, 1, 0, 0, 0, 0);
					if (!unk_0xF68107C40359970C(iLocal_89))
					{
						unk_0xFFA07CCCE40E3CEF(iLocal_89, 100f);
						unk_0x48F297980C708DB7(iLocal_89, "Jimmy", 0, 0, 0);
					}
					if (unk_0x55A0C756C4A8220C(iLocal_93, 0))
					{
						if (unk_0xE896049AD1887FF0(iLocal_93))
						{
							unk_0x90F8F7D270431FAE(iLocal_93);
						}
					}
					if (unk_0x55A0C756C4A8220C(iLocal_94, 0))
					{
						if (unk_0xE896049AD1887FF0(iLocal_94))
						{
							unk_0x5C65DDDC219B3AA5(iLocal_94, 0);
							unk_0x90F8F7D270431FAE(iLocal_94);
						}
						unk_0x48F297980C708DB7(iLocal_94, "FAM_2_Jimmys_bike", 0, 0, 0);
					}
					unk_0x6CD556854F94F942(4);
					unk_0xF44EE79112016B61(0);
					unk_0xBA6C3C5E9E5A9442();
					unk_0x3410421C60BF7143(1);
					func_190();
					unk_0xF7438EF713CBDAAC(unk_0xE2D3D51028F0428A(), 3, 26, 0);
					unk_0xF7438EF713CBDAAC(unk_0xE2D3D51028F0428A(), 4, 27, 0);
					if (unk_0xA37204C64473B324("FAMILY_2_BIKE_RACE_JIMMY"))
					{
						unk_0x0AF8D3A06BB92903("FAMILY_2_BIKE_RACE_JIMMY");
					}
					unk_0xCB19E968C4D646D8(0f, 0f);
					iLocal_159++;
				}
				else
				{
					unk_0x6D23F8C14190D353();
					unk_0xCB3859A62F123AEF("family_2_mcs_2", 5, 8);
				}
			}
			break;
		
		case 3:
			if (unk_0x55A0C756C4A8220C(iLocal_93, 0))
			{
				if (bLocal_180)
				{
					unk_0xC64B6E13A6A7F517(iLocal_93, -1848.195f, -1218.706f, 12.58357f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_93, 129.3527f);
				}
				else
				{
					unk_0xC64B6E13A6A7F517(iLocal_93, -1867.383f, -1212.198f, 12.57401f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_93, -0.030485f);
				}
				unk_0x9F65B3BAFA302A65(iLocal_93, 1084227584);
				unk_0xAA8C46C452582702(iLocal_93);
			}
			unk_0x7A997A0A971D305F(-1859.045f, -1215.503f, 12.0665f, 2f, 1, 0, 0, 0);
			if (!unk_0xE9E8955A780DDA01() && !unk_0xECD40FEF3CF43BDB())
			{
				unk_0x5A7ACD1CDF509B0D(500);
			}
			unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 1);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0x496531E41FCF5116() && unk_0xF34D8FCAE3FD4EE4())
			{
				unk_0x9B8B94A1196F345F(1.5f);
				if (unk_0xC10FE9051DBB0E91() > 90500)
				{
					unk_0x7653D561C9574763(2, 18, 1);
				}
			}
			if (unk_0x6F2E1326DB60D575("Michael", 0))
			{
				unk_0x8F70948CB5539BEB();
				func_383(1, 0);
				unk_0x94953C3FF0664F66(0);
				unk_0x080C97B891E2F3AA(0, 1065353216);
				unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -1115154469, 0, 1, 0);
				unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 3f, iLocal_171, 0, 1, 0);
				func_244("FM2_DIVOFF", -1);
			}
			if (!unk_0x496531E41FCF5116())
			{
				unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
				if (unk_0x55A0C756C4A8220C(iLocal_94, 0))
				{
					unk_0xA539EDE8DA5BBC22(iLocal_94, -1858.612f, -1214.563f, 12.307f, 0, 0, 1);
					unk_0x03F4139102BA4AFC(iLocal_94, 0.388f, -0.438f, 0.4777f, 0.6553f);
					unk_0x3F6DE6DBA9A99FEA(iLocal_94, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				unk_0x6475234C10008E58(unk_0xE2D3D51028F0428A());
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				func_207(5);
			}
			break;
	}
}

bool func_273(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1DF60FC4FE15E596(sParam0);
	if (!Global_77851)
	{
		if (!bVar0)
		{
			Global_77851 = 1;
		}
	}
	return bVar0;
}

void func_274()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
	unk_0x39B76F783934D136(0.7f);
	if ((!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
	{
		if (((((unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("cruiser")) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("scorcher"))) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("tribike"))) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("tribike2"))) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("tribike3"))) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("bmx")))
		{
			unk_0x3D81769BEC61BFF8(&iLocal_93);
			iLocal_93 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar0 = 0;
			while (iVar0 < iLocal_96)
			{
				if (iLocal_96[iVar0] == unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_96[iVar0] = 0;
				}
				iVar0++;
			}
			unk_0x2D58A6131679D82C(iLocal_93, 1, 0);
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_95) && unk_0x55A0C756C4A8220C(iLocal_95, 0))
	{
		if ((vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_95, 1)) > 1000f && unk_0x4D21C9FB671ED18F(iLocal_95)) && !unk_0x0318E2EE6FB4563F(Local_131, 5f))
		{
			if (vdist2(Local_131, unk_0x6B62510F212526DC(iLocal_95, 1)) < 625f)
			{
				func_447(iLocal_95, Local_131 + Vector(1f, 0f, 0f), fLocal_132, 24, 0);
				func_446(24);
			}
			unk_0xD59CC8123FD1A789(&iLocal_95);
		}
	}
	if ((!unk_0xF68107C40359970C(iLocal_89) && unk_0x55A0C756C4A8220C(iLocal_94, 0)) && unk_0x55A0C756C4A8220C(iLocal_93, 0))
	{
		if ((((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1308.715f, -1310.135f, -22.62013f, -1171.372f, -1261.148f, 47.98976f, 250f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1348.925f, -1155.041f, -20.53191f, -1163.36f, -1143.443f, 34.68446f, 142.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1386.385f, -1054.306f, -16.12128f, -1245.289f, -965.9915f, 32.39125f, 142.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1462.164f, -972.0999f, -20.40302f, -1332.72f, -833.9435f, 45.98875f, 227.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1178.163f, -1629.206f, 1.873874f, -1315.888f, -1365.294f, 25.02553f, 173.75f, 0, 1, 0))
		{
			unk_0xAC60FC9AB1B2CC70(1);
		}
		else
		{
			unk_0xAC60FC9AB1B2CC70(0);
		}
		if ((unk_0xE5965CDF24F93A9F(iLocal_93) && unk_0x55A0C756C4A8220C(iLocal_93, 0)) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
		{
			if (!unk_0xA37204C64473B324("FAMILY_2_BIKE_RACE_JIMMY"))
			{
				unk_0x66B27A59829491D3("FAMILY_2_BIKE_RACE_JIMMY");
			}
		}
		switch (iLocal_159)
		{
			case 0:
				fLocal_600 = 0f;
				unk_0xB11C0CF5CCDFE10A(iLocal_89, 1);
				if (unk_0xE896049AD1887FF0(iLocal_94))
				{
					unk_0x90F8F7D270431FAE(iLocal_94);
				}
				uLocal_104 = func_216(iLocal_94, 0, 0);
				unk_0xAF62582F3EA39095(uLocal_104, "BLIP_280");
				unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 0, 2);
				iLocal_185 = 0;
				iLocal_184 = 0;
				bLocal_180 = false;
				iLocal_181 = 0;
				iLocal_601 = 0;
				iLocal_602 = (Local_603.x - 1);
				iLocal_604 = 0;
				bLocal_607 = false;
				Local_603[0 /*3*/] = { -1266.288f, -1689.561f, 3.4691f };
				Local_603[1 /*3*/] = { -1345.057f, -1263.89f, 3.8977f };
				Local_603[2 /*3*/] = { -1564.547f, -928.2069f, 12.0173f };
				Local_603[3 /*3*/] = { Local_146 };
				unk_0x780D33653803D9B0(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), 0, 0);
				unk_0x90D68B004DE537B5(-1361.568f, -1207.053f, 3.4492f, 10f, 0);
				unk_0x90D68B004DE537B5(-1396.34f, -1059.049f, 3.2013f, 15f, 0);
				unk_0x006574E87E6F1942(iLocal_89, 1, 1);
				unk_0x398C962F550CF3B4(iLocal_89, 1);
				unk_0x006574E87E6F1942(iLocal_94, 1, 1);
				unk_0x398C962F550CF3B4(iLocal_94, 1);
				func_237(&uLocal_213, iLocal_158, sLocal_156);
				iLocal_159++;
				unk_0xCB19E968C4D646D8(0.5f, 0.5f);
				func_282(500);
				unk_0x07CECF421D895F3D(1, 0);
				unk_0x07CECF421D895F3D(7, 0);
				unk_0x07CECF421D895F3D(2, 0);
				unk_0x07CECF421D895F3D(4, 0);
				unk_0x07CECF421D895F3D(10, 0);
				unk_0x07CECF421D895F3D(9, 0);
				unk_0x07CECF421D895F3D(8, 0);
				unk_0x13A763A67BA2A95B("smboat");
				break;
			
			case 1:
				if (unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_94, 0))
				{
					unk_0x3B8F94419979A0B1(iLocal_89, iLocal_94, -1092.392f, -1708.092f, 3.2771f, 7f, 0, joaat("cruiser"), 786471, 3f, 4f);
					iLocal_159++;
				}
				else if (unk_0x174CED88B97C78D9(iLocal_89, -1794415470) != 1)
				{
					unk_0xB486640392EC50BB(iLocal_89, iLocal_94, -1, -1, 3f, 1, 0);
				}
				break;
			
			case 2:
				if (unk_0x8F41785F110B0DA0(iLocal_94, -1092.392f, -1708.092f, 3.2771f, 4f, 4f, 4f, 0, 1, 0))
				{
					unk_0x03A927199A2DFE46(iLocal_89);
					unk_0x1B70646075A0F088(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_159++;
				}
				break;
			
			case 3:
				fLocal_609 = func_280(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iLocal_158, sLocal_156, &uLocal_213);
				Local_608 = { unk_0xA53596FA06DE5ECB(iLocal_158, fLocal_609, sLocal_156) };
				fLocal_600 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_608);
				if (bLocal_607)
				{
					if (fLocal_600 < 75f)
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						bLocal_607 = false;
					}
					if (!iLocal_203)
					{
						func_149("FM2_RIDEBK", 7500, 1);
						iLocal_204 = unk_0x320D1840B6DAA1CC();
						iLocal_203 = 1;
					}
					if (fLocal_600 > 300f)
					{
						func_104("FM2_RACEFAIL");
					}
				}
				else
				{
					if ((unk_0x320D1840B6DAA1CC() - iLocal_204) > 20000)
					{
						iLocal_203 = 0;
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_105))
					{
						if (unk_0x12DD4A0B247D9B4D(uLocal_104))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_104);
						}
						if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_93, 1)) > 22500f)
						{
							func_104("FM2_BIKLOST");
						}
					}
					else if (!bLocal_180)
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
						{
							uLocal_104 = func_216(iLocal_94, 0, 0);
							unk_0xAF62582F3EA39095(uLocal_104, "BLIP_280");
						}
					}
					if (fLocal_600 > 150f)
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						unk_0xFFD8EB5462B07B59(&uLocal_104);
						unk_0xB2C30AEAD64A860F();
						iLocal_602 = (Local_603.x - 1);
						bLocal_607 = true;
					}
				}
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_89, 15f, 15f, 10f, 0, 1, 0) && !func_177())
				{
					if (unk_0x320D1840B6DAA1CC() - iLocal_601) > unk_0x5853B15F78E1A265(1200, 1400)
					{
						func_202(iLocal_89, "BREATHING", "JIMMY_NORMAL", 24);
						iLocal_601 = unk_0x320D1840B6DAA1CC();
					}
				}
				if ((((((unk_0x8FE34BF4165F5104(2, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f)) || unk_0x8FE34BF4165F5104(0, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x8FE34BF4165F5104(1, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x8FE34BF4165F5104(4, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x8FE34BF4165F5104(7, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x8FE34BF4165F5104(10, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x8FE34BF4165F5104(25, unk_0x6B62510F212526DC(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0x6B62510F212526DC(iLocal_89, 1) - Vector(3f, 3f, 3f)))
				{
					unk_0xB11C0CF5CCDFE10A(iLocal_89, 2);
				}
				if (bLocal_180)
				{
					if (!iLocal_178)
					{
						unk_0xCB3859A62F123AEF("family_2_mcs_2", 5, 8);
						iLocal_179 = 0;
						iLocal_178 = 1;
					}
					if (iLocal_178 && !iLocal_179)
					{
						if (unk_0x2566F947AAB7B2A7())
						{
							func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1811.906f, -1195.154f, 11.7672f, -1846.906f, -1237.279f, 19.5172f, 21.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1816.365f, -1234.039f, 7.017199f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1856.623f, -1201.832f, 7.017204f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0))
					{
						if (iLocal_179)
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
							unk_0xFFD8EB5462B07B59(&uLocal_104);
							unk_0x2DA9F9D8E5530E75(12f, 5f, 4);
							func_207(4);
						}
					}
				}
				else
				{
					func_279();
					if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_124) < 10000f)
					{
						if (!iLocal_178)
						{
							unk_0xCB3859A62F123AEF("family_2_mcs_2", 6, 8);
							iLocal_178 = 1;
						}
						else if (!iLocal_179 && unk_0x2566F947AAB7B2A7())
						{
							func_2("Michael", unk_0xE2D3D51028F0428A(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
					{
						if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_146, Global_19, 1, 1, 0))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
							unk_0xFFD8EB5462B07B59(&uLocal_104);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (func_208(iLocal_93, 30f, 1, 1056964608, 0, 1, 0))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 256);
					unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), -1823.195f, -1213.526f, 12.152f, -1, 0, 3);
					unk_0x02F1CAAC7CB77E47(unk_0xE2D3D51028F0428A(), iLocal_93, 0);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (unk_0x55A0C756C4A8220C(iLocal_93, 0) && !unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_93))
				{
					settimera(0);
					iLocal_159++;
				}
				break;
			
			case 6:
				if (timera() > 800)
				{
					unk_0x2DA9F9D8E5530E75(12f, 5f, 4);
					func_207(4);
				}
				break;
		}
		if (!unk_0xF68107C40359970C(iLocal_89) && unk_0x55A0C756C4A8220C(iLocal_94, 0))
		{
			if (func_262(&uLocal_606, &iLocal_604, &uLocal_605))
			{
				func_104("FM2_JSPOOK");
			}
			if (!iLocal_181)
			{
				if (iLocal_159 < 4)
				{
					fLocal_598 = func_280(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iLocal_158, sLocal_156, &uLocal_213);
					fLocal_599 = func_280(unk_0x6B62510F212526DC(iLocal_89, 1), iLocal_158, sLocal_156, &uLocal_213);
					fVar1 = (fLocal_599 - fLocal_598);
					func_278(fVar1, fLocal_600, fLocal_598 > fLocal_599);
					if (unk_0x8F41785F110B0DA0(iLocal_89, Local_146, Global_19, 0, 1, 0))
					{
						unk_0x959E1626CBC7D38A(iLocal_94, 1, 0);
						unk_0x398C962F550CF3B4(iLocal_89, 1);
						unk_0x398C962F550CF3B4(iLocal_94, 1);
						if (!bLocal_180)
						{
							unk_0x6D23F8C14190D353();
							iLocal_178 = 0;
							bLocal_180 = true;
						}
						iLocal_181 = 1;
					}
				}
				else if ((!bLocal_180 && unk_0xD132EDDA78FF4A51(iLocal_89, -1806.987f, -1191.762f, -42.98238f, -1854.44f, -1247.811f, 30.4819f, 90f, 0, 1, 0)) && vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 36f)
				{
					unk_0xFFD8EB5462B07B59(&uLocal_102);
					unk_0xFFD8EB5462B07B59(&uLocal_104);
					func_207(4);
				}
			}
			if (iLocal_181 || (iLocal_159 >= 4 && !unk_0xE896049AD1887FF0(iLocal_94)))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_94, 0))
				{
					if (!unk_0x4D21C9FB671ED18F(iLocal_89) && vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 2500f)
					{
						if (unk_0xE896049AD1887FF0(iLocal_94))
						{
							unk_0x90F8F7D270431FAE(iLocal_94);
						}
					}
					else
					{
						unk_0x90F8F7D270431FAE(iLocal_94);
						unk_0x5C65DDDC219B3AA5(iLocal_94, 1);
					}
				}
			}
		}
		if (iLocal_159 < 4 && iLocal_159 > 0)
		{
			if (unk_0x55A0C756C4A8220C(iLocal_93, 0) && unk_0xE5965CDF24F93A9F(iLocal_93))
			{
				if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_105))
					{
						unk_0xBA6C3C5E9E5A9442();
						if (iLocal_547)
						{
							func_148(&Local_544);
						}
						uLocal_105 = func_216(iLocal_93, 0, 0);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
						iLocal_602 = (Local_603.x - 1);
						unk_0xB2C30AEAD64A860F();
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_104))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_104);
					}
				}
				else
				{
					iLocal_547 = 1;
					if (bLocal_607)
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							fVar2 = func_241((fLocal_609 + 10000f), 20000f, unk_0x733908DBFA08CEAD(iLocal_158, sLocal_156));
							uLocal_102 = func_215(unk_0xA53596FA06DE5ECB(iLocal_158, fVar2, sLocal_156), 1);
						}
					}
					else
					{
						if (!unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							unk_0xBA6C3C5E9E5A9442();
							uLocal_102 = func_215(Local_146, 0);
						}
						func_277(&Local_603, &iLocal_602);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_105))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_105);
					}
				}
			}
		}
	}
	func_275();
}

void func_275()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_93) && unk_0x55A0C756C4A8220C(iLocal_93, 0))
	{
		switch (iLocal_160)
		{
			case 0:
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0) && !func_276())
				{
					if (!unk_0x3A76A0944BE2C291(0))
					{
						func_244("FM2_BIKE1", -1);
					}
					else
					{
						func_244("FM2_BIKE1_KM", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 1:
				if (!unk_0x8FE9914D4872D601())
				{
					if ((!func_243("FM2_BIKE1") && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0)) && !func_276())
					{
						func_244("FM2_BIKE2", -1);
						iLocal_160++;
					}
				}
				else if (((!func_243("FM2_BIKE1") && !func_243("FM2_BIKE1_KM")) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0)) && !func_276())
				{
					func_244("FM2_BIKE2", -1);
					iLocal_160++;
				}
				break;
			
			case 2:
				if ((!func_243("FM2_BIKE2") && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0)) && !func_276())
				{
					if (unk_0x7010991FDA59D3F2(iLocal_93, joaat("bmx")) || unk_0x7010991FDA59D3F2(iLocal_93, joaat("scorcher")))
					{
						func_244("FM2_BIKE3", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 3:
				if (((!func_243("FM2_BIKE2") && !func_243("FM2_BIKE3")) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0)) && !func_276())
				{
					func_244("FM2_BIKE4", -1);
					iLocal_160++;
				}
				break;
		}
		if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0) || func_276())
		{
			if (unk_0x8FE9914D4872D601())
			{
				if (func_243("FM2_BIKE1_KM"))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if ((((func_243("FM2_BIKE1") || func_243("FM2_BIKE2")) || func_243("FM2_BIKE3")) || func_243("FM2_BIKE4")) || func_243("FM2_WHEELIE"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
	}
}

bool func_276()
{
	return Global_75021;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		fVar4 = vdist2(Var3, *(iParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (vdist2(Var3, *(iParam0[iVar1 + 1 /*3*/])) < vdist2(*(iParam0[iVar1 /*3*/]), *(iParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*iParam1 != iVar1)
	{
		if (*iParam1 >= 0 && vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), *(iParam0[*iParam1 /*3*/])) > 25f)
		{
			unk_0xB2C30AEAD64A860F();
			unk_0x31DF7483722BA3A1(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				unk_0x899CD4ECA1259E41(*(iParam0[iVar0 /*3*/]));
				iVar0++;
			}
			unk_0x899CD4ECA1259E41(*(iParam0[(*iParam0 - 1) /*3*/]));
			unk_0xC5239B40CAD5176C(1);
		}
		*iParam1 = iVar1;
	}
}

void func_278(float fParam0, float fParam1, bool bParam2)
{
	float fVar0;
	
	fParam0 = unk_0x48053974ED6F63CE(fParam0);
	fVar0 = vdist(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
	if (unk_0x55A0C756C4A8220C(iLocal_93, 0) && !unk_0xF68107C40359970C(iLocal_89))
	{
		switch (iLocal_184)
		{
			case 0:
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_198 = 0;
				iLocal_199 = 0;
				iLocal_200 = 0;
				iLocal_187 = 0;
				iLocal_188 = 0;
				iLocal_189 = 0;
				if (bParam2 && fParam0 > 15000f)
				{
					iLocal_199 = 1;
				}
				if (!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_PIER", 8, 0, 0, 0))
						{
							settimera(0);
							iLocal_184++;
						}
					}
					else
					{
						iLocal_184++;
					}
				}
				break;
			
			case 1:
				if (timera() > 2000)
				{
					if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_93))
					{
						settimera(0);
						unk_0xBA6C3C5E9E5A9442();
						func_148(&Local_543);
						iLocal_184++;
					}
				}
				break;
			
			case 2:
				if ((timera() > 1000 && !func_177()) && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_RACEM", 8, 0, 0, 0))
						{
							iLocal_184++;
						}
					}
				}
				else if (timera() > 15000)
				{
					iLocal_184++;
				}
				break;
			
			case 3:
				if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && fVar0 < 35f)
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_TRIA", 8, 0, 0, 0))
					{
						iLocal_184++;
					}
				}
				break;
			
			case 4:
				if (bParam2)
				{
					unk_0x963A57DF8530029D("Player in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				else
				{
					unk_0x963A57DF8530029D("Jimmy in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_196)
				{
					unk_0x963A57DF8530029D("Michael take over line should fire", 0.01f, 0.7f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_197)
				{
					unk_0x963A57DF8530029D("Jimmy take over line should fire", 0.01f, 0.72f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_199)
				{
					unk_0x963A57DF8530029D("bPlayerHasCheated", 0.01f, 0.74f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_200)
				{
					unk_0x963A57DF8530029D("bPlayerHasBumpedJimmy", 0.01f, 0.76f, 0f, 0, 0, 255, 255);
				}
				if (bParam2 != bLocal_557)
				{
					iLocal_558 = unk_0x320D1840B6DAA1CC();
					if (bParam2)
					{
						iLocal_196 = 1;
						iLocal_197 = 0;
						iLocal_186 = (unk_0x320D1840B6DAA1CC() - 10000);
					}
					else
					{
						iLocal_196 = 0;
						iLocal_197 = 1;
						iLocal_186 = (unk_0x320D1840B6DAA1CC() - 10000);
					}
				}
				if (iLocal_197)
				{
					if (((unk_0x320D1840B6DAA1CC() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_STUFF", 8, 0, 0, 0))
						{
							iLocal_197 = 0;
						}
					}
					else
					{
						iLocal_197 = 0;
					}
				}
				if (iLocal_196)
				{
					if (((unk_0x320D1840B6DAA1CC() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_PASS", 8, 0, 0, 0))
						{
							iLocal_196 = 0;
						}
					}
					else
					{
						iLocal_196 = 0;
					}
				}
				if (!iLocal_199 && !iLocal_200)
				{
					if (bParam2)
					{
						if (!func_177())
						{
							if ((unk_0x320D1840B6DAA1CC() - iLocal_559) > 10000)
							{
								if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && fVar0 < 35f)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
									{
										iLocal_559 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
							else if ((unk_0x320D1840B6DAA1CC() - iLocal_559) < 5000 && (unk_0x320D1840B6DAA1CC() - iLocal_186) > 10000)
							{
								if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && fVar0 < 40f)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_FRONT", 8, 0, 0, 0))
									{
										iLocal_186 = unk_0x320D1840B6DAA1CC();
									}
								}
							}
						}
					}
					else if ((unk_0x320D1840B6DAA1CC() - iLocal_559) > 10000)
					{
						if (((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && fVar0 < 35f) && !bParam2)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_CLOSE", 8, 0, 0, 0))
							{
								iLocal_559 = unk_0x320D1840B6DAA1CC();
							}
						}
					}
					else if ((unk_0x320D1840B6DAA1CC() - iLocal_559) < 5000 && (unk_0x320D1840B6DAA1CC() - iLocal_186) > 10000)
					{
						if ((!func_177() && (!unk_0x559C03F53E6937FC() || unk_0x5D851A9195129CE9(203) == 0)) && fVar0 < 40f)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_BEH", 8, 0, 0, 0))
							{
								iLocal_186 = unk_0x320D1840B6DAA1CC();
							}
						}
					}
					if ((fVar0 < 5f && (unk_0x320D1840B6DAA1CC() - iLocal_187) > 1000) && (unk_0x320D1840B6DAA1CC() - iLocal_188) > 10000)
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0) && unk_0x72F6AE51B7E34865(iLocal_93, iLocal_94))
						{
							iLocal_200 = 1;
						}
						iLocal_187 = unk_0x320D1840B6DAA1CC();
					}
					if ((unk_0x320D1840B6DAA1CC() - iLocal_189) > 10000)
					{
						if (!iLocal_199)
						{
							if (fParam1 > 50f)
							{
								iLocal_199 = 1;
							}
						}
					}
				}
				else if (iLocal_199)
				{
					if ((fVar0 < 35f && !func_177()) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_CHEAT", 8, 0, 0, 0))
						{
							iLocal_189 = unk_0x320D1840B6DAA1CC();
							iLocal_199 = 0;
						}
					}
				}
				else if (iLocal_200)
				{
					if ((fVar0 < 35f && !func_177()) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_HIT", 8, 0, 0, 0))
						{
							iLocal_188 = unk_0x320D1840B6DAA1CC();
							iLocal_200 = 0;
						}
					}
				}
				if (!iLocal_198)
				{
					if (unk_0xD132EDDA78FF4A51(iLocal_89, -1545.975f, -937.1822f, 10.33204f, -1556.068f, -928.8806f, 16.72215f, 3.75f, 0, 1, 0) && fVar0 < 35f)
					{
						iLocal_184++;
						iLocal_186 = unk_0x320D1840B6DAA1CC();
						iLocal_198 = 1;
					}
				}
				break;
			
			case 5:
				if ((fVar0 < 35f && !func_177()) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JEND", 8, 0, 0, 0))
					{
						iLocal_186 = unk_0x320D1840B6DAA1CC();
						iLocal_184++;
					}
				}
				if ((unk_0x320D1840B6DAA1CC() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
			
			case 6:
				if ((fVar0 < 35f && !func_177()) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
					{
						iLocal_184 = 4;
					}
				}
				if ((unk_0x320D1840B6DAA1CC() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
		}
		bLocal_557 = bParam2;
	}
}

void func_279()
{
	if (!unk_0xF68107C40359970C(iLocal_89) && unk_0x55A0C756C4A8220C(iLocal_94, 0))
	{
		if (unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_94, 0))
		{
			fLocal_598 = func_280(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iLocal_158, sLocal_156, &uLocal_213);
			fLocal_599 = func_280(unk_0x6B62510F212526DC(iLocal_94, 1), iLocal_158, sLocal_156, &uLocal_213);
			if (!iLocal_596)
			{
				if (!iLocal_597)
				{
					if (unk_0xD132EDDA78FF4A51(iLocal_89, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iLocal_89, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
					{
						if (unk_0x8F33D7496432068D(iLocal_94) || unk_0xE896049AD1887FF0(iLocal_94))
						{
							unk_0x90F8F7D270431FAE(iLocal_94);
						}
						unk_0x1B70646075A0F088(iLocal_94, iLocal_158, sLocal_156, 15f, 262144);
						iLocal_597 = 1;
					}
				}
				else if (!unk_0xD132EDDA78FF4A51(iLocal_89, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(iLocal_89, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
				{
					if (unk_0x8F33D7496432068D(iLocal_94) || unk_0xE896049AD1887FF0(iLocal_94))
					{
						unk_0x90F8F7D270431FAE(iLocal_94);
					}
					unk_0x1B70646075A0F088(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_597 = 0;
				}
				if ((vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_89, 1)) > 10000f && fLocal_599 > 10f) && (unk_0xF777CAA43F4B281A(iLocal_158, sLocal_156) && fLocal_599 < (unk_0x733908DBFA08CEAD(iLocal_158, sLocal_156) - 10f)))
				{
					if ((unk_0x4D21C9FB671ED18F(iLocal_89) && unk_0x4D21C9FB671ED18F(iLocal_94)) && !unk_0x0318E2EE6FB4563F(unk_0xA53596FA06DE5ECB(iLocal_158, fLocal_599, sLocal_156), 4f))
					{
						unk_0x959E1626CBC7D38A(iLocal_94, 0, 0);
						unk_0x90F8F7D270431FAE(iLocal_94);
						unk_0x2F4DB11A0DB3685A(iLocal_94, iLocal_158, sLocal_156, 1);
						unk_0x4030F85138A50DF6(iLocal_94, fLocal_599);
						iLocal_596 = 1;
					}
				}
			}
			else if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_89, 1)) < 9025f)
			{
				if (unk_0xE896049AD1887FF0(iLocal_94))
				{
					unk_0x959E1626CBC7D38A(iLocal_94, 1, 0);
					unk_0xF4E68EBD83914967(iLocal_94, 786549);
					iLocal_596 = 0;
				}
			}
		}
		else if (unk_0x174CED88B97C78D9(iLocal_89, -1794415470) != 1)
		{
			unk_0xB486640392EC50BB(iLocal_89, iLocal_94, 20000, -1, 2f, 1, 0);
		}
	}
}

float func_280(struct<3> Param0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	float fVar18;
	float fVar19;
	
	if (unk_0xF777CAA43F4B281A(iParam1, sParam2))
	{
		iVar2[0] = (*uParam3 - 1);
		iVar2[1] = (*uParam3 - 2);
		iVar2[2] = (*uParam3 - 3);
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			fVar3 = unk_0x48053974ED6F63CE((Param0.x - (*uParam3)[iVar0 /*3*/]));
			fVar4 = unk_0x48053974ED6F63CE((Param0.f_1 - (uParam3[iVar0 /*3*/])->f_1));
			fVar5 = (fVar3 + fVar4);
			fVar6 = 0f;
			iVar7 = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 != iVar2[iVar1])
				{
					fVar8 = unk_0x48053974ED6F63CE((Param0.x - (*uParam3)[iVar2[iVar1] /*3*/]));
					fVar9 = unk_0x48053974ED6F63CE((Param0.f_1 - (uParam3[iVar2[iVar1] /*3*/])->f_1));
					fVar10 = (fVar8 + fVar9);
					if (fVar10 > fVar6)
					{
						iVar7 = iVar1;
						fVar6 = fVar10;
					}
				}
				iVar1++;
			}
			if (fVar5 < fVar6)
			{
				iVar2[iVar7] = iVar0;
			}
			iVar0++;
		}
		fVar11 = 999999f;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iVar2[iVar0] > 0)
			{
				Var14 = { unk_0x291018E753A9A0AD(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[(iVar2[iVar0] - 1) /*3*/]), 1) };
			}
			else
			{
				Var14 = { *(uParam3[0 /*3*/]) };
			}
			if (iVar2[iVar0] < (*uParam3 - 2))
			{
				Var15 = { unk_0x291018E753A9A0AD(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[iVar2[iVar0] + 1 /*3*/]), 1) };
			}
			else
			{
				Var15 = { *(uParam3[(*uParam3 - 1) /*3*/]) };
			}
			bVar17 = false;
			if (vdist2(Param0, Var14) < vdist2(Param0, Var15))
			{
				Var16 = { Var14 };
			}
			else
			{
				bVar17 = true;
				Var16 = { Var15 };
			}
			if (vdist2(Param0, Var16) < fVar11)
			{
				if (bVar17)
				{
					iVar12 = iVar2[iVar0];
				}
				else
				{
					iVar12 = (iVar2[iVar0] - 1);
				}
				fVar11 = vdist2(Param0, Var16);
				Var13 = { Var16 };
			}
			iVar0++;
		}
		iVar12 = func_281(iVar12, 0, (*uParam3 - 2));
		fVar18 = (unk_0x733908DBFA08CEAD(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
		fVar19 = ((vdist(*(uParam3[iVar12 /*3*/]), Var13) / vdist(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
		return (fVar19 + (IntToFloat(iVar12) * fVar18));
	}
	return 0f;
}

int func_281(int iParam0, int iParam1, int iParam2)
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

void func_282(int iParam0)
{
	if (!unk_0xE9E8955A780DDA01())
	{
		unk_0x5A7ACD1CDF509B0D(iParam0);
		while (!unk_0xE9E8955A780DDA01())
		{
			wait(0);
		}
	}
}

void func_283()
{
	int iVar0;
	struct<6> Var1;
	var uVar2;
	var uVar3;
	
	unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
	unk_0x710E43300E497E2A(unk_0x9E2D6C50374FCFA9());
	unk_0x39B76F783934D136(0.4f);
	if (iLocal_159 != 1000)
	{
		if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 2500f)
		{
			iLocal_163 = iLocal_159;
			iLocal_159 = 1000;
		}
	}
	if (unk_0xA37204C64473B324("FAMILY_2_DRIVE_TO_BEACH"))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x0AF8D3A06BB92903("FAMILY_2_DRIVE_TO_BEACH");
		}
	}
	if (iLocal_117 && iLocal_159 > 1)
	{
		if ((unk_0x320D1840B6DAA1CC() - iLocal_595) < 2000)
		{
			unk_0x3DBD501D46E6A2BE(unk_0xE2D3D51028F0428A(), 1f);
		}
		else
		{
			iLocal_117 = 0;
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_89) && !unk_0xF68107C40359970C(iLocal_90))
	{
		switch (iLocal_159)
		{
			case 0:
				iLocal_547 = 0;
				unk_0x6221A52631154EF7(iLocal_89);
				unk_0xB018BAA4ED9AA217(iLocal_158, sLocal_156);
				unk_0x8FB472886552D737("veh@bicycle@mountain_f@front@base");
				iLocal_159++;
				iLocal_165 = 0;
				iLocal_166 = 0;
				iLocal_164 = 4;
				iLocal_594 = 0;
				iLocal_595 = unk_0x320D1840B6DAA1CC();
				unk_0x8576657A629C4B0A(0.3f);
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
				break;
			
			case -1:
				func_101();
				if ((!unk_0xF68107C40359970C(iLocal_90) && unk_0x574E2A23F0F76E35(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0)) && unk_0xFB9EB8DE7A01979A(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
				{
					iLocal_155 = 0;
					iLocal_159 = 1;
				}
				break;
			
			case 1:
				uLocal_102 = func_215(Local_133, 0);
				if (bLocal_182)
				{
					func_151("FM2_BK2BIKE", 7500, 1);
					settimera(0);
				}
				unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_89, 40000, 4, 2);
				unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), 40000, 4, 2);
				iLocal_591 = 0;
				if (func_177())
				{
					Var1 = { func_315() };
					if (!unk_0x3C57C2F07FEE34D2("FAM2_HIRE1", &Var1))
					{
						func_174();
					}
				}
				iLocal_593 = 0;
				if (unk_0xA829C9A2767AC8EF())
				{
					unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -668482597, 0, 0, 0);
				}
				iLocal_159++;
				break;
			
			case 2:
				if (Global_111962)
				{
					while (Global_111962)
					{
						wait(0);
					}
				}
				if (unk_0xA829C9A2767AC8EF() && !unk_0xECD40FEF3CF43BDB())
				{
					unk_0x5A7ACD1CDF509B0D(1000);
				}
				if (unk_0xD5C6B5E3B93A5EDC(iLocal_89, 1))
				{
					if (!func_177())
					{
						unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
						if (unk_0x55A0C756C4A8220C(iLocal_95, 0) && unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0))
						{
							unk_0x02F1CAAC7CB77E47(iLocal_89, iLocal_95, 0);
						}
						else
						{
							unk_0xAB7639D658BBCCEE(iLocal_89, 0, 0);
						}
					}
				}
				else
				{
					settimerb(0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (!unk_0xF68107C40359970C(iLocal_89) && timera() > 3000)
				{
					if (!unk_0x2E7F5417D4F4DD69(iLocal_89, unk_0xE2D3D51028F0428A(), 60f))
					{
						if (unk_0x174CED88B97C78D9(iLocal_89, 242628503) != 1)
						{
							unk_0x03A927199A2DFE46(iLocal_89);
							unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 16, 2);
							unk_0xA888F8CC04F25CC8(&uLocal_520);
							unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
							unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 16, 2);
							unk_0xC963A45B50851768(uLocal_520);
							unk_0x8ACADA903FCAA42F(iLocal_89, uLocal_520);
							unk_0x7461D7C5BA953BC7(&uLocal_520);
						}
					}
					else if (unk_0x174CED88B97C78D9(iLocal_89, 242628503) != 1)
					{
						if (!unk_0xF68107C40359970C(iLocal_89))
						{
							unk_0xF30F15F203736DE4(iLocal_89, unk_0xE2D3D51028F0428A(), -1, 16, 2);
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_90))
					{
						if ((vdist(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(iLocal_90, 1)) > (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_90, 1)) + 0.3f) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0)) || timera() > 6000)
						{
							unk_0x03A927199A2DFE46(iLocal_89);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x174CED88B97C78D9(iLocal_89, 242628503) != 1 || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
					{
						unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
						unk_0x5C65DDDC219B3AA5(iLocal_95, 0);
					}
					unk_0xA888F8CC04F25CC8(&uVar2);
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0))
					{
						unk_0xAB7639D658BBCCEE(0, 0, 0);
					}
					unk_0x7D1424753688EE7A(0, -1102.187f, -1697.891f, 3.3562f, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0xC963A45B50851768(uVar2);
					unk_0x8ACADA903FCAA42F(iLocal_89, uVar2);
					unk_0x7461D7C5BA953BC7(&uVar2);
					unk_0xCAC4D1050F2E6899(iLocal_89, 1f);
					iLocal_159++;
				}
				break;
			
			case 5:
				unk_0xCAC4D1050F2E6899(iLocal_89, 1f);
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						func_155();
						if (func_158(&Local_549, cLocal_202, "FAM2_HIRE3", 8, 0, 0, 0))
						{
							unk_0xBA6C3C5E9E5A9442();
							unk_0xF30F15F203736DE4(iLocal_90, unk_0xE2D3D51028F0428A(), 30000, 0, 2);
							unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_90, 10000, 0, 2);
							unk_0xFFD8EB5462B07B59(&uLocal_102);
							settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case 6:
				if (unk_0x55A0C756C4A8220C(iLocal_96[iLocal_164], 0) && !unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_96[iLocal_164], 0))
				{
					if (!unk_0x7158135695FAE89D(iLocal_96[iLocal_164], -1, 0))
					{
						if (iLocal_593)
						{
							unk_0x03A927199A2DFE46(iLocal_89);
							iLocal_593 = 0;
						}
						if (iLocal_164 == 4)
						{
							iLocal_164 = 1;
						}
						else if (iLocal_164 == 1)
						{
							iLocal_164 = 4;
						}
					}
				}
				if (!unk_0xE5965CDF24F93A9F(iLocal_93))
				{
					unk_0xCAC4D1050F2E6899(iLocal_89, 1f);
				}
				unk_0x8FB472886552D737("veh@bicycle@mountain_f@front@base");
				if (unk_0x6F940C2636C076AD("veh@bicycle@mountain_f@front@base"))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_96[iLocal_164], 0))
					{
						if (!iLocal_593 && (unk_0xD132EDDA78FF4A51(iLocal_89, -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0) || !unk_0xD132EDDA78FF4A51(iLocal_96[iLocal_164], -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0)))
						{
							unk_0xA888F8CC04F25CC8(&uVar3);
							unk_0xB486640392EC50BB(0, iLocal_96[iLocal_164], -1, -1, 2f, 1, 0);
							unk_0x83F5BCFFFBA26699(0, 2000);
							unk_0x3B8F94419979A0B1(0, iLocal_96[iLocal_164], -1099.682f, -1694.073f, 3.2758f, 5f, 0, joaat("cruiser"), 786471, 2f, 3f);
							unk_0xC963A45B50851768(uVar3);
							unk_0x8ACADA903FCAA42F(iLocal_89, uVar3);
							unk_0x7461D7C5BA953BC7(&uVar3);
							iLocal_593 = 1;
						}
					}
				}
				if (!unk_0xE5965CDF24F93A9F(iLocal_94))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_96[iVar0]) && unk_0x55A0C756C4A8220C(iLocal_96[iVar0], 0))
						{
							if (unk_0x87B449F4C26E764A(iLocal_89, iLocal_96[iVar0]))
							{
								iLocal_94 = iLocal_96[iVar0];
								unk_0xC28CEEFC530C40F4(iLocal_89, unk_0x2E87280918B16506("MISS_FAMILY2_JIMMY_BICYCLE"));
								unk_0xF838539C61C30896(iLocal_94, 0);
								func_284(0, 1, 20);
								if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
								{
									func_158(&Local_549, cLocal_202, "FAM2_JBIKE", 8, 0, 0, 0);
								}
								unk_0xB11C0CF5CCDFE10A(iLocal_89, 1);
								iLocal_165 = iVar0;
								unk_0x5C65DDDC219B3AA5(iLocal_94, 0);
							}
						}
						iVar0++;
					}
				}
				else if (!unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0))
				{
					func_104("FM2_JSPOOK");
				}
				if (!unk_0xE5965CDF24F93A9F(iLocal_93))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0x55A0C756C4A8220C(iLocal_96[iVar0], 0))
						{
							if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_96[iVar0], 1))
							{
								iLocal_93 = iLocal_96[iVar0];
								func_284(0, 1, 20);
								unk_0x5C65DDDC219B3AA5(iLocal_96[iVar0], 0);
								unk_0xBA6C3C5E9E5A9442();
								iLocal_166 = iVar0;
								if ((vdist(unk_0x6B62510F212526DC(iLocal_89, 1), -1108.664f, -1691.623f, 3.3746f) > 5f && !unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0)) && iLocal_593)
								{
									iLocal_593 = 0;
								}
							}
						}
						iVar0++;
					}
					if (!iLocal_591)
					{
						if (timera() > 1000)
						{
							if (!func_177() || unk_0x5D851A9195129CE9(203) == 0)
							{
								func_149("FM2_CHSEBIKE", 7500, 1);
								iLocal_591 = 1;
							}
						}
					}
				}
				else
				{
					if (!iLocal_594)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_HIRE4", 8, 0, 0, 0))
						{
							iLocal_594 = 1;
						}
					}
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
					{
						iLocal_93 = 0;
					}
				}
				if (((((!func_177() && unk_0xE5965CDF24F93A9F(iLocal_94)) && unk_0xE5965CDF24F93A9F(iLocal_93)) && unk_0x55A0C756C4A8220C(iLocal_94, 0)) && unk_0x55A0C756C4A8220C(iLocal_93, 0)) && unk_0x87B449F4C26E764A(iLocal_89, iLocal_94))
				{
					iLocal_96[iLocal_166] = 0;
					iLocal_96[iLocal_165] = 0;
					unk_0x2DA9F9D8E5530E75(4f, 10f, 3);
					iLocal_159++;
				}
				break;
			
			case 7:
				if (timera() > 3000)
				{
					func_207(3);
				}
				break;
			
			case 1000:
				if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
				{
					if (!bLocal_176)
					{
						unk_0xBA6C3C5E9E5A9442();
						func_155();
						func_151("FM2_JIMGB", 7500, 1);
					}
					uLocal_104 = func_152(iLocal_89, 0, 145);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_102))
				{
					if (unk_0x6BABDF7A460158CE(uLocal_102) != 0)
					{
						unk_0xFBBD8F124403B0F5(uLocal_102, 0);
					}
				}
				if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 400f || (!unk_0xF68107C40359970C(iLocal_90) && vdist2(unk_0x6B62510F212526DC(iLocal_90, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 900f))
				{
					iLocal_159 = iLocal_163;
					if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						if (unk_0x6BABDF7A460158CE(uLocal_102) != 255)
						{
							unk_0xFBBD8F124403B0F5(uLocal_102, 255);
						}
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_104))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_104);
					}
				}
				if (vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 22500f)
				{
					func_104("FM2_JIMAB");
				}
				break;
		}
		if (!iLocal_592)
		{
			if ((unk_0x55A0C756C4A8220C(iLocal_94, 0) && !unk_0xF68107C40359970C(iLocal_89)) && unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_94, 0))
			{
				unk_0x5C65DDDC219B3AA5(iLocal_94, 0);
				iLocal_592 = 1;
			}
		}
	}
	if ((unk_0xE5965CDF24F93A9F(iLocal_93) && unk_0x55A0C756C4A8220C(iLocal_93, 0)) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_93, 0))
	{
		if (!unk_0xA37204C64473B324("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			unk_0x66B27A59829491D3("FAMILY_2_BIKE_RACE_JIMMY");
		}
	}
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	if (func_314(iParam0) == 3)
	{
		return 0;
	}
	if (func_314(iParam0) == 4)
	{
		return 0;
	}
	return func_285(func_314(iParam0), 0, iParam1, iParam2, 0);
}

int func_285(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_313();
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
					func_312(99, 1);
					func_311(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_311(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_311(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_296(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_294(5))
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
							func_311(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_311(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_311(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_294(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_311(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_311(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_311(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_311(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_311(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_311(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_311(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_311(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_311(joaat("sp2_money_spent_property"), iParam3);
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
									func_311(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_311(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_311(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_311(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_311(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_311(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_294(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_311(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_311(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_311(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_311(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_311(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_311(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_293(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_312(95, iParam3);
					break;
				
				case 1:
					func_312(97, iParam3);
					break;
				
				case 2:
					func_312(96, iParam3);
					break;
			}
			func_312(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_288(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_288(iVar1);
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
					func_311(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_311(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_311(joaat("sp2_total_cash_earned"), iParam3);
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
	func_287(iParam0);
	if (Global_42596 == 15)
	{
		func_286(0);
	}
	return 1;
}

void func_286(bool bParam0)
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

void func_287(int iParam0)
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

void func_288(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_292(129, 0, -1);
		return;
	}
	if (iParam0 == 9)
	{
		func_292(135, 0, -1);
		return;
	}
	if (iParam0 == 10)
	{
		func_292(136, 0, -1);
		return;
	}
	if (iParam0 == 11)
	{
		func_292(137, 0, -1);
		return;
	}
	if (iParam0 == 12)
	{
		func_291(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_291(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_291(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_291(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_291(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_291(8276, 0, -1, 1, 0);
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
	else if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0) || unk_0xE2D0C323A1AE5D85(Global_2359296[func_290() /*5559*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_112915.f_20564.f_471), iParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_290() /*5559*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_289(iParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_289(int iParam0)
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

int func_290()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_22();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

void func_293(int iParam0)
{
	func_312(93, iParam0);
	func_312(29, iParam0);
	func_312(30, iParam0);
}

bool func_294(int iParam0)
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
		return func_295(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_295(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_295(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_295(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_20(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_20(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_20(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_20(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_20(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_20(8276, -1, 0);
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
	return unk_0xE2D0C323A1AE5D85(Global_2359296[func_290() /*5559*/].f_675.f_10, iParam0);
}

var func_295(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_296(bool bParam0)
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
		func_310(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_297(27, 1);
	return 1;
}

int func_297(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_298(iParam0, iParam1);
}

int func_298(int iParam0, int iParam1)
{
	if (func_27(14) && !func_309(iParam0))
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
	if (func_308(&Global_4535627))
	{
		if (func_306(&Global_4535627, iParam0))
		{
			return 0;
		}
		if (func_299(&Global_4535627, iParam0))
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

int func_299(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_309(iParam1))
	{
		return 0;
	}
	if (func_306(uParam0, iParam1))
	{
		return 0;
	}
	if (func_305(uParam0) < 0f)
	{
		func_304(uParam0, 0);
	}
	func_302(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_300(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_300(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_309(iParam1))
	{
		return 0;
	}
	if (func_306(uParam0, iParam1))
	{
		return 0;
	}
	if (func_305(uParam0) < 0f)
	{
		func_304(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_301(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_301(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_302(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_303(uParam0, iVar0);
		iVar0++;
	}
	func_304(uParam0, (Global_4535626 - 0.5f));
}

void func_303(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_304(var uParam0, float fParam1)
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

float func_305(var uParam0)
{
	return uParam0->f_80;
}

bool func_306(var uParam0, int iParam1)
{
	return func_307(uParam0, iParam1) != -1;
}

int func_307(var uParam0, int iParam1)
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

bool func_308(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_309(int iParam0)
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

int func_310(int iParam0, int iParam1)
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

void func_311(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_312(int iParam0, int iParam1)
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

void func_313()
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

int func_314(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_17;
}

struct<6> func_315()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21285 == 4)
	{
		return Global_20904;
	}
	return Var0;
}

void func_316()
{
	bool bVar0;
	var uVar1;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xE5965CDF24F93A9F(iLocal_108))
		{
			if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_120) < 2500f)
			{
				unk_0xD69A0C3662175E68(joaat("prop_cs_office_chair"));
				if (unk_0x0152AA00FA3130F1(joaat("prop_cs_office_chair")))
				{
					iLocal_108 = unk_0x0E536D72AB30F4C8(joaat("prop_cs_office_chair"), -809.4098f, 172.7913f, 75.7732f, 1, 1, 0);
					unk_0x03F4139102BA4AFC(iLocal_108, 0f, 0f, 0.3857f, 0.9226f);
					unk_0xF1A23B343DFEDFD0(joaat("prop_cs_office_chair"));
				}
			}
		}
		else if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_120) > 5625f && unk_0x4D21C9FB671ED18F(iLocal_108))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_108);
		}
	}
	func_369();
	if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_133) < 1000f)
	{
		unk_0x39B76F783934D136(0.5f);
	}
	if (!unk_0xF68107C40359970C(iLocal_89))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0))
		{
			unk_0x3E3D339BAD67F6F2(iLocal_89, 60, 1);
		}
		switch (iLocal_159)
		{
			case 0:
				iLocal_590 = 0;
				if (!unk_0xE5965CDF24F93A9F(iLocal_98))
				{
					func_332(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				else if (unk_0x55A0C756C4A8220C(iLocal_98, 0))
				{
					unk_0xC64B6E13A6A7F517(iLocal_98, Local_126, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_98, fLocal_127);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
				{
					unk_0x398C962F550CF3B4(iLocal_98, 1);
				}
				if (!unk_0xB4AE2A423A4176CE(iLocal_89))
				{
					unk_0x4218764824F31173(iLocal_89, sLocal_157, 0, 8, -1);
				}
				bLocal_175 = false;
				bLocal_176 = false;
				unk_0x5A7ACD1CDF509B0D(500);
				unk_0x211C581B8AACD11C("RADIO_01_CLASS_ROCK");
				if (unk_0xE5965CDF24F93A9F(iLocal_89) && !unk_0x2B5F4FBAF644BEC8(iLocal_89))
				{
					unk_0x1C2ED929474DC6FE(iLocal_89, 1, 0);
				}
				if (iLocal_155)
				{
					unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -668482597, 1, 1, 0);
					unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 2000, 0, 1, 0);
					iLocal_155 = 0;
				}
				iLocal_159++;
				break;
			
			case 1:
				if (!unk_0xE5965CDF24F93A9F(iLocal_95))
				{
					func_323(&iLocal_97, 15, -812.4639f, 159.7855f, 71.0588f, 113.1515f, 1, 1);
				}
				if (!unk_0xE5965CDF24F93A9F(iLocal_98))
				{
					func_332(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_97) && unk_0xE5965CDF24F93A9F(iLocal_98))
				{
					iLocal_159++;
				}
				break;
			
			case 2:
				if (unk_0xB4AE2A423A4176CE(iLocal_89) && !unk_0x611AD675982BEBCC(iLocal_89))
				{
					if (unk_0x0B331F8DC5C61933(iLocal_89) > 13)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_98) && unk_0x55A0C756C4A8220C(iLocal_98, 0))
						{
							unk_0xB486640392EC50BB(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0xE5965CDF24F93A9F(iLocal_95) && unk_0x55A0C756C4A8220C(iLocal_95, 0))
						{
							unk_0xB486640392EC50BB(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
						}
						unk_0x10F7BFE3A88CB99B(sLocal_157);
					}
				}
				if (!iLocal_590)
				{
					if ((((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -818.1541f, 177.6431f, 75.12778f, -819.7911f, 176.9991f, 70.62586f, 3.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -795.1501f, 176.5434f, 74.13519f, -795.5303f, 177.5501f, 71.83518f, 2.5f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -793.7302f, 181.551f, 74.13519f, -792.5385f, 182.0002f, 71.83518f, 2.5f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -802.4019f, 167.6163f, 79.10717f, -801.4336f, 165.4639f, 76.0724f, 2.5f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -806.8907f, 185.8457f, 71.43164f, -807.4306f, 187.2417f, 74.22646f, 1.75f, 0, 1, 0))
					{
						iLocal_590 = 1;
					}
				}
				bVar0 = false;
				if ((unk_0x55A0C756C4A8220C(iLocal_98, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_98, 0)) || !unk_0xE5965CDF24F93A9F(iLocal_98))
				{
					bVar0 = true;
				}
				if ((vdist(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > 15f || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && iLocal_590)
				{
					if (!bVar0)
					{
						unk_0x03A927199A2DFE46(iLocal_89);
					}
					unk_0xF23E6F5690771F71(iLocal_89, unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9()));
					unk_0x950D2D7EA1BFF54C(iLocal_89, 0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (unk_0xB4AE2A423A4176CE(iLocal_89))
				{
					if (unk_0x0B331F8DC5C61933(iLocal_89) > 13)
					{
						if (unk_0xE5965CDF24F93A9F(iLocal_98) && unk_0x55A0C756C4A8220C(iLocal_98, 0))
						{
							unk_0xB486640392EC50BB(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0xE5965CDF24F93A9F(iLocal_95) && unk_0x55A0C756C4A8220C(iLocal_95, 0))
						{
							unk_0xB486640392EC50BB(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
							unk_0xA8685678DDA27FC3(iLocal_89, -668482597, 0, 0, 0);
						}
						unk_0x10F7BFE3A88CB99B(sLocal_157);
					}
				}
				if (func_157(iLocal_89))
				{
					if (!unk_0xE5965CDF24F93A9F(iLocal_95))
					{
						if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0)) && unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) == unk_0xE2D3D51028F0428A())
						{
							iLocal_95 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
							unk_0x2D58A6131679D82C(iLocal_95, 1, 1);
							unk_0x398C962F550CF3B4(iLocal_95, 1);
							unk_0x2DA9F9D8E5530E75(3f, 5f, 3);
							func_322(iLocal_95, 209);
						}
					}
					else
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0))
						{
							bLocal_175 = true;
						}
						if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
						{
							if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0)) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
							{
								iLocal_95 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
								unk_0x2D58A6131679D82C(iLocal_95, 1, 1);
								unk_0x398C962F550CF3B4(iLocal_95, 1);
								func_322(iLocal_95, 209);
							}
						}
						else
						{
							unk_0x3D81769BEC61BFF8(&iLocal_95);
						}
					}
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						bLocal_175 = false;
					}
					if (bLocal_175)
					{
						if (unk_0x12DD4A0B247D9B4D(uLocal_102))
						{
							if (!func_106(unk_0x1A3931A61B3223A2(uLocal_102), Local_131, 0))
							{
								unk_0xFFD8EB5462B07B59(&uLocal_102);
							}
						}
						else
						{
							uLocal_102 = func_215(Local_131, 1);
						}
					}
					else if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						if (!func_106(unk_0x1A3931A61B3223A2(uLocal_102), -1103.213f, -1695.151f, 3.3416f, 0))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
						}
					}
					else
					{
						uLocal_102 = func_215(-1103.213f, -1695.151f, 3.3416f, 0);
					}
					if (bLocal_175)
					{
						if ((unk_0x55A0C756C4A8220C(iLocal_95, 0) && unk_0x8F41785F110B0DA0(iLocal_95, Local_131, 3f, 3f, 2f, 1, 1, 0)) && unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_95))
						{
							unk_0xFFD8EB5462B07B59(&uLocal_102);
							iLocal_159++;
						}
					}
					else if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -1103.213f, -1695.151f, 3.3416f, 6f, 6f, 2f, 1, 1, 0))
					{
						func_207(2);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_104))
					{
						unk_0xBA6C3C5E9E5A9442();
						unk_0xFFD8EB5462B07B59(&uLocal_104);
					}
				}
				else
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_102);
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_104))
					{
						unk_0xBA6C3C5E9E5A9442();
						if (func_177())
						{
							Local_556 = { func_176() };
							func_174();
							iLocal_555 = 1;
						}
						func_155();
						if (!bLocal_176)
						{
							func_151("FM2_JIMGB", 7500, 1);
						}
						uLocal_104 = func_152(iLocal_89, 0, 145);
					}
				}
				if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0)) && unk_0xADD893BD545BE5FC(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) == 0)
				{
					if (!func_177() && !iLocal_183)
					{
						func_151("FM2_BIGGERV", 7500, 1);
						iLocal_183 = 1;
					}
				}
				else if (!func_177() && iLocal_183)
				{
					unk_0xBA6C3C5E9E5A9442();
					iLocal_183 = 0;
				}
				break;
			
			case 4:
				if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
				{
					if (func_208(iLocal_95, 4f, 1, 1056964608, 0, 1, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0))
						{
							if (func_321(0))
							{
								func_317(1);
							}
							func_174();
							unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(iLocal_95, 10f, 5f, 0f), 20000, 4, 3);
							if (!func_177())
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
								{
									iLocal_555 = 0;
									unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_89, 30000, 4, 2);
									unk_0xA888F8CC04F25CC8(&uVar1);
									unk_0x02F1CAAC7CB77E47(0, iLocal_95, 0);
									unk_0x7D1424753688EE7A(0, -1102.187f, -1697.891f, 3.3562f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
									unk_0xC963A45B50851768(uVar1);
									unk_0x8ACADA903FCAA42F(iLocal_89, uVar1);
									unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
									unk_0x6221A52631154EF7(iLocal_89);
									unk_0x7461D7C5BA953BC7(&uVar1);
									unk_0x2DA9F9D8E5530E75(4f, 4f, 4);
									iLocal_159 = 8;
								}
							}
						}
						else
						{
							unk_0x2DA9F9D8E5530E75(5f, 10f, 3);
							func_322(0, 209);
							func_207(2);
						}
					}
				}
				break;
			
			case 5:
				if (func_158(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
				{
					unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iLocal_89, 20000, 4, 3);
					settimera(0);
					iLocal_159 = 8;
				}
				break;
			
			case 8:
				unk_0x2DA9F9D8E5530E75(5f, 10f, 4);
				func_322(0, 209);
				func_207(2);
				break;
		}
		if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0))
			{
				if (!unk_0xA37204C64473B324("FAMILY_2_DRIVE_TO_BEACH"))
				{
					unk_0x66B27A59829491D3("FAMILY_2_DRIVE_TO_BEACH");
				}
			}
			else if (unk_0xA37204C64473B324("FAMILY_2_DRIVE_TO_BEACH"))
			{
				unk_0x0AF8D3A06BB92903("FAMILY_2_DRIVE_TO_BEACH");
			}
		}
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		func_147();
	}
}

void func_317(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_319())
		{
			func_318(1, 1);
		}
		else
		{
			func_318(0, 0);
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
	if (!func_167())
	{
		Global_19954.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_321(0))
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

bool func_319()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_320()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

int func_321(int iParam0)
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

void func_322(int iParam0, int iParam1)
{
	Global_62701 = iParam0;
	Global_62702 = iParam1;
}

int func_323(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_89(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_206(iParam1, &Var0, iParam5);
		if (unk_0xE5965CDF24F93A9F(*iParam0))
		{
			if (unk_0x15CAA6D7B11F1A7C(*iParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			unk_0xD69A0C3662175E68(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (unk_0x0152AA00FA3130F1(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = unk_0xBA715A7BEBA5A1F9(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*iParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*iParam0, 0);
				unk_0x0FCB0A306FF51ECA(*iParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
				unk_0xF160248D9083ED0C(*iParam0, 1250, 0);
				unk_0x2EE80CD0EAEB9B5B(*iParam0, 1250f);
				unk_0x448AD51B3157C957(*iParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0x58DAFDEB2F46A5EA(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				unk_0x952B5201CC721090(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				unk_0x2EC6505629D78CCE(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					unk_0x45A6EA15139A0C54(*iParam0, iVar2 + 1, !Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (unk_0x351E83123EFC0A15(*iParam0, 0))
					{
						if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							unk_0xA36A3AB3D2350CCD(*iParam0, 1);
						}
						else
						{
							unk_0x47B16F33DD2893CF(*iParam0, 1);
						}
					}
				}
				unk_0x2C2F2F6BEE7AC7E7(*iParam0, &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < unk_0xACF41D856B7CCB39())
				{
					unk_0xE56B65C6B89CFCF2(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				unk_0xFEF0C9A733C7B609(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				unk_0xAFE1B52F0DE91595(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				unk_0x2EB7787881686751(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				unk_0x74FCADE93B81FD35(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				unk_0xBE69E921963A86B7(*iParam0, 2, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				unk_0xBE69E921963A86B7(*iParam0, 3, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				unk_0xBE69E921963A86B7(*iParam0, 0, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				unk_0xBE69E921963A86B7(*iParam0, 1, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (unk_0x8F0BC830FFCF7F2A(*iParam0) > 1 && Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					unk_0xE1F8DBCF9A6E205E(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*iParam0)))
					{
						if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*iParam0)))
						{
							if (Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				func_327(iParam0, &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				unk_0x6DF92DB1542A3E0D(*iParam0, Var0.f_96);
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Global_112915.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				func_326(*iParam0);
				return 1;
			}
		}
		else
		{
			unk_0xD69A0C3662175E68(Var0);
			if (unk_0x0152AA00FA3130F1(Var0))
			{
				*iParam0 = unk_0xBA715A7BEBA5A1F9(Var0, Param2, fParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*iParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*iParam0, 0);
				unk_0x0FCB0A306FF51ECA(*iParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
				func_324(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_326(*iParam0);
				}
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_324(var uParam0, struct<98> Param1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0xD584204572DF0440(*uParam0, Param1.f_4);
	}
	else
	{
		unk_0x58DAFDEB2F46A5EA(*uParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0x952B5201CC721090(*uParam0, Param1.f_7, Param1.f_8);
	}
	unk_0x2EC6505629D78CCE(*uParam0, Param1.f_2);
	unk_0xF160248D9083ED0C(*uParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0x45A6EA15139A0C54(*uParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0x351E83123EFC0A15(*uParam0, 0))
		{
			unk_0xA36A3AB3D2350CCD(*uParam0, 1);
		}
	}
	if (func_325(&uVar2, &uVar1) && Param1.f_97)
	{
		unk_0x2C2F2F6BEE7AC7E7(*uParam0, &uVar2);
		unk_0xE56B65C6B89CFCF2(*uParam0, uVar1);
	}
	else if (!unk_0xACC32B78196FBC2A(&(Param1.f_27)))
	{
		unk_0x2C2F2F6BEE7AC7E7(*uParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xACF41D856B7CCB39())
		{
			unk_0xE56B65C6B89CFCF2(*uParam0, Param1.f_26);
		}
	}
	unk_0xFEF0C9A733C7B609(*uParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0xAFE1B52F0DE91595(*uParam0, Param1.f_88);
	unk_0x2EB7787881686751(*uParam0, Param1.f_87);
	unk_0x74FCADE93B81FD35(*uParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0xBE69E921963A86B7(*uParam0, 2, unk_0xE2D0C323A1AE5D85(Param1.f_92, 28));
	unk_0xBE69E921963A86B7(*uParam0, 3, unk_0xE2D0C323A1AE5D85(Param1.f_92, 29));
	unk_0xBE69E921963A86B7(*uParam0, 0, unk_0xE2D0C323A1AE5D85(Param1.f_92, 30));
	unk_0xBE69E921963A86B7(*uParam0, 1, unk_0xE2D0C323A1AE5D85(Param1.f_92, 31));
	if (unk_0x8F0BC830FFCF7F2A(*uParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0xE1F8DBCF9A6E205E(*uParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*uParam0)))
		{
			if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*uParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0xE19D99912C7661C6(*uParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0xE19D99912C7661C6(*uParam0, Param1.f_90);
			}
		}
	}
	func_327(uParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0x6DF92DB1542A3E0D(*uParam0, Param1.f_96);
}

int func_325(var uParam0, var uParam1)
{
	if (unk_0x9315DBF7D972F07A())
	{
	}
	else if (Global_112915.f_20118.f_261)
	{
		*uParam0 = { Global_112915.f_20118.f_267 };
		*uParam1 = Global_112915.f_20118.f_271;
		return 1;
	}
	return 0;
}

void func_326(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97335[iVar0]))
		{
			Global_97335[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_327(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_331(unk_0x15CAA6D7B11F1A7C(*uParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*uParam0, 24) != func_330(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*uParam0, 24, func_330(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_329(uParam0);
	if (func_328(*uParam0))
	{
		unk_0xFF74DEC3F62D3654(*uParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*uParam0, 1);
	}
	return 1;
}

int func_328(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(uParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
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

void func_329(var uParam0)
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

int func_330(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(uParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
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

int func_331(int iParam0, int iParam1)
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

int func_332(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_89(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_368(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0xE5965CDF24F93A9F(*iParam0))
		{
			if (unk_0x15CAA6D7B11F1A7C(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_112915.f_2363.f_539.f_4316) && Global_112915.f_9085.f_99.f_58[131])
		{
			Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xD69A0C3662175E68(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x0152AA00FA3130F1(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xBA715A7BEBA5A1F9(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*iParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*iParam0, 0);
				unk_0x0FCB0A306FF51ECA(*iParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
				unk_0xF160248D9083ED0C(*iParam0, 1250, 0);
				unk_0x2EE80CD0EAEB9B5B(*iParam0, 1250f);
				unk_0x448AD51B3157C957(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x58DAFDEB2F46A5EA(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x952B5201CC721090(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x2EC6505629D78CCE(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x45A6EA15139A0C54(*iParam0, iVar3 + 1, !Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC5B25A5D478730A6(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_325(&uVar1, &uVar0))
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &uVar1);
					unk_0xE56B65C6B89CFCF2(*iParam0, uVar0);
				}
				else
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xACF41D856B7CCB39())
					{
						unk_0xE56B65C6B89CFCF2(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xFEF0C9A733C7B609(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xAFE1B52F0DE91595(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x2EB7787881686751(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x74FCADE93B81FD35(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xBE69E921963A86B7(*iParam0, 2, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xBE69E921963A86B7(*iParam0, 3, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xBE69E921963A86B7(*iParam0, 0, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xBE69E921963A86B7(*iParam0, 1, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x8F0BC830FFCF7F2A(*iParam0) > 1 && Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE1F8DBCF9A6E205E(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*iParam0)))
					{
						if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*iParam0)))
						{
							if (Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_327(iParam0, &(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x6DF92DB1542A3E0D(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("bodhi2"))
					{
						func_366(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Global_112915.f_2363.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_365(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xD69A0C3662175E68(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x0152AA00FA3130F1(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xBA715A7BEBA5A1F9(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x9F65B3BAFA302A65(*iParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*iParam0, 0);
				unk_0x0FCB0A306FF51ECA(*iParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
				unk_0xF160248D9083ED0C(*iParam0, 1250, 0);
				unk_0x2EE80CD0EAEB9B5B(*iParam0, 1250f);
				unk_0x448AD51B3157C957(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x58DAFDEB2F46A5EA(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x952B5201CC721090(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x2EC6505629D78CCE(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x45A6EA15139A0C54(*iParam0, iVar4 + 1, !Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0xC5B25A5D478730A6(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_325(&uVar1, &uVar0))
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &uVar1);
					unk_0xE56B65C6B89CFCF2(*iParam0, uVar0);
				}
				else
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xACF41D856B7CCB39())
					{
						unk_0xE56B65C6B89CFCF2(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xFEF0C9A733C7B609(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xAFE1B52F0DE91595(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x2EB7787881686751(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x74FCADE93B81FD35(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xBE69E921963A86B7(*iParam0, 2, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xBE69E921963A86B7(*iParam0, 3, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xBE69E921963A86B7(*iParam0, 0, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xBE69E921963A86B7(*iParam0, 1, unk_0xE2D0C323A1AE5D85(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x8F0BC830FFCF7F2A(*iParam0) > 1 && Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE1F8DBCF9A6E205E(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*iParam0)))
					{
						if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*iParam0)))
						{
							if (Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE19D99912C7661C6(*iParam0, Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_327(iParam0, &(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x6DF92DB1542A3E0D(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("bodhi2"))
					{
						func_366(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Global_112915.f_2363.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_365(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xD69A0C3662175E68(Var2);
			if (unk_0x0152AA00FA3130F1(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xBA715A7BEBA5A1F9(Var2, Param2, fParam3, 1, 1, 0);
				unk_0x9F65B3BAFA302A65(*iParam0, 1084227584);
				unk_0xFA37094E2DF03E75(*iParam0, 0);
				unk_0x0FCB0A306FF51ECA(*iParam0, 0);
				unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
				StringCopy(&cVar6, unk_0x80D16DB58890B7BC(*iParam0), 16);
				unk_0xF160248D9083ED0C(*iParam0, 1250, 0);
				unk_0x2EE80CD0EAEB9B5B(*iParam0, 1250f);
				unk_0x448AD51B3157C957(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x58DAFDEB2F46A5EA(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x952B5201CC721090(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x2EC6505629D78CCE(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x45A6EA15139A0C54(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xC5B25A5D478730A6(*iParam0, Var2.f_24);
				}
				if (func_325(&uVar1, &uVar0))
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &uVar1);
					unk_0xE56B65C6B89CFCF2(*iParam0, uVar0);
				}
				else
				{
					unk_0x2C2F2F6BEE7AC7E7(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0xACF41D856B7CCB39())
					{
						unk_0xE56B65C6B89CFCF2(*iParam0, Var2.f_26);
					}
				}
				unk_0xFEF0C9A733C7B609(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0xAFE1B52F0DE91595(*iParam0, Var2.f_88);
				unk_0x2EB7787881686751(*iParam0, Var2.f_87);
				unk_0x74FCADE93B81FD35(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xBE69E921963A86B7(*iParam0, 2, unk_0xE2D0C323A1AE5D85(Var2.f_92, 28));
				unk_0xBE69E921963A86B7(*iParam0, 3, unk_0xE2D0C323A1AE5D85(Var2.f_92, 29));
				unk_0xBE69E921963A86B7(*iParam0, 0, unk_0xE2D0C323A1AE5D85(Var2.f_92, 30));
				unk_0xBE69E921963A86B7(*iParam0, 1, unk_0xE2D0C323A1AE5D85(Var2.f_92, 31));
				if (unk_0x8F0BC830FFCF7F2A(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xE1F8DBCF9A6E205E(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(*iParam0)))
					{
						if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0xE19D99912C7661C6(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0xE19D99912C7661C6(*iParam0, Var2.f_90);
						}
					}
				}
				func_327(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x6DF92DB1542A3E0D(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("bagger") && !Global_112915.f_9085.f_99.f_58[118])
					{
						unk_0x2C2F2F6BEE7AC7E7(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("bodhi2"))
					{
						func_366(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_112915.f_2363.f_539.f_4316) && Global_112915.f_9085.f_99.f_58[131]) && unk_0x15CAA6D7B11F1A7C(*iParam0) == joaat("tailgater"))
				{
					unk_0x0061B7C9351B41ED(*iParam0, 6, 1, false);
					unk_0x0061B7C9351B41ED(*iParam0, 14, 7, false);
					unk_0x0061B7C9351B41ED(*iParam0, 11, 2, false);
					unk_0x0061B7C9351B41ED(*iParam0, 2, 3, false);
					unk_0x0061B7C9351B41ED(*iParam0, 7, 5, false);
					unk_0x0061B7C9351B41ED(*iParam0, 0, 0, false);
					unk_0x0061B7C9351B41ED(*iParam0, 3, 3, false);
					unk_0x0061B7C9351B41ED(*iParam0, 13, 1, false);
					unk_0x0061B7C9351B41ED(*iParam0, 4, 3, false);
					unk_0x0061B7C9351B41ED(*iParam0, 12, 2, false);
					unk_0x6C6188D0F8AB739A(*iParam0, 22, true);
					unk_0xE19D99912C7661C6(*iParam0, 2);
					unk_0x0061B7C9351B41ED(*iParam0, 23, 11, false);
					unk_0x2EB7787881686751(*iParam0, 2);
					Global_112915.f_2363.f_539.f_4316 = 1;
					func_333(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0xF1A23B343DFEDFD0(Var2);
				}
				if (bVar5)
				{
					func_365(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_333(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_89(iParam0) && unk_0xE5965CDF24F93A9F(*iParam1)) && unk_0x55A0C756C4A8220C(*iParam1, 0))
	{
		if (iParam2 > Global_112915.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_108(*iParam1, iParam0);
		}
		if (unk_0x03AC3319D1B50189(*iParam1) != 0)
		{
			unk_0x3C1BCE3438ECBFC0(*iParam1, 0);
		}
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x15CAA6D7B11F1A7C(*iParam1);
		if (unk_0xCD52E82290C8C97A(*iParam1, &iVar1))
		{
			Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x15CAA6D7B11F1A7C(iVar1);
		}
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xD3FF3A3C2D524A18(*iParam1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x0CF63873D754B965(*iParam1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xC49329A4E58D025B(*iParam1, 1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xC49329A4E58D025B(*iParam1, 2);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xC49329A4E58D025B(*iParam1, 3);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xC49329A4E58D025B(*iParam1, 4);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xC49329A4E58D025B(*iParam1, 5);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xC49329A4E58D025B(*iParam1, 6);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xC49329A4E58D025B(*iParam1, 7);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xC49329A4E58D025B(*iParam1, 8);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xC49329A4E58D025B(*iParam1, 9);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xC49329A4E58D025B(*iParam1, 10);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xC49329A4E58D025B(*iParam1, 11);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xC49329A4E58D025B(*iParam1, 12);
		if (unk_0x351E83123EFC0A15(*iParam1, 0))
		{
			iVar2 = unk_0x0C2181485E5FB7C2(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x763A39AC8944F8BA();
		StringCopy(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x80D16DB58890B7BC(*iParam1), 16);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0xC264F708491D88D7(*iParam1);
		unk_0xDCA20DBA52B32EEC(*iParam1, &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x356C37F1AA6EA3AA(*iParam1, &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x2EE88EB83AF61B18(*iParam1, &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xC8E55AEB1E2B047F(*iParam1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0xF9D204D7598C0239(*iParam1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x3A5087062A6DBAEF(*iParam1);
		Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xD9B8AFE0DD1AD635(*iParam1);
		unk_0xEDB21C30F1BAF83A(*iParam1, &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x6CA60A8EE52231D2(*iParam1, 2))
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x6CA60A8EE52231D2(*iParam1, 3))
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x6CA60A8EE52231D2(*iParam1, 0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x6CA60A8EE52231D2(*iParam1, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_112915.f_2363.f_539.f_4317[iParam0] = 10;
		if (unk_0x741835E0EF89491D(*iParam1) >= 0 && func_337(*iParam1, 0, &uVar0))
		{
			func_111(iParam1, &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_112915.f_20118[iParam0 /*43*/].f_40 = 1;
				Global_112915.f_20118[iParam0 /*43*/] = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_112915.f_20118[iParam0 /*43*/].f_3 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_112915.f_20118[iParam0 /*43*/].f_4 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_112915.f_20118[iParam0 /*43*/].f_5 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_112915.f_20118[iParam0 /*43*/].f_6 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_112915.f_20118[iParam0 /*43*/].f_10 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_112915.f_20118[iParam0 /*43*/].f_16 = !Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_112915.f_20118[iParam0 /*43*/].f_19 = { Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_112915.f_20118[iParam0 /*43*/].f_23 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_112915.f_20118[iParam0 /*43*/].f_7 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_112915.f_20118[iParam0 /*43*/].f_8 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_112915.f_20118[iParam0 /*43*/].f_9 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_112915.f_20118[iParam0 /*43*/].f_11 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_112915.f_20118[iParam0 /*43*/].f_12 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_112915.f_20118[iParam0 /*43*/].f_13 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_112915.f_20118[iParam0 /*43*/].f_14 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_112915.f_20118[iParam0 /*43*/].f_15 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_112915.f_20118[iParam0 /*43*/].f_18 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_112915.f_20118[iParam0 /*43*/].f_17 = Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_112915.f_20118[iParam0 /*43*/].f_24 = unk_0x6B83F5AE0478286F(*iParam1, 11) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_25 = unk_0x6B83F5AE0478286F(*iParam1, 12) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_26 = unk_0x6B83F5AE0478286F(*iParam1, 4) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_27 = unk_0x6B83F5AE0478286F(*iParam1, 23) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_28 = unk_0x6B83F5AE0478286F(*iParam1, 14) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_29 = unk_0x6B83F5AE0478286F(*iParam1, 16) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_30 = unk_0x6B83F5AE0478286F(*iParam1, 15) + 1;
				Global_112915.f_20118[iParam0 /*43*/].f_32 = unk_0xE4A58617DB957843(*iParam1);
				Global_112915.f_20118[iParam0 /*43*/].f_33[0] = unk_0x125E8813EDFAB26F(*iParam1);
				Global_112915.f_20118[iParam0 /*43*/].f_33[1] = unk_0xD90D01D41407F76C(*iParam1, 14, 0);
				Global_112915.f_20118[iParam0 /*43*/].f_33[2] = unk_0xD90D01D41407F76C(*iParam1, 14, 1);
				Global_112915.f_20118[iParam0 /*43*/].f_33[3] = unk_0xD90D01D41407F76C(*iParam1, 14, 2);
				Global_112915.f_20118[iParam0 /*43*/].f_33[4] = unk_0xD90D01D41407F76C(*iParam1, 14, 3);
				Global_112915.f_20118[iParam0 /*43*/].f_39 = unk_0xF3F5D16790870112(*iParam1);
				Global_112915.f_20118[iParam0 /*43*/].f_31 = func_336(*iParam1);
				Global_112915.f_20118[iParam0 /*43*/].f_33[0] = unk_0x1AB7BA13996A24AB(*iParam1);
				unk_0x0595A3CF1BA9C95C(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_334(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_112915.f_20118[iParam0 /*43*/].f_1));
				unk_0xB0800355BAB891DD(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_334(Global_112915.f_2363.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_112915.f_20118[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_334(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_335(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_335(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x741835E0EF89491D(iParam0) >= 0)
	{
		if (unk_0xF3F5D16790870112(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xF3F5D16790870112(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xF3F5D16790870112(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xF3F5D16790870112(iParam0) == 0)
		{
			if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_337(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	if ((!func_363(iVar0, bParam1, uParam2) && !func_362(unk_0x9E2D6C50374FCFA9())) && !func_346(iParam0))
	{
		return 0;
	}
	if (func_362(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_345(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_344(unk_0x9E2D6C50374FCFA9()) && (unk_0x4262B4DCEADC2695(iVar0) || unk_0xD6F7D32A98E07F93(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0xA94E098B1788A730(iParam0) && !func_342(iParam0)) && !bVar1) && !(func_341(unk_0x15CAA6D7B11F1A7C(iParam0)) && func_338(unk_0x9E2D6C50374FCFA9())))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		if ((func_466(iParam0) && unk_0x15CAA6D7B11F1A7C(iParam0) != joaat("sentinel2")) && unk_0x15CAA6D7B11F1A7C(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_338(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_339(int iParam0)
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

int func_340(int iParam0, bool bParam1, bool bParam2)
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

int func_341(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_343(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_344(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_361(unk_0x9E2D6C50374FCFA9()) || func_360(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_347(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0)
{
	if ((!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0)) || unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (func_350(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
	{
		if (unk_0xC3B76795ECBDEF41(iParam0, "Player_Vehicle") == unk_0x4AE7F6D227ED332C(unk_0x9E2D6C50374FCFA9()))
		{
			if (func_348(iParam0))
			{
				return 1;
			}
			switch (unk_0x15CAA6D7B11F1A7C(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
				case joaat("paragon2"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (func_349(unk_0x15CAA6D7B11F1A7C(iParam0), 0))
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_350(int iParam0, bool bParam1)
{
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_352(unk_0x15CAA6D7B11F1A7C(iParam0), 0))
			{
				if (Global_2810287.f_303 == iParam0)
				{
					return 1;
				}
				else if (func_351(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2703656.f_220[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_352(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_331(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_359();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14483)
			{
				return func_358();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14484)
			{
				return func_358();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14482)
			{
				return func_358();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14485)
			{
				return func_358();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14487)
			{
				return func_358();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_357();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18935)
			{
				return func_356();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18937)
			{
				return func_356();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18941)
			{
				return func_356();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18938)
			{
				return func_356();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18945)
			{
				return func_356();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18943)
			{
				return func_356();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18948)
			{
				return func_356();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20893)
			{
				return func_355();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20894)
			{
				return func_355();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_354();
			break;
		
		case joaat("glendale"):
			if (func_354() || func_353())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_354();
			break;
		
		case joaat("issi3"):
			return func_354();
			break;
		
		case joaat("gargoyle"):
			return func_354();
			break;
		
		case joaat("dominator"):
			return func_354();
			break;
		
		case joaat("dominator2"):
			return func_354();
			break;
		
		case joaat("imperator"):
			return func_354();
			break;
		
		case joaat("imperator2"):
			return func_354();
			break;
		
		case joaat("imperator3"):
			return func_354();
			break;
		
		case joaat("deathbike"):
			return func_354();
			break;
		
		case joaat("deathbike2"):
			return func_354();
			break;
		
		case joaat("deathbike3"):
			return func_354();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_354();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_28980)
			{
				return func_353();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29330)
			{
				return func_353();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_28979)
			{
				return func_353();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29329)
			{
				return func_353();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29328)
			{
				return func_353();
			}
			break;
	}
	return 0;
}

bool func_353()
{
	return unk_0x014D8C5910A5B01B(1815791016);
}

bool func_354()
{
	return unk_0x014D8C5910A5B01B(1927191088);
}

bool func_355()
{
	return unk_0x014D8C5910A5B01B(2067165443);
}

bool func_356()
{
	return unk_0x014D8C5910A5B01B(-957277403);
}

bool func_357()
{
	return unk_0x014D8C5910A5B01B(210122941);
}

bool func_358()
{
	return unk_0x014D8C5910A5B01B(-1894522408);
}

bool func_359()
{
	return unk_0x014D8C5910A5B01B(1630677557);
}

int func_360(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_164())
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_164())
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_362(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_340(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_339(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_363(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_344(unk_0x9E2D6C50374FCFA9()) && (unk_0x4262B4DCEADC2695(iParam0) || unk_0xD6F7D32A98E07F93(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0xCB09A834F0C86FBB(iParam0) && !unk_0x6F0299ED3CEB4E5D(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_364(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_365(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97305[iVar0]))
		{
			Global_97305[iVar0] = uParam0;
			Global_97315[iVar0] = iParam1;
			Global_97325[iVar0] = unk_0x15CAA6D7B11F1A7C(uParam0);
			if (unk_0xCB09A834F0C86FBB(Global_97325[iVar0]))
			{
				Global_97353[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97353[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_366(var uParam0)
{
	if (!func_367(*uParam0))
	{
		unk_0x45A6EA15139A0C54(*uParam0, 5, !Global_112915.f_9085.f_99.f_58[119]);
	}
}

bool func_367(int iParam0)
{
	return unk_0xC49329A4E58D025B(iParam0, 5);
}

void func_368(int iParam0, var uParam1, int iParam2)
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

void func_369()
{
	bool bVar0;
	struct<6> Var1;
	
	if ((((!unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && vdist2(unk_0x6B62510F212526DC(iLocal_89, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 225f) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_89, 15f, 15f, 1f, 0, 1, 0)) && !func_371())
	{
		bVar0 = true;
	}
	if (((unk_0x55A0C756C4A8220C(iLocal_95, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0)) && unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0)) && !func_371())
	{
		bVar0 = true;
	}
	if (!iLocal_588)
	{
		if ((unk_0x55A0C756C4A8220C(iLocal_95, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0)) && unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0))
		{
			if (iLocal_586 == 0)
			{
				if (unk_0x3C57C2F07FEE34D2(unk_0x8ECF4849E085E658(unk_0x763A39AC8944F8BA()), "RADIO_01_CLASS_ROCK"))
				{
					fLocal_150 = (fLocal_150 + unk_0x51109C28352EC9A3());
				}
				if (fLocal_150 > 7f)
				{
					iLocal_588 = 1;
				}
			}
			else if (iLocal_586 == 4)
			{
				if (unk_0x763A39AC8944F8BA() != 8)
				{
					iLocal_586++;
					iLocal_588 = 1;
				}
			}
		}
	}
	else if ((!unk_0x55A0C756C4A8220C(iLocal_95, 0) || (unk_0x55A0C756C4A8220C(iLocal_95, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0))) || (unk_0x55A0C756C4A8220C(iLocal_95, 0) && !unk_0xF6F5D18EF8EAB859(iLocal_89, iLocal_95, 0)))
	{
		iLocal_588 = 0;
	}
	if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_89, 1)) < 15f)
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
			{
				if (!iLocal_589)
				{
					if ((unk_0x320D1840B6DAA1CC() - iLocal_168) > 7500)
					{
						iLocal_589 = 1;
						bVar0 = false;
					}
				}
			}
		}
	}
	if (iLocal_589)
	{
		bVar0 = false;
		if (!func_177())
		{
			func_202(iLocal_88, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0x320D1840B6DAA1CC();
			iLocal_589 = 0;
		}
	}
	if (!iLocal_588)
	{
		if (iLocal_161 < 7 && !unk_0x3C57C2F07FEE34D2(&Local_556, "FAM2_DRIV2"))
		{
			if ((unk_0x55A0C756C4A8220C(iLocal_95, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_95, 0)) && unk_0xAB793EA186AB8DAA(iLocal_95, -1, 0) == unk_0xE2D3D51028F0428A())
			{
				if (unk_0x207D53F9E0190691(iLocal_95) > 30f)
				{
					if (unk_0x5C5B446AD691DEA2(iLocal_95))
					{
						func_174();
						iLocal_555 = 0;
						iLocal_554 = 0;
						StringCopy(&Local_556, "", 24);
						iLocal_161 = 7;
					}
				}
				if ((Global_74786[5 /*9*/].f_1 - iLocal_587) > 3)
				{
					func_174();
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_161 = 7;
				}
			}
		}
		switch (iLocal_161)
		{
			case 0:
				if (func_158(&Local_549, cLocal_202, "FAM2_BEACH", 8, 0, 0, 0))
				{
					unk_0x2DA9F9D8E5530E75(1f, 7f, 3);
					fLocal_150 = 0f;
					iLocal_587 = Global_74786[5 /*9*/].f_1;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					iLocal_162 = unk_0x320D1840B6DAA1CC();
					StringCopy(&Local_556, "", 24);
				}
				break;
			
			case 1:
				if ((unk_0x320D1840B6DAA1CC() - iLocal_162) > 2000)
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_102))
					{
						uLocal_102 = func_215(Local_133, 0);
					}
					else if (!func_177())
					{
						func_151("FM2_BK2BIKE", 7500, 1);
						iLocal_162 = unk_0x320D1840B6DAA1CC();
						iLocal_161++;
					}
				}
				break;
			
			case 2:
				if (((unk_0x320D1840B6DAA1CC() - iLocal_162) > 2000 && unk_0x5D851A9195129CE9(203) == 0) || (unk_0x320D1840B6DAA1CC() - iLocal_162) > 6000)
				{
					iLocal_161++;
				}
				break;
			
			case 3:
				if (func_213())
				{
					func_211("FAM2_WALK", bVar0);
				}
				else
				{
					func_211("FAM2_WALK2", bVar0);
				}
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					fLocal_150 = 0f;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0x320D1840B6DAA1CC();
				}
				break;
			
			case 4:
				if ((unk_0x320D1840B6DAA1CC() - iLocal_162) > 3000)
				{
					iLocal_161++;
				}
				break;
			
			case 5:
				if (func_213())
				{
					func_211("FAM2_DRIVB", bVar0);
				}
				else
				{
					func_211("FAM2_DRIVE", bVar0);
				}
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0x320D1840B6DAA1CC();
				}
				break;
			
			case 6:
				break;
			
			case 7:
				if (!unk_0xD5C6B5E3B93A5EDC(iLocal_89, 0) || !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					bVar0 = false;
				}
				func_211("FAM2_DRIV2", bVar0);
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
				}
				break;
		}
	}
	else
	{
		switch (iLocal_586)
		{
			case 0:
				if (func_177())
				{
					Local_556 = { func_176() };
					func_174();
					iLocal_555 = 1;
				}
				iLocal_586++;
				break;
			
			case 1:
				if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ", 8, 0, 0, 0))
				{
					settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 2:
				if (timerb() > 1000)
				{
					unk_0xD0B0F5E50CE08C52(8);
					settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 3:
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ2", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 4:
				iLocal_588 = 0;
				break;
			
			case 5:
				if ((func_177() && !func_370("FAM2_JAZZ")) && !func_370("FAM2_JAZZ2"))
				{
					Var1 = { func_176() };
					if (!unk_0xACC32B78196FBC2A(&Var1) && !unk_0x3C57C2F07FEE34D2("NULL", &Var1))
					{
						Local_556 = { Var1 };
					}
					func_174();
					iLocal_555 = 1;
				}
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ3", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 6:
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ4", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 7:
				iLocal_588 = 0;
				break;
			}
	}
}

int func_370(char* sParam0)
{
	var uVar0;
	
	if (func_177())
	{
		MemCopy(&uVar0, {func_315()}, 4);
		if (unk_0x3C57C2F07FEE34D2(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_371()
{
	return Global_100026.f_375 > 0;
}

void func_372()
{
	switch (iLocal_159)
	{
		case 0:
			unk_0x380313FF4CEF9B49("SE_MICHAELS_HOUSE_RADIO", 0);
			iLocal_897 = 0;
			if (!unk_0x496531E41FCF5116())
			{
				unk_0xD536FD78D8A135F1("family_2_int", 8);
				iLocal_159 = -1;
			}
			else
			{
				iLocal_159++;
			}
			break;
		
		case -1:
			if (unk_0x2566F947AAB7B2A7())
			{
				func_376("Michael", func_93(0), 32);
				iLocal_159 = 1;
			}
			break;
		
		case 1:
			if (func_199())
			{
				if (func_273("family_2_int"))
				{
					func_191(1, 1, 1, 0, 0, 0, 0);
					if (!unk_0xE5965CDF24F93A9F(iLocal_89))
					{
						unk_0x48F297980C708DB7(iLocal_89, "Jimmy", 2, func_100(14), 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_89))
					{
						unk_0x48F297980C708DB7(iLocal_89, "Jimmy", 0, 0, 0);
					}
					func_204(1);
					func_190();
					unk_0x3410421C60BF7143(1);
					unk_0xF44EE79112016B61(0);
					unk_0x6CD556854F94F942(4);
					unk_0x7E8F5AE44588D398();
					iLocal_159++;
				}
				else
				{
					unk_0x6D23F8C14190D353();
					iLocal_159 = 0;
				}
			}
			break;
		
		case 2:
			unk_0x9CD86FAC92DBE038("EXTRASUNNY");
			unk_0xAB0C65A9AD2E3CFF(0.1f);
			if (unk_0xE5965CDF24F93A9F(iLocal_109))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_109);
				unk_0xA1F6E5EF42ACDB8C(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_110))
			{
				unk_0x4BDA5AFD88C085EB(&iLocal_110);
				unk_0xA1F6E5EF42ACDB8C(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
			}
			if (unk_0xEC32121F2E3875C8(-2097039789))
			{
				unk_0x1B3E1454BD86FCE6(-2097039789, 0f, 0, 0);
				unk_0x7E15597AA5F53F9A(-2097039789, 3, 0, 1);
			}
			if (unk_0xEC32121F2E3875C8(-2127416656))
			{
				unk_0x1B3E1454BD86FCE6(-2127416656, 0f, 0, 0);
				unk_0x7E15597AA5F53F9A(-2127416656, 3, 0, 1);
			}
			unk_0xAFC1FBF3F6AE7B9A("missfam2mcs_intp1");
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			if (unk_0xE5965CDF24F93A9F(iLocal_109))
			{
				unk_0xA5D8BA53953077C8(iLocal_109, -1000f, 1);
				unk_0x59E393B344098656(&iLocal_109);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_110))
			{
				unk_0xA5D8BA53953077C8(iLocal_110, -1000f, 1);
				unk_0x59E393B344098656(&iLocal_110);
			}
			unk_0x3E100889F69B5149(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 300f);
			func_443(&Local_80, 0, 0, 2000, 1, 0, 0, 1);
			unk_0x6DA9E81AB6F35BA4(unk_0xE2D3D51028F0428A());
			iLocal_159++;
			break;
		
		case 3:
			if (!unk_0xE5965CDF24F93A9F(iLocal_89))
			{
				if (unk_0xE5965CDF24F93A9F(unk_0xA77263F8C4822DA4("Jimmy", 0)))
				{
					iLocal_89 = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("Jimmy", 0));
				}
			}
			if (unk_0x6F2E1326DB60D575("Jimmy", 0))
			{
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					unk_0xC64B6E13A6A7F517(iLocal_89, Local_122, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_89, fLocal_123);
					unk_0xA8685678DDA27FC3(iLocal_89, -668482597, 1, 1, 0);
					unk_0x4218764824F31173(iLocal_89, sLocal_157, 0, 8, -1);
				}
			}
			if (unk_0x6F2E1326DB60D575("Michael", 0) && unk_0xA337B111DF07BB88(0))
			{
				unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -668482597, 0, 0, 0);
				unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
				unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 2000, 0, 1, 0);
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					func_97(iLocal_89);
				}
			}
			if (!iLocal_897)
			{
				if (unk_0xA829C9A2767AC8EF() && unk_0x1AF916E03DDF8D8A())
				{
					settimera(0);
					if (unk_0xCA60DF1D01DBD440(Local_120, 30f, 2))
					{
						while (!unk_0x8A6AB093D1EE5368() && timera() < 5000)
						{
							unk_0x859006DB870314C5(0);
							wait(0);
						}
						unk_0xEE3A19A84A10F8B9();
						iLocal_897 = 1;
					}
				}
			}
			unk_0x94953C3FF0664F66(0);
			unk_0x080C97B891E2F3AA(0, 1065353216);
			if (!unk_0xE5965CDF24F93A9F(iLocal_98))
			{
				if (func_375(0, 1, Local_126, 100f))
				{
					func_373(0, 1);
				}
				unk_0x7653D561C9574763(0, 18, 1);
				func_332(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
			}
			if (!unk_0x496531E41FCF5116())
			{
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				func_207(1);
				unk_0x249A0D3C5714BCF4("FAMILY2", 0);
				unk_0x249A0D3C5714BCF4(cLocal_202, 6);
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					func_97(iLocal_89);
				}
				unk_0x8F70948CB5539BEB();
				if (unk_0xBCC73B466E2B2350(iLocal_113))
				{
					unk_0xAED5221F05DAE55E(iLocal_113);
				}
				uLocal_898 = unk_0x6B3EE0CA145E8488(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
				if (unk_0xF0254DADD9D91FB8(uLocal_898))
				{
					unk_0x288F018BFD3D51ED(uLocal_898, 9);
				}
				if (unk_0xA829C9A2767AC8EF() || unk_0x1AF916E03DDF8D8A())
				{
					if (!unk_0xF68107C40359970C(iLocal_89))
					{
						unk_0xC64B6E13A6A7F517(iLocal_89, Local_122, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(iLocal_89, fLocal_123);
						unk_0xA8685678DDA27FC3(iLocal_89, -668482597, 1, 1, 0);
						unk_0x4218764824F31173(iLocal_89, sLocal_157, 3, 0, -1);
					}
					wait(0);
					unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -668482597, 1, 1, 0);
					unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 2000, 0, 1, 0);
				}
				func_446(24);
				unk_0x380313FF4CEF9B49("SE_MICHAELS_HOUSE_RADIO", 1);
				unk_0x43F21FA00A1CE779(0, 0);
				unk_0x5A7ACD1CDF509B0D(500);
			}
			break;
	}
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97305[iVar0]))
		{
			if (iParam0 == 145 || Global_97315[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x15CAA6D7B11F1A7C(Global_97305[iVar0]) == func_374(iParam0, iParam1))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_97305[iVar0], 0))
					{
						unk_0x2D58A6131679D82C(Global_97305[iVar0], 0, 1);
						unk_0xD59CC8123FD1A789(&(Global_97305[iVar0]));
						Global_97315[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_374(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_368(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_375(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_89(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_368(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(Global_97305[iVar0]) && unk_0x55A0C756C4A8220C(Global_97305[iVar0], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_97305[iVar0]) == iVar2 && Global_97315[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(Global_97305[iVar0], 0), Param2, 1) <= fParam3)
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

void func_376(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	uVar2 = 9;
	uVar8 = { func_380(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { func_377(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = func_28(iVar3);
					iVar5 = func_11(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { func_14(iParam1, 14, uVar2[iVar7], -1) };
						unk_0x6D690024C2BB1053(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { func_14(iParam1, iVar0, uVar8[iVar6], -1) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_112915.f_2363.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_112915.f_2363.f_539[Var1.f_5 /*65*/][iVar6];
				}
				unk_0x44F8EFEFF0CDA3FE(sParam0, func_9(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

struct<10> func_377(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_379(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_379(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_379(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_379(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_379(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_379(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_379(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_379(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_379(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_379(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_379(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_379(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_379(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_379(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_379(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_379(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_379(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_379(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_379(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_379(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_379(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_379(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_379(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_379(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_379(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_379(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_379(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_379(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x24DFBA133538EAEC(iParam2, &Var1);
		if (!unk_0x1B5C8EE302FC0D1E(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xE0A9B7F977EBD7AF(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_7(iParam1, Var2.x, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_380(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_112915.f_9085.f_99.f_58[120])
					{
						func_382(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_382(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_382(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_382(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_382(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_382(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_382(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[0], Global_112915.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_382(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_382(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_382(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_382(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_382(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_382(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_382(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_382(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_382(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_382(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_382(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_382(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_382(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_382(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_382(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_382(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_382(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_382(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_382(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_382(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_382(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_382(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_382(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_382(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_382(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_382(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_382(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_382(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_382(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_382(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_382(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_382(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_382(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_382(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_382(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_382(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_382(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_382(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_382(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_382(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_382(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_382(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_382(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_382(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_382(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_382(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_382(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_382(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_382(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_382(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[1], Global_112915.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_382(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_382(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_382(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_382(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_382(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_382(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_382(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_382(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_382(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_382(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_382(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_382(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_382(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_382(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_382(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_382(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_382(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_382(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_382(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_382(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_382(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_382(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_382(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_382(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_382(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_382(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_382(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_382(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_382(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_382(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_382(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_382(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_382(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_382(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_382(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_382(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_382(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_382(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_382(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_382(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_382(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_382(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_382(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_382(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_382(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_382(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_382(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_382(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_382(&Var1, -99, -99, Global_112915.f_2363.f_539.f_196[2], Global_112915.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_382(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_382(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_382(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_382(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_382(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_382(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_382(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_382(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_382(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_382(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_382(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_382(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_382(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_382(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_382(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_382(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_382(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_382(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_382(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_382(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_382(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_382(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_382(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_382(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_382(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_382(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_382(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_382(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_382(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_382(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_382(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_382(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_382(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_382(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_382(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_382(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_382(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_382(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_382(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_382(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_382(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_382(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_382(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_382(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_382(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_382(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_382(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_382(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_382(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_382(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_382(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_382(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_382(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_382(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_382(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_382(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_382(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_382(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_382(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_382(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_382(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_382(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_382(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_382(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_382(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_382(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_382(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_382(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_382(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_382(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_382(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_382(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_382(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_382(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_382(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_382(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_382(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_382(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_382(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_382(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_382(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_382(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_382(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_382(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_382(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_382(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_382(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_382(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_382(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_382(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_382(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_382(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_382(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_382(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_382(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_382(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_382(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_381(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x30264A1C9ADAAE62(iVar0, 0);
	unk_0x43FFB630E515D7A1((iParam2 - iParam3), &Var1);
	if (!unk_0x1B5C8EE302FC0D1E(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xA5404CDF63BADF48(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0xB5ABDB2FA64E87F2(&Var3);
						unk_0x37E8462BC2A63393(Var2.x, &Var3);
						if (Var2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_86(Var2.f_2)] = Var2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_86(Var2.f_2)] = func_7(iParam1, Var2.x, func_86(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_86(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_383(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_467(unk_0xE2D3D51028F0428A(), 51);
		if (unk_0x5E34706DEBC06639(unk_0xE2D3D51028F0428A()) || !bParam1)
		{
			func_384(unk_0xE2D3D51028F0428A(), 12, 51, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x6475234C10008E58(unk_0xE2D3D51028F0428A());
			return 1;
		}
	}
	else
	{
		func_467(unk_0xE2D3D51028F0428A(), 32);
		if (unk_0x5E34706DEBC06639(unk_0xE2D3D51028F0428A()) || !bParam1)
		{
			func_384(unk_0xE2D3D51028F0428A(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x6475234C10008E58(unk_0xE2D3D51028F0428A());
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xF68107C40359970C(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_77661++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x15CAA6D7B11F1A7C(iParam0);
	if (iParam5 == 0)
	{
		Global_77663[1 /*14*/] = { func_14(iVar10, iParam1, iParam2, -1) };
		if (!func_410(iParam3))
		{
			Global_77661 = (Global_77661 - 1);
			return 0;
		}
		func_408(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_407(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_407(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_406(iParam0, 1);
			if (!func_405(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_406(iParam0, 0);
			if (!func_404(iVar10, 14, iVar8, -1) && !func_403(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_406(iParam0, 2);
			}
		}
		unk_0x9C726995FD3F93EB(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_77706 };
		}
		else
		{
			uVar11 = { func_380(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_77663[1 /*14*/] = { func_14(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_77723 };
						}
						else
						{
							uVar12 = { func_377(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_77663[1 /*14*/] = { func_14(iVar10, 14, uVar12[iVar1], -1) };
							func_400(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
							func_408(14);
							if (Global_77661 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_394(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_384(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_84(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0xE3752B10DC995E95(iParam0, func_9(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_9(iVar0)));
						}
						else
						{
							unk_0xE3752B10DC995E95(iParam0, func_9(iVar0), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
						}
						func_408(iVar0);
						if (Global_77661 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_394(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_384(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77663[1 /*14*/] = { func_14(iVar10, iVar0, func_393(iParam0, iVar0, -1), -1) };
				if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_392(iParam0, iVar10, &iVar4, 1))
							{
								func_384(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_380(iVar10, 0) };
						func_384(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_390(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_384(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_390(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_384(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_390(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_384(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_390(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_384(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_390(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_384(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_377(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77663[1 /*14*/] = { func_14(iVar10, 14, uVar15[iVar1], -1) };
			func_400(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
			func_408(14);
			if (Global_77661 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_394(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_384(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_400(iParam0, Global_77663[1 /*14*/].f_12, Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4);
		func_408(iParam1);
		if (Global_77661 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_394(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_384(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0xE3752B10DC995E95(iParam0, func_9(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, unk_0x272AB65A4E7277B4(iParam0, func_9(iParam1)));
		}
		else
		{
			unk_0xE3752B10DC995E95(iParam0, func_9(iParam1), Global_77663[1 /*14*/].f_3, Global_77663[1 /*14*/].f_4, iParam4);
		}
		if (Global_77661 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_394(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_384(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_387(iVar10, iParam1, iParam2);
		}
	}
	if (Global_77661 == 1)
	{
		if (func_392(iParam0, iVar10, &iVar4, 0))
		{
			func_384(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_385(iParam0, iVar10, &iVar4))
		{
			func_384(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_77661 = (Global_77661 - 1);
	return 1;
}

int func_385(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_386(uParam0, Global_112915.f_2363.f_539[iVar0 /*65*/].f_64, Global_112915.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xF68107C40359970C(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	Global_77663[1 /*14*/] = { func_14(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_380(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_386(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_377(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_386(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_77663[2 /*14*/] = { func_14(iVar0, 14, iVar4, -1) };
									if (Global_77663[2 /*14*/].f_12 == iVar3)
									{
										if (func_386(iParam0, 14, iVar4))
										{
											if (!func_390(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_77663[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_407(iParam0, iVar2);
						Global_77663[2 /*14*/] = { func_14(iVar0, iVar2, iVar1, -1) };
						if (!func_390(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_77663[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_377(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_386(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xF2BC143F97765619(iParam0, Global_77663[1 /*14*/].f_12) == Global_77663[1 /*14*/].f_3 && (unk_0x7252A84ECED5E1D4(iParam0, Global_77663[1 /*14*/].f_12) == Global_77663[1 /*14*/].f_4 || Global_77663[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_77663[1 /*14*/].f_3 == unk_0x5355BAA621C153CF(iParam0, func_9(iParam1)) && Global_77663[1 /*14*/].f_4 == unk_0xF1050E548C37F4A5(iParam0, func_9(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_389(iParam0, 12, iVar0))
	{
		if (func_388(iParam0, iParam1, iParam2))
		{
			iVar1 = func_13(iParam0);
			if (iParam1 == 3)
			{
				Global_112915.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_112915.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_389(int iParam0, int iParam1, int iParam2)
{
	Global_77663[1 /*14*/] = { func_14(iParam0, iParam1, iParam2, -1) };
	return unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2);
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_377(iParam0, (*uParam4)[13]) };
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
	if (func_391(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
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
		else if (func_403(iParam0, iParam2, iParam3, -1))
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
		if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
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
		else if (func_403(iParam0, iParam2, iParam3, -1))
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
		if (func_405(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_404(iParam0, iParam2, iParam3, -1))
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
		else if (func_403(iParam0, iParam2, iParam3, -1))
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

int func_391(int iParam0, int iParam1, int iParam2)
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

int func_392(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_386(uParam0, Global_112915.f_2363.f_539[iVar0 /*65*/].f_61, Global_112915.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_112915.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_112915.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_386(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_386(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_406(iParam0, iParam2);
			}
		}
		else
		{
			return func_407(iParam0, iParam1);
		}
	}
	return -99;
}

int func_394(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_407(uParam0, 1);
				iVar0 = func_4(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_407(uParam0, 2);
				iVar0 = func_4(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_84(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_12(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_399(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_398(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_398(uParam0, 3, 135, 150))
									{
										iVar0 = func_397(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_398(uParam0, 3, 209, 222))
									{
										iVar0 = func_397(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_398(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_397(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_397(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_397(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_397(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_398(uParam0, 3, 176, 191) && !func_398(uParam0, 3, 227, 242))
									{
										iVar0 = func_397(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_407(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_407(uParam0, 11);
								iVar5 = func_396(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_407(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_395(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_407(uParam0, 8);
								iVar8 = func_407(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_396(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_396(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_407(uParam0, 11);
								iVar0 = func_396(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_397(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_397(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_397(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_389(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_398(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_407(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

void func_400(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x920BB8B58BB3563A(uParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0xD6A76BAB45A4B460(uParam0, 34, 0);
			unk_0xD6A76BAB45A4B460(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xD9D122A54FFE62B8(iParam0, iParam1, iParam2, iParam3, unk_0x9315DBF7D972F07A());
		if (iParam1 == 0)
		{
			iVar0 = func_5(iParam0, iParam2, iParam3, iParam1);
			if (func_401(unk_0x15CAA6D7B11F1A7C(iParam0), 14, iVar0, unk_0x7ABBACADFB201C3A(iParam0, 0, iParam2, iParam3)))
			{
				unk_0xD6A76BAB45A4B460(iParam0, 34, 1);
				unk_0xD6A76BAB45A4B460(iParam0, 36, 1);
			}
			else
			{
				unk_0xD6A76BAB45A4B460(iParam0, 34, 0);
				unk_0xD6A76BAB45A4B460(iParam0, 36, 0);
			}
		}
	}
}

int func_401(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_402(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x036D1EA7243F2CCC(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_402(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x036D1EA7243F2CCC(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x1CF199D23D4DFAE4(&Var0);
		iVar1 = (iParam1 - func_10(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0xA188D1127A77C942(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0xC99CE91134872039(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var3);
		iVar4 = (iParam1 - func_8(iParam0, func_9(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77785.f_26[iParam2] && iParam1 == Global_77785[iParam2]) && Global_77785.f_13[iParam2] != 0)
		{
			return Global_77785.f_13[iParam2];
		}
		iVar5 = unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_9(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xEA030AC498B5F181(iVar4, &Var3);
		Global_77785.f_13[iParam2] = Var3.f_1;
		Global_77785[iParam2] = iParam1;
		Global_77785.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_402(iParam0, iParam2, 14, 3);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 1) || unk_0x036D1EA7243F2CCC(func_402(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_402(iParam0, iParam2, 1, 3);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(func_402(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_402(iParam0, iParam2, 14, 4);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 1) || unk_0x036D1EA7243F2CCC(func_402(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_402(iParam0, iParam2, 1, 4);
						}
						return (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(func_402(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_404(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_402(iParam0, iParam2, 1, 3);
					}
					if (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(iParam3, joaat("HAIR_SHRINK"), 0))
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
						iParam3 = func_402(iParam0, iParam2, 1, 4);
					}
					if (unk_0x036D1EA7243F2CCC(iParam3, joaat("HAT"), 0) || unk_0x036D1EA7243F2CCC(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_402(iParam0, iParam2, 14, 3);
					}
					return unk_0x036D1EA7243F2CCC(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_402(iParam0, iParam2, 14, 4);
					}
					return unk_0x036D1EA7243F2CCC(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF68107C40359970C(uParam0))
	{
		return -99;
	}
	iVar0 = unk_0xF2BC143F97765619(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_11(iParam1);
	}
	iVar1 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
	return func_5(iParam0, iVar0, iVar1, iParam1);
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xF68107C40359970C(uParam0))
	{
		return -99;
	}
	iVar0 = func_9(iParam1);
	iVar1 = unk_0x5355BAA621C153CF(iParam0, iVar0);
	iVar2 = unk_0xF1050E548C37F4A5(iParam0, iVar0);
	return func_85(iParam0, iVar1, iVar2, iParam1);
}

void func_408(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1) && !unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6))
	{
		func_24(iParam0, Global_77663[1 /*14*/].f_5, Global_77663[1 /*14*/].f_2, 2, Global_77663[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1) && unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_409(Global_2883588, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_409(Global_2883588, 2, 1, 1, -1);
		}
		else
		{
			func_409(Global_2883588, 2, 1, 1, -1);
		}
	}
}

void func_409(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77660;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		unk_0xCED9E32812D6C7C7(&iVar3, iVar1);
		func_291(iVar2, iVar3, iVar0, 1, 0);
	}
}

int func_410(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xE2D0C323A1AE5D85(Global_77663[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_411()
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

int func_412(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_442();
			iVar5 = func_442();
			func_441(&iVar5, iParam0);
			func_440(&iVar5, iParam1);
			func_439(&iVar5, 0);
			if (func_437(*uParam4, iVar5))
			{
				func_432(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_429(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_422((to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x51C7EA47553BE792(0.6f);
				unk_0x398CFB3534FF01FD(0);
				unk_0x06A533A461A8F65D(0);
			}
			func_421();
			uParam4->f_10 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0x66B27A59829491D3("TOD_SHIFT_SCENE");
			func_420();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x876B1078E90C91CB(uParam4->f_4) && unk_0x52522E25010580A1(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x876B1078E90C91CB(uParam4->f_4) && unk_0x52522E25010580A1(uParam4->f_4))
				{
					fVar0 = unk_0x3F65EB34E4C562F2(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x2E87280918B16506(sParam2) != 0)
						{
							unk_0x95FC0D9FFA87229E(sParam2, iParam8);
						}
						if (unk_0x2E87280918B16506(sParam3) != 0)
						{
							unk_0x967D9549339D0A5B();
							unk_0x52E423FD38F601B9(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_432(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xAA27C85E5BE092AA(func_419(iVar5), func_418(iVar5), func_417(iVar5));
				if (bParam7)
				{
					unk_0xA91EC7D49DF9F229();
				}
				unk_0xF889BDFCC181BA9F(uParam4->f_10);
				unk_0xE24865B69D79521B("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x06A533A461A8F65D(1);
					unk_0x398CFB3534FF01FD(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_241(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_432(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xAA27C85E5BE092AA(func_419(iVar5), func_418(iVar5), func_417(iVar5));
			if (func_416(iVar5) != unk_0xD52BD97E61483713())
			{
				unk_0xF9352288B8DEC888(func_416(iVar5), func_415(iVar5), func_413(iVar5));
			}
			func_183();
			unk_0xB5CD7C8585F9A098(6);
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_414(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_414(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_415(int iParam0)
{
	return iParam0 & 15;
}

int func_416(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_417(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_418(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_419(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_420()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x35A0954FC4DC4CAD(Global_112915.f_14141[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_421()
{
	int iVar0;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
	if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
	{
		return 0;
	}
	unk_0xD501428969A52C0F(iVar0, "OFF");
	return 1;
}

void func_422(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_428(&(Global_112915.f_18103.f_175[iVar0 /*19*/].f_5)))
		{
			func_423(&(Global_112915.f_18103.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_428(&(Global_112915.f_18103.f_362[iVar1 /*3*/])))
		{
			func_423(&(Global_112915.f_18103.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xAF08933CF373BF40();
}

void func_423(var uParam0, float fParam1)
{
	if (func_428(uParam0))
	{
		func_424(uParam0, (func_426(uParam0) + fParam1));
	}
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_425(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_425(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x320D1840B6DAA1CC()) / 1000f);
}

float func_426(var uParam0)
{
	if (func_428(uParam0))
	{
		if (func_427(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_425(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_427(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

bool func_428(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

void func_429(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_437(iParam0, iParam1))
	{
		iVar0 = func_415(iParam1);
		iVar1 = func_413(iParam0);
		iVar2 = (func_413(iParam0) - func_413(iParam1));
		iVar3 = (func_415(iParam0) - func_415(iParam1));
		iVar4 = (func_416(iParam0) - func_416(iParam1));
		iVar5 = (func_419(iParam0) - func_419(iParam1));
		iVar6 = (func_418(iParam0) - func_418(iParam1));
		iVar7 = (func_417(iParam0) - func_417(iParam1));
	}
	else
	{
		iVar0 = func_415(iParam0);
		iVar1 = func_413(iParam1);
		iVar2 = (func_413(iParam1) - func_413(iParam0));
		iVar3 = (func_415(iParam1) - func_415(iParam0));
		iVar4 = (func_416(iParam1) - func_416(iParam0));
		iVar5 = (func_419(iParam1) - func_419(iParam0));
		iVar6 = (func_418(iParam1) - func_418(iParam0));
		iVar7 = (func_417(iParam1) - func_417(iParam0));
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
		iVar4 = (iVar4 + func_431(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_430(to_float(iVar0 + 1), 0f, 12f));
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

float func_430(float fParam0, float fParam1, float fParam2)
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

int func_431(int iParam0, int iParam1)
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

void func_432(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_413(*iParam0);
	iVar1 = func_415(*iParam0);
	iVar2 = func_416(*iParam0);
	iVar3 = func_419(*iParam0);
	iVar4 = func_418(*iParam0);
	iVar5 = func_417(*iParam0);
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
	iVar6 = func_431(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_431(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_433(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_433(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_439(uParam0, iParam1);
	func_440(uParam0, iParam2);
	func_441(uParam0, iParam3);
	func_436(uParam0, iParam5);
	func_435(uParam0, iParam4);
	func_434(uParam0, iParam6);
}

void func_434(var uParam0, int iParam1)
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

void func_435(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_415(*uParam0);
	iVar1 = func_413(*uParam0);
	if (iParam1 < 1 || iParam1 > func_431(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_436(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_437(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_438(iParam1) || !func_438(iParam0))
	{
		return 1;
	}
	iVar0 = func_413(iParam0);
	iVar1 = func_413(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_415(iParam0);
	iVar1 = func_415(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_416(iParam0);
	iVar1 = func_416(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_419(iParam0);
	iVar1 = func_419(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_418(iParam0);
	iVar1 = func_418(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_417(iParam0);
	iVar1 = func_417(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0)
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
	iVar0 = func_417(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_418(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_419(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_413(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_415(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_416(iParam0);
	if (iVar5 < 1 || iVar5 > func_431(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_439(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_440(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_441(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

var func_442()
{
	var uVar0;
	
	func_439(&uVar0, unk_0xAA2844CAD88768B5());
	func_440(&uVar0, unk_0x80F97D7D29800A1A());
	func_441(&uVar0, unk_0x09FC827691DACE59());
	func_435(&uVar0, unk_0xD52BD97E61483713());
	func_436(&uVar0, unk_0x771485043FDC55DE());
	func_434(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_443(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	if (iParam4 == 1)
	{
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()), 64);
	}
	if (!unk_0xF34D8FCAE3FD4EE4())
	{
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xBAEA2321313356D0(0, 0, 3, 0);
	}
	else
	{
		unk_0x850D4EF3D40FB068(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x3410421C60BF7143(1);
	}
	else
	{
		if (unk_0x876B1078E90C91CB(uParam0->f_4))
		{
			if (unk_0xA24FDA4986456697(uParam0->f_4))
			{
				unk_0xDD786B89B15AA63F(uParam0->f_4, 0);
			}
			unk_0x588DDCB644C6486A(uParam0->f_4, 1);
		}
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
		}
		uVar0 = unk_0x9993EF7FDBCDB632();
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			unk_0x1C2ED929474DC6FE(iVar0, 1, 0);
		}
		unk_0xE24865B69D79521B("TIME_LAPSE");
		if (unk_0xA37204C64473B324("TOD_SHIFT_SCENE"))
		{
			unk_0xF889BDFCC181BA9F(uParam0->f_10);
			unk_0xE24865B69D79521B("TIME_LAPSE");
			unk_0x0AF8D3A06BB92903("TOD_SHIFT_SCENE");
		}
	}
	func_191(bParam1, 1, 0, 0, 0, 0, 0);
	func_420();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xAA27C85E5BE092AA(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xAA27C85E5BE092AA(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xA829C9A2767AC8EF())
		{
			unk_0x5A7ACD1CDF509B0D(250);
		}
	}
	if (!bParam1)
	{
		if (Global_112915.f_32749.f_4801 != -15)
		{
			Global_112915.f_32749.f_4801 = func_442();
		}
	}
}

void func_444(int iParam0)
{
	if (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x859006DB870314C5(iParam0);
		while (!unk_0xA829C9A2767AC8EF())
		{
			wait(0);
		}
	}
}

int func_445(int iParam0)
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
			if (func_411())
			{
				Global_27 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
	}
	return 0;
}

void func_446(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_76670[iParam0] = 0;
	Global_76670.f_69[iParam0] = 0;
}

void func_447(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xE5965CDF24F93A9F(Global_76670.f_484[25]) && unk_0x55A0C756C4A8220C(Global_76670.f_484[25], 0))
			{
				if (Global_76670.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0xA94E098B1788A730(iParam0) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("bus")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_457(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_109(iParam0, &Var0);
		if (func_106(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x6B62510F212526DC(iParam0, 1) };
			fParam2 = unk_0x82FE2343F8BDFF0B(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) != joaat("vehicle_gen_controller"))
			{
				Global_77658 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
			}
		}
		func_451(iParam3, &Var0, Param1, fParam2, func_458(iParam0));
		func_448(iParam3, iParam0, 0);
	}
}

void func_448(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_450(&(Global_76670.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 12) && !unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_76670.f_555[0 /*21*/].f_4 != unk_0x15CAA6D7B11F1A7C(iParam1))
		{
			return;
		}
	}
	if (Global_77577 != -1 && Global_77577 != iParam0)
	{
		return;
	}
	if (unk_0xE5965CDF24F93A9F(iParam1))
	{
		if (unk_0x55A0C756C4A8220C(iParam1, 0))
		{
			if (!unk_0xA6A089369417736E(iParam1))
			{
				unk_0x2D58A6131679D82C(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_112915.f_32749.f_4801 = func_442();
			}
			if (iParam1 != Global_76670.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_449(iParam0);
					if ((unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_77576 = iParam1;
				Global_77577 = iParam0;
				Global_77578 = iParam2;
			}
		}
	}
}

int func_449(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76670.f_139[iParam0];
}

int func_450(var uParam0, int iParam1)
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
			uParam0->f_4 = func_374(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_374(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_374(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_374(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_374(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_374(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_374(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_374(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_374(2, 1);
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
			if (func_124())
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
			if (func_124())
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
		if (!func_106(Global_112915.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_106(Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(uParam0->f_9, 20))
	{
		if (!func_106(Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_451(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_450(&(Global_76670.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 10))
		{
			func_456(iParam0);
			func_455(uParam1, &(Global_112915.f_32749.f_69[Global_76670.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 11))
			{
				Global_112915.f_32749.f_1864[Global_76670.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_112915.f_32749.f_1934[Global_76670.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_112915.f_32749.f_1864[Global_76670.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_112915.f_32749.f_1934[Global_76670.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_452(iParam0, 1);
		}
	}
}

void func_452(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_454(iParam0, 0))
		{
			func_453(iParam0, 1, 0);
			func_453(iParam0, 2, 0);
			func_453(iParam0, 3, 0);
			func_453(iParam0, 4, 0);
			func_453(iParam0, 0, 1);
			Global_76670[iParam0] = 1;
		}
	}
	else
	{
		func_453(iParam0, 0, 0);
	}
}

void func_453(int iParam0, int iParam1, bool bParam2)
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

bool func_454(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_112915.f_32749[iParam0], iParam1);
}

void func_455(var uParam0, var uParam1)
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

void func_456(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_450(&(Global_76670.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_76670.f_139[iParam0]))
		{
			unk_0x2D58A6131679D82C(Global_76670.f_139[iParam0], 1, 1);
			unk_0x3D81769BEC61BFF8(&(Global_76670.f_139[iParam0]));
			Global_76670.f_139[iParam0] = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_76670.f_555[0 /*21*/].f_9, 13))
		{
			func_452(iParam0, 0);
		}
	}
}

void func_457(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_456(iParam0);
	func_452(iParam0, 0);
}

int func_458(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97305[iVar0]))
		{
			if (Global_97305[iVar0] == iParam0)
			{
				return Global_97315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_459(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	unk_0xB38EF75835FAF667(iVar0, &Var1, &Var2);
	fVar3 = (-Var1.f_2 + Var2.f_2);
	if (fVar3 < 2.6f)
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_461(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xE2D0C323A1AE5D85(Global_112915.f_7229[iVar2], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_461(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_462(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_450(&(Global_76670.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x987A5F1E1A67E3C0(Param0, Global_76670.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_463(iVar0);
			}
		}
		iVar0++;
	}
}

void func_463(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_450(&(Global_76670.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_454(iParam0, 0)) && Global_77579.f_66 == 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] != 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] > 3) && (!func_464(0, Global_76670.f_555[0 /*21*/].f_12) || !func_464(1, Global_76670.f_555[0 /*21*/].f_12)))
			{
				func_455(&(Global_112915.f_32749.f_69[Global_76670.f_555[0 /*21*/].f_14 /*78*/]), &Global_77579);
				Global_77657 = Global_112915.f_32749.f_5591;
			}
			func_452(iParam0, 0);
		}
	}
}

int func_464(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_465(&(Global_112915.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_116(Global_112915.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_465(var uParam0)
{
	return *uParam0;
}

int func_466(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97335[iVar0]))
		{
			if (Global_97335[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	Var1 = { func_380(iVar0, iParam1) };
	func_468(iParam0, iVar0, &Var1);
}

void func_468(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Var1 = { func_14(iParam1, func_86(iVar0), (*uParam2)[func_86(iVar0)], -1) };
		if (Var1.f_3 != -1 && Var1.f_4 != -1)
		{
			unk_0xF7438EF713CBDAAC(uParam0, iVar0, Var1.f_3, Var1.f_4);
		}
		iVar0++;
	}
	uVar6 = { func_377(iParam1, (*uParam2)[13]) };
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		iVar3 = iVar2;
		iVar4 = func_28(iVar3);
		iVar5 = func_11(iVar4);
		if (uVar6[iVar2] != iVar5)
		{
			Var1 = { func_14(iParam1, 14, uVar6[iVar2], -1) };
			if (Var1.f_3 != -1 && Var1.f_3 != 255)
			{
				unk_0x00B2FA06032579D8(iParam0, iVar4, Var1.f_3, Var1.f_4);
			}
		}
		iVar2++;
	}
}

void func_469(int iParam0)
{
	if (Global_96896 != -1)
	{
		if (iParam0 == Global_96896)
		{
			Global_96900 = 1;
			return;
		}
	}
}

int func_470(struct<3> Param0, float fParam1)
{
	switch (iLocal_565)
	{
		case 0:
			if (func_98(&iLocal_89, 14, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_565++;
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(iLocal_89))
			{
				unk_0xF7438EF713CBDAAC(iLocal_89, 1, 0, 0);
				unk_0xF7438EF713CBDAAC(iLocal_89, 3, 0, 0);
				unk_0xF7438EF713CBDAAC(iLocal_89, 4, 0, 0);
				unk_0xF7438EF713CBDAAC(iLocal_89, 6, 0, 0);
				unk_0xF7438EF713CBDAAC(iLocal_89, 10, 0, 0);
				iLocal_565++;
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(iLocal_89))
			{
				if (unk_0x5E34706DEBC06639(iLocal_89))
				{
					unk_0xE3752B10DC995E95(iLocal_89, 1, 0, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_89, 3, 0, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_89, 4, 0, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_89, 6, 0, 0, 0);
					unk_0xE3752B10DC995E95(iLocal_89, 10, 0, 0, 0);
					unk_0x6475234C10008E58(iLocal_89);
					unk_0xC64B6E13A6A7F517(iLocal_89, Param0, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_89, fParam1);
					func_97(iLocal_89);
					unk_0x6475234C10008E58(iLocal_89);
					iLocal_565 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_471()
{
	if (!iLocal_582)
	{
		fLocal_573 = 0f;
		iLocal_574 = 0;
		iLocal_575 = 0;
		iLocal_576 = 0;
		iLocal_577 = 0;
		iLocal_578 = 0;
		iLocal_579 = 0;
		iLocal_580 = 0;
		iLocal_581 = 0;
		iLocal_582 = 1;
	}
	switch (iLocal_70)
	{
		case 1:
			if (unk_0xE5965CDF24F93A9F(iLocal_95) && unk_0x55A0C756C4A8220C(iLocal_95, 0))
			{
				if (fLocal_573 > (IntToFloat(unk_0x0CF63873D754B965(iLocal_95)) + unk_0x20E1198E4672F72D(iLocal_95)))
				{
					func_473(208, 1, 0);
				}
				fLocal_573 = (IntToFloat(unk_0x0CF63873D754B965(iLocal_95)) + unk_0x20E1198E4672F72D(iLocal_95));
			}
			else
			{
				fLocal_573 = 0f;
			}
			break;
		
		case 2:
			if (!iLocal_577)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_93) && unk_0x55A0C756C4A8220C(iLocal_93, 0))
				{
					if (unk_0x7010991FDA59D3F2(iLocal_93, joaat("tribike")))
					{
						func_473(214, 0, 1);
					}
					if (unk_0x7010991FDA59D3F2(iLocal_93, joaat("bmx")))
					{
						func_473(214, 1, 1);
					}
					if (unk_0x7010991FDA59D3F2(iLocal_93, joaat("cruiser")))
					{
						func_473(214, 2, 1);
					}
					if (unk_0x7010991FDA59D3F2(iLocal_93, joaat("scorcher")))
					{
						func_473(214, 3, 1);
					}
					iLocal_577 = 1;
				}
			}
			break;
		
		case 3:
			if (!iLocal_575)
			{
				func_268(211, 0);
				iLocal_575 = 1;
			}
			else if (!iLocal_576)
			{
				if (iLocal_185)
				{
					func_472(0, -1);
					iLocal_576 = 1;
				}
			}
			if (unk_0x55A0C756C4A8220C(iLocal_93, 0))
			{
				if (!iLocal_574)
				{
					if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_93))
					{
						iLocal_574 = 1;
					}
				}
				else if (!unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iLocal_93))
				{
					if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
					{
						func_473(206, 1, 0);
					}
					iLocal_574 = 0;
				}
			}
			break;
		
		case 5:
			if (!iLocal_578)
			{
				func_268(207, 0);
				iLocal_578 = 1;
			}
			else if (!iLocal_579)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2022.824f, -1045.762f, 1.449759f, -2018.304f, -1032.236f, 4.478201f, 8f, 0, 1, 0))
				{
					func_472(0, -1);
					iLocal_579 = 1;
				}
			}
			break;
		
		case 7:
			if (!iLocal_580)
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_101[0]))
				{
					func_268(213, 0);
					iLocal_580 = 1;
				}
				break;
			}
			if (!iLocal_581)
			{
				if ((!unk_0xE5965CDF24F93A9F(iLocal_100[0]) && !unk_0xE5965CDF24F93A9F(iLocal_99[0])) || unk_0xF68107C40359970C(iLocal_100[0]))
				{
					func_472(0, -1);
					iLocal_581 = 1;
				}
			}
	}
}

void func_472(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_62698)
	{
	}
	Global_62698 = 0;
	if (bParam0)
	{
		Global_62699 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74785)
		{
			if (Global_62915[Global_74786[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_74786[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_74785)
		{
			if (Global_74786[iVar0 /*9*/] > 0)
			{
				if (Global_74786[iVar0 /*9*/] == iParam1)
				{
					Global_74786[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_473(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_74786[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_74786[iVar0 /*9*/].f_1 = (Global_74786[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_74786[iVar0 /*9*/] != -1)
	{
		if (Global_62915[Global_74786[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_74786[iVar0 /*9*/].f_1 > 1)
			{
				Global_74786[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_74786[iVar0 /*9*/].f_1 < 0)
			{
				Global_74786[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_474()
{
	if (bLocal_154)
	{
		if (!unk_0xF847447D4467709D())
		{
			if (unk_0x7FB7B029EB5D5A31(unk_0x9E2D6C50374FCFA9()) <= 5f)
			{
				if (!func_476(29))
				{
					func_244("AM_H_NOSTAM", -1);
					func_475(29);
				}
			}
		}
	}
}

void func_475(int iParam0)
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

int func_476(int iParam0)
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

void func_477()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	func_484();
	if (!func_187())
	{
		if (iLocal_70 >= 4)
		{
			if (!unk_0x8DD54478CFA35F08("smboat"))
			{
				unk_0x13A763A67BA2A95B("smBoat");
			}
		}
		else if (unk_0x8DD54478CFA35F08("smboat"))
		{
			unk_0x9D2ACCF306F3A0C5("smBoat");
		}
	}
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_173)
			{
				func_186(-803.2507f, 172.9356f, 71.8447f, 108.735f, 1);
				while (!func_383(0, 1))
				{
					wait(0);
				}
				unk_0x70F260358D1A42C4(sLocal_157);
				while (!unk_0xBD3CEA9CD36E271E(sLocal_157))
				{
					wait(0);
				}
				while (!unk_0xEA02B859DE237081(unk_0xA0F62C1038208492(-803.2507f, 172.9356f, 71.8447f)))
				{
					wait(0);
				}
				func_201(&iLocal_89, 14, -809.6773f, 171.191f, 75.7409f, 138.7408f);
			}
			break;
		
		case 1:
			iLocal_203 = 0;
			iLocal_204 = 0;
			unk_0x247F21B1803F0EC4("WORLD_VEHICLE_DRIVE_SOLO", 0);
			if (!unk_0xF68107C40359970C(iLocal_89))
			{
				func_97(iLocal_89);
			}
			unk_0x94953C3FF0664F66(0);
			unk_0x080C97B891E2F3AA(0, 1065353216);
			unk_0xB5549EA4FCF75870("Mansion_1");
			if (iLocal_173)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_95))
				{
					unk_0xD59CC8123FD1A789(&iLocal_95);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_97))
				{
					unk_0xD59CC8123FD1A789(&iLocal_97);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_98))
				{
					unk_0xD59CC8123FD1A789(&iLocal_98);
				}
				while (!func_332(&iLocal_98, 0, Local_126, fLocal_127, 1, 1))
				{
					wait(0);
				}
				if (unk_0x55A0C756C4A8220C(iLocal_95, 0))
				{
					unk_0x398C962F550CF3B4(iLocal_95, 1);
				}
				while (!func_383(0, 1))
				{
					wait(0);
				}
				unk_0x70F260358D1A42C4(sLocal_157);
				while (!unk_0xBD3CEA9CD36E271E(sLocal_157))
				{
					wait(0);
				}
				func_186(Local_120, fLocal_121, 1);
				if (!unk_0xF68107C40359970C(iLocal_89))
				{
					unk_0x51BB443B279E4104(iLocal_89);
				}
				func_201(&iLocal_89, 14, Local_122, fLocal_123);
				bVar0 = false;
		