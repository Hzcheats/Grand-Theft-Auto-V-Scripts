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
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	struct<120> Local_71 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_191 = 16;
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
	int* iLocal_356 = NULL;
	struct<9> Local_357 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	char[] cLocal_376[8] = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	char[] cLocal_380[8] = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	bool bLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	bool bLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	struct<3> Local_407 = { 0, 0, 0 } ;
	float fLocal_410 = 0f;
	int* iLocal_411 = NULL;
	int* iLocal_412 = NULL;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	float fLocal_415 = 0f;
	int iLocal_416 = 0;
	char* sLocal_417 = NULL;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421 = 0;
	float fLocal_422 = 0f;
	float fLocal_423 = 0f;
	float fLocal_424 = 0f;
	float fLocal_425 = 0f;
	float fLocal_426 = 0f;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int* iLocal_430 = NULL;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	struct<120> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<21> Var1;
	struct<20> Var23;
	int iVar45;
	bool bVar46;
	float fVar47;
	
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
	Local_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_391 = 1;
	iLocal_393 = 1;
	fLocal_415 = 0.95f;
	fLocal_422 = -1f;
	fLocal_423 = -1f;
	fLocal_424 = -1f;
	fLocal_425 = -1f;
	fLocal_426 = -1f;
	iLocal_433 = -1;
	iLocal_435 = 1;
	iVar0 = 66;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(iVar0))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
			func_808(1, 0);
		}
		else if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 64)
		{
			func_808(1, 1);
		}
		else
		{
			func_808(0, 0);
		}
	}
	SYSTEM::WAIT(0);
	func_806(ScriptParam_0);
	func_679();
	func_675();
	if (iLocal_392)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			MISC::_0x6F2135B6129620C1(false);
			CAM::DO_SCREEN_FADE_IN(800);
			iLocal_392 = 0;
		}
	}
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	Var23.f_4 = 1065353216;
	Var23.f_5 = 1065353216;
	Var23.f_9 = 1065353216;
	Var23.f_10 = 1065353216;
	Var23.f_14 = 1065353216;
	Var23.f_15 = 1065353216;
	Var23.f_17 = 1040187392;
	Var23.f_18 = 1040187392;
	Var23.f_19 = -1;
	while (iLocal_393)
	{
		if (func_674())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_665();
					iVar45 = 0;
					while (iVar45 < 10)
					{
						func_663(iVar45, 0);
						func_655(iVar45);
						iVar45++;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_404))
				{
					func_654();
				}
				func_808(0, 0);
			}
		}
		SYSTEM::WAIT(0);
		func_652("bPlayer_timetable_scene_in_progress");
		MISC::_0x1EAE0A6E978894A2(2, false);
		MISC::_0x1EAE0A6E978894A2(3, false);
		switch (iLocal_70)
		{
			case 0:
				if (func_454())
				{
					iLocal_70 = 1;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (func_443())
					{
						iLocal_70 = 2;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (func_420())
					{
						iLocal_70 = 3;
					}
				}
				break;
			
			case 3:
				if (Local_71.f_2 == 196 && !iLocal_398)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_414, true, false);
					iLocal_398 = 1;
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (func_240())
					{
						if (func_239(PLAYER::PLAYER_PED_ID(), Local_71.f_2))
						{
							iLocal_435 = 1;
							iLocal_70 = 5;
						}
						else if (func_238(Local_71.f_2))
						{
							iLocal_401 = 0;
							iLocal_70 = 4;
						}
						else
						{
							iLocal_70 = 6;
						}
					}
				}
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					switch (iLocal_401)
					{
						case 0:
							if (func_237())
							{
							}
							else
							{
								Var1.f_0 = 1;
								Var1.f_1 = "switch@michael@bench";
								Var1.f_2 = "cellphone_call_out";
								Var1.f_20 = 32;
								Var1.f_17 = 1.5f;
								Var1.f_18 = -1.5f;
								Var1.f_16 = MISC::GET_HASH_KEY("bonemask_head_neck_and_r_arm");
								TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var1, &Var23, &Var23, 0.25f, 0.25f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								iLocal_401 = 1;
							}
							break;
						
						case 1:
							bVar46 = false;
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_OUT", 3))
							{
								fVar47 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "SWITCH@MICHAEL@BENCH", "CELLPHONE_CALL_OUT");
								if (fVar47 >= 0.443f)
								{
									bVar46 = true;
								}
							}
							else
							{
								bVar46 = true;
							}
							if (bVar46)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
								{
									OBJECT::DELETE_OBJECT(&iLocal_411);
								}
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								iLocal_401 = 2;
								iLocal_70 = 6;
							}
							break;
						
						default:
							iLocal_70 = 6;
							break;
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
					{
						OBJECT::DELETE_OBJECT(&iLocal_411);
					}
					iLocal_401 = 2;
					iLocal_70 = 6;
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (func_22())
					{
						iLocal_70 = 6;
					}
				}
				break;
			
			case 6:
				func_5();
				break;
		}
		if (iLocal_375)
		{
			CAM::_0x59424BD75174C9B1();
			if (!func_1(&Local_357, 1, 1, 1, 0, 0, 0))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				iLocal_375 = 0;
			}
		}
	}
	func_808(0, 0);
}

int func_1(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_3();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false))
			{
				func_2(uParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.f_0)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.f_0)), SYSTEM::SIN(Var9.f_0) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.f_0)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.f_0)), SYSTEM::SIN(Var12.f_0) };
				fVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, false);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, true);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, Var3, true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, true);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, true);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_3();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, false);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, false);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_2(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
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

void func_2(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, false);
	}
}

void func_3()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_4();
}

void func_4()
{
	Global_22691.f_134 = 1;
}

void func_5()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		iVar0 = 0;
		Var1 = { 0f, 0f, 0f };
		Var4 = { 0f, 0f, 0f };
		iVar7 = -1;
		fVar8 = -1f;
		iVar9 = -1;
		if (func_21(Local_71.f_2, &iVar0, &Var1, &Var4, &iVar7, &fVar8, &iVar9))
		{
			func_7(&iLocal_411, iVar9);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_412))
	{
		iVar10 = 0;
		Var11 = { 0f, 0f, 0f };
		Var14 = { 0f, 0f, 0f };
		iVar17 = -1;
		fVar18 = -1f;
		iVar19 = -1;
		if (func_6(Local_71.f_2, &iVar10, &Var11, &Var14, &iVar17, &fVar18, &iVar19, &iVar20))
		{
			func_7(&iLocal_412, iVar19);
		}
	}
	if (iLocal_375)
	{
		func_652("bFilledPushInData");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		func_652("IS_PLAYER_SWITCH_IN_PROGRESS");
		return;
	}
	if (CAM::_0x3044240D2E0FA842())
	{
		func_652("Player_Timetable_Scene_Finished");
		PAD::DISABLE_CONTROL_ACTION(0, 26, true);
		PAD::DISABLE_CONTROL_ACTION(1, 26, true);
		PAD::DISABLE_CONTROL_ACTION(0, 79, true);
		PAD::DISABLE_CONTROL_ACTION(1, 79, true);
		PAD::DISABLE_CONTROL_ACTION(1, 1, true);
		PAD::DISABLE_CONTROL_ACTION(1, 2, true);
		PAD::DISABLE_CONTROL_ACTION(0, 34, true);
		PAD::DISABLE_CONTROL_ACTION(0, 35, true);
		PAD::DISABLE_CONTROL_ACTION(0, 33, true);
		return;
	}
	iLocal_393 = 0;
}

int func_6(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = { 0f, 0f, 0f };
	*iParam7 = 0;
	switch (iParam0)
	{
		case 188:
			*iParam1 = joaat("prop_cs_crisps_01");
			*iParam4 = 60309;
			*fParam5 = 0.574f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 212:
		case 214:
			*iParam1 = joaat("prop_bucket_01a");
			if (iParam0 == 212)
			{
				*uParam2 = { 0.6277f, -2.0464f, -1f };
				*uParam3 = { 0f, 0f, 0f };
			}
			else if (iParam0 == 214)
			{
				*uParam2 = { -0.3577f, -0.8936f, -0.99f };
				*uParam3 = { 6f, 0f, 0f };
			}
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 161:
			*iParam1 = joaat("prop_yoga_mat_03");
			*iParam4 = -1;
			*uParam2 = { -0.67f, -0.13f, 0.005f };
			*uParam3 = { 0f, 0f, 5.88f };
			*fParam5 = 0.99f;
			*iParam6 = 1;
			*iParam7 = 1;
			return 1;
			break;
		
		case 155:
			*iParam1 = joaat("prop_tennis_rack_01");
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			*iParam7 = 1;
			return 1;
			break;
		
		case 169:
			*iParam1 = joaat("prop_controller_01");
			*iParam4 = 28422;
			*fParam5 = -1f;
			*iParam6 = -1;
			*iParam7 = 1;
			return 1;
			break;
		
		case 248:
			*iParam1 = joaat("prop_ing_camera_01");
			*iParam4 = 28422;
			*fParam5 = -1f;
			*iParam6 = 1;
			*iParam7 = 1;
			return 1;
			break;
		
		case 189:
			*iParam1 = joaat("v_ilev_fh_dineeamesa");
			*iParam4 = -1;
			*fParam5 = 0.65f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 150:
			*iParam1 = joaat("prop_chair_06");
			*uParam2 = { Vector(32.453f, 3819.045f, 1977.433f) - Vector(32.429f, 3819.564f, 1978.07f) };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 1f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 151:
			*iParam1 = joaat("prop_chateau_table_01");
			*uParam2 = { 0.2733f, 0.9596f, -0.6005f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 190:
			*iParam1 = joaat("prop_cs_ironing_board");
			*uParam2 = { 2.43f, -2.76f, (0.025f - 0.005f) };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 311:
			*iParam1 = joaat("v_res_tt_flusher");
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.5f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*iParam1 = joaat("prop_pencil_01");
			*iParam4 = 28422;
			*fParam5 = 0.8989f;
			*iParam6 = 1;
			return 1;
			break;
			break;
		
		case 236:
			*iParam1 = joaat("prop_stool_01");
			*uParam2 = { 0.81f, -0.36f, -1.03f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.65f;
			*iParam6 = 0;
			return 1;
			break;
	}
	*iParam1 = 0;
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = { 0f, 0f, 0f };
	*iParam4 = -1;
	*fParam5 = -1f;
	*iParam6 = -1;
	*iParam7 = 0;
	return 0;
}

int func_7(int* iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	char* sVar26;
	struct<3> Var27;
	struct<3> Var30;
	char* sVar33;
	int iVar34;
	char* sVar35;
	char[] cVar51[8];
	int iVar67;
	char* sVar68;
	char[] cVar84[8];
	char[] cVar100[8];
	var uVar116;
	var uVar117;
	
	iVar0 = func_19();
	switch (iParam1)
	{
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_ironing_board") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_iron_01"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("prop_iron_01"))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				Var4 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
				ENTITY::SET_ENTITY_COORDS(*iParam0, Var1 + Vector(0.1f, 0f, 0f), true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(*iParam0, Var4.f_0, Var4.f_1, Var4.f_2, 2, true);
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("p_defilied_ragdoll_01_s"))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			}
			return 1;
			break;
		
		case 1:
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 2:
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			*iParam0 = 0;
			return 1;
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			if (((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_chateau_table_01") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("prop_cs_remote_01"))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			}
			if ((ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_dineeamesa") && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_res_tt_flusher")) && ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("v_ilev_fh_lampa_on"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			ENTITY::SET_ENTITY_DYNAMIC(*iParam0, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			return 1;
			break;
		
		case 4:
			Var7 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var10 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			iVar13 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("p_laptop_02_s"):
					iVar13 = joaat("prop_laptop_02_closed");
					break;
				
				case joaat("v_ilev_m_dinechair"):
					iVar13 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar13 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar13 = joaat("prop_defilied_ragdoll_01");
					break;
				
				case joaat("p_hand_toilet_s"):
					iVar13 = joaat("prop_toiletfoot_static");
					break;
				
				case joaat("prop_laptop_02_closed"):
				case joaat("p_dinechair_01_s"):
				case joaat("prop_acc_guitar_01_d1"):
				case joaat("prop_defilied_ragdoll_01"):
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
					return 1;
					break;
				
				case joaat("prop_toiletfoot_static"):
					Var14 = { 1971.669f, 3819.449f, 32.766f };
					Var17 = { 0f, 0f, 53.6f };
					ENTITY::SET_ENTITY_COORDS(*iParam0, Var14, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(*iParam0, Var17, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
					return 1;
					break;
				
				default:
					iVar13 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar13);
			while (!STREAMING::HAS_MODEL_LOADED(iVar13))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_19954.f_1 != 1)
				{
					func_11(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_19954.f_1 != 1)
			{
				func_11(1);
			}
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar13, Var7, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var10, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar13);
			return 1;
			break;
		
		case 5:
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam0, true), 0, 0.5f, true, false, 1f, false);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 30, false, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), true);
				}
				OBJECT::DELETE_OBJECT(iParam0);
				return 1;
			}
			else
			{
				OBJECT::DELETE_OBJECT(iParam0);
				return 0;
			}
			break;
		
		case 8:
			Var20 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var23 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar26 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar26 = "scr_pts_glass_bottle";
					break;
				
				case joaat("prop_pineapple"):
					sVar26 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
					sVar26 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar26 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_19954.f_1 != 1)
				{
					func_11(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_19954.f_1 != 1)
			{
				func_11(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar26, Var20, Var23, 1f, false, false, false);
			OBJECT::DELETE_OBJECT(iParam0);
			return 1;
			break;
		
		case 9:
			Var27 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
			Var30 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
			sVar33 = "";
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar33 = "scr_pts_glass_bottle";
					break;
				
				case joaat("prop_pineapple"):
					sVar33 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
				case joaat("prop_acc_guitar_01_d1"):
					sVar33 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar33 = "";
					return 0;
					break;
			}
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_19954.f_1 != 1)
				{
					func_11(1);
				}
				SYSTEM::WAIT(0);
			}
			iVar34 = 0;
			switch (ENTITY::GET_ENTITY_MODEL(*iParam0))
			{
				case joaat("prop_acc_guitar_01_d1"):
					return 0;
					break;
				
				case joaat("p_laptop_02_s"):
					iVar34 = joaat("prop_laptop_02_closed");
					break;
				
				case joaat("v_ilev_m_dinechair"):
					iVar34 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar34 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar34 = joaat("prop_defilied_ragdoll_01");
					break;
				
				default:
					iVar34 = 0;
					return 0;
					break;
			}
			STREAMING::REQUEST_MODEL(iVar34);
			while (!STREAMING::HAS_MODEL_LOADED(iVar34))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				HUD::CLEAR_REMINDER_MESSAGE();
				if (Global_19954.f_1 != 1)
				{
					func_11(1);
				}
				SYSTEM::WAIT(0);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			if (Global_19954.f_1 != 1)
			{
				func_11(1);
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar33, Var27, Var30, 1f, false, false, false);
			OBJECT::DELETE_OBJECT(iParam0);
			*iParam0 = OBJECT::CREATE_OBJECT(iVar34, Var27, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, Var30, 2, true);
			if (func_10(iVar0, &sVar35, &cVar51, &iVar67))
			{
				if (func_8(iVar0, &sVar68, &cVar84, &cVar100, &uVar116, &uVar117))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, &sVar68, &sVar35, 2))
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*iParam0, Global_97310, &sVar35, &sVar68, 1000f, -8f, iVar67, 1000f);
					}
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar34);
			return 1;
			break;
	}
	return 0;
}

int func_8(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	*iParam4 = 9;
	*iParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*iParam4 = 1545;
			*iParam5 = 1544;
			return 1;
			break;
		
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*iParam4 = 1545;
			*iParam5 = 1544;
			return 1;
			break;
		
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 1;
			break;
		
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 1;
			break;
		
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*iParam4 = 1545;
			*iParam5 = 1544;
			return 1;
			break;
		
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 1;
			break;
		
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*iParam4 |= 1536;
			*iParam5 |= 1536;
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 1;
			break;
		
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 1;
			break;
		
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 1;
			break;
		
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*iParam4 |= 1536;
			*iParam5 |= 1536;
			return 1;
			break;
		
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*iParam4 |= 1536;
			*iParam5 |= 1536;
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*iParam5 |= 32;
			return 1;
			break;
		
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*iParam5 |= 32;
			return 1;
			break;
		
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*iParam5 |= 32;
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*iParam5 |= 68;
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 1;
			break;
		
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 1;
			break;
		
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1026;
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 1;
			break;
		
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 1;
			break;
		
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 1;
			break;
		
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 1;
			break;
		
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 1;
			break;
		
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 1;
			break;
		
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 1;
			break;
		
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 1;
			break;
		
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 1;
			break;
		
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 1;
			break;
		
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 1;
			break;
		
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 1;
			break;
		
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 1;
			break;
		
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 1;
			break;
		
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 1;
			break;
		
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 1;
			break;
		
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 1;
			break;
		
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 1;
			break;
		
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 1;
			break;
		
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 1;
			break;
		
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 1;
			break;
		
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 1;
			break;
		
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 1;
			break;
		
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 1;
			break;
		
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 1;
			break;
		
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 1;
			break;
		
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*iParam4 = 1545;
			*iParam5 = 1544;
			return 1;
			break;
		
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*iParam4 = 1545;
			*iParam5 = 1544;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 1;
			break;
		
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 1;
			break;
		
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 1;
			break;
		
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 1;
			break;
		
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 1;
			break;
		
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 1;
			break;
		
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 1;
			break;
		
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 1;
			break;
		
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 1;
			break;
		
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*iParam4 |= 1024;
			*iParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*iParam4 |= 1536;
			*iParam5 |= 1536;
			return 1;
			break;
		
		case 305:
			func_9(iParam0, sParam1, sParam2, sParam3);
			return 1;
			break;
		
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*iParam5 |= 32768;
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*iParam5 |= 32768;
			return 1;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_9(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_10(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	*uParam3 = 0;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return 1;
			break;
		
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return 1;
			break;
		
		case 244:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return 1;
			break;
		
		case 198:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*uParam3 = 1;
			return 1;
			break;
		
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return 1;
			break;
		
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return 1;
			break;
		
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return 1;
			break;
	}
	return 0;
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		func_18();
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7825, 16);
		}
		Global_19954.f_1 = 1;
		if (func_17(0))
		{
			func_12(0);
		}
	}
	else if (Global_19954.f_1 == 1)
	{
		if (!Global_19954.f_1 == 0)
		{
			Global_19954.f_1 = 3;
		}
	}
}

void func_12(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_15())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_13())
	{
		Global_19954.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_15()
{
	return BitTest(Global_1958928, 5);
}

bool func_16()
{
	return BitTest(Global_1958928, 19);
}

int func_17(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	if (Global_19954.f_1 == 9 || Global_19954.f_1 == 10)
	{
		Global_21338 = 0;
		Global_21334 = 1;
	}
}

int func_19()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_98090;
	}
	if (func_20())
	{
		return Global_98090;
	}
	return 318;
}

int func_20()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5, int iParam6)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 11:
			*iParam1 = joaat("prop_phone_ing_03");
			*iParam4 = 28422;
			*fParam5 = 0.9f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 197:
			if (func_21(11, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*fParam5 = 0.7f;
				return 1;
			}
			break;
		
		case 80:
			*iParam1 = joaat("prop_table_05_chr");
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.05f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 110:
		case 111:
			*iParam1 = joaat("prop_phone_ing");
			*iParam4 = 28422;
			*fParam5 = -1f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 131:
			return func_21(110, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6);
			break;
		
		case 132:
			return func_21(110, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6);
			break;
		
		case 114:
			*iParam1 = joaat("prop_phone_ing");
			*iParam4 = 28422;
			*fParam5 = 0.93f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 83:
			*iParam1 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_pistol"));
			*iParam4 = 28422;
			*fParam5 = 1f;
			*iParam6 = 7;
			return 1;
			break;
		
		case 91:
			*iParam1 = joaat("prop_cigar_01");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 92:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 93:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 104:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 81:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 108:
		case 109:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*fParam5 = 0.7234f;
				return 1;
			}
			break;
		
		case 126:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 304:
			if (func_21(91, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				return 1;
			}
			break;
		
		case 115:
			*iParam1 = joaat("p_ing_coffeecup_01");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 116:
			if (func_21(115, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam1 = joaat("p_amb_coffeecup_01");
				return 1;
			}
			break;
		
		case 117:
			if (func_21(115, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam1 = joaat("p_ing_coffeecup_01");
				return 1;
			}
			break;
		
		case 97:
			if (func_21(115, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam1 = joaat("prop_plastic_cup_02");
				return 1;
			}
			break;
		
		case 162:
			if (func_21(115, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam1 = joaat("p_ing_coffeecup_01");
				return 1;
			}
			break;
		
		case 164:
			*iParam1 = joaat("p_cs_script_s");
			*iParam4 = 28422;
			*fParam5 = 0.86f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 161:
			*iParam1 = joaat("prop_cigar_01");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 155:
			*iParam1 = joaat("prop_tennis_rack_01");
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), -1f };
			*uParam3 = { 90f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f) };
			*iParam4 = -1;
			*fParam5 = 0.05f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 169:
			*iParam1 = joaat("prop_controller_01");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 171:
			*iParam1 = joaat("p_banknote_s");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 172:
			*iParam1 = joaat("p_banknote_s");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 152:
			*iParam1 = joaat("prop_beach_bag_02");
			*uParam2 = { 1.0027f, 2.3148f, -0.93f };
			*uParam3 = { 0f, 0f, 141.48f };
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 196:
			*iParam1 = joaat("v_ilev_fa_frontdoor");
			*uParam2 = { 0f, -0.18f, 0f };
			*uParam3 = { 0f, 0f, 180f };
			*iParam4 = -1;
			*fParam5 = 0.01f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 176:
			*iParam1 = joaat("v_ilev_fh_lampa_on");
			*iParam6 = 3;
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*uParam2 = { Vector(170.134f, 525.526f, -2.895f) - Vector(169.64f, 525.49f, -0.45f) };
			*uParam3 = { Vector(104.82f, 0f, 0f) - Vector(-147f, 0f, 0f) };
			*iParam6 = 3;
			return 1;
			break;
		
		case 179:
		case 180:
			*iParam1 = joaat("prop_cs_book_01");
			*iParam4 = 60309;
			*fParam5 = 0.705f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 198:
		case 199:
			*iParam1 = joaat("prop_cs_rub_binbag_01");
			*iParam4 = 28422;
			if (iParam0 == 198)
			{
				*fParam5 = 0.6645f;
				*iParam6 = 2;
			}
			else if (iParam0 == 199)
			{
				*fParam5 = 0.9401f;
				*iParam6 = 0;
			}
			else
			{
				*iParam6 = 2;
				*fParam5 = 0.8f;
			}
			return 1;
			break;
		
		case 85:
		case 291:
			if (func_21(191, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam6 = 0;
				if (iParam0 == 85)
				{
					*iParam6 = 3;
				}
				if (iParam0 == 291)
				{
				}
				*fParam5 = 0.3964f;
				return 1;
			}
			break;
		
		case 191:
			*iParam1 = joaat("prop_cs_remote_01");
			*iParam4 = 28422;
			*fParam5 = 0.2706f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 212:
		case 214:
			*iParam1 = joaat("prop_scourer_01");
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 188:
			*iParam1 = joaat("prop_crisp");
			*iParam4 = 28422;
			*fParam5 = 0.349f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 156:
			*iParam1 = joaat("prop_laptop_jimmy");
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 189:
			*iParam1 = joaat("p_laptop_02_s");
			*iParam4 = 28422;
			*fParam5 = 0.7558f;
			*iParam6 = 4;
			return 1;
			break;
		
		case 187:
			if (func_21(11, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*fParam5 = 0.85f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			if (func_21(11, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*fParam5 = 0.85f;
				return 1;
			}
			break;
		
		case 94:
			*iParam1 = joaat("prop_chateau_table_01");
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*uParam2 = { -0.0002f, 0.0002f, 0.364f };
			*iParam6 = 3;
			return 1;
			break;
		
		case 150:
			*iParam1 = joaat("prop_chair_06");
			*uParam2 = { Vector(32.43f, 3822.014f, 1975.425f) - Vector(32.429f, 3819.564f, 1978.07f) };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.65f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 151:
			*iParam1 = joaat("prop_chateau_chair_01");
			*uParam2 = { Vector(112.393f, 363.356f, -116.247f) - Vector(112.8857f, 363.5f, -115.92f) };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = -1;
			*fParam5 = 0.9f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 190:
			*iParam1 = joaat("prop_iron_01");
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 193:
			*iParam1 = joaat("p_weed_bottle_s");
			*iParam4 = 28422;
			*fParam5 = (0.25f + 0.1f);
			*iParam6 = 1;
			return 1;
			break;
		
		case 192:
			*iParam1 = joaat("p_weed_bottle_s");
			*iParam4 = 28422;
			*fParam5 = 0.782f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 194:
			if (func_21(193, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam6 = 1;
				*fParam5 = 0.65f;
				return 1;
			}
			break;
		
		case 195:
			if (func_21(193, iParam1, uParam2, uParam3, iParam4, fParam5, iParam6))
			{
				*iParam6 = 1;
				*fParam5 = 0.65f;
				return 1;
			}
			break;
		
		case 103:
			*iParam1 = joaat("prop_cigar_01");
			*iParam4 = 28422;
			*fParam5 = 0.85f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 243:
			*iParam1 = joaat("prop_taco_01");
			*iParam4 = 60309;
			*fParam5 = 0.8308f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 244:
			*iParam1 = joaat("prop_taco_01");
			*iParam4 = 28422;
			*fParam5 = 0.6f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 200:
			*iParam1 = joaat("p_amb_coffeecup_01");
			*iParam4 = 28422;
			*fParam5 = 0.7f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 201:
			*iParam1 = joaat("p_amb_coffeecup_01");
			*iParam4 = 28422;
			*fParam5 = 0.74f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 236:
			*iParam1 = joaat("prop_cs_beer_bot_01");
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 2;
			return 1;
			break;
		
		case 238:
			*iParam1 = joaat("p_panties_s");
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*iParam1 = joaat("p_notepad_01_s");
			*iParam4 = 60309;
			*fParam5 = 0.8989f;
			*iParam6 = 1;
			return 1;
			break;
		
		case 296:
			*iParam1 = joaat("prop_mr_raspberry_01");
			*uParam2 = { 0.1774f, 1.4431f, 1.2766f };
			*uParam3 = { 0f, -85f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.7f;
			*iParam6 = 3;
			return 1;
			break;
		
		case 249:
			*iParam1 = joaat("prop_acc_guitar_01");
			*uParam2 = { 0.1f, 0f, 0f };
			*uParam3 = { 0f, -85f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.554f;
			*iParam6 = 9;
			return 1;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			*iParam1 = joaat("prop_cs_beer_bot_01");
			*iParam4 = 28422;
			*fParam5 = 0.527f;
			*iParam6 = 8;
			return 1;
			break;
		
		case 280:
			*iParam1 = joaat("prop_cs_beer_bot_01");
			*iParam4 = 60309;
			*fParam5 = 0.4548f;
			*iParam6 = 8;
			return 1;
			break;
		
		case 297:
			*iParam1 = joaat("p_defilied_ragdoll_01_s");
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.99f;
			*iParam6 = 0;
			return 1;
			break;
		
		case 298:
			*iParam1 = joaat("prop_pineapple");
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*iParam4 = 28422;
			*fParam5 = 0.114f;
			*iParam6 = 8;
			return 1;
			break;
		
		case 311:
			*iParam1 = joaat("p_hand_toilet_s");
			*uParam2 = { Vector(32.9692f, 3819.565f, 1971.63f) - Vector(33.4287f, 3817.86f, 1972.237f) };
			*uParam3 = { 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f) };
			*iParam4 = -1;
			*fParam5 = 0.99f;
			*iParam6 = 4;
			return 1;
			break;
		
		case 245:
		case 40:
			*iParam1 = joaat("prop_cs_crackpipe");
			*iParam4 = 28422;
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = { 0f, 0f, 0f };
			*fParam5 = 0.65f;
			*iParam6 = 0;
			return 1;
			break;
	}
	*iParam1 = 0;
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = { 0f, 0f, 0f };
	*iParam4 = -1;
	*fParam5 = -1f;
	*iParam6 = -1;
	return 0;
}

int func_22()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<4> Var6;
	char cVar14[32];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	struct<3> Var26;
	int iVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	struct<3> Var33;
	struct<3> Var36;
	int iVar39;
	float fVar40;
	int iVar41;
	int iVar42;
	char cVar43[16];
	bool bVar47;
	float fVar48;
	int iVar49;
	
	Var0 = { -812.003f, 173.7f, 75.741f };
	Var3 = { 0f, 0f, (-74f + 90f) };
	StringCopy(&Var6, "switch@michael@closet", 32);
	StringCopy(&cVar14, "", 16);
	iVar19 = 0;
	iVar20 = -1;
	iVar21 = -1;
	while (iVar19 > -1)
	{
		switch (iVar19)
		{
			case 0:
				iLocal_435 = 1;
				STREAMING::REQUEST_ANIM_DICT(&Var6);
				if (STREAMING::HAS_ANIM_DICT_LOADED(&Var6))
				{
					StringCopy(&cVar14, "closet_c", 16);
					func_235(Local_71.f_2, "wardrobe");
					if (Local_71.f_118 == 2)
					{
						func_230(Local_71.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
					{
						iVar22 = 0;
						Var23 = { 0f, 0f, 0f };
						Var26 = { 0f, 0f, 0f };
						iVar29 = -1;
						fVar30 = -1f;
						iVar31 = -1;
						if (func_21(Local_71.f_2, &iVar22, &Var23, &Var26, &iVar29, &fVar30, &iVar31))
						{
							func_7(&iLocal_411, iVar31);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_412))
					{
						iVar32 = 0;
						Var33 = { 0f, 0f, 0f };
						Var36 = { 0f, 0f, 0f };
						iVar39 = -1;
						fVar40 = -1f;
						iVar41 = -1;
						iVar42 = 0;
						if (func_6(Local_71.f_2, &iVar32, &Var33, &Var36, &iVar39, &fVar40, &iVar41, &iVar42))
						{
							func_7(&iLocal_412, iVar41);
						}
					}
					func_229(&Global_97310);
					func_222(&iLocal_429, 1);
					func_221(PLAYER::PLAYER_PED_ID(), Local_71.f_2);
					if (!func_195(PLAYER::PLAYER_PED_ID(), 145))
					{
						func_28(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0, 1);
					}
					if (func_27(Local_71.f_2))
					{
						PED::SET_FORCE_STEP_TYPE(PLAYER::PLAYER_PED_ID(), true, 0, 1);
					}
					iVar20 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar20, &Var6, &cVar14, 1000f, -8f, 0, 0, 1000f, 0);
					cVar43 = { cVar14 };
					StringConCat(&cVar43, "_cam", 16);
					iVar18 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar18, iVar20, &cVar43, &Var6);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar20, false);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar20, true);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar20, 0f);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
					CAM::DO_SCREEN_FADE_IN(2500);
					iVar21 = MISC::GET_GAME_TIMER() + 1000;
					iVar19 = 1;
				}
				break;
			
			case 1:
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar20, 0f);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
					{
						iVar19 = 2;
					}
				}
				if (iVar19 != 2)
				{
					if (MISC::GET_GAME_TIMER() > iVar21)
					{
						iVar19 = 2;
					}
				}
				break;
			
			case 2:
				bVar47 = false;
				fVar48 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar20);
				iVar49 = 2;
				if (func_26("WalkInterruptible", fVar48, &Var6, &cVar14, &iVar49))
				{
					if (!func_25(&iVar49, 64))
					{
					}
					else
					{
						bVar47 = true;
					}
				}
				if (!iLocal_375)
				{
					if (func_23(Local_71.f_2, &iVar18, fVar48, &iVar49))
					{
						func_222(&iVar18, 1);
					}
				}
				if (fVar48 >= 0.99f)
				{
					bVar47 = true;
				}
				if (bVar47)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_235(Local_71.f_2, "wardrobe scene done");
					func_222(&iVar18, 1);
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.1103f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-0.0921f);
					}
					iVar19 = -1;
				}
				break;
		}
		func_652("Has_Player_Finished_Wardrobe_Scene");
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_23(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;
	char* sVar1;
	
	if (!CAM::DOES_CAM_EXIST(*iParam1))
	{
		return 0;
	}
	if (!CAM::IS_CAM_RENDERING(*iParam1))
	{
		return 0;
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		return 0;
	}
	fVar0 = -1f;
	switch (iParam0)
	{
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			fVar0 = 0.8f;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
			fVar0 = 0.8f;
			break;
		
		case 125:
			fVar0 = 0.75f;
			break;
		
		case 112:
		case 113:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 123:
			fVar0 = 0.6f;
			break;
		
		case 103:
			fVar0 = 0.75f;
			break;
		
		case 87:
		case 88:
			fVar0 = 0.55f;
			break;
		
		case 108:
		case 109:
			fVar0 = 0.75f;
			break;
		
		case 86:
			fVar0 = 0.5f;
			break;
		
		case 94:
			fVar0 = 0.85f;
			break;
		
		case 121:
			fVar0 = 0.65f;
			break;
		
		case 114:
			fVar0 = 0.9f;
			break;
		
		case 78:
			fVar0 = 0.6f;
			break;
		
		case 77:
			fVar0 = 0.75f;
			break;
		
		case 122:
			fVar0 = 0.7f;
			break;
		
		case 118:
		case 119:
		case 120:
			fVar0 = -1f;
			return 0;
			break;
		
		case 162:
			fVar0 = 0.75f;
			break;
		
		case 153:
			fVar0 = 0.5f;
			break;
		
		case 154:
			fVar0 = 0.75f;
			break;
		
		case 173:
			fVar0 = 0.75f;
			break;
		
		case 150:
			fVar0 = 0.75f;
			break;
		
		case 129:
			fVar0 = 0.75f;
			break;
		
		case 84:
			fVar0 = 0.6f;
			break;
		
		case 291:
			fVar0 = 0.7f;
			break;
		
		case 95:
			fVar0 = 0.7f;
			break;
		
		case 85:
			fVar0 = 0.7f;
			break;
		
		case 83:
			fVar0 = 0.75f;
			break;
		
		case 82:
			fVar0 = 0.75f;
			break;
		
		case 168:
			fVar0 = 0.7f;
			break;
		
		case 169:
			fVar0 = 0.85f;
			break;
		
		case 158:
			fVar0 = 0.9f;
			break;
		
		case 163:
			fVar0 = 0.85f;
			break;
		
		case 156:
			fVar0 = 0.75f;
			break;
		
		case 161:
			fVar0 = 1f;
			break;
		
		case 160:
			fVar0 = 0.6f;
			break;
		
		case 159:
			fVar0 = 0.85f;
			break;
		
		case 165:
			fVar0 = 0.75f;
			break;
		
		case 167:
			fVar0 = 0.9f;
			break;
		
		case 152:
			fVar0 = 0.9f;
			break;
		
		case 164:
			fVar0 = 0.9f;
			break;
		
		case 157:
			fVar0 = 1f;
			break;
		
		case 151:
			fVar0 = 0.85f;
			break;
		
		case 155:
			fVar0 = 0.9f;
			break;
		
		case 198:
			fVar0 = 0.7f;
			break;
		
		case 211:
		case 213:
			fVar0 = 0.6f;
			break;
		
		case 212:
		case 214:
			fVar0 = 0.7f;
			break;
		
		case 204:
		case 205:
		case 203:
		case 206:
		case 207:
			fVar0 = 0.7f;
			break;
		
		case 199:
			fVar0 = 0.7f;
			break;
		
		case 175:
		case 176:
			fVar0 = 0.8f;
			break;
		
		case 181:
		case 182:
		case 183:
			fVar0 = 0.6f;
			break;
		
		case 191:
			fVar0 = 0.5f;
			break;
		
		case 178:
			fVar0 = 0.85f;
			break;
		
		case 177:
			fVar0 = 0.9f;
			break;
		
		case 184:
		case 185:
			fVar0 = 0.6f;
			break;
		
		case 187:
			fVar0 = 0.75f;
			break;
		
		case 189:
			fVar0 = 0.75f;
			break;
		
		case 215:
			fVar0 = 0.7f;
			break;
		
		case 190:
			fVar0 = 0.8f;
			break;
		
		case 186:
			fVar0 = 0.6f;
			break;
		
		case 188:
			fVar0 = 0.8f;
			break;
		
		case 179:
		case 180:
			fVar0 = 0.8f;
			break;
		
		case 196:
			fVar0 = 0.85f;
			break;
		
		case 11:
			fVar0 = 0.85f;
			break;
		
		case 201:
			fVar0 = 0.7f;
			break;
		
		case 200:
			fVar0 = 0.75f;
			break;
		
		case 220:
			fVar0 = 0.6f;
			break;
		
		case 219:
			fVar0 = 0.25f;
			break;
		
		case 218:
			fVar0 = 0.5f;
			break;
		
		case 193:
			fVar0 = 0.85f;
			break;
		
		case 202:
			fVar0 = 0.6f;
			break;
		
		case 224:
			fVar0 = 0.6f;
			break;
		
		case 223:
			fVar0 = 0.7f;
			break;
		
		case 222:
			fVar0 = 0.5f;
			break;
		
		case 221:
			fVar0 = 0.6f;
			break;
		
		case 216:
		case 217:
			fVar0 = 0.6f;
			break;
		
		case 226:
		case 227:
		case 230:
			fVar0 = 0.5f;
			break;
		
		case 192:
			fVar0 = 0.7f;
			break;
		
		case 197:
			fVar0 = 0.75f;
			break;
		
		case 232:
		case 233:
			fVar0 = 0.7f;
			break;
		
		case 225:
			fVar0 = 0.55f;
			break;
		
		case 234:
			fVar0 = 0.65f;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			fVar0 = 0.8f;
			break;
		
		case 299:
			fVar0 = 0.5f;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			fVar0 = 0.9f;
			break;
		
		case 296:
			fVar0 = 0.45f;
			break;
		
		case 297:
			fVar0 = 0.8f;
			break;
		
		case 293:
		case 294:
			fVar0 = 0.85f;
			break;
		
		case 292:
		case 295:
			fVar0 = 0.85f;
			break;
		
		case 298:
			fVar0 = 0.8f;
			break;
		
		case 315:
			fVar0 = 0.55f;
			break;
		
		case 316:
			fVar0 = 0.9f;
			break;
		
		case 245:
			fVar0 = 0.9f;
			break;
		
		case 235:
			fVar0 = 1f;
			break;
		
		case 236:
			fVar0 = 0.85f;
			break;
		
		case 237:
			fVar0 = 0.75f;
			break;
		
		case 290:
			fVar0 = 0.8f;
			break;
		
		case 238:
			fVar0 = 0.8f;
			break;
		
		case 310:
			fVar0 = 0.85f;
			break;
		
		case 311:
			fVar0 = 1f;
			break;
		
		case 271:
			fVar0 = 0.9f;
			break;
		
		case 285:
			fVar0 = 0.75f;
			break;
		
		case 280:
			fVar0 = 0.8f;
			break;
		
		case 239:
			fVar0 = 0.85f;
			break;
		
		case 255:
			fVar0 = 0.8f;
			break;
		
		case 289:
			fVar0 = 0.9f;
			break;
		
		case 247:
			fVar0 = 0.95f;
			break;
		
		case 254:
			fVar0 = 0.75f;
			break;
		
		case 273:
		case 274:
			fVar0 = 0.9f;
			break;
		
		case 287:
			fVar0 = 0.7f;
			break;
		
		case 243:
			fVar0 = 0.7f;
			break;
		
		case 244:
			fVar0 = 0.75f;
			break;
		
		case 248:
			fVar0 = 0.85f;
			break;
		
		case 249:
			fVar0 = 0.85f;
			break;
		
		case 288:
			fVar0 = 0.85f;
			break;
		
		case 286:
			fVar0 = 0.8f;
			break;
		
		case 264:
			fVar0 = 0.9f;
			break;
		
		case 246:
			fVar0 = 0.9f;
			break;
		
		case 262:
			fVar0 = 0.9f;
			break;
		
		case 263:
			fVar0 = 0.8f;
			break;
		
		case 259:
			fVar0 = 0.85f;
			break;
		
		default:
			if (func_24(iParam0, &sVar1))
			{
				fVar0 = 0.95f;
			}
			else
			{
				fVar0 = -1f;
				return 0;
			}
			break;
	}
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		if (fParam2 < fVar0)
		{
			*iParam3++;
		}
		else
		{
			*iParam3++;
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "BED_LOOP_Cam", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "BED_LOOP_Cam", 64);
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "TRVS_IG_11_LOOP_CAM", 64);
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_BASE_CAM", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "GANG_TAUNT_LOOP_CAM", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "GANG_TAUNT_WITH_LAMAR_LOOP_CAM", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "FRAS_IG_6_P5_LOOP_CAM", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "FRAS_IG_10_P3_LOOP_CAM", 64);
			return 1;
			break;
		
		case 232:
			StringCopy(sParam1, "Franklin_call_Michael_IDLE_CAM", 64);
			return 1;
			break;
		
		case 233:
			StringCopy(sParam1, "Franklin_call_Michael_IDLE_CAM", 64);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 108:
			StringCopy(sParam1, "PARKBENCH_SMOKE_RANGER_LOOP_CAM", 64);
			return 1;
			break;
		
		case 109:
			return func_24(108, sParam1);
			break;
		
		case 221:
			StringCopy(sParam1, "base_CAM", 64);
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE_CAM", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "001220_03_GC_TRVS_IG_7_BASE_CAM", 64);
			return 1;
			break;
		
		case 202:
			StringCopy(sParam1, "001942_02_GC_FRAS_IG_5_BASE_CAM", 64);
			return 1;
			break;
		
		case 292:
			StringCopy(sParam1, "Bed_Sleep_CAM", 64);
			return 1;
			break;
		
		case 293:
			StringCopy(sParam1, "Bed_Sleep_CAM", 64);
			return 1;
			break;
		
		case 294:
			return func_24(293, sParam1);
			break;
		
		case 295:
			return func_24(292, sParam1);
			break;
		
		case 190:
			StringCopy(sParam1, "001947_01_GC_FRAS_V2_IG_6_BASE_CAM", 64);
			return 1;
			break;
		
		case 214:
			StringCopy(sParam1, "001946_01_GC_FRAS_V2_IG_5_BASE_CAM", 64);
			return 1;
			break;
		
		case 212:
			return func_24(214, sParam1);
			break;
		
		case 288:
			StringCopy(sParam1, "LOOP_Cam", 64);
			return 1;
			break;
		
		case 254:
			StringCopy(sParam1, "trev_exit_lingerie_shop_idle_CAM", 64);
			return 1;
			break;
		
		case 173:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 89:
			StringCopy(sParam1, "BASE_CAM", 64);
			return 1;
			break;
		
		case 90:
			return func_24(89, sParam1);
			break;
		
		case 127:
			StringCopy(sParam1, "BASE_PREMIER_CAM", 64);
			return 1;
			break;
		
		case 91:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 92:
			return func_24(91, sParam1);
			break;
		
		case 93:
			return func_24(91, sParam1);
			break;
		
		case 104:
			return func_24(91, sParam1);
			break;
		
		case 81:
			return func_24(91, sParam1);
			break;
		
		case 291:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "Switch_ON_CLUBCHAIR_BASE_CAM", 64);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "BASE_CAM", 64);
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "LOOP_CAM", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "null", 64);
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
	if (((iVar0 < iParam1 && iVar0 > -iParam1) && iVar1 < iParam1) && iVar1 > -iParam1)
	{
		*iParam0++;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(char* sParam0, float fParam1, char* sParam2, char* sParam3, int iParam4)
{
	float fVar0;
	var uVar1;
	
	if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam2, sParam3, sParam0, &fVar0, &uVar1))
	{
		if (fParam1 < fVar0)
		{
			*iParam4++;
		}
		else
		{
			*iParam4++;
			return 1;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "WalkInterruptible"))
	{
		if (func_26("END_IN_WALK", fParam1, sParam2, sParam3, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 77:
			return 1;
			break;
		
		case 78:
			return 1;
			break;
	}
	return 0;
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<391> Var0;
	int iVar401;
	int iVar402;
	
	Var0 = 125;
	Var0.f_126 = 125;
	Var0.f_253 = 125;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	iVar401 = func_194();
	iVar402 = func_192(iVar401);
	func_191(&Var0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			if (iParam2 == 1)
			{
				if (!func_29(iParam0, 12, &Var0, iVar401, iVar402, iParam1, iParam3, iParam4, 1))
				{
					return;
				}
			}
			else
			{
				if (!func_29(iParam0, 6, &Var0, iVar401, iVar402, iParam1, 0, iParam4, iParam5))
				{
					return;
				}
				if (!func_29(iParam0, 4, &Var0, iVar401, iVar402, iParam1, 0, iParam4, iParam5))
				{
					return;
				}
				if (!func_29(iParam0, 3, &Var0, iVar401, iVar402, iParam1, 0, iParam4, iParam5))
				{
					return;
				}
			}
		}
	}
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (!func_149(iParam1, uParam2, iParam3, iParam4, iParam5, &iVar2, iParam6, iParam7, 1))
	{
		iVar0++;
		if (iVar0 > 20)
		{
			return 0;
		}
	}
	iVar1 = func_146(iParam1, uParam2, iParam4, iParam5, iParam7, iParam8);
	iVar3 = (*uParam2)[iVar1];
	func_145(iParam4, iParam1, &iVar3);
	iVar0 = 0;
	while (!func_175(iParam0, iParam1, iVar3, iParam5, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
	{
		iVar1 = func_146(iParam1, uParam2, iParam4, iParam5, iParam7, iParam8);
		iVar3 = (*uParam2)[iVar1];
		func_145(iParam4, iParam1, &iVar3);
		iVar0++;
		if (iVar0 > 20)
		{
			iVar1 = iVar2;
		}
		if (iVar0 > 21)
		{
			return 0;
		}
	}
	func_30(iParam0, iParam1, (*uParam2)[iVar1], iParam5);
	return 1;
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (!PED::IS_PED_INJURED(iParam0) && iParam1 != 12)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = iParam1;
		iVar2 = iParam2;
		Var3 = { func_75(iVar0, iParam1, iParam2, -1) };
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = Var3.f_12;
		if (iParam1 != 14)
		{
			iVar19 = -1;
		}
		if (iVar19 > -1)
		{
		}
		func_34(&iVar17, &iVar18, &iParam1, &iVar19, &iParam2, iParam0, iParam3);
		while (iVar17 != -1)
		{
			func_34(&iVar17, &iVar18, &iParam1, &iVar19, &iParam2, iParam0, iParam3);
		}
		if (iVar0 == joaat("player_zero"))
		{
			if (iVar1 == 11)
			{
				if (((iVar2 >= 8 && iVar2 <= 17) || (iVar2 >= 18 && iVar2 <= 27)) || (iVar2 >= 28 && iVar2 <= 43))
				{
					iVar17 = 0;
					iVar18 = 0;
					iVar19 = -1;
					iParam1 = 3;
					iParam2 = func_31(iParam0, iParam1);
					func_34(&iVar17, &iVar18, &iParam1, &iVar19, &iParam2, iParam0, iParam3);
				}
			}
		}
		else if (iVar0 == joaat("player_one"))
		{
			if (iVar1 == 11)
			{
				if (iVar2 >= 47 && iVar2 <= 62)
				{
					iVar17 = 0;
					iVar18 = 0;
					iVar19 = -1;
					iParam1 = 3;
					iParam2 = func_31(iParam0, iParam1);
					func_34(&iVar17, &iVar18, &iParam1, &iVar19, &iParam2, iParam0, iParam3);
				}
			}
		}
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = -1;
		iParam1 = 4;
		iParam2 = func_31(iParam0, iParam1);
		func_34(&iVar17, &iVar18, &iParam1, &iVar19, &iParam2, iParam0, iParam3);
	}
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((bParam1 == 12 || bParam1 == 13) || bParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_33(bParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_32(iParam0, iVar1, iVar2, bParam1);
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_33(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_33(int iParam0)
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

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (*iParam1 > -1)
	{
	}
	uVar3 = *iParam0;
	uVar4 = *iParam1;
	*iParam0 = -1;
	iVar0 = uVar3;
	while (iVar0 <= 14)
	{
		iVar2 = iVar0;
		if ((iVar2 != 12 && iVar2 != 13) && (iVar2 != 0 || !Global_77858))
		{
			if (iVar2 == 14)
			{
				iVar1 = uVar4;
				while (iVar1 <= 8)
				{
					if (iVar1 != *iParam3)
					{
						iVar6 = func_70(iParam5, iVar2, iVar1);
						func_35(iParam5, iVar2, iVar1, iVar6, *iParam2, *iParam4, iParam0, iParam1, &uVar5, iParam6);
					}
					iVar1++;
				}
			}
			else if (iVar2 != *iParam2)
			{
				iVar6 = func_70(iParam5, iVar2, -1);
				func_35(iParam5, iVar2, iVar1, iVar6, *iParam2, *iParam4, iParam0, iParam1, &uVar5, iParam6);
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		*iParam2 = *iParam0;
		*iParam3 = *iParam1;
		*iParam4 = uVar5;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	struct<14> Var1;
	bool bVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_47(iVar0, iParam1, iParam3, iParam4, iParam5, 0))
	{
		bVar15 = false;
		iVar16 = 0;
		iVar17 = func_45(iVar0, iParam1, iParam2);
		if (iVar17 != -99)
		{
			if (func_47(iVar0, iParam1, iVar17, iParam4, iParam5, 0))
			{
				if (func_175(iParam0, iParam1, iVar17, iParam9, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
				{
					bVar15 = true;
					func_44(iParam1, iParam2, uParam6, uParam7, uParam8, iVar17);
				}
			}
		}
		while (iVar16 < 320 && !bVar15)
		{
			Var1 = { func_75(iVar0, iParam1, iVar16, -1) };
			if (Var1.f_1 == -99)
			{
				iVar16 = 320;
			}
			else if (!func_43(iVar0, iParam1, iVar16))
			{
				if (func_47(iVar0, iParam1, iVar16, iParam4, iParam5, 0))
				{
					if (func_175(iParam0, iParam1, iVar16, iParam9, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
					{
						bVar15 = true;
						func_44(iParam1, iParam2, uParam6, uParam7, uParam8, iVar16);
					}
				}
			}
			iVar16++;
		}
		if (!bVar15)
		{
			uVar18 = { func_36(iVar0, 0) };
			func_175(iParam0, iParam1, uVar18[iParam1], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_44(iParam1, iParam2, uParam6, uParam7, uParam8, iVar16);
		}
	}
}

struct<17> func_36(int iParam0, int iParam1)
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
					if (Global_112922.f_9085.f_99.f_58[120])
					{
						func_42(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_42(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_42(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_42(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_42(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_42(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_42(&Var1, -99, -99, Global_112922.f_2363.f_539.f_196[0], Global_112922.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_42(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_42(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_42(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_42(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_42(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_42(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_42(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_42(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_42(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_42(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_42(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_42(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_42(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_42(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_42(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_42(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_42(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_42(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_42(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_42(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_42(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_42(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_42(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_42(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_42(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_42(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_42(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_42(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_42(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_42(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_42(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_42(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_42(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_42(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_42(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_42(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_42(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_42(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_42(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_42(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_42(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_42(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_42(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_42(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_42(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_42(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_42(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_37(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_42(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_42(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_42(&Var1, -99, -99, Global_112922.f_2363.f_539.f_196[1], Global_112922.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_42(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_42(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_42(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_42(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_42(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_42(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_42(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_42(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_42(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_42(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_42(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_42(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_42(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_42(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_42(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_42(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_42(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_42(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_42(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_42(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_42(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_42(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_42(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_42(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_42(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_42(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_42(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_42(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_42(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_42(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_42(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_42(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_42(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_42(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_42(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_42(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_42(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_42(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_42(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_42(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_42(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_42(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_42(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_42(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_37(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_42(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_42(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_42(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_42(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_42(&Var1, -99, -99, Global_112922.f_2363.f_539.f_196[2], Global_112922.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_42(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_42(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_42(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_42(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_42(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_42(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_42(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_42(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_42(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_42(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_42(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_42(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_42(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_42(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_42(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_42(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_42(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_42(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_42(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_42(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_42(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_42(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_42(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_42(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_42(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_42(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_42(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_42(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_42(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_42(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_42(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_42(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_42(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_42(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_42(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_42(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_42(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_42(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_42(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_42(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_42(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_42(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_42(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_37(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_42(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_42(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_42(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_42(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_42(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_42(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_42(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_42(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_42(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_42(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_42(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_42(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_42(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_42(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_42(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_42(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_42(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_42(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_42(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_42(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_42(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_42(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_42(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_42(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_42(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_42(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_37(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_42(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_42(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_42(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_42(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_42(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_42(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_42(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_42(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_42(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_42(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_42(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_42(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_42(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_42(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_42(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_42(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_42(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_42(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_42(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_42(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_42(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_42(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_42(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_42(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_42(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_42(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_42(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_42(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_37(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
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
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var19);
						FILES::GET_SHOP_PED_COMPONENT(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_41(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_41(Var16.f_2)] = func_38(iParam1, Var16.f_0, func_41(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_41(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
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

int func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2 == 12)
	{
	}
	else if (bParam2 == 13)
	{
	}
	else if (bParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar0 = FILES::_0x6CEBE002E58DEE97(iParam1);
		if (iVar0 != -1)
		{
			return (func_40(iParam0) + iVar0);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_33(bParam2));
		iVar1 = FILES::_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_39(iParam0, func_33(bParam2)) + iVar1);
		}
	}
	return -99;
}

int func_39(int iParam0, int iParam1)
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

int func_40(int iParam0)
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

int func_41(int iParam0)
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

void func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (!Global_112922.f_9085.f_99.f_58[137])
	{
		if (iParam0 == joaat("player_zero"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 169 || (iParam2 >= 171 && iParam2 <= 173))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if (((iParam2 >= 47 && iParam2 <= 54) || (iParam2 >= 72 && iParam2 <= 79)) || (iParam2 >= 89 && iParam2 <= 91))
				{
					return 1;
				}
			}
			else if (iParam1 == 11)
			{
				if (iParam2 == 44)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("player_one"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 260)
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((iParam2 >= 14 && iParam2 <= 21) || (iParam2 >= 72 && iParam2 <= 77))
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("player_two"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 96 || (iParam2 >= 71 && iParam2 <= 75))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((((iParam2 >= 18 && iParam2 <= 29) || (iParam2 >= 81 && iParam2 <= 90)) || (iParam2 >= 94 && iParam2 <= 103)) || iParam2 == 33)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_44(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (*uParam2 == -1)
	{
		*uParam2 = iParam0;
		*uParam4 = iParam5;
		if (iParam0 == 14)
		{
			*uParam3 = uParam1;
		}
	}
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_46(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_112922.f_2363.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_112922.f_9085.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_112922.f_9085.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_112922.f_2363.f_539[1 /*65*/].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_112922.f_2363.f_539[2 /*65*/].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_46(int iParam0)
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

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar19;
	struct<14> Var29;
	struct<14> Var43;
	
	if ((iParam1 == iParam3 && iParam1 != 14) && iParam1 != 13)
	{
		return 0;
	}
	if (iParam2 == -99 || iParam4 == -99)
	{
		return 1;
	}
	if (iParam1 == iParam3 && iParam2 == iParam4)
	{
		return 1;
	}
	uVar2 = 15;
	uVar19 = 9;
	Var29 = { func_75(iParam0, iParam1, iParam2, -1) };
	Var43 = { func_75(iParam0, iParam3, iParam4, -1) };
	if (BitTest(Var29.f_6, 3) || BitTest(Var43.f_6, 3))
	{
		if (BitTest(Var29.f_6, 3))
		{
		}
		if (BitTest(Var43.f_6, 3))
		{
		}
		iVar0 = 0;
		while (iVar0 < 54)
		{
			uVar2 = { func_36(iParam0, iVar0) };
			uVar19 = { func_67(iParam0, uVar2[13]) };
			if (iParam3 == 14)
			{
				if (uVar19[Var43.f_12] == iParam4)
				{
					if (func_65(iParam0, iVar0, iParam1, iParam2, &uVar2, &Var29))
					{
						bVar1 = true;
					}
				}
			}
			else if (uVar2[iParam3] == iParam4)
			{
				if (func_65(iParam0, iVar0, iParam1, iParam2, &uVar2, &Var29))
				{
					bVar1 = true;
				}
			}
			if (iParam1 == 14)
			{
				if (uVar19[Var29.f_12] == iParam2)
				{
					if (func_65(iParam0, iVar0, iParam3, iParam4, &uVar2, &Var43))
					{
						bVar1 = true;
					}
				}
			}
			else if (uVar2[iParam1] == iParam2)
			{
				if (func_65(iParam0, iVar0, iParam3, iParam4, &uVar2, &Var43))
				{
					bVar1 = true;
				}
			}
			iVar0++;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	if (func_48(iParam0, iParam1, iParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	if ((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two"))
	{
		if (func_64(iParam0, iParam1, iParam2, -1))
		{
			if (func_64(iParam0, iParam3, iParam4, -1))
			{
				return 1;
			}
			else if (func_63(iParam0, iParam3, iParam4, -1))
			{
				return 1;
			}
			else if (func_62(iParam0, iParam3, iParam4, -1))
			{
				if ((iParam0 == joaat("player_one") && iParam2 == 9) && iParam1 == 8)
				{
				}
				else
				{
					return 1;
				}
			}
		}
		else if (func_64(iParam0, iParam3, iParam4, -1))
		{
			if (func_63(iParam0, iParam1, iParam2, -1))
			{
				return 1;
			}
			else if (func_62(iParam0, iParam1, iParam2, -1))
			{
				if ((iParam0 == joaat("player_one") && iParam4 == 9) && iParam3 == 8)
				{
				}
				else
				{
					return 1;
				}
			}
		}
		switch (iParam1)
		{
			case 3:
				switch (iParam3)
				{
					case 4:
						if (!func_61(iParam0, iParam2, iParam4))
						{
							return 1;
						}
						if (!func_60(iParam0, iParam2, iParam4))
						{
							return 1;
						}
						if (func_59(iParam0, 4, iParam4))
						{
							if (!func_59(iParam0, 3, iParam2))
							{
								return 1;
							}
						}
						break;
					
					case 8:
						if (!func_58(iParam0, iParam4, -99, iParam2, &uVar0))
						{
							return 1;
						}
						if (!func_57(iParam0, iParam2, iParam4, -99))
						{
							return 1;
						}
						break;
					
					case 11:
						if (!func_53(iParam0, iParam2, iParam4))
						{
							return 1;
						}
						break;
				}
				break;
			
			case 4:
				switch (iParam3)
				{
					case 3:
						if (!func_61(iParam0, iParam4, iParam2))
						{
							return 1;
						}
						if (!func_60(iParam0, iParam4, iParam2))
						{
							return 1;
						}
						if (func_59(iParam0, 4, iParam2))
						{
							if (!func_59(iParam0, 3, iParam4))
							{
								return 1;
							}
						}
						break;
					
					case 6:
						if (!func_49(iParam0, iParam2, iParam4))
						{
							return 1;
						}
						break;
				}
				break;
			
			case 8:
				switch (iParam3)
				{
					case 3:
						if (!func_58(iParam0, iParam2, -99, iParam4, &uVar0))
						{
							return 1;
						}
						if (!func_57(iParam0, iParam4, iParam2, -99))
						{
							return 1;
						}
						break;
					
					case 11:
						if (!func_58(iParam0, iParam2, iParam4, -99, &uVar0))
						{
							return 1;
						}
						if (!func_57(iParam0, -99, iParam2, iParam4))
						{
							return 1;
						}
						break;
				}
				break;
			
			case 6:
				if (iParam3 == 4)
				{
					if (!func_49(iParam0, iParam4, iParam2))
					{
						return 1;
					}
				}
				break;
			
			case 11:
				switch (iParam3)
				{
					case 3:
						if (!func_53(iParam0, iParam4, iParam2))
						{
							return 1;
						}
						break;
					
					case 8:
						if (!func_58(iParam0, iParam4, iParam2, -99, &uVar0))
						{
							return 1;
						}
						if (!func_57(iParam0, -99, iParam4, iParam2))
						{
							return 1;
						}
						break;
				}
				break;
			}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	iVar2 = -1;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam2 == 6 || iParam2 == 7)
			{
				if (!func_52(iParam0, iParam1, &iVar0))
				{
					return 0;
				}
			}
			else if (func_52(iParam0, iParam1, &iVar0))
			{
				return 0;
			}
			break;
		
		case joaat("player_one"):
			if (iParam2 == 17)
			{
				if (!func_52(iParam0, iParam1, &iVar0))
				{
					return 0;
				}
			}
			else if (func_52(iParam0, iParam1, &iVar0))
			{
				return 0;
			}
			else if (iParam1 >= 53 && iParam1 <= 68)
			{
				if (((((((((iParam2 >= 0 && iParam2 <= 11) || (iParam2 >= 36 && iParam2 <= 51)) || (iParam2 >= 52 && iParam2 <= 63)) || (iParam2 >= 65 && iParam2 <= 72)) || (iParam2 >= 25 && iParam2 <= 33)) || (iParam2 >= 74 && iParam2 <= 85)) || (iParam2 >= 86 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 117)) || (iParam2 >= 118 && iParam2 <= 133))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (((((iParam2 >= 25 && iParam2 <= 33) || (iParam2 >= 74 && iParam2 <= 85)) || (iParam2 >= 86 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 117)) || (iParam2 >= 118 && iParam2 <= 133))
			{
				if (((iParam1 >= 0 && iParam1 <= 3) || (iParam1 >= 97 && iParam1 <= 110)) || (iParam1 >= 111 && iParam1 <= 116))
				{
					return 0;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam2 == 8 || iParam2 == 34)
			{
				if (!func_52(iParam0, iParam1, &iVar0))
				{
					return 0;
				}
			}
			else if (func_52(iParam0, iParam1, &iVar0))
			{
				return 0;
			}
			else if (iParam2 == 28 || iParam2 == 12)
			{
				if ((iParam1 >= 62 && iParam1 <= 70) || iParam1 == 92)
				{
					return 0;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			iVar1 = func_51(iParam0, iParam1, 4, 3);
			iVar2 = func_50(iVar1);
			iVar3 = func_51(iParam0, iParam2, 6, 3);
			iVar4 = func_50(iVar3);
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1137160120, 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -2005216901, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -2005216901, 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1137160120, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256)
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_3"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("LOW_DRAW_1"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_5"), 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ARENA_DRAW_7"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ARENA_DRAW_7"), 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_5"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -826135203, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -826135203, 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("MORPH_SUIT"), 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MORPH_SUIT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MORPH_SUIT"), 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("MORPH_SUIT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if ((((((iParam2 >= 96 && iParam2 <= 175) || iVar4 == 6) || iVar4 == 7) || iVar4 == 8) || iVar4 == 9) || iVar4 == 10)
			{
				if (iParam1 >= 256)
				{
					if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_5"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_3"), 0))
			{
				if (((((((((((((((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 224 && iParam2 <= 239)) || (iParam2 >= 240 && iParam2 <= 255)) || iVar4 == 0) || iVar4 == 4) || iVar4 == 12) || iVar4 == 14) || iVar4 == 15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("LOW_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("COWBOY_BOOTS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_2"), 0)) || iVar3 == joaat("DLC_MP_VAL_M_FEET1_0")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_4"), 0))
				{
					return 0;
				}
			}
			if ((iParam1 >= 176 && iParam1 <= 191) || iVar2 == 11)
			{
				if ((iParam2 >= 240 && iParam2 <= 255) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("LOW_DRAW_1"), 0))
				{
					return 0;
				}
			}
			else if ((iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("TUX_PANTS"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SKINNY"), 0))
			{
				if ((((iParam2 >= 160 && iParam2 <= 175) || (iParam2 >= 176 && iParam2 <= 191)) || iVar4 == 10) || iVar4 == 11)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SKINNY"), 0))
			{
				if ((((((iParam2 >= 96 && iParam2 <= 175) || iVar4 == 6) || iVar4 == 7) || iVar4 == 8) || iVar4 == 9) || iVar4 == 10)
				{
					return 0;
				}
			}
			else if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("COMBAT_GEAR"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HEIST_GEAR"), 0))
			{
				if ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_4"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SILK_PYJAMAS"), 0))
			{
				if ((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, 2072041516, 0) || (iParam2 >= 48 && iParam2 <= 63)) || (iParam2 >= 80 && iParam2 <= 95)) || iVar4 == 3) || iVar4 == 5) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_0")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_1")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_2")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_3")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_4")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_5")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_6")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_7")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_8")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_9")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_10")) || iVar3 == joaat("DLC_MP_BEACH_M_FEET0_11"))
				{
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			iVar3 = func_51(iParam0, iParam2, 6, 4);
			iVar4 = func_50(iVar3);
			iVar1 = func_51(iParam0, iParam1, 4, 4);
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1137160120, 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -2005216901, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -2005216901, 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1137160120, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -826135203, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -826135203, 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("MORPH_SUIT"), 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MORPH_SUIT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MORPH_SUIT"), 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("MORPH_SUIT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if ((iParam2 >= 128 && iParam2 <= 143) || iVar4 == 8)
			{
				if (iParam1 >= 256)
				{
					if (((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("IE_DRAW_5"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_5"), 0))
			{
				if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ARENA_DRAW_7"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ARENA_DRAW_7"), 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_5"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STOCKINGS"), 0))
			{
				if (((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 144 && iParam2 <= 159)) || iVar4 == 7) || iVar4 == 8) || iVar4 == 9) || iVar4 == 12)
				{
					return 1;
				}
				else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("STOCKINGS"), 0))
				{
					switch (iVar3)
					{
						case joaat("DLC_MP_VAL_F_FEET0_0"):
							return iVar1 == joaat("DLC_MP_VAL_F_LEGS1_0");
							break;
						
						case joaat("DLC_MP_VAL_F_FEET0_1"):
							return iVar1 == joaat("DLC_MP_VAL_F_LEGS1_1");
							break;
						
						case joaat("DLC_MP_VAL_F_FEET0_2"):
							return iVar1 == joaat("DLC_MP_VAL_F_LEGS1_2");
							break;
						
						case 1922134907:
							return iVar1 == 411566229;
							break;
						
						case -305894945:
							return iVar1 == 804925305;
							break;
						
						case -6812278:
							return iVar1 == -183158352;
							break;
						
						case 150806612:
							return iVar1 == 172385298;
							break;
						
						case 455853233:
							return iVar1 == 1656591619;
							break;
						
						case -1228342295:
							return iVar1 == 1897083310;
							break;
						
						case -987588452:
							return iVar1 == 1042467786;
							break;
						
						case -768232766:
							return iVar1 == 1401943716;
							break;
						
						case -469215641:
							return iVar1 == -1894879840;
							break;
						
						case -1922062017:
							return iVar1 == -1664022235;
							break;
						
						case 1820011724:
							return iVar1 == -1406864304;
							break;
						
						case 1512998963:
							return iVar1 == 169881665;
							break;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("COMBAT_GEAR"), 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("APART_DRAW_2"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if ((iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HEIST_GEAR"), 0)) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("APART_DRAW_2"), 0)))
			{
				if (((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SILK_PYJAMAS"), 0))
			{
				if ((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, 2072041516, 0) || (iParam2 >= 80 && iParam2 <= 95)) || iVar4 == 5) || iVar3 == joaat("DLC_MP_BEACH_F_FEET000")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET001")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET002")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET003")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET004")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET005")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET006")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET007")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET008")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET009")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET010")) || iVar3 == joaat("DLC_MP_BEACH_F_FEET011"))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("LOW2_DRAW_0"), 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if ((iParam2 >= 144 && iParam2 <= 159) || iVar4 == 9)
			{
				if (((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 208 && iParam1 <= 223))
				{
					return 0;
				}
				if (iParam1 >= 256)
				{
					iVar2 = func_50(iVar1);
					if (((((((((iVar2 == 0 || iVar2 == 1) || iVar2 == 2) || iVar2 == 3) || iVar2 == 4) || iVar2 == 6) || iVar2 == 11) || iVar2 == 13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("DUNGAREES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("GORKA_SUIT"), 0))
					{
						return 0;
					}
				}
			}
			else if ((iParam2 >= 32 && iParam2 <= 47) || iVar4 == 2)
			{
				if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191))
				{
					return 0;
				}
				if (iParam1 >= 256)
				{
					iVar2 = func_50(iVar1);
					if (((((iVar2 == 1 || iVar2 == 3) || iVar2 == 6) || iVar2 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("DUNGAREES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("LOW2_DRAW_0"), 0))
					{
						return 0;
					}
				}
			}
			else if ((iParam2 >= 112 && iParam2 <= 127) || iVar4 == 7)
			{
				if (iParam1 >= 0 && iParam1 <= 15)
				{
					return 0;
				}
			}
			else if ((iParam2 >= 224 && iParam2 <= 239) || iVar4 == 14)
			{
				if (iParam1 >= 0 && iParam1 <= 15)
				{
					return 0;
				}
				if (iParam1 >= 256)
				{
					iVar2 = func_50(iVar1);
					if (iVar2 == 0)
					{
						return 0;
					}
					if (iVar2 == 13)
					{
						return 0;
					}
				}
			}
			else if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_51(iParam0, iParam2, 6, 4), joaat("STOCKINGS"), 0))
			{
				if (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("STOCKINGS"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if ((iParam2 >= 176 && iParam2 <= 191) || iVar4 == 11)
			{
				if (iParam1 >= 96 && iParam1 <= 111)
				{
					return 0;
				}
				if (iParam1 >= 256)
				{
					iVar2 = func_50(iVar1);
					if ((((iVar2 == 6 || iVar1 == joaat("DLC_MP_LOW2_F_LEGS_0_0")) || iVar1 == joaat("DLC_MP_LOW2_F_LEGS_0_1")) || iVar1 == joaat("DLC_MP_LOW2_F_LEGS_0_2")) || iVar1 == joaat("DLC_MP_LOW2_F_LEGS_0_3"))
					{
						return 0;
					}
				}
			}
			else if ((iParam2 >= 192 && iParam2 <= 207) || iVar4 == 12)
			{
				if (((((iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("LOW_DRAW_0"), 0)) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("LOW2_DRAW_0"), 0))) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("GUN_DRAW_0"), 0))) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("GUN_DRAW_1"), 0))) || (iParam1 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("GORKA_SUIT"), 0)))
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_40(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_39(iParam0, func_33(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77791.f_26[iParam2] && iParam1 == Global_77791[iParam2]) && Global_77791.f_13[iParam2] != 0)
		{
			return Global_77791.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_33(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_77791.f_13[iParam2] = Var19.f_1;
		Global_77791[iParam2] = iParam1;
		Global_77791.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_52(int iParam0, int iParam1, int iParam2)
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

int func_53(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 >= 44 && iParam1 <= 59)
			{
				if (iParam2 < 2 || iParam2 > 7)
				{
					if (iParam2 != 44)
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 135 && iParam1 <= 150)
			{
				if (((iParam2 >= 8 && iParam2 <= 17) || (iParam2 >= 18 && iParam2 <= 27)) || (iParam2 >= 28 && iParam2 <= 43))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 != 0)
			{
				return 0;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 209 && iParam1 <= 222)
			{
				if (iParam2 >= 47 && iParam2 <= 62)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 243 && iParam1 <= 258)
			{
				if (iParam2 == func_54(iParam0, iParam1, iParam2, 1) || iParam2 == func_54(iParam0, iParam1, iParam2, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
			{
				if (iParam2 >= 9 && iParam2 <= 24)
				{
				}
				else if (iParam2 >= 25 && iParam2 <= 40)
				{
				}
				else if (iParam2 == 41)
				{
				}
				else if (iParam2 == 42)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam1 >= 41 && iParam1 <= 56)
			{
				if (iParam2 != 45)
				{
					return 0;
				}
			}
			else if (iParam1 >= 223 && iParam1 <= 226)
			{
				if (iParam2 != 44)
				{
					return 0;
				}
			}
			else if (iParam2 != 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_55(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_55(iParam0, 11, 25, 40);
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

int func_55(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_56(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_56(int iParam0, int iParam1, int iParam2)
{
	Global_77669[1 /*14*/] = { func_75(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_77669[1 /*14*/].f_6, 2);
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam2 == 10 || iParam2 == 16)
			{
				if (iParam1 != -99)
				{
					if (((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 38 && iParam1 <= 43)) || (iParam1 >= 113 && iParam1 <= 128)) || (iParam1 >= 129 && iParam1 <= 134)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 151 && iParam1 <= 160)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176)) || (iParam1 >= 177 && iParam1 <= 180))
					{
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam2 == 0)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((((((iParam1 >= 57 && iParam1 <= 72) || (iParam1 >= 73 && iParam1 <= 88)) || (iParam1 >= 91 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 122)) || (iParam1 >= 123 && iParam1 <= 138)) || (iParam1 >= 139 && iParam1 <= 146)) || iParam1 == 159) || (iParam1 >= 160 && iParam1 <= 175)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 209 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 226)) || (iParam1 >= 227 && iParam1 <= 242)) || (iParam1 >= 243 && iParam1 <= 258)) || (iParam1 >= 261 && iParam1 <= 266)) || (iParam1 >= 267 && iParam1 <= 282)) || (iParam1 >= 296 && iParam1 <= 308))
					{
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 != 0)
					{
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam2 == 0 || iParam2 == 1)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((iParam1 >= 27 && iParam1 <= 42) || (iParam1 >= 79 && iParam1 <= 94)) || (iParam1 >= 98 && iParam1 <= 103)) || (iParam1 == 136 && iParam1 <= 143)) || (iParam1 >= 144 && iParam1 <= 154)) || (iParam1 >= 156 && iParam1 <= 161)) || (iParam1 >= 178 && iParam1 <= 189)) || (iParam1 >= 190 && iParam1 <= 199)) || (iParam1 >= 200 && iParam1 <= 206)) || (iParam1 >= 207 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 232)) || (iParam1 >= 233 && iParam1 <= 240))
					{
						return 0;
					}
				}
			}
			break;
	}
	return 1;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_59(int iParam0, int iParam1, int iParam2)
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

int func_60(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 0 && iParam2 <= 15)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				if (iVar1 == 1)
				{
					if (((iParam1 >= 85 && iParam1 <= 90) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 92 && iParam1 <= 96))
					{
						return 1;
					}
				}
				return 0;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 >= 190 && iParam1 <= 199)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 71 && iParam2 <= 80)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				return 0;
			}
			if (iParam1 >= 71 && iParam1 <= 75)
			{
				if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 92)
			{
				if (iParam1 == 241 || (iParam1 >= 200 && iParam1 <= 206))
				{
				}
				else
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_61(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				if (((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 77 && iParam1 <= 84)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176))
				{
					return 0;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 192 && iParam1 <= 207)
			{
				if (((((iParam2 >= 40 && iParam2 <= 51) || iParam2 == 52) || (iParam2 >= 72 && iParam2 <= 77)) || (iParam2 >= 88 && iParam2 <= 96)) || (iParam2 >= 97 && iParam2 <= 110))
				{
					return 0;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 96)
			{
				if ((iParam2 >= 62 && iParam2 <= 70) || iParam2 == 92)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_51(iParam0, iParam2, 14, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_51(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_51(iParam0, iParam2, 1, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_51(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_51(iParam0, iParam2, 14, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_51(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_51(iParam0, iParam2, 1, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_51(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_51(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_51(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_51(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
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
						iParam3 = func_51(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
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
		uVar0 = { func_67(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_66(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_63(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_64(iParam0, iParam2, iParam3, -1))
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
		else if (func_62(iParam0, iParam2, iParam3, -1))
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
		if (func_63(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_64(iParam0, iParam2, iParam3, -1))
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
		else if (func_62(iParam0, iParam2, iParam3, -1))
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
		if (func_63(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_64(iParam0, iParam2, iParam3, -1))
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
		else if (func_62(iParam0, iParam2, iParam3, -1))
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

int func_66(int iParam0, int iParam1, int iParam2)
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

struct<10> func_67(int iParam0, int iParam1)
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
					func_69(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_69(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_69(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_69(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_69(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_69(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_69(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_69(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_69(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_69(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_69(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_68(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_69(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_69(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_69(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_69(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_69(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_69(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_69(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_69(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_69(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_69(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_68(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_69(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_69(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_69(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_69(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_69(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_69(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_69(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_69(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_69(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_69(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_68(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_69(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_69(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_69(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_69(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_69(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_69(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_69(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_69(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_69(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_69(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_69(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_69(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_69(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_69(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_69(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_69(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_69(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_69(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_69(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_69(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_69(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_69(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_69(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_69(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_69(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_69(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_68(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_69(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_69(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_69(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_69(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_69(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_69(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_69(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_69(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_69(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_69(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_69(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_69(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_69(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_69(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_69(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_69(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_69(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_69(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_69(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_69(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_69(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_69(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_69(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_69(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_69(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_68(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
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
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_38(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_74(iParam0, iParam1, iVar0))
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
				if (func_74(iParam0, iParam1, iVar1))
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
				return func_71(iParam0, iParam2);
			}
		}
		else
		{
			return func_31(iParam0, iParam1);
		}
	}
	return -99;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_46(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_72(iParam0, iVar0, iVar1, iParam1);
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_46(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_38(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_38(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_73(iParam0, iParam3));
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
	return func_46(iParam3);
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_77669[1 /*14*/] = { func_75(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_77669[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_36(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_74(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_67(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_74(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_77669[2 /*14*/] = { func_75(iVar0, 14, iVar4, -1) };
									if (Global_77669[2 /*14*/].f_12 == iVar3)
									{
										if (func_74(iParam0, 14, iVar4))
										{
											if (!func_65(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_77669[2 /*14*/])))
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
						iVar1 = func_31(iParam0, iVar2);
						Global_77669[2 /*14*/] = { func_75(iVar0, iVar2, iVar1, -1) };
						if (!func_65(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_77669[2 /*14*/])))
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
		uVar33 = { func_67(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_74(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_77669[1 /*14*/].f_12) == Global_77669[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_77669[1 /*14*/].f_12) == Global_77669[1 /*14*/].f_4 || Global_77669[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_77669[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_33(iParam1)) && Global_77669[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

struct<14> func_75(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	func_144();
	if (iParam0 == joaat("player_zero"))
	{
		func_126(bParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_107(bParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_76(bParam1, iParam2);
	}
	return Global_77669[0 /*14*/];
}

void func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_106(iParam1);
			break;
		
		case 2:
			func_105(iParam1);
			break;
		
		case 3:
			func_102(iParam1);
			break;
		
		case 4:
			func_101(iParam1);
			break;
		
		case 6:
			func_100(iParam1);
			break;
		
		case 5:
			func_99(iParam1);
			break;
		
		case 8:
			func_98(iParam1);
			break;
		
		case 9:
			func_97(iParam1);
			break;
		
		case 10:
			func_96(iParam1);
			break;
		
		case 1:
			func_95(iParam1);
			break;
		
		case 7:
			func_94(iParam1);
			break;
		
		case 11:
			func_93(iParam1);
			break;
		
		case 12:
			func_92(iParam1);
			break;
		
		case 13:
			func_91(iParam1);
			break;
		
		case 14:
			func_77(iParam1);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_78(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
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
	uParam0->f_12 = func_89(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_88(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_86(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_86(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_86(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_86(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_86(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_86(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_85(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_85(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_85(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_88(14))
			{
				return;
			}
			uVar0 = func_81(func_84(iParam1, uParam0->f_2), Global_77666, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			uVar0 = func_81(func_80(iParam1, uParam0->f_2), Global_77666, 0);
			if (BitTest(uVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_79(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_81(iVar1, Global_77666, 0);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_79(int iParam0, int iParam1, var uParam2)
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

int func_80(int iParam0, int iParam1)
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

int func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_82(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_83();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_83()
{
	return Global_1574915;
}

int func_84(int iParam0, int iParam1)
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

int func_85(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (bParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (bParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (bParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (bParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (bParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (bParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (bParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (bParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (bParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (bParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (bParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (bParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (bParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (bParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (bParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_112922.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_77666;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_87(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_81(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_87(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12581;
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
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
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
	return *uParam2 != 12581;
}

bool func_88(int iParam0)
{
	return Global_42602 == iParam0;
}

int func_89(int iParam0)
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

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_77669[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar18 > iVar17)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_78(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_78(&(Global_77669[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar38 > iVar37)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2883588 = Var19.f_1;
				Global_2883589 = Var19.f_0;
				func_78(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var39);
		if (iParam3 != -1 && Global_77839)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
			Global_2883588 = Var39.f_1;
			Global_2883589 = Var39.f_0;
			func_78(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_33(iParam0));
			if (iVar57 > iVar56)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
				Global_2883588 = Var39.f_1;
				Global_2883589 = Var39.f_0;
				func_78(&(Global_77669[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_91(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_92(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_93(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_96(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_90(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_97(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_90(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_98(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_99(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_100(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_90(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_101(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_90(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_102(int iParam0)
{
	if (iParam0 < 136)
	{
		func_104(iParam0);
	}
	else
	{
		func_103(iParam0);
	}
	if (Global_77669[0 /*14*/].f_2 == -1)
	{
		func_90(3, iParam0, 242, -1);
	}
}

void func_103(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_104(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_77669[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_90(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_125(iParam1);
			break;
		
		case 2:
			func_124(iParam1);
			break;
		
		case 3:
			func_120(iParam1);
			break;
		
		case 4:
			func_119(iParam1);
			break;
		
		case 6:
			func_118(iParam1);
			break;
		
		case 5:
			func_117(iParam1);
			break;
		
		case 8:
			func_116(iParam1);
			break;
		
		case 9:
			func_115(iParam1);
			break;
		
		case 10:
			func_114(iParam1);
			break;
		
		case 1:
			func_113(iParam1);
			break;
		
		case 7:
			func_112(iParam1);
			break;
		
		case 11:
			func_111(iParam1);
			break;
		
		case 12:
			func_110(iParam1);
			break;
		
		case 13:
			func_109(iParam1);
			break;
		
		case 14:
			func_108(iParam1);
			break;
	}
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_109(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_110(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_111(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_90(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_112(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_113(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_115(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_116(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_117(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_118(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_90(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_119(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_90(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_120(int iParam0)
{
	if (iParam0 < 107)
	{
		func_123(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_122(iParam0);
	}
	else
	{
		func_121(iParam0);
	}
	if (Global_77669[0 /*14*/].f_2 == -1)
	{
		func_90(3, iParam0, 318, -1);
	}
}

void func_121(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_77669[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_90(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_143(iParam1);
			break;
		
		case 2:
			func_142(iParam1);
			break;
		
		case 3:
			func_139(iParam1);
			break;
		
		case 4:
			func_138(iParam1);
			break;
		
		case 6:
			func_137(iParam1);
			break;
		
		case 5:
			func_136(iParam1);
			break;
		
		case 8:
			func_135(iParam1);
			break;
		
		case 9:
			func_134(iParam1);
			break;
		
		case 10:
			func_133(iParam1);
			break;
		
		case 1:
			func_132(iParam1);
			break;
		
		case 7:
			func_131(iParam1);
			break;
		
		case 11:
			func_130(iParam1);
			break;
		
		case 12:
			func_129(iParam1);
			break;
		
		case 13:
			func_128(iParam1);
			break;
		
		case 14:
			func_127(iParam1);
			break;
	}
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_90(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_90(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_90(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_90(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
{
	if (iParam0 < 60)
	{
		func_141(iParam0);
	}
	else
	{
		func_140(iParam0);
	}
	if (Global_77669[0 /*14*/].f_2 == -1)
	{
		func_90(3, iParam0, 181, -1);
	}
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_90(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_77669[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_90(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_78(&(Global_77669[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144()
{
	Global_77669[0 /*14*/].f_1 = -1;
	Global_77669[0 /*14*/].f_2 = -1;
	Global_77669[0 /*14*/].f_5 = -1;
	Global_77669[0 /*14*/].f_3 = -1;
	Global_77669[0 /*14*/].f_4 = -1;
	Global_77669[0 /*14*/].f_7 = 0;
	Global_77669[0 /*14*/].f_6 = 0;
	Global_77669[0 /*14*/].f_13 = -1;
	Global_77669[0 /*14*/].f_12 = 0;
	Global_77669[0 /*14*/] = 0;
	StringCopy(&(Global_77669[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 3)
		{
			if (*iParam2 >= 0 && *iParam2 <= 1)
			{
				if (Global_112922.f_9085.f_99.f_58[120])
				{
					*iParam2 = 1;
				}
				else
				{
					*iParam2 = 0;
				}
			}
		}
		else if (iParam1 == 4)
		{
			if (*iParam2 >= 0 && *iParam2 <= 1)
			{
				if (Global_112922.f_9085.f_99.f_58[120])
				{
					*iParam2 = 1;
				}
				else
				{
					*iParam2 = 0;
				}
			}
		}
	}
}

int func_146(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	iVar16 = 0;
	iVar17 = 20;
	iVar18 = 1;
	while (iVar16 < iVar17 && iVar0 == -1)
	{
		iVar18 = 1;
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam1->f_252);
		Var2 = { func_75(iParam2, iParam0, (*uParam1)[iVar1], -1) };
		if (BitTest(Var2.f_6, 3) && iParam0 != 12)
		{
		}
		else
		{
			if (iParam4 == 0)
			{
				if (func_148(iParam2, iParam0, (*uParam1)[iVar1]))
				{
					iVar18 = 0;
				}
			}
			if (iVar18 == 1)
			{
				if (iParam5 == 0)
				{
					if (iParam2 == joaat("player_zero"))
					{
						if (func_147((*uParam1)[iVar1], iParam0))
						{
							iVar18 = 0;
						}
					}
				}
			}
			if (iVar18 == 1)
			{
				if (iParam3 == 1)
				{
					if (BitTest(Var2.f_6, 1) && BitTest(Var2.f_6, 2))
					{
						iVar0 = iVar1;
					}
				}
				else
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar16++;
	}
	if (iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 <= (uParam1->f_252 - 1))
		{
			iVar18 = 1;
			Var2 = { func_75(iParam2, iParam0, (*uParam1)[iVar1], -1) };
			if (BitTest(Var2.f_6, 3) && iParam0 != 12)
			{
			}
			else
			{
				if (iParam4 == 0)
				{
					if (func_148(iParam2, iParam0, (*uParam1)[iVar1]))
					{
						iVar18 = 0;
					}
				}
				if (iVar18 == 1)
				{
					if (iParam5 == 0)
					{
						if (iParam2 == joaat("player_zero"))
						{
							if (func_147((*uParam1)[iVar1], iParam0))
							{
								iVar18 = 0;
							}
						}
					}
				}
				if (iVar18 == 1)
				{
					if (iParam3 == 1)
					{
						if (BitTest(Var2.f_6, 1) && BitTest(Var2.f_6, 2))
						{
							iVar0 = iVar1;
							iVar1 = uParam1->f_252 + 1;
						}
					}
					else
					{
						iVar0 = iVar1;
						iVar1 = uParam1->f_252 + 1;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_147(int iParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (iParam0 >= 70 && iParam0 <= 75)
		{
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam0 >= 41 && iParam0 <= 45)
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	iVar16 = 183586;
	func_191(uParam1);
	switch (iParam0)
	{
		case 12:
			if (iParam6 == 1)
			{
				iVar15 = 1;
			}
			else
			{
				iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			switch (iVar15)
			{
				case 0:
					func_171(&iVar16, uParam1, uParam2, 2);
					break;
				
				case 1:
					func_170(&iVar16, uParam1, uParam2, 10);
					break;
			}
			break;
		
		case 3:
			iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			switch (iVar15)
			{
				case 0:
					func_169(&iVar16, uParam1, uParam2, 36);
					break;
				
				case 1:
					func_168(&iVar16, uParam1, uParam2, 17);
					break;
				
				case 2:
					func_167(&iVar16, uParam1, uParam2, 28);
					break;
				
				case 3:
					func_166(&iVar16, uParam1, uParam2, 16);
					break;
				
				case 4:
					func_165(&iVar16, uParam1, uParam2, 24);
					break;
				
				case 5:
					func_164(&iVar16, uParam1, uParam2, 32);
					break;
				
				case 6:
					func_163(&iVar16, uParam1, uParam2, 20);
					break;
				
				case 7:
					func_162(&iVar16, uParam1, uParam2, 34);
					break;
				
				case 8:
					func_161(&iVar16, uParam1, uParam2, 37);
					break;
				
				case 9:
					func_160(&iVar16, uParam1, uParam2, 22);
					break;
			}
			break;
		
		case 4:
			iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar15)
			{
				case 0:
					func_159(&iVar16, uParam1, uParam2, 19);
					break;
				
				case 1:
					func_158(&iVar16, uParam1, uParam2, 29);
					break;
				
				case 2:
					func_156(&iVar16, uParam1, uParam2, 25);
					break;
			}
			break;
		
		case 6:
			iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar15)
			{
				case 0:
					func_155(&iVar16, uParam1, uParam2, 21);
					break;
				
				case 1:
					func_150(&iVar16, uParam1, uParam2, 26);
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (uParam1->f_252 > 0)
	{
		iVar14 = 0;
		while (iVar14 <= (uParam1->f_252 - 1))
		{
			iVar17 = 1;
			Var0 = { func_75(iParam3, iParam0, (*uParam1)[iVar14], -1) };
			if (!BitTest(Var0.f_6, 3))
			{
				if (iParam7 == 0)
				{
					if (func_148(iParam3, iParam0, (*uParam1)[iVar14]))
					{
						iVar17 = 0;
					}
				}
				if (iVar17 == 1)
				{
					if (iParam8 == 0)
					{
						if (iParam3 == joaat("player_zero"))
						{
							if (func_147((*uParam1)[iVar14], iParam0))
							{
								iVar17 = 0;
							}
						}
					}
				}
				if (iVar17 == 1)
				{
					if (iParam4 == 1)
					{
						if (BitTest(Var0.f_6, 1) && BitTest(Var0.f_6, 2))
						{
							*uParam5 = iVar14;
							return 1;
						}
					}
					else
					{
						*uParam5 = iVar14;
						return 1;
					}
				}
			}
			iVar14++;
		}
	}
	return 0;
}

void func_150(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 26;
	iVar1 = func_31(PLAYER::PLAYER_PED_ID(), 4);
	switch (func_151())
	{
		case 0:
			break;
		
		case 1:
			if (!func_52(joaat("player_one"), iVar1, &iVar2))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(25);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(26);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(27);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(28);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(29);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(30);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(31);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(32);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(33);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(74);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(75);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(76);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(77);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(78);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(79);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(80);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(81);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(82);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(83);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(84);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(85);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(86);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(87);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(88);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(89);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(90);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(91);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(92);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(93);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(94);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(95);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(96);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(97);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(98);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(99);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(100);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(101);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(102);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(103);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(104);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(105);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(106);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(107);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(108);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(109);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(110);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(111);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(112);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(113);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(114);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(115);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(116);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(117);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(118);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(119);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(120);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(121);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(122);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(123);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(124);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(125);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(126);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(127);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(128);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(129);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(130);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(131);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(132);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(133);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 2:
			if (!func_52(joaat("player_two"), iVar1, &iVar2))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(16);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(17);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(18);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(19);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(20);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(21);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(22);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(23);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(24);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(25);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(26);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(27);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(36);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(37);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(38);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(39);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(40);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(41);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(42);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(43);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(44);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(45);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(46);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(47);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(48);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(49);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(50);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(51);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(52);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(53);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(54);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(55);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(56);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(57);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(58);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(59);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(60);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(61);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(62);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(63);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(64);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(65);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(66);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(67);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(68);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(69);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(70);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(71);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(72);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(73);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(74);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(75);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(76);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(77);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(78);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(79);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(80);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(81);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(82);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(83);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
	}
}

bool func_151()
{
	func_152();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_152()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_192(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_154(PLAYER::PLAYER_PED_ID());
			if (func_153(iVar0) && (!func_88(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_153(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_153(bool bParam0)
{
	return bParam0 < 3;
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_192(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_155(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(PLAYER::PLAYER_PED_ID(), 4);
	switch (func_151())
	{
		case 0:
			if (!func_52(joaat("player_zero"), iVar0, &iVar1))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(0);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(5);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(1);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(2);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(3);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(4);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(18);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(20);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(21);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(22);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(23);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(24);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(25);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(26);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(27);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(28);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(29);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(30);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(31);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(32);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(33);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(34);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(35);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(36);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(37);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(39);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(40);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(41);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(42);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(43);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(44);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(45);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(46);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(47);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(48);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(49);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(50);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(51);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(52);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(53);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(54);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(55);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(56);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(57);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(58);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(59);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(60);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(61);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(62);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(63);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(64);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(65);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(66);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(67);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(68);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(69);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(70);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(71);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(72);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(73);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(74);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(75);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(76);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(77);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(78);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(79);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(80);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(81);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(82);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(83);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(84);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(85);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(86);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(87);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(88);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(89);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(90);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(91);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(92);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(93);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(94);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(95);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(96);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(97);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(98);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 1:
			if (!func_52(joaat("player_one"), iVar0, &iVar1))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(20);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(19);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(18);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(21);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(23);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(22);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(12);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(0);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(1);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(2);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(3);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(4);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(5);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(6);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(7);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(8);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(9);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(10);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(11);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(42);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(38);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(36);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(46);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(44);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(39);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(43);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(49);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(41);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(51);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(45);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(40);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(37);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(50);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(47);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(48);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(52);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(53);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(54);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(55);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(56);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(57);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(58);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(59);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(60);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(61);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(62);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(63);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(67);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(65);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(68);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(66);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(69);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(70);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(71);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(72);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 2:
			if (!func_52(joaat("player_two"), iVar0, &iVar1))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(0);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(2);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(5);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(4);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(3);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(7);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(1);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(6);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(28);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(21);
				Stack.Push(12);
				Stack.Push(6);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
	}
}

void func_156(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 25;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(43);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(44);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(45);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(95);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(55);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(56);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(57);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(58);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(59);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(60);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(61);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(62);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(63);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(64);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(65);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(66);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(67);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(68);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(69);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(70);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(96);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(97);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(98);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(99);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(100);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(101);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(102);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(103);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(104);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(105);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(106);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(107);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(108);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(109);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(110);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(111);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(89);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(90);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(91);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(73);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(79);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(72);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(75);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(77);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(74);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(78);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(76);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(3);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(1);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(106);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(107);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(105);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(110);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(108);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(109);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(97);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(98);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(100);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(99);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(102);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(101);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(103);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(104);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(111);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(112);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(113);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(114);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(115);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(116);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(52);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(74);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(73);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(76);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(75);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(72);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(77);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(54);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(55);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(56);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(57);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(58);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(59);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(60);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(61);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(33);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(83);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(82);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(85);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(84);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(86);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(81);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(87);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(88);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(89);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(90);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

int func_157(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112922.f_9085.f_99.f_58[iParam0];
}

void func_158(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 29;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(3);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (Global_112922.f_9085.f_99.f_58[120])
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(1);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			else
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(0);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(4);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(5);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(6);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(7);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(8);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(9);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(10);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(11);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(12);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(13);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(14);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(15);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(59);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(60);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(57);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(55);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(53);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(58);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(61);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(54);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(56);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(62);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(63);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(64);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(65);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(66);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(67);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(68);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(71);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(72);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(73);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(74);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(75);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(76);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(77);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(78);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(79);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(80);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(69);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(67);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(70);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(65);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(64);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(62);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(63);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(68);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(66);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(92);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_159(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(84);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(85);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(86);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(87);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(82);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(81);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(83);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(88);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(47);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(48);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(49);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(50);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(51);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(52);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(53);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(54);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(23);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(24);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(25);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(26);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(27);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(28);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(29);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(30);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(24);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(25);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(29);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(30);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(26);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(27);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(28);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(79);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(80);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(81);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(82);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(83);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(84);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(85);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(86);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(87);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(90);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(89);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(92);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(91);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(96);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(88);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(94);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(95);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(93);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(33);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(34);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(35);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(36);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(37);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(38);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(14);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(15);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(16);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(17);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(18);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(19);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(20);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(21);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(40);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(41);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(42);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(43);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(44);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(45);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(46);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(47);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(48);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(49);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(50);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(51);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(2);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(1);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(3);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(35);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(36);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(37);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(38);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(39);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(40);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(41);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(42);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(44);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(47);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(51);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(46);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(52);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(48);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(45);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(43);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(50);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(49);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(53);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(29);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(28);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(18);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(26);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(27);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(22);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(21);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(25);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(24);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(19);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(23);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(19);
				Stack.Push(20);
				Stack.Push(4);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(32);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(19);
			Stack.Push(91);
			Stack.Push(4);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_160(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 22;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(33);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(34);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
}

void func_161(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 37;
	switch (func_151())
	{
		case 0:
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(247);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(243);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(244);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(246);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(248);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(245);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(249);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(250);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(251);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(252);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(253);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(254);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(255);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(256);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(257);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(258);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			break;
	}
}

void func_162(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 34;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(96);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(95);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(94);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(92);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(93);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(1);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(8);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(14);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(13);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(3);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(15);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(4);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(5);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(9);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(7);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(6);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(12);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(10);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(11);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(19);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(18);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(21);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(20);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(22);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(23);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(24);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(25);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(162);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(163);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(164);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(165);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(166);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(167);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(168);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(169);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(170);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(171);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(172);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(173);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(174);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(175);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(176);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(177);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_163(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 20;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(81);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(83);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(82);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(79);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(78);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(77);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(84);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(80);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(88);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(90);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(85);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(86);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(87);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(89);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(62);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(68);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(60);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(65);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(69);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(67);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(55);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(61);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(58);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(59);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(66);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(63);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(57);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(54);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(64);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(56);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_164(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 32;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(40);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(43);
			Stack.Push(10);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(21);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(22);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(23);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(24);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(25);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(27);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(28);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(30);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(31);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(32);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(24);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(25);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(27);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(28);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(30);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(31);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(32);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(33);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(34);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(35);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(147);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(148);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(149);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(150);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(151);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(152);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(153);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(154);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(155);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(156);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(157);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(158);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(285);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(288);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(287);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(289);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(295);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(294);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(292);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(284);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(290);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(291);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(286);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(293);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(283);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(4);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(1);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(3);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(5);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(6);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(7);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(8);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(9);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(10);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(11);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(12);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(13);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(14);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(15);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_165(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 24;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(97);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(98);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(99);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(100);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(101);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(102);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(103);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(104);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(105);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(106);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(107);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(108);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(109);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(110);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(111);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(112);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(161);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(162);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(163);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(164);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(165);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(166);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(167);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(168);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(178);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(180);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(179);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(177);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(81);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(159);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(79);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(73);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(80);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(78);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(87);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(84);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(76);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(88);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(83);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(75);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(86);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(82);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(85);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(77);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(74);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(57);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(66);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(59);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(69);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(64);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(58);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(72);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(68);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(67);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(63);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(70);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(62);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(71);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(60);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(65);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(61);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(197);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(204);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(192);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(193);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(203);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(194);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(196);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(205);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(202);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(201);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(199);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(200);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(206);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(195);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(207);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(198);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(106);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(117);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(110);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(104);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(105);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(116);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(108);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(118);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(107);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(114);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(111);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(113);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(115);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(119);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(109);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(112);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(130);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(124);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(135);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(127);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(129);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(120);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(128);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(122);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(125);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(126);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(133);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(121);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(131);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(123);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(132);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(134);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(184);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(186);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(178);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(182);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(188);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(189);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(180);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(185);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(179);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(187);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(181);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(183);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_166(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 16;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(118);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(114);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(125);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(119);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(122);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(127);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(121);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(113);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(123);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(117);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(115);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(116);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(124);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(126);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(128);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(120);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(135);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(128);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(129);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(131);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(138);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(133);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(130);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(123);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(132);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(124);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(125);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(127);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(126);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(134);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(136);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(137);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(272);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(268);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(279);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(273);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(276);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(281);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(275);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(277);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(271);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(269);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(270);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(278);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(280);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(267);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(282);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(274);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(84);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(81);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(92);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(79);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(85);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(89);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(94);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(88);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(90);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(86);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(83);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(82);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(91);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(93);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(80);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(87);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_167(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 28;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(135);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(136);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(137);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(138);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(139);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(140);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(141);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(142);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(143);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(144);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(145);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(146);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(147);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(148);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(149);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(150);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(3);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (Global_112922.f_9085.f_99.f_58[120])
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(1);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			else
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(0);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(4);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(5);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(6);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(7);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(8);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(9);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(10);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(11);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(12);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(13);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(14);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(15);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(177);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(191);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(178);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(183);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(176);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(190);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(188);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(184);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(185);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(189);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(181);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(180);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(182);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(187);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(179);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(186);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(190);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(191);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(192);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(193);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(194);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(195);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(196);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(197);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(198);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(199);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(205);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(204);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(202);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(200);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(201);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(203);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(206);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(229);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(230);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(224);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(223);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(226);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(231);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(228);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(232);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(227);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(225);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(233);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(234);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(235);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(236);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(237);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(238);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(239);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(240);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(241);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_168(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 17;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(129);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(130);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(131);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(132);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(133);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(134);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(175);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(176);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(143);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(140);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(146);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(145);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(139);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(142);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(144);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(141);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(117);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(111);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(109);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(113);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(110);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(119);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(112);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(114);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(115);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(122);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(116);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(108);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(121);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(120);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(118);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(107);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(174);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(160);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(175);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(172);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(168);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(163);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(164);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(173);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(171);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(161);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(162);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(169);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(166);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(167);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(165);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(170);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(223);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(224);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(225);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(226);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(99);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(103);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(101);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(98);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(102);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(100);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(141);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(140);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(143);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(138);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(137);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(136);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(139);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(142);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(154);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(144);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(145);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(151);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(150);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(155);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(146);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(149);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(152);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(153);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(147);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(148);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(34);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(30);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(35);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(28);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(40);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(33);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(32);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(27);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(31);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_169(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 36;
	switch (func_151())
	{
		case 0:
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(169);
				Stack.Push(3);
				Stack.Push(1);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(70);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(73);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(71);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(74);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(72);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(75);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(171);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(172);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(173);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(40);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(43);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(151);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(152);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(153);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(154);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(155);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(156);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(157);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(158);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(159);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(160);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(260);
				Stack.Push(3);
				Stack.Push(1);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(93);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(105);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(106);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(100);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(104);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(97);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(92);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(95);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(99);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(101);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(94);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(98);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(103);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(96);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(102);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(91);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(52);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(49);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(53);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(56);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(50);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(46);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(43);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(54);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(51);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(47);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(48);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(44);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(55);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(45);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(264);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(261);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(265);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(262);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(263);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(266);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(305);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(299);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(301);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(297);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(306);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(296);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(304);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(307);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(300);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(303);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(298);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(302);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(308);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(309);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(310);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(311);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(312);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(313);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(314);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(315);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(316);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(317);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(96);
				Stack.Push(3);
				Stack.Push(1);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(75);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(71);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(72);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(74);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(iVar0);
				Stack.Push(73);
				Stack.Push(3);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(76);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(77);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(78);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(159);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(156);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(160);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(157);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(158);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(161);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(217);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(218);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(213);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(216);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(207);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(222);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(221);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(220);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(219);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(210);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(208);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(212);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(215);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(211);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(209);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(214);
			Stack.Push(3);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_170(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 10;
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(0);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(40);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(41);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(42);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(43);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(44);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(45);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(46);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(47);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(28);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(24);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(22);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(27);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(31);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(30);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(23);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(33);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(25);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(32);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(34);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(35);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(24);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(25);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(26);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(27);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(28);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(29);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(30);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(31);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(32);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(33);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(34);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(35);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(36);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(37);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(38);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(39);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(iVar0);
			Stack.Push(40);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
	}
}

void func_171(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (func_151())
	{
		case 0:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(25);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(31);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(27);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(17);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(32);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(35);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(33);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(23);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(34);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(16);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(5);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(48);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(9);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(13);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(24);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(4);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(11);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(14);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(12);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(19);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(15);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(21);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(22);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(3);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(20);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(0));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(6);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(8);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(0));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(28);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			break;
		
		case 1:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(19);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(11);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(40);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(16);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(18);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(17);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(21);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(20);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(1);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(43);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(44);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(45);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(1));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(46);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(2);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(42);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(6);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(4);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(10);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(5);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(9);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(12);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(8);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(14);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(15);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(13);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(1));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(38);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
		
		case 2:
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(22);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(42);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(23);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(13);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(41);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(45);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(43);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(21);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(46);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(14);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(4);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_192(2));
			Stack.Push(iParam3);
			Stack.Push(2);
			Stack.Push(20);
			Stack.Push(12);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Call_Loc(*iParam0);
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(44);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(5);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(9);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(3);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(11);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(7);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(8);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(16);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(2);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(18);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(19);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(17);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			if (func_157(137))
			{
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(15);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
				Stack.Push(uParam1);
				Stack.Push(uParam2);
				Stack.Push(func_192(2));
				Stack.Push(iParam3);
				Stack.Push(2);
				Stack.Push(10);
				Stack.Push(12);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Call_Loc(*iParam0);
			}
			break;
	}
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10, var uParam11, var uParam12)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = !iParam10 == false;
	if ((iParam1 != func_174(iParam2) || iParam5 == -99) || uParam0->f_252 >= 124)
	{
		return;
	}
	Global_4531206[uParam0->f_252] = 0;
	bVar1 = true;
	if (func_173(iParam8))
	{
		bVar1 = true;
	}
	else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == MISC::GET_HASH_KEY("wardrobe_sp"))
	{
		Global_77669[1 /*14*/] = { func_75(iParam2, bParam6, iParam5, -1) };
		if (!BitTest(Global_77669[1 /*14*/].f_6, 6))
		{
			if (!BitTest(Global_77669[1 /*14*/].f_6, 2))
			{
				bVar1 = false;
			}
			else if (Global_97267 == 1 && !BitTest(Global_112922.f_2363.f_539.f_3816[0 /*166*/][bParam6 /*11*/][(iParam5 / 32)], (iParam5 % 32)))
			{
				bVar1 = false;
			}
		}
	}
	else
	{
		Global_77669[1 /*14*/] = { func_75(iParam2, bParam6, iParam5, -1) };
		if (!BitTest(Global_77669[1 /*14*/].f_6, 1))
		{
			bVar1 = false;
		}
	}
	if (iParam8 == 0)
	{
		if (!HUD::DOES_TEXT_LABEL_EXIST(&(Global_77669[1 /*14*/].f_8)))
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (iParam3 == iParam4)
		{
			(*uParam0)[uParam0->f_252] = iParam5;
			uParam0->f_126[uParam0->f_252] = bParam6;
			uParam0->f_253[uParam0->f_252] = iParam8;
			Global_4531080[uParam0->f_252] = (Global_77669[1 /*14*/].f_3 * 1000 + Global_77669[1 /*14*/].f_4);
			if (BitTest(Global_77669[1 /*14*/].f_6, 6))
			{
				Global_4531206[uParam0->f_252] = Global_2883588;
			}
			Global_4531458[uParam0->f_252] = bVar0;
			Global_4531584[uParam0->f_252] = iParam10;
			uParam0->f_252++;
		}
		if (!bParam7)
		{
			MISC::SET_BIT(&(uParam0->f_379[(iParam4 / 32)]), (iParam4 % 32));
			if (!BitTest(uParam0->f_390[(iParam4 / 32)], (iParam4 % 32)))
			{
				if ((BitTest(Global_77669[1 /*14*/].f_6, 1) && BitTest(Global_77669[1 /*14*/].f_6, 4)) && !func_173(iParam8))
				{
					MISC::SET_BIT(&(uParam0->f_390[(iParam4 / 32)]), (iParam4 % 32));
				}
			}
		}
	}
}

int func_173(int iParam0)
{
	if (((((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 26) || iParam0 == 29) || iParam0 == 27) || iParam0 == 28) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 34) || iParam0 == 33) || iParam0 == 35) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 39)
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 == joaat("player_zero"))
	{
		return 0;
	}
	if (iParam0 == joaat("player_one"))
	{
		return 1;
	}
	if (iParam0 == joaat("player_two"))
	{
		return 2;
	}
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		return 3;
	}
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		return 4;
	}
	return 5;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_77667++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_77669[1 /*14*/] = { func_75(iVar10, iParam1, iParam2, -1) };
		if (!func_190(iParam3))
		{
			Global_77667 = (Global_77667 - 1);
			return 0;
		}
		func_187(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_31(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_31(iParam0, 9);
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
			iVar7 = func_71(iParam0, 1);
			if (!func_63(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_71(iParam0, 0);
			if (!func_64(iVar10, 14, iVar8, -1) && !func_62(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_71(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_77712 };
		}
		else
		{
			uVar11 = { func_36(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_77669[1 /*14*/] = { func_75(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_77669[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_77729 };
						}
						else
						{
							uVar28 = { func_67(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_77669[1 /*14*/] = { func_75(iVar10, 14, uVar28[iVar1], -1) };
							func_185(iParam0, Global_77669[1 /*14*/].f_12, Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4);
							func_187(14);
							if (Global_77667 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_181(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							func_180(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_33(iVar0), Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_33(iVar0), Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4, iParam4);
						}
						func_187(iVar0);
						if (Global_77667 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_181(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77669[1 /*14*/] = { func_75(iVar10, iVar0, func_70(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_77669[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_179(iParam0, iVar10, &iVar4, 1))
							{
								func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_36(iVar10, 0) };
						func_175(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_75(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_65(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_175(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_75(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_65(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_175(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_75(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_65(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_175(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_75(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_65(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_175(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_75(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_65(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_175(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_67(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77669[1 /*14*/] = { func_75(iVar10, 14, uVar69[iVar1], -1) };
			func_185(iParam0, Global_77669[1 /*14*/].f_12, Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4);
			func_187(14);
			if (Global_77667 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_181(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_185(iParam0, Global_77669[1 /*14*/].f_12, Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4);
		func_187(iParam1);
		if (Global_77667 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_181(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_33(iParam1), Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_33(iParam1), Global_77669[1 /*14*/].f_3, Global_77669[1 /*14*/].f_4, iParam4);
		}
		if (Global_77667 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_181(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_178(iVar10, iParam1, iParam2);
		}
	}
	if (Global_77667 == 1)
	{
		if (func_179(iParam0, iVar10, &iVar4, 0))
		{
			func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_176(iParam0, iVar10, &iVar4))
		{
			func_175(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_77667 = (Global_77667 - 1);
	return 1;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_177(iParam1);
	if (Global_112922.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_74(iParam0, Global_112922.f_2363.f_539[iVar0 /*65*/].f_64, Global_112922.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_112922.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_112922.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_112922.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0)
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

void func_178(int iParam0, int iParam1, int iParam2)
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
	if (func_56(iParam0, 12, iVar0))
	{
		if (func_59(iParam0, iParam1, iParam2))
		{
			iVar1 = func_177(iParam0);
			if (iParam1 == 3)
			{
				Global_112922.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_112922.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_177(iParam1);
	if (Global_112922.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_74(iParam0, Global_112922.f_2363.f_539[iVar0 /*65*/].f_61, Global_112922.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_112922.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_112922.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_112922.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_177(iParam0);
		Global_112922.f_2363.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_112922.f_2363.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_31(iParam0, 1);
				iVar0 = func_184(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_31(iParam0, 2);
				iVar0 = func_184(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_180(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_183(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_52(iParam1, iParam3, &iVar0))
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
									if (!func_182(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_182(iParam0, 3, 135, 150))
									{
										iVar0 = func_55(iParam1, 3, 135, 150);
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
	}