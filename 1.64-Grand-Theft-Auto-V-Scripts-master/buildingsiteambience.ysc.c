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
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
#endregion

void main() // Position - 0x0
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

	if (unk_0x55EEDBBFDC6E810F(67))
	{
		if (unk_0xC62B624C267237C2() != 2)
			func_4(19);
	
		func_3();
	}

	func_2(19);
	unk_0xD3EC2BD7C1DEA1A7(1);

	while (!unk_0xF379D4FB3767B7FF("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}

	unk_0x5B0B38F44494AF79(-147f, -1005f, 28f);

	while (func_1(70))
	{
		SYSTEM::WAIT(0);
	}

	func_4(19);
	func_3();
	return;
}

BOOL func_1(int iParam0) // Position - 0xB6
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_2(int iParam0) // Position - 0xE3
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], num2))
		return 0;

	unk_0xECDAB41968FF21A8(&Global_113648.f_9087.f_99.f_219[num], num2);
	return 1;
}

void func_3() // Position - 0x13A
{
	unk_0x0AED5D631A4A1C97();
	unk_0xB68010349746BC3E();
	unk_0x675D9C12C73D3DE7();
	return;
}

int func_4(int iParam0) // Position - 0x14E
{
	int num;
	int num2;

	if (iParam0 <= 31)
	{
		num = 9;
		num2 = iParam0;
	}
	else
	{
		num = 10;
		num2 = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], num2))
	{
		unk_0x061B1200C95204CB(&Global_113648.f_9087.f_99.f_219[num], num2);
		return 1;
	}

	return 0;
}

