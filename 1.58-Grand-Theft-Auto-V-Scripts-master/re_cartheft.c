#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	int iLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_136 = { 0, 0, 0 } ;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	Local_50 = { ScriptParam_151.f_1[0 /*3*/] };
	uLocal_51 = ScriptParam_151.f_17[0];
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_237();
	}
	func_236();
	if (iLocal_121 == 2)
	{
		if (func_235(34))
		{
			unk_0xAFBDF6A5E54114C1();
		}
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				if (Var0.f_2 > 23f || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					unk_0xAFBDF6A5E54114C1();
				}
			}
		}
	}
	if (func_194(Local_50, 17, iLocal_121, 0, 0))
	{
		func_191(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		wait(0);
		func_190();
		func_189(uLocal_59, &uLocal_62);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x710E43300E497E2A(unk_0x9E2D6C50374FCFA9());
		}
		func_188();
		if (!func_187())
		{
			if (func_186())
			{
				func_237();
			}
			if (unk_0xC92F9F18E020B461())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_169())
						{
							unk_0x3B8C20EF19A49C3E(0);
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!unk_0xF68107C40359970C(iLocal_72))
						{
							if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(iLocal_71)) && func_168(iLocal_73)) && !func_167(0))
							{
								if (func_166())
								{
									if (func_168(iLocal_76))
									{
										unk_0xAFE1B52F0DE91595(iLocal_76, 0);
									}
									func_157(1);
									unk_0x8576657A629C4B0A(0.1f);
									func_152(39, 1);
									func_152(40, 1);
									func_152(41, 1);
									func_152(42, 1);
									func_152(43, 1);
									func_152(44, 1);
									settimera(0);
								}
							}
							else
							{
								if (!unk_0xF68107C40359970C(iLocal_71))
								{
									unk_0x7734082B0EDB0BE0(iLocal_71, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
									unk_0xABC2CA6F28903308(iLocal_71, 1);
									wait(0);
								}
								func_237();
							}
						}
						else
						{
							if (!unk_0xF68107C40359970C(iLocal_71) && func_168(iLocal_73))
							{
								unk_0xAD6CDBCDA713560A(iLocal_71, iLocal_73, 20f, iLocal_119);
								unk_0xABC2CA6F28903308(iLocal_71, 1);
								wait(0);
							}
							func_120(0);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (unk_0xF68107C40359970C(iLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					func_119(&Local_102, 2);
				}
			}
			unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
			func_111();
			if (func_168(iLocal_73) && !func_110())
			{
				if (func_108())
				{
					if (!unk_0xF68107C40359970C(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!unk_0xF68107C40359970C(iLocal_72))
								{
									if (unk_0xF6F5D18EF8EAB859(iLocal_72, iLocal_73, 0))
									{
										if (iLocal_121 == 2)
										{
											unk_0x006574E87E6F1942(iLocal_72, 1, 1);
											unk_0x006574E87E6F1942(iLocal_73, 1, 1);
											unk_0xA888F8CC04F25CC8(&uLocal_74);
											unk_0xB69D13E19147910F(0, iLocal_73, unk_0xE2D3D51028F0428A(), 8, 30f, iLocal_120, 200f, 10f, 0);
											unk_0xC963A45B50851768(uLocal_74);
											unk_0x8ACADA903FCAA42F(iLocal_72, uLocal_74);
											unk_0x7461D7C5BA953BC7(&uLocal_74);
										}
										else
										{
											unk_0x006574E87E6F1942(iLocal_72, 1, 1);
											unk_0xA888F8CC04F25CC8(&uLocal_74);
											unk_0xCD41D6F721CB9C3A(0, iLocal_73, 30, 1000);
											unk_0xB69D13E19147910F(0, iLocal_73, unk_0xE2D3D51028F0428A(), 8, 40f, iLocal_120, 200f, 10f, 1);
											unk_0xC963A45B50851768(uLocal_74);
											unk_0x8ACADA903FCAA42F(iLocal_72, uLocal_74);
											unk_0x7461D7C5BA953BC7(&uLocal_74);
										}
										Local_133 = { unk_0x96EDA732FD9DC0AF(iLocal_73, unk_0x7F0054A115D66F44(iLocal_73, "wheel_lr")) };
										Local_134 = { unk_0x37B78BEF7C4625D4(iLocal_73, Local_133) };
										unk_0x74A35BFF0670ECD4("scr_wheel_burnout", iLocal_73, Local_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										Local_135 = { unk_0x96EDA732FD9DC0AF(iLocal_73, unk_0x7F0054A115D66F44(iLocal_73, "wheel_rr")) };
										Local_136 = { unk_0x37B78BEF7C4625D4(iLocal_73, Local_135) };
										unk_0x74A35BFF0670ECD4("scr_wheel_burnout", iLocal_73, Local_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										settimera(0);
										if (!unk_0x12DD4A0B247D9B4D(uLocal_60))
										{
											uLocal_60 = func_106(iLocal_73, 1, 0);
										}
										unk_0x9B8A09AAD1CFEFB3(2);
										iLocal_47 = 1;
									}
									else if (unk_0x0747E45CFF1F74AA(iLocal_73, unk_0xE2D3D51028F0428A(), 1))
									{
										if (!unk_0xF68107C40359970C(iLocal_72))
										{
											unk_0x7734082B0EDB0BE0(iLocal_72, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
											unk_0xABC2CA6F28903308(iLocal_72, 1);
											wait(0);
										}
										func_237();
									}
								}
								else
								{
									unk_0xAD6CDBCDA713560A(iLocal_71, iLocal_73, 20f, iLocal_119);
									unk_0xABC2CA6F28903308(iLocal_71, 1);
									wait(0);
									func_120(0);
								}
								break;
							
							case 1:
								if (func_168(iLocal_73))
								{
									if (iLocal_121 == 1)
									{
										if (timera() < 5000)
										{
											if (timera() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											unk_0xB2D5451CC5606248(iLocal_73, fLocal_99);
											iVar1 = unk_0xFE15FEB341652241(unk_0x6B62510F212526DC(iLocal_73, 1), 5f, 0, 4);
											if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
											{
												if (func_168(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
												{
													if (unk_0x72F6AE51B7E34865(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), iLocal_73))
													{
														settimera(5000);
													}
												}
												if (func_168(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (unk_0x72F6AE51B7E34865(iVar1, iLocal_73))
														{
															settimera(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0xDA70F2C4F36B81CB(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								func_76();
								if ((((((func_75() || func_74()) || unk_0x68C47642183F091A(iLocal_73)) || unk_0xF798DCF92C74B531(iLocal_73, 1, 5000)) || unk_0xEF9410C312F2B117(iLocal_73)) || unk_0xF68107C40359970C(iLocal_72)) || !unk_0xF6F5D18EF8EAB859(iLocal_72, iLocal_73, 0))
								{
									if (unk_0xA37204C64473B324("RE_CAR_STEAL_SCENE"))
									{
										if (func_168(iLocal_73))
										{
											unk_0x5545B7D117BB40B4(iLocal_73, 0);
										}
										unk_0x0AF8D3A06BB92903("RE_CAR_STEAL_SCENE");
									}
									if (unk_0x12DD4A0B247D9B4D(uLocal_60))
									{
										unk_0xFFD8EB5462B07B59(&uLocal_60);
									}
									func_73();
									if (unk_0x12DD4A0B247D9B4D(uLocal_59))
									{
										unk_0xFFD8EB5462B07B59(&uLocal_59);
									}
									unk_0xE68645525D451A8B(iLocal_71);
									unk_0xD28E3800883DED83(iLocal_73, 50f, 5, 0);
									uLocal_61 = func_106(iLocal_73, 0, 0);
									fLocal_93 = vdist(unk_0x6B62510F212526DC(iLocal_73, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1));
									fLocal_91 = vdist(unk_0x6B62510F212526DC(iLocal_73, 1), unk_0x6B62510F212526DC(iLocal_71, 1));
									fLocal_92 = vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_71, 1));
									func_71(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if (func_168(iLocal_73))
								{
									if (unk_0xDA70F2C4F36B81CB(iLocal_73) < 700f)
									{
										func_237();
									}
								}
								if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
								{
									func_237();
								}
								if (!unk_0x55B23FE400FCEA6B(iLocal_72, 0))
								{
									if (!unk_0xF6F5D18EF8EAB859(iLocal_72, iLocal_73, 0))
									{
										func_70(iLocal_72, &uLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
									}
								}
								else
								{
									func_69(&uLocal_63);
								}
								if (!unk_0xF68107C40359970C(iLocal_72))
								{
									if (!unk_0xCED7266BAB0BDC20(iLocal_72, unk_0xE2D3D51028F0428A()))
									{
										unk_0xC1A74225341AA9FB(iLocal_72, unk_0xE2D3D51028F0428A(), 0, 16);
										unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
									}
								}
								if ((vdist(unk_0x6B62510F212526DC(iLocal_73, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > (fLocal_93 + 220f) || vdist(unk_0x6B62510F212526DC(iLocal_73, 1), unk_0x6B62510F212526DC(iLocal_71, 1)) > (fLocal_91 + 220f)) || vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iLocal_71, 1)) > (fLocal_92 + 220f))
								{
									if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_73, 0))
									{
										func_120(0);
									}
									else
									{
										func_237();
									}
								}
								if (unk_0x12DD4A0B247D9B4D(uLocal_61))
								{
									if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_73, 0))
									{
										unk_0xFFD8EB5462B07B59(&uLocal_61);
										uLocal_59 = func_65(iLocal_71, 0, 0);
										func_64(&uLocal_62);
										func_71(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (iLocal_121 == 1)
											{
												Local_85 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_57)
											{
												Local_85 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												Local_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0x0318E2EE6FB4563F(Local_85, 2f) && !unk_0xBC7D3EDF3455BC35(iLocal_71))
											{
												unk_0xC64B6E13A6A7F517(iLocal_71, Local_85, 1, 0, 0, 1);
												unk_0xBBF86885619695CE(iLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = unk_0x320D1840B6DAA1CC();
									}
									else if (unk_0x77A43AFA9AAEC041(iLocal_73, iLocal_71, 20f, 20f, 7f, 0, 1, 0))
									{
										func_63();
										if (func_62())
										{
											if (unk_0x33168C7A83D47CC0(iLocal_71, iLocal_73, -1, 0, 0))
											{
												if (!bLocal_116)
												{
													if (func_47(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												unk_0xAD6CDBCDA713560A(iLocal_71, iLocal_73, 35f, iLocal_119);
												unk_0xABC2CA6F28903308(iLocal_71, 1);
												func_120(1);
											}
										}
									}
								}
								else if (unk_0x12DD4A0B247D9B4D(uLocal_59))
								{
									if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_73, 0))
									{
										if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, 0, 1, 0))
										{
											if (func_46(1, 0, 1))
											{
												unk_0xFFD8EB5462B07B59(&uLocal_59);
												if (iLocal_121 == 1)
												{
													if (func_45(unk_0x82FE2343F8BDFF0B(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x8FB472886552D737(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_43(unk_0x6B62510F212526DC(iLocal_71, 1), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0xFFD8EB5462B07B59(&uLocal_59);
										uLocal_61 = func_106(iLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_121 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_71))
										{
											unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
										}
										func_120(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_71))
									{
										unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
									}
									func_120(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0xF68107C40359970C(iLocal_72))
						{
							if (unk_0xF6F5D18EF8EAB859(iLocal_72, iLocal_73, 0))
							{
								unk_0xB69D13E19147910F(iLocal_72, iLocal_73, unk_0xE2D3D51028F0428A(), 8, 50f, iLocal_120, 10f, 10f, 0);
								unk_0xABC2CA6F28903308(iLocal_72, 1);
								unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
							}
							else
							{
								unk_0x7734082B0EDB0BE0(iLocal_72, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
								unk_0xABC2CA6F28903308(iLocal_72, 1);
								unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
							}
						}
						wait(0);
						func_237();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_168(iLocal_73))
						{
							unk_0xD59CC8123FD1A789(&iLocal_73);
						}
						if (!unk_0xF68107C40359970C(iLocal_72))
						{
							unk_0x05CB75C0837196F9(&iLocal_72);
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_71))
					{
						if (unk_0xFCF559C8631ABED7(iLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							unk_0xA02157241423F32E(iLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(iLocal_71, "GENERIC_CURSE_HIGH", 24);
						unk_0xA888F8CC04F25CC8(&uLocal_74);
						unk_0x13C3030981EA7C3B(0, Local_88, 1f, 20000, 40000f, 1056964608);
						unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0xC963A45B50851768(uLocal_74);
						unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
						unk_0x7461D7C5BA953BC7(&uLocal_74);
					}
					func_237();
				}
			}
			else
			{
				if (!unk_0xF68107C40359970C(iLocal_72))
				{
					unk_0x7734082B0EDB0BE0(iLocal_72, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
					unk_0xABC2CA6F28903308(iLocal_72, 1);
				}
				if (unk_0xE5965CDF24F93A9F(iLocal_73))
				{
					unk_0x2EE80CD0EAEB9B5B(iLocal_73, 50f);
				}
				func_237();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
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

int func_3(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	struct<3> Var0;
	char* sVar1;
	struct<3> Var2;
	float fVar3;
	
	sVar1 = "chassis";
	func_63();
	if (((!unk_0xF68107C40359970C(iLocal_71) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && func_168(iLocal_73)) && unk_0x6F940C2636C076AD(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (func_46(1, 0, 1))
					{
						if (!unk_0xE2D0C323A1AE5D85(Global_7824, 11))
						{
							if (!unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
							{
								func_35(1, 1, 1, 0, 0, 0, 0);
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									unk_0x3410421C60BF7143(1);
									while (!func_33(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										unk_0xC43E67C9BA871ECB();
										wait(0);
									}
									func_33(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								unk_0xC43E67C9BA871ECB();
								if (!unk_0xF68107C40359970C(iLocal_71))
								{
									unk_0xC252F409BDE7A700(iLocal_71, 0);
								}
								func_31();
								func_24(0);
								unk_0xC43E67C9BA871ECB();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0x59492C1B3DB11BDE(iLocal_73, 0, 0, 0f);
				unk_0x3707F224FA0050EA(iLocal_73, 0, 1, 1, 1);
				unk_0xC43E67C9BA871ECB();
				if (iLocal_121 == 1)
				{
					if (func_168(iLocal_73))
					{
						if (func_45(unk_0x82FE2343F8BDFF0B(iLocal_73), 336f, 90f))
						{
							Local_84 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							Local_83 = { -2252.683f, 4274.16f, 45.0612f };
							Local_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							Local_97 = { -2254.588f, 4277.307f, 45.6133f };
							Local_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							Local_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							Local_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							Local_83 = { -2257.088f, 4268.938f, 44.6456f };
							Local_97 = { -2255.775f, 4274.144f, 46.0666f };
							Local_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					Var2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Local_83, 1, 0, 0, 1);
					unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
					unk_0xC64B6E13A6A7F517(iLocal_71, Local_85, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(iLocal_73, fLocal_89);
					unk_0xC64B6E13A6A7F517(iLocal_73, Local_84, 1, 0, 0, 1);
				}
				else
				{
					if (!func_45(unk_0x82FE2343F8BDFF0B(iLocal_73), 64.6764f, 90f))
					{
						Local_97 = { -478.7095f, -2163.598f, 10.3091f };
						Local_98 = { -7.4391f, 0.0006f, 35.6865f };
						Local_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						Local_97 = { -488.0143f, -2149.419f, 9.9817f };
						Local_98 = { -11.7475f, 0.0006f, -145.0045f };
						Local_84 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					Var2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					unk_0xC64B6E13A6A7F517(iLocal_73, Local_84, 1, 0, 0, 1);
					unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
					unk_0xBBF86885619695CE(iLocal_73, fLocal_89);
				}
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
				if (func_168(iLocal_73))
				{
					unk_0x9F65B3BAFA302A65(iLocal_73, 1084227584);
					if (unk_0xE5965CDF24F93A9F(iLocal_72))
					{
						if (unk_0xF6F5D18EF8EAB859(iLocal_72, iLocal_73, 0))
						{
							unk_0x05CB75C0837196F9(&iLocal_72);
						}
					}
				}
				Local_130 = { 0f, 0f, 0f };
				Local_131 = { 0f, 0f, 0f };
				uLocal_122 = unk_0x8F5F4164BF5FB513(Local_130, Local_131, 2);
				unk_0x961EE84414CA42F8(uLocal_122, iLocal_73, unk_0x7F0054A115D66F44(iLocal_73, sVar1));
				unk_0x44B158699315D639(uLocal_122, Local_130, Local_131, 2);
				unk_0x950B26F4C891073F(iLocal_71, uLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x950B26F4C891073F(unk_0xE2D3D51028F0428A(), uLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_75 = unk_0x6729FA3AF971BE2A("DEFAULT_ANIMATED_CAMERA", Local_97, Local_98, fLocal_96, 0, 2);
				unk_0x7B8CE3A05613F41C(uLocal_75, uLocal_122, "car_returned_cam", sLocal_126);
				unk_0xF07805FFBF204ED8(iLocal_73, sLocal_127, sLocal_126, 1000f, 0, 0, 0, 0, 262144);
				Local_130 = { unk_0x6B62510F212526DC(iLocal_73, 1) };
				Local_131 = { unk_0x63A8BF5E6C2BF85C(iLocal_73, 2) };
				if (func_168(iLocal_76))
				{
					if (func_23(iLocal_76, Local_84, 1) <= 11f)
					{
						unk_0xC64B6E13A6A7F517(iLocal_76, Var2, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(iLocal_76, fVar3);
						unk_0x9F65B3BAFA302A65(iLocal_76, 1084227584);
						unk_0x2D58A6131679D82C(iLocal_76, 1, 0);
					}
				}
				unk_0x7A997A0A971D305F(Local_84, 10f, 1, 0, 0, 0);
				settimera(0);
				if (iLocal_121 == 2)
				{
					unk_0x6B9A9289F29F4166(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x6B9A9289F29F4166(joaat("peyote"), 15);
				}
				unk_0x85050CAC8798CDD0(Local_84, 15f);
				unk_0xDD786B89B15AA63F(uLocal_75, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				iLocal_49 = 3;
				unk_0x9B8B94A1196F345F(1f);
				break;
			
			case 3:
				unk_0xC43E67C9BA871ECB();
				if (func_20())
				{
					iLocal_49 = 4;
				}
				if (iLocal_121 == 1)
				{
					if (timera() > 1500 && !bLocal_150)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (unk_0xCE2C78E9FC0B01E3(uLocal_122) && !bLocal_150)
				{
					if (unk_0x54DE1614490C2A83(uLocal_122) >= 0.2f)
					{
						if (func_47(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				unk_0x9B8B94A1196F345F(1f);
				break;
			
			case 4:
				unk_0xC43E67C9BA871ECB();
				if (iLocal_121 == 2)
				{
					if (!func_19())
					{
						if (iLocal_58 == 0)
						{
							if (func_47(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				unk_0x9B8B94A1196F345F(1f);
				if (iLocal_121 == 1)
				{
					if (unk_0xCE2C78E9FC0B01E3(uLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (unk_0x54DE1614490C2A83(uLocal_122) >= 0.83f)
							{
								unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
								unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x54DE1614490C2A83(uLocal_122), 0, 0, 0);
								unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 1, 0);
								iLocal_132 = 1;
							}
						}
						if (!unk_0xF68107C40359970C(iLocal_71))
						{
							if (unk_0x54DE1614490C2A83(uLocal_122) >= 0.83f)
							{
								if (unk_0xFCF559C8631ABED7(iLocal_71, sLocal_126, sLocal_128, 2))
								{
									unk_0xA5D8BA53953077C8(iLocal_71, -1000f, 0);
									if (!unk_0xD5C6B5E3B93A5EDC(iLocal_71, 0))
									{
										if (func_168(iLocal_73))
										{
											unk_0xA9F390242F9EB2E1(iLocal_71, iLocal_73, -1);
											unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
										}
									}
									unk_0xEB087B19F63AB053(iLocal_71, 1, 0);
								}
								else
								{
									unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
								}
							}
						}
					}
				}
				else if (unk_0xCE2C78E9FC0B01E3(uLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (unk_0x54DE1614490C2A83(uLocal_122) >= 0.86f)
						{
							unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
							unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x54DE1614490C2A83(uLocal_122), 0, 0, 0);
							unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 1, 0);
							iLocal_132 = 1;
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_71))
					{
						if (unk_0x54DE1614490C2A83(uLocal_122) > 0.847f)
						{
							if (unk_0xFCF559C8631ABED7(iLocal_71, sLocal_126, sLocal_128, 2))
							{
								unk_0xA5D8BA53953077C8(iLocal_71, -1000f, 0);
								if (!unk_0xD5C6B5E3B93A5EDC(iLocal_71, 0))
								{
									if (func_168(iLocal_73))
									{
										unk_0xA9F390242F9EB2E1(iLocal_71, iLocal_73, -1);
										unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
									}
								}
								unk_0xEB087B19F63AB053(iLocal_71, 1, 0);
							}
							else
							{
								unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
							}
						}
					}
				}
				if (((unk_0xCE2C78E9FC0B01E3(uLocal_122) && unk_0x54DE1614490C2A83(uLocal_122) >= 0.99f) || !unk_0xCE2C78E9FC0B01E3(uLocal_122)) || func_20())
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_73, 0) && unk_0xFCF559C8631ABED7(iLocal_73, sLocal_126, sLocal_127, 3))
					{
						unk_0x12FFBBB6191DB79F(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (unk_0xCE2C78E9FC0B01E3(uLocal_122))
					{
						unk_0xE0F81EAEB49D39EF(uLocal_122, 1f);
					}
					if (bLocal_150)
					{
						Var0 = { unk_0x3DBAB8E11699EAEE(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						unk_0x9CD4CBF2BBE10F00(Var0, &(Var0.f_2), 0, 0);
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var0, 1, 0, 0, 1);
						Var0 = { unk_0x34AEDCEA59226CCB(sLocal_126, sLocal_129, Local_130, Local_131, 1f, 2) };
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), Var0.f_2);
						unk_0x080C97B891E2F3AA(0, 1065353216);
						unk_0x94953C3FF0664F66(0);
					}
					unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), -1871534317, 1, 0, 1);
					if (!unk_0xD5C6B5E3B93A5EDC(iLocal_71, 0))
					{
						if (func_168(iLocal_73))
						{
							unk_0xA9F390242F9EB2E1(iLocal_71, iLocal_73, -1);
							unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_71))
					{
						if (unk_0xD5C6B5E3B93A5EDC(iLocal_71, 0))
						{
							if (func_168(iLocal_73))
							{
								unk_0x59492C1B3DB11BDE(iLocal_73, 0, 0, 0f);
								unk_0x3707F224FA0050EA(iLocal_73, 0, 1, 1, 1);
								iLocal_125 = unk_0x320D1840B6DAA1CC();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xC43E67C9BA871ECB();
				if ((unk_0x320D1840B6DAA1CC() - iLocal_125) > 100)
				{
					if (func_3(iLocal_71) && func_168(iLocal_73))
					{
						unk_0xA888F8CC04F25CC8(&uLocal_74);
						unk_0xCD41D6F721CB9C3A(0, iLocal_73, 9, 1000);
						unk_0xAD6CDBCDA713560A(0, iLocal_73, 25f, iLocal_119);
						unk_0xC963A45B50851768(uLocal_74);
						unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
						unk_0x7461D7C5BA953BC7(&uLocal_74);
						unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
					}
					func_35(0, 1, 1, 0, 0, 0, 0);
					if (bLocal_150)
					{
						if (unk_0x876B1078E90C91CB(uLocal_75))
						{
							unk_0xDD786B89B15AA63F(uLocal_75, 0);
							unk_0x588DDCB644C6486A(uLocal_75, 0);
						}
						unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
						wait(750);
						unk_0x080C97B891E2F3AA(0, 1065353216);
						unk_0x94953C3FF0664F66(0);
						func_18(500, 1);
					}
					else
					{
						unk_0xBAEA2321313356D0(0, 0, 3, 0);
						unk_0xDD786B89B15AA63F(uLocal_75, 0);
					}
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
					func_17(&iLocal_73);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_71))
				{
					unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_112915.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_112915.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 12597;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 12597)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574907;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_7(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_15(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_14(unk_0xE2D3D51028F0428A());
			if (func_13(iVar0) && (!func_12(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_13(Global_112915.f_2363.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_42596 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_17(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(*iParam0))
	{
		unk_0x55B23FE400FCEA6B(*iParam0, 0);
		if (unk_0xA6A089369417736E(*iParam0) && unk_0x930E64CB0285CAEC(*iParam0, 1))
		{
			unk_0x3D81769BEC61BFF8(iParam0);
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
	{
		if (!unk_0xECD40FEF3CF43BDB())
		{
			unk_0x5A7ACD1CDF509B0D(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xE9E8955A780DDA01())
		{
			wait(0);
		}
	}
}

int func_19()
{
	if (Global_21285 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_21(1000))
	{
		if (unk_0x08A9BDFE90D7CFE2(iVar0))
		{
			unk_0xDD786B89B15AA63F(uLocal_75, 0);
			unk_0x859006DB870314C5(500);
			while (unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0xC43E67C9BA871ECB();
				wait(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		if (unk_0x08A9BDFE90D7CFE2(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
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
			if (func_22())
			{
				Global_27 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
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

float func_23(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam2);
}

void func_24(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_29(0))
		{
			func_25(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_25(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_28())
		{
			func_27(1, 1);
		}
		else
		{
			func_27(0, 0);
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
	if (!func_26())
	{
		Global_19954.f_1 = 3;
	}
}

int func_26()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_29(0))
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

bool func_28()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_29(int iParam0)
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

bool func_30()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_31()
{
	Global_20151 = 0;
	func_32();
}

void func_32()
{
	unk_0x82B0661A78CC39CF();
	Global_22296 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21285 = 6;
	}
}

int func_33(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_34(iParam0);
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

void func_34(int iParam0)
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

void func_35(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_42(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_26())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_41(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_42(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_41(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_39(unk_0x9E2D6C50374FCFA9())) && !func_37(unk_0x9E2D6C50374FCFA9(), 0)) && !func_36()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_39(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_36()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_38(-1, 0) == 8;
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_39(int iParam0)
{
	if (func_37(iParam0, 0))
	{
		return 1;
	}
	if (func_40())
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

bool func_40()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_41(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_42(int iParam0)
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

void func_43(struct<3> Param0, float fParam1, float fParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - Param0 };
		fVar2 = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
		if (func_44(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		fVar2 = unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1);
		if (func_44(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_44(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		fVar0 = unk_0x82FE2343F8BDFF0B(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_45(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x410D46B709324B0F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (bParam0)
		{
			if (unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A())
				{
					return 0;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x90544F2E01A178CD(iVar0) < 0.95f || unk_0x90544F2E01A178CD(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

bool func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_61(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_48(sParam2, iParam3, 0);
}

int func_48(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_26())
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
			func_55();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_54();
		func_49();
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
		func_60();
	}
	return 0;
}

void func_49()
{
	if (!func_50())
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

int func_50()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_53())
	{
		return 0;
	}
	if (func_51(unk_0x9E2D6C50374FCFA9()))
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

bool func_51(int iParam0)
{
	return func_52(iParam0, 20);
}

bool func_52(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_53()
{
	return -1;
}

void func_54()
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

void func_55()
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

int func_56()
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

void func_57()
{
	if (func_12(14))
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
		Global_19954 = func_10();
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
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

int func_62()
{
	if (unk_0xF68107C40359970C(iLocal_72))
	{
		return 1;
	}
	else if (func_168(iLocal_73))
	{
		if (!unk_0x77A43AFA9AAEC041(iLocal_72, iLocal_73, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_63()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_168(iLocal_73))
	{
		fVar0 = unk_0x20E1198E4672F72D(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0x9CA0CB41F81C959C(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_64(var uParam0)
{
	*uParam0 = -99;
}

var func_65(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_66(iParam0, bParam1, 145);
}

var func_66(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_67(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1918[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1918[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_68(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_68(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_68(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
		bVar0 = true;
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0->f_1))
	{
		unk_0xFFD8EB5462B07B59(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_7))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0->f_7, 0))
		{
			if (unk_0x227D9DCE160DDA9D(uParam0->f_7))
			{
				unk_0x0B69DCF6FE80E8EB(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_70(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6BA8B8E3D0B41C6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0x227D9DCE160DDA9D(iParam0))
		{
			bVar0 = true;
			if (unk_0x17FE501894ED2713(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x0B69DCF6FE80E8EB(iParam0, 1);
				}
				else
				{
					unk_0xBFD785B1D608BC11(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0xEEC8A34FF9213FE4(iParam0, iParam2);
				unk_0x7C87F71C68A9AF0B(iParam0, fParam6);
				if (unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					unk_0x7A610B2EC5DA34E7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x21D1ACE7CE56627C(iParam0, iParam9);
		}
		unk_0x0FB9B56364B11BC9(iParam0, iParam4);
		unk_0x922263C0FEA956C8(iParam0, iParam5);
		*uParam1 = unk_0xC6CEFB49E88BDD9B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xA582EE8380437B1B(*uParam1, iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(iParam7))
				{
					unk_0xB6AD9F9931D821CA("STRING");
					if (bParam10)
					{
						unk_0x76DB21247AE4E4E2(iParam7);
					}
					else
					{
						unk_0x26C23BE14F66F202(iParam7);
					}
					unk_0xA630BF119308F2F4(*uParam1);
				}
				unk_0x7A610B2EC5DA34E7(*uParam1, 7);
			}
		}
		if (!unk_0xE2D0C323A1AE5D85(uParam1->f_6, 2))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			uParam1->f_1 = unk_0xFEB99716362809A3(iParam0);
			if (!unk_0xE2D0C323A1AE5D85(uParam1->f_6, 3))
			{
				if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xA582EE8380437B1B(uParam1->f_1, iParam8);
					}
					if (!unk_0xACC32B78196FBC2A(iParam7))
					{
						unk_0xB6AD9F9931D821CA("STRING");
						if (bParam10)
						{
							unk_0x76DB21247AE4E4E2(iParam7);
						}
						else
						{
							unk_0x26C23BE14F66F202(iParam7);
						}
						unk_0xA630BF119308F2F4(uParam1->f_1);
					}
					unk_0x7A610B2EC5DA34E7(uParam1->f_1, 7);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
		{
			return;
		}
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(iParam2);
		unk_0x06A78BA0B756C754("FocusIn");
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE8F6C1F695B25B91(uParam0->f_3))
	{
		if (func_72(uParam0->f_3))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (!unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (func_72(sVar0))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

bool func_72(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_73()
{
	if (!unk_0xF68107C40359970C(iLocal_72))
	{
		unk_0xBC12D08EE7559CCD(iLocal_72, 2, 0);
		unk_0xBC12D08EE7559CCD(iLocal_72, 6, 0);
		unk_0xBC12D08EE7559CCD(iLocal_72, 3, 1);
		unk_0xBC12D08EE7559CCD(iLocal_72, 1, 0);
		unk_0xC1A74225341AA9FB(iLocal_72, unk_0xE2D3D51028F0428A(), 0, 16);
		unk_0x50274A7EACA3133A(iLocal_72, 0);
		unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
	}
	else
	{
		unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
	}
	if (func_168(iLocal_73))
	{
		unk_0x3B2646B62E7BBE11(iLocal_73, 1);
	}
}

int func_74()
{
	if (func_168(iLocal_73))
	{
		if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_73, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_77)
			{
				if (!unk_0xF68107C40359970C(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!unk_0x344BB7BDBAB3823C(iLocal_73))
						{
							unk_0x0E6C3A4EFA9D9D35(iLocal_72, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_118 = 1;
						}
					}
					if (unk_0x320D1840B6DAA1CC() > iLocal_123 + 7000)
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_73, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_47(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = unk_0x320D1840B6DAA1CC();
							}
						}
					}
					unk_0xE68645525D451A8B(iLocal_73);
					unk_0x2AD4BD9956C8AAD7(iLocal_73);
					iLocal_77 = 0;
				}
			}
			if (unk_0x0747E45CFF1F74AA(iLocal_73, unk_0xE2D3D51028F0428A(), 1))
			{
				if (!unk_0xF68107C40359970C(iLocal_72))
				{
					func_47(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_75()
{
	if (func_168(iLocal_73))
	{
		if (((unk_0xB4C63F21D1DC6C23(iLocal_73, 0, 0) || unk_0xB4C63F21D1DC6C23(iLocal_73, 1, 0)) || unk_0xB4C63F21D1DC6C23(iLocal_73, 4, 0)) || unk_0xB4C63F21D1DC6C23(iLocal_73, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_76()
{
	if (func_168(iLocal_73) && unk_0x12DD4A0B247D9B4D(uLocal_60))
	{
		func_77(&uLocal_138, iLocal_73, 0, 0, 1, 1, 1);
	}
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_78(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_78(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_79(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_79(var uParam0, var uParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		func_71(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_80(uParam0, uParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_80(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4131052989DE1278())
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xE8F6C1F695B25B91(iVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_72(iVar0))
	{
		func_105();
	}
	if (func_104(uParam1) && unk_0x2B5F4FBAF644BEC8(uParam1))
	{
		iVar1 = 0;
		if (unk_0x9044EDB8A7BF67B4(uParam1))
		{
			unk_0xAD3E09D1957BB0DE(unk_0x28AA31872A651BC7(iParam1));
			unk_0x757E8ACDD0FCB0CA(unk_0x28AA31872A651BC7(iParam1), 1);
			if (unk_0x2CF76E57D8E46C1F(unk_0x28AA31872A651BC7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x04D9F44466CBF3CA(iParam1))
		{
			unk_0xE0A93E5ADBED87DE(unk_0x31EB55FAEEE9C0F5(iParam1));
			if (unk_0xE390839FC176621D(unk_0x31EB55FAEEE9C0F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam1))
		{
			unk_0x6E740265DB1F6EA1(unk_0x1AA24836EA881D77(iParam1));
			if (unk_0x3E04DE565F9095B8(unk_0x1AA24836EA881D77(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4131052989DE1278())
		{
			if (func_99(uParam0, bParam5, bParam7, 0))
			{
				func_95(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_85(iVar0))
				{
					if ((unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0)) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((iVar1 && !unk_0xF847447D4467709D()) && uParam6)
						{
							if (!func_72(iVar0))
							{
								func_84(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
								{
									func_83(1);
								}
							}
						}
					}
				}
			}
			else if (func_85(iVar0))
			{
				if (unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0))
				{
					if (((unk_0xBC7D3EDF3455BC35(iParam1) && iVar1) && !unk_0xF847447D4467709D()) && uParam6)
					{
						if (!func_72(iVar0))
						{
							func_84(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
							{
								func_83(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE8F6C1F695B25B91(sParam3))
			{
				if (func_72(sParam3))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
					{
						func_71(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
					{
						func_71(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
					{
						func_71(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
					{
						func_71(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
					{
						func_71(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
				{
					func_71(uParam0, iVar0, 1);
				}
			}
			if (!func_99(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_82(uParam0))
				{
					func_81(uParam0);
				}
			}
		}
	}
	else
	{
		func_71(uParam0, iVar0, 0);
	}
}

void func_81(var uParam0)
{
	if (func_104(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
		unk_0xBD1E8007D7DFA747(0);
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		unk_0x06A78BA0B756C754("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_82(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x320D1840B6DAA1CC()
		{
			return 1;
		}
	}
	return 0;
}

int func_83(bool bParam0)
{
	switch (Global_42596)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_112915.f_10049.f_100++;
			}
			return Global_112915.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_112915.f_10049.f_101++;
			}
			return Global_112915.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_112915.f_10049.f_102++;
			}
			return Global_112915.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_84(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_85(char* sParam0)
{
	if (!func_86(1, 1, 0))
	{
		if ((!unk_0xACC32B78196FBC2A(sParam0) && func_72(sParam0)) || func_72("CMN_HINT"))
		{
			unk_0x3410421C60BF7143(1);
		}
		return 0;
	}
	switch (Global_42596)
	{
		case 0:
		case 3:
			if (func_83(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_83(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_83(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x04458B4E5D9E466A())
	{
		return 0;
	}
	if (func_29(0))
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return 0;
	}
	if (Global_75021)
	{
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_59871)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
			{
				return 0;
			}
			if (unk_0x594CC97203485127())
			{
				return 0;
			}
		}
	}
	if ((func_93() || func_92(Global_4718592.f_138117)) || func_91())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = func_90(unk_0xE2D3D51028F0428A(), 0);
			if (((unk_0x38B74904557F43CC(iVar0, iVar1) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("riot2") && iVar1 == 0) && func_89(iVar0, 10)) && unk_0x0DD0BC46C4CFD6AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957935)
	{
		return 0;
	}
	if (func_87(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_87(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (func_88(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_88(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1, bool bParam2)
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

int func_89(int iParam0, int iParam1)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x03AC3319D1B50189(iParam0) > 0)
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
					if (unk_0x6B83F5AE0478286F(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
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

var func_91()
{
	return Global_2714627.f_19;
}

bool func_92(int iParam0)
{
	return iParam0 == 51;
}

var func_93()
{
	return Global_2714627.f_18;
}

bool func_94()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

void func_95(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581344 == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		func_71(uParam0, 0, 0);
	}
	if (func_98(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			iVar0 = unk_0x28AA31872A651BC7(iParam1);
			if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					if (!func_96())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xECF091D7E67FF7F2(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x56593357686570F4(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iParam1, -1, iVar3, iVar4);
	unk_0x9DCF157443EA30D6("FocusIn", 0, 0);
	unk_0x66B27A59829491D3("HINT_CAM_SCENE");
	unk_0x91DFC8F68F6D9B05(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x320D1840B6DAA1CC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_96()
{
	return func_97(unk_0x9E2D6C50374FCFA9());
}

int func_97(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_98(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_82(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (!func_103(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x320D1840B6DAA1CC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
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
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (!func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_102(bParam1, bParam2, bParam3) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (func_101(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || func_100(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_101(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_82(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_86(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_105();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x51844F589D928A86(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x51844F589D928A86(0, 80))
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_102(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_86(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x04D9F44466CBF3CA(iParam0))
		{
			if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105()
{
	unk_0xCED9E32812D6C7C7(&Global_7825, 4);
}

int func_106(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_107(iParam0, bParam1, 0);
}

int func_107(var uParam0, bool bParam1, bool bParam2)
{
	return func_67(uParam0, !bParam1, bParam2);
}

int func_108()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (func_168(iLocal_73))
	{
		func_109(uLocal_60, iLocal_73, fVar0, 1061158912, 0);
		if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_73, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x4D21C9FB671ED18F(iLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

void func_109(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		if ((unk_0xE5965CDF24F93A9F(iParam1) && unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A())) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x04D9F44466CBF3CA(iParam1))
			{
				if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam1), 0))
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x9705014C37E60003(uParam0, 1);
						unk_0xFBBD8F124403B0F5(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x9705014C37E60003(uParam0, 0);
						unk_0xFBBD8F124403B0F5(uParam0, 255);
					}
				}
			}
			else if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam1)))
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x9705014C37E60003(uParam0, 1);
						unk_0xFBBD8F124403B0F5(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x9705014C37E60003(uParam0, 0);
						unk_0xFBBD8F124403B0F5(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_110()
{
	if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_73, 0) && unk_0x66AA8BC9CA1BE26C(iLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	if (!unk_0xF68107C40359970C(iLocal_71) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!unk_0xD5C6B5E3B93A5EDC(iLocal_71, 0))
				{
					if (iLocal_121 == 1)
					{
						if (func_118())
						{
							iLocal_48 = 1;
						}
					}
					else if (!unk_0x32DCDA1B2F8A0694(iLocal_71) && !unk_0x03454821A9ECF4AA(iLocal_71))
					{
						unk_0xF30F15F203736DE4(iLocal_71, unk_0xE2D3D51028F0428A(), -1, 0, 2);
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							unk_0x30E00B59448AB97E(iLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							unk_0xA888F8CC04F25CC8(&uLocal_74);
							unk_0x49D97B076E3590AC(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, sLocal_80, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x49D97B076E3590AC(0, sLocal_80, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0xC963A45B50851768(uLocal_74);
							unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
							unk_0x7461D7C5BA953BC7(&uLocal_74);
							iLocal_124 = unk_0x320D1840B6DAA1CC();
							iLocal_48 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_121 == 1)
				{
					unk_0xF30F15F203736DE4(iLocal_71, unk_0xE2D3D51028F0428A(), -1, 0, 2);
					if (unk_0x174CED88B97C78D9(iLocal_71, 242628503) != 1)
					{
						unk_0xA888F8CC04F25CC8(&uLocal_74);
						unk_0x49D97B076E3590AC(0, sLocal_80, sLocal_82, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0xC963A45B50851768(uLocal_74);
						unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
						unk_0x7461D7C5BA953BC7(&uLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (unk_0x2E7F5417D4F4DD69(iLocal_71, unk_0xE2D3D51028F0428A(), 60f))
				{
					if (unk_0x174CED88B97C78D9(iLocal_71, 242628503) != 1)
					{
						unk_0xA888F8CC04F25CC8(&uLocal_74);
						unk_0x49D97B076E3590AC(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_57 == 0)
						{
							unk_0x49D97B076E3590AC(0, sLocal_80, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xC963A45B50851768(uLocal_74);
						unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
						unk_0x7461D7C5BA953BC7(&uLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				break;
			
			case 2:
				if (func_118())
				{
					if (func_117())
					{
					}
				}
				if (iLocal_121 == 2)
				{
					if (!unk_0x2E7F5417D4F4DD69(iLocal_71, unk_0xE2D3D51028F0428A(), 60f) && !func_115(iLocal_71, -875674219))
					{
						unk_0x529D306014D3C29A(iLocal_71, unk_0xE2D3D51028F0428A(), 0);
					}
					if (func_114(iLocal_71, unk_0xE2D3D51028F0428A(), 1) < 25f)
					{
						if (!func_19())
						{
							if ((unk_0x320D1840B6DAA1CC() - iLocal_124) > 6000)
							{
								func_113();
							}
						}
					}
				}
				if (unk_0x174CED88B97C78D9(iLocal_71, 242628503) != 1 && !func_115(iLocal_71, -875674219))
				{
					if (iLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x8F41785F110B0DA0(iLocal_71, Local_85, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (unk_0x174CED88B97C78D9(iLocal_71, 242628503) == 7)
							{
								unk_0xA888F8CC04F25CC8(&uLocal_74);
								unk_0x13C3030981EA7C3B(0, Local_85, 1f, 20000, fLocal_90, 1056964608);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0xC963A45B50851768(uLocal_74);
								unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
								unk_0x7461D7C5BA953BC7(&uLocal_74);
							}
						}
						else if (!unk_0xFCF559C8631ABED7(iLocal_71, sLocal_79, "waiting", 3))
						{
							unk_0x49D97B076E3590AC(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_114(iLocal_71, unk_0xE2D3D51028F0428A(), 1) < 25f)
							{
								func_113();
							}
						}
					}
					else if (!unk_0xFCF559C8631ABED7(iLocal_71, sLocal_79, "waiting", 3))
					{
						unk_0x49D97B076E3590AC(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xB15EF36AD557325B(iLocal_71, unk_0xE2D3D51028F0428A()))
				{
					unk_0xF30F15F203736DE4(iLocal_71, unk_0xE2D3D51028F0428A(), -1, 0, 2);
				}
				if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_71, 40f, 40f, 10f, 0, 1, 0) && !unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_71, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_112())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 1)
							{
								unk_0xA888F8CC04F25CC8(&uLocal_74);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0x49D97B076E3590AC(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0xC963A45B50851768(uLocal_74);
								unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
								unk_0x7461D7C5BA953BC7(&uLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x320D1840B6DAA1CC();
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uLocal_74);
								unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
								unk_0x49D97B076E3590AC(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0xC963A45B50851768(uLocal_74);
								unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
								unk_0x7461D7C5BA953BC7(&uLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x320D1840B6DAA1CC();
							}
						}
						else if (!unk_0xFCF559C8631ABED7(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0x174CED88B97C78D9(iLocal_71, 242628503) == 7)
							{
								if (!unk_0x2E7F5417D4F4DD69(iLocal_71, unk_0xE2D3D51028F0428A(), 45f))
								{
									unk_0xA888F8CC04F25CC8(&uLocal_74);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
									unk_0xC963A45B50851768(uLocal_74);
									unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
									unk_0x7461D7C5BA953BC7(&uLocal_74);
								}
								else if ((unk_0x320D1840B6DAA1CC() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!unk_0x2E7F5417D4F4DD69(iLocal_71, unk_0xE2D3D51028F0428A(), 70f))
						{
							unk_0x03A927199A2DFE46(iLocal_71);
							unk_0xA888F8CC04F25CC8(&uLocal_74);
							unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
							unk_0xC963A45B50851768(uLocal_74);
							unk_0x8ACADA903FCAA42F(iLocal_71, uLocal_74);
							unk_0x7461D7C5BA953BC7(&uLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!unk_0xF68107C40359970C(iLocal_72))
					{
						unk_0x7734082B0EDB0BE0(iLocal_72, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
						unk_0xABC2CA6F28903308(iLocal_72, 1);
						unk_0xB3822DB3D538C8F3(&iLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 1)
					{
						Local_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						Local_85 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						Local_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0x8F41785F110B0DA0(iLocal_71, Local_85, 4f, 4f, 4f, 0, 1, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_71, 2106541073) == 7)
						{
							unk_0x13C3030981EA7C3B(iLocal_71, Local_85, 1f, 20000, fLocal_90, 1056964608);
						}
					}
					else if (!unk_0x2E7F5417D4F4DD69(iLocal_71, unk_0xE2D3D51028F0428A(), 50f))
					{
						unk_0x529D306014D3C29A(iLocal_71, unk_0xE2D3D51028F0428A(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_167(1))
	{
		if (!unk_0xF68107C40359970C(iLocal_71))
		{
			unk_0x7734082B0EDB0BE0(iLocal_71, unk_0xE2D3D51028F0428A(), 150f, -1, 0, 0);
			unk_0xABC2CA6F28903308(iLocal_71, 1);
			wait(0);
		}
		func_237();
	}
}

bool func_112()
{
	if (!bLocal_116)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_113()
{
	if (!iLocal_117)
	{
		if (func_47(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

float func_114(int iParam0, int iParam1, int iParam2)
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
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

int func_115(int iParam0, int iParam1)
{
	if (func_116(uParam0))
	{
		if (unk_0x174CED88B97C78D9(uParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_3(uParam0))
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	if (!iLocal_115)
	{
		if (timera() > 2000)
		{
			if (func_47(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_118()
{
	if (!unk_0xF68107C40359970C(iLocal_72) && !unk_0xF68107C40359970C(iLocal_71))
	{
		if (func_168(iLocal_73))
		{
			if (unk_0x87B449F4C26E764A(iLocal_72, iLocal_73))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_119(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_120(bool bParam0)
{
	int iVar0;
	
	if (iLocal_121 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_143(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
					}
					wait(0);
				}
				break;
			
			case 1:
				while (!func_143(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
					}
					wait(0);
				}
				break;
			
			case 2:
				while (!func_143(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
					}
					wait(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_142(8);
	}
	func_124(17, iLocal_121);
	func_121();
	func_237();
}

void func_121()
{
	func_122();
}

int func_122()
{
	if (func_123(0))
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

bool func_123(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_124(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_139(iParam0))
	{
		func_138(iParam0, iParam1);
		if (!func_137(51))
		{
			func_133("RE_REWARD", 1, 0, 4000, 10000, func_136(), 0, 138, 0);
			func_132(51);
		}
		if (func_131(iParam0))
		{
			Global_112915.f_24995.f_2 = 3;
		}
		if (func_130(iParam0, iParam1) != 322)
		{
			func_125(func_130(iParam0, iParam1), Local_45.x, Local_45.f_1);
		}
		Global_112903 = iParam1;
		if (Global_112901 == 0)
		{
			if (((Global_112904 == 1 || Global_112904 == 5) || Global_112904 == 11) || Global_112904 == 25)
			{
				func_142(2);
			}
			else if ((Global_112904 == 26 || Global_112904 == 8) || Global_112904 == 17)
			{
				func_142(7);
			}
			else
			{
				func_142(1);
			}
		}
	}
}

void func_125(int iParam0, var uParam1, var uParam2)
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
		func_129((891 + iParam0), 1, -1);
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
		func_126();
	}
}

void func_126()
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
		func_128(13, floor(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_127() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
				{
					func_122();
				}
			}
		}
	}
}

int func_127()
{
	return Global_31505;
}

int func_128(int iParam0, int iParam1)
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

void func_129(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
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

void func_132(int iParam0)
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

void func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_134(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_134(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_135();
	}
}

void func_135()
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

int func_136()
{
	func_11();
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

int func_137(int iParam0)
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

void func_138(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_112915.f_24995.f_8[iParam0]), iParam1);
}

int func_139(int iParam0)
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

int func_140()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar1 = func_141(Var0);
	return uVar1;
}

int func_141(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_142(int iParam0)
{
	Global_112901 = iParam0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_123(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xE2D0C323A1AE5D85(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_112915.f_7688.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_151(iParam1);
		Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xB0550BC91B0159D6(&(Var0.f_1), 0);
		Global_112915.f_7688.f_765[Global_112915.f_7688.f_866 /*10*/] = { Var0 };
		Global_112915.f_7688.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_150(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_149(&iVar2);
		iVar3 = func_148(Var1, Global_112915.f_7688.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_146(Global_112915.f_7688.f_765[iVar2 /*10*/]);
			Global_112915.f_7688.f_765[iVar2 /*10*/] = { Var1 };
			func_145(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_144(Var1))
			{
				func_146(Global_112915.f_7688.f_765[iVar2 /*10*/]);
				Global_112915.f_7688.f_765[iVar2 /*10*/] = { Var1 };
				func_145(&Var1);
				return 1;
			}
			else
			{
				if (!func_144(Global_112915.f_7688.f_765[iVar2 /*10*/]))
				{
					Global_112915.f_7688.f_765[iVar2 /*10*/] = { Var1 };
					func_145(&Var1);
					return 1;
				}
				func_145(&Var1);
				return 1;
			}
		}
		else
		{
			func_146(Var1);
			func_145(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_144(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_145(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_146(struct<10> Param0)
{
	if (func_144(Param0))
	{
		func_147(Param0.f_8, 0);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112915.f_8613[iParam0] = 1;
	Global_112915.f_8613.f_236[iParam0] = (unk_0x320D1840B6DAA1CC() + iParam1);
}

int func_148(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_149(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112915.f_7688.f_866)
	{
		if (func_148(Global_112915.f_7688.f_765[iVar0 /*10*/], Global_112915.f_7688.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_151(iParam1);
	Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xB0550BC91B0159D6(&(Var0.f_1), 0);
	return Var0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_152(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_156(iParam0, 2, 1))
		{
			func_155(iParam0, 2, 1);
		}
	}
	else if (func_156(iParam0, 2, 1))
	{
		func_153(iParam0, 2, 1);
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB0550BC91B0159D6(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_127() == 0)
		{
			uVar0 = func_9(func_154(iParam0), -1, 0);
			unk_0xB0550BC91B0159D6(&uVar0, iParam1);
			func_6(func_154(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_154(int iParam0)
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

void func_155(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_127() == 0)
		{
			uVar0 = func_9(func_154(iParam0), -1, 0);
			unk_0xCED9E32812D6C7C7(&uVar0, iParam1);
			func_6(func_154(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_156(int iParam0, int iParam1, bool bParam2)
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
		if (func_127() == 0)
		{
			return unk_0xE2D0C323A1AE5D85(func_9(func_154(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (func_160())
	{
		Global_112905 = 1;
		Global_112902 = unk_0x320D1840B6DAA1CC();
		if (func_131(Global_112904))
		{
			func_158(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_131(Global_112904))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112915.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
					Global_112915.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_112911, 2);
				}
			}
			break;
	}
}

char* func_159(int iParam0)
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

int func_160()
{
	switch (func_161(&Global_31565, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_165(0))
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
		if (!func_163(iParam2))
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
			func_162(uParam0, iParam4);
		}
	}
	return 2;
}

void func_162(var uParam0, int iParam1)
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

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_42596);
}

int func_164(int iParam0, int iParam1)
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

int func_165(int iParam0)
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	if (func_163(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_166()
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 1:
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(iLocal_71))
		{
			if (unk_0xBC7D3EDF3455BC35(iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_167(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 6f, 6f, 6f };
	Var2 = { -6f, -6f, -6f };
	if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xF68107C40359970C(iLocal_71))
		{
			if (iParam0 == 0 || func_114(iLocal_71, iLocal_72, 1) > 15f)
			{
				if (unk_0x9AC74C7EF847A074(unk_0x6EA486FF6D815B4B(iLocal_71, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				Var1 = { Var1 + unk_0x6EA486FF6D815B4B(iLocal_71, 31086, 0f, 0f, 0f) };
				Var2 = { Var2 + unk_0x6EA486FF6D815B4B(iLocal_71, 31086, 0f, 0f, 0f) };
				if ((unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0xA1C6623FC1047DAD(Var2, Var1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x6A1EDF18639D033E(unk_0x6EA486FF6D815B4B(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x89D0E0233F6E59A7(-1, unk_0x6EA486FF6D815B4B(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x0747E45CFF1F74AA(iLocal_71, unk_0xE2D3D51028F0428A(), 1))
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

int func_168(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	Var1 = { Local_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 1:
			Local_86 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			Local_87 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			Local_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_86) < vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_87))
			{
				Var1 = { Local_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				Var1 = { Local_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 2:
			Local_87 = { -538.6718f, -2183.442f, 5.2336f };
			Local_86 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			Local_88 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_86) < vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	unk_0xD69A0C3662175E68(iVar3);
	unk_0xD69A0C3662175E68(iVar4);
	unk_0xD69A0C3662175E68(iVar5);
	unk_0x8FB472886552D737(sLocal_79);
	unk_0x8FB472886552D737(sLocal_80);
	unk_0x8FB472886552D737(sLocal_81);
	unk_0x8FB472886552D737("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x9E63031C188793E1();
	if (((((((unk_0x0152AA00FA3130F1(iVar3) && unk_0x0152AA00FA3130F1(iVar4)) && unk_0x0152AA00FA3130F1(iVar5)) && unk_0x6F940C2636C076AD(sLocal_79)) && unk_0x6F940C2636C076AD(sLocal_80)) && unk_0x6F940C2636C076AD(sLocal_81)) && unk_0x6F940C2636C076AD("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x51B6C2EF8DBE2E1A())
	{
		if (iLocal_121 == 1)
		{
			func_183("re_cartheft - Distance to vTop = ", vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_86));
			func_183("re_cartheft - Distance to vBottom = ", vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_87));
			iLocal_73 = unk_0xBA715A7BEBA5A1F9(iVar5, Var1, fVar2, 1, 1, 0);
			unk_0x6D60ABBA76DB955A(iLocal_73, 0, 0);
			unk_0xAFE1B52F0DE91595(iLocal_73, 0);
			unk_0x05EAB38F5AC8DA1D(iLocal_73, 1);
			unk_0x076B41121BFB1C77(iLocal_73, 0);
			unk_0xF80F852786CB8BB0(iLocal_73, 0);
			unk_0x45A6EA15139A0C54(iLocal_73, 2, 0);
			iLocal_72 = unk_0x487C17B41938052C(iLocal_73, 22, iVar4, -1, 1, 1);
			unk_0xD6A76BAB45A4B460(iLocal_72, 42, 1);
			unk_0xBC12D08EE7559CCD(iLocal_72, 3, 1);
			unk_0x9521FB98DB6DDF50(iLocal_72, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x348A212511C78DBF(iLocal_72, 10);
			unk_0x7F3313F2F80DD857(iLocal_72, 1f);
			unk_0x20EEEABBC2C25C15(iLocal_72, 1f);
			unk_0x58DAFDEB2F46A5EA(iLocal_73, 135, 135);
			unk_0xD642E010A287ADFD("re_cartheft relGroupThief", &iLocal_137);
			unk_0x9972EFADA7A2A47D(5, iLocal_137, 1862763509);
			unk_0x9972EFADA7A2A47D(2, iLocal_137, 45677184);
			unk_0x9972EFADA7A2A47D(2, 45677184, iLocal_137);
			unk_0xFF4BEB6CFF55A013(iLocal_72, iLocal_137);
			unk_0x0407CF7EFEE35240(iLocal_73, 1);
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - Local_50 };
				uLocal_51 = unk_0xD12EFCAB87804BED(Var0.x, Var0.f_1);
			}
			iLocal_71 = unk_0xA8D58C3AADA2C41C(5, iVar3, Local_50, uLocal_51, 1, 1);
			unk_0xEEBC95A38CBDED42(iLocal_71, sVar7);
			unk_0xF30F15F203736DE4(iLocal_71, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
			unk_0xE3752B10DC995E95(iLocal_71, 0, 0, 1, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 2, 2, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 3, 1, 1, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 4, 1, 1, 0);
			unk_0x059473086913178C(iLocal_71, 1);
			if (bLocal_57)
			{
				Local_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				Local_83 = { -2252.683f, 4274.16f, 45.0612f };
				Local_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				Local_97 = { -2258.04f, 4272.244f, 45.75466f };
				Local_98 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				Local_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				Local_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				Local_83 = { -2257.088f, 4268.938f, 44.6456f };
				Local_97 = { -2254.886f, 4273.539f, 46.2282f };
				Local_98 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = unk_0xBA715A7BEBA5A1F9(iVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1, 0);
			}
			else
			{
				iLocal_73 = unk_0xBA715A7BEBA5A1F9(iVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1, 0);
			}
			unk_0x6D60ABBA76DB955A(iLocal_73, 0, 0);
			unk_0xAFE1B52F0DE91595(iLocal_73, 0);
			unk_0xD584204572DF0440(iLocal_73, 3);
			unk_0x05EAB38F5AC8DA1D(iLocal_73, 1);
			unk_0x3C1BCE3438ECBFC0(iLocal_73, 0);
			unk_0x0061B7C9351B41ED(iLocal_73, 11, 2, 0);
			unk_0x0061B7C9351B41ED(iLocal_73, 16, 3, 0);
			unk_0x0061B7C9351B41ED(iLocal_73, 12, 1, 0);
			unk_0x0061B7C9351B41ED(iLocal_73, 13, 1, 0);
			unk_0xE19D99912C7661C6(iLocal_73, 3);
			unk_0x0061B7C9351B41ED(iLocal_73, 23, 6, 0);
			unk_0x2EB7787881686751(iLocal_73, 3);
			unk_0x6C6188D0F8AB739A(iLocal_73, 18, 1);
			unk_0x6C6188D0F8AB739A(iLocal_73, 22, 1);
			unk_0x58DAFDEB2F46A5EA(iLocal_73, 143, 0);
			unk_0x952B5201CC721090(iLocal_73, 31, 2);
			unk_0x076B41121BFB1C77(iLocal_73, 0);
			unk_0xF80F852786CB8BB0(iLocal_73, 0);
			if (bLocal_57)
			{
				iLocal_71 = unk_0xA8D58C3AADA2C41C(5, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				iLocal_71 = unk_0xA8D58C3AADA2C41C(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				iLocal_71 = unk_0xA8D58C3AADA2C41C(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			unk_0xE3752B10DC995E95(iLocal_71, 0, 0, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 2, 1, 0, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 3, 1, 2, 0);
			unk_0xE3752B10DC995E95(iLocal_71, 4, 1, 2, 0);
			iLocal_72 = unk_0x487C17B41938052C(iLocal_73, 22, iVar4, -1, 1, 1);
			unk_0x9521FB98DB6DDF50(iLocal_72, joaat("weapon_pistol"), -1, 1, 1);
			unk_0x348A212511C78DBF(iLocal_72, 10);
			unk_0x7F3313F2F80DD857(iLocal_72, 1f);
			unk_0x20EEEABBC2C25C15(iLocal_72, 1f);
			unk_0xD6A76BAB45A4B460(iLocal_72, 42, 1);
			unk_0xEEBC95A38CBDED42(iLocal_72, sVar8);
			Local_84 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_89 = 294.4744f;
			Local_83 = { -501.0442f, -2150.799f, 8.139f };
			Local_85 = { -493.8062f, -2156.036f, 8.1978f };
			Local_97 = { -504.365f, -2144.534f, 9.8585f };
			Local_98 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0xA7266A50941DBAEA(iLocal_71, 0);
		unk_0xD6A76BAB45A4B460(iLocal_71, 185, 1);
		unk_0x65ABD7FBFFDBB638(iLocal_73, 0);
		unk_0x371D594409A68A18(iLocal_73, 1, 1, 0);
		unk_0x50274A7EACA3133A(iLocal_71, 1);
		unk_0x50274A7EACA3133A(iLocal_72, 1);
		unk_0xF30F15F203736DE4(iLocal_71, iLocal_72, -1, 0, 2);
		unk_0x66E36C5E6E28930C(iLocal_73);
		unk_0x0407CF7EFEE35240(iLocal_73, 1);
		unk_0x2EABFF5EFCB7E6CF(iLocal_73, 0, 0);
		unk_0x7CD708DEB04F8474(iVar5, 1);
		unk_0x66B27A59829491D3("RE_CAR_STEAL_SCENE");
		unk_0x2A375326652F1B50(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0x11647D34B93A72EB(iLocal_73, 1);
		unk_0xBC12D08EE7559CCD(iLocal_71, 17, 0);
		unk_0xDC6110E0F8FF9DA0(iLocal_71, 512, 1);
		switch (func_10())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		func_182(&Local_102, 0, unk_0xE2D3D51028F0428A(), sLocal_100, 0, 1);
		func_182(&Local_102, 1, iLocal_71, sVar6, 0, 1);
		func_182(&Local_102, 2, iLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_170())
	{
		func_237();
	}
	return 0;
}

int func_170()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_13(func_10()))
		{
			iVar5 = func_136();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 2) && !unk_0xE2D0C323A1AE5D85(Global_112915.f_18574[iVar1 /*6*/], 3))
				{
					func_172(iVar1, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_112633 > 0;
}

int func_179()
{
	if (Global_96896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

void func_182(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_183(char* sParam0, float fParam1)
{
	func_185(sParam0);
	func_184(fParam1);
}

void func_184(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_185(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, uParam0))
	{
	}
}

int func_186()
{
	if (!func_163(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if ((Global_112904 == func_140() && unk_0xE3BBDB1C36703410()) && Global_112905)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	if (func_116(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0) != iLocal_73 && unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0) != iLocal_76)
			{
				iLocal_76 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			}
		}
	}
}

void func_189(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x320D1840B6DAA1CC();
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		iVar0 = (unk_0x320D1840B6DAA1CC() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x6BABDF7A460158CE(uParam0) != 255)
				{
					unk_0xFBBD8F124403B0F5(uParam0, 255);
				}
			}
			else if (unk_0x6BABDF7A460158CE(uParam0) != 0)
			{
				unk_0xFBBD8F124403B0F5(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x6BABDF7A460158CE(uParam0) != 255)
			{
				unk_0xFBBD8F124403B0F5(uParam0, 255);
			}
		}
	}
}

void func_190()
{
}

void func_191(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_193(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_112901 = 0;
	func_192();
}

void func_192()
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

void func_193(int iParam0)
{
	Global_112904 = iParam0;
}

int func_194(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_140();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_234())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (vmag2(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_112915.f_9085)
		{
			return 0;
		}
		if (func_123(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_233())
		{
			return 0;
		}
		if (Global_112904 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_171(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_232(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_231(func_10()) == 4 || func_231(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_230(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_229(Global_112915.f_24995.f_43[iParam1]))
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
		if (func_228())
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
		if (!func_219(4))
		{
			return 0;
		}
		if (!func_163(5))
		{
			return 0;
		}
		if (func_218(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_31652)
		{
			return 0;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_112915.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_112915.f_2363.f_539.f_2296[iVar2];
				if (func_217(iVar4))
				{
					if (func_195(iVar2))
					{
						if (!func_98(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var3) < (210f * 210f))
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

bool func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112915.f_2363.f_539.f_2296[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_200(to_float(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)
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

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_203(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_204(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_205(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_206(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_207(unk_0xE2D0C323A1AE5D85(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	var uVar0;
	
	func_216(&uVar0, unk_0xAA2844CAD88768B5());
	func_215(&uVar0, unk_0x80F97D7D29800A1A());
	func_214(&uVar0, unk_0x09FC827691DACE59());
	func_213(&uVar0, unk_0xD52BD97E61483713());
	func_212(&uVar0, unk_0x771485043FDC55DE());
	func_211(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_211(var uParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_215(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_217(int iParam0)
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Global_112915.f_24995.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_227()) || Global_111962) || Global_31508) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_227()) || Global_31508) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_227()) || Global_111962) || Global_31508) || func_226()) || func_59(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5) || Global_43143 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_227()) || Global_111962) || Global_31508) || func_226()) || func_59(8, -1)) || func_225()) || func_224()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_59(8, -1)) || func_222()) || func_221()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_227()) || Global_31508) || func_226()) || func_59(8, -1)) || func_224()) || func_223()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_227()) || func_224()) || Global_111962) || Global_31508) || func_226()) || Global_43774) || func_59(8, -1)) || func_223()) || func_221()) || func_222()) || Global_112915.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_227()) || Global_111962) || Global_31508) || func_226()) || func_59(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

var func_220()
{
	return Global_100013.f_1;
}

int func_221()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_222()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
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

bool func_224()
{
	return Global_100026.f_376 > 0;
}

bool func_225()
{
	return Global_100026.f_375 > 0;
}

var func_226()
{
	return Global_1575046;
}

int func_227()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

int func_228()
{
	func_57();
	if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)
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

int func_231(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_112915.f_7688.f_919[iParam0];
}

bool func_232(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
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

int func_233()
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

int func_234()
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

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_93959[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_90726)
	{
		if (Global_90726[iVar0 /*5*/] != -1)
		{
			if (Global_78121.f_109[Global_90726[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_236()
{
	if (vdist(Local_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_121 = 1;
	}
	else if (vdist(Local_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_121 = 2;
	}
}

void func_237()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_72) && !unk_0x55B23FE400FCEA6B(iLocal_72, 0))
	{
		unk_0x50274A7EACA3133A(iLocal_72, 0);
		unk_0xF1A23B343DFEDFD0(unk_0x15CAA6D7B11F1A7C(iLocal_72));
		func_249(&iLocal_72, 1, 0, 1);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_71) && !unk_0x55B23FE400FCEA6B(iLocal_71, 0))
	{
		unk_0x3E3D339BAD67F6F2(iLocal_71, 310, 1);
		unk_0x50274A7EACA3133A(iLocal_71, 0);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_60))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_60);
	}
	func_69(&uLocal_63);
	if (unk_0x12DD4A0B247D9B4D(uLocal_61))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_61);
	}
	if (unk_0xA37204C64473B324("RE_CAR_STEAL_SCENE"))
	{
		if (func_168(iLocal_73))
		{
			unk_0x5545B7D117BB40B4(iLocal_73, 0);
		}
		unk_0x0AF8D3A06BB92903("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 2)
	{
		unk_0x72DBC5D8E674E2ED(joaat("rocoto"));
	}
	else
	{
		unk_0x72DBC5D8E674E2ED(joaat("peyote"));
	}
	func_17(&iLocal_73);
	if (func_168(iLocal_76))
	{
		unk_0xAFE1B52F0DE91595(iLocal_76, 1);
	}
	unk_0x9B8A09AAD1CFEFB3(0);
	unk_0x8576657A629C4B0A(1f);
	func_152(39, 0);
	func_152(40, 0);
	func_152(41, 0);
	func_152(42, 0);
	func_152(43, 0);
	func_152(44, 0);
	func_238(-1);
	func_71(&uLocal_138, 0, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_238(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_140();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_187())
	{
		func_242(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_112906 = unk_0x320D1840B6DAA1CC();
		func_241(30000);
		StringCopy(&cVar0, func_240(Global_112904, 1), 64);
		if (func_139(Global_112904) > 0)
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
	func_239(&Global_31565);
	Global_112905 = 0;
	func_193(-1);
}

void func_239(var uParam0)
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

char* func_240(int iParam0, bool bParam1)
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

void func_241(int iParam0)
{
	Global_43147 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_242(int iParam0)
{
	func_243(iParam0, 0, func_248(iParam0));
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_246(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_245(iParam0, &uVar0);
	Var1 = { func_244(&uVar0) };
}

struct<16> func_244(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_203(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_245(int iParam0, var uParam1)
{
	Global_112915.f_24995.f_43[iParam0] = *uParam1;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_247(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_248(int iParam0)
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

void func_249(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

