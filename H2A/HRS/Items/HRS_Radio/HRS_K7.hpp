class HRS_K7: Inventory_Base
{
	scope = 0;
	model = "DZ\gear\radio\cassette.p3d";
	weight = 50;
	itemSize[] = {1,1};

	inventorySlot[]=
	{
		"Tape"
	};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = 
				{
					{1.0,{"DZ\gear\radio\data\cassette.rvmat"}},
					{0.7,{"DZ\gear\radio\data\cassette.rvmat"}},
					{0.5,{"DZ\gear\radio\data\cassette_damage.rvmat"}},
					{0.3,{"DZ\gear\radio\data\cassette_damage.rvmat"}},
					{0.0,{"DZ\gear\radio\data\cassette_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRS_K7_Electro: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_Electro0";
	descriptionShort = "$STR_HRS_K7_Electro1";
};

class HRS_K7_Jazz: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_Jazz0";
	descriptionShort = "$STR_HRS_K7_Jazz1";
};

class HRS_K7_Rock: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_Rock0";
	descriptionShort = "$STR_HRS_K7_Rock1";
};

class HRS_K7_8Bit: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_8Bit0";
	descriptionShort = "$STR_HRS_K7_8Bit1";
};

class HRS_K7_Pop: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_Pop0";
	descriptionShort = "$STR_HRS_K7_Pop1";
};

class HRS_K7_Folk: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_Folk0";
	descriptionShort = "$STR_HRS_K7_Folk1";
};

class HRS_K7_PopRock: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_PopRock0";
	descriptionShort = "$STR_HRS_K7_PopRock1";
};	

class HRS_K7_ElectroInstrumental: HRS_K7
{
	scope = 2;
	displayName = "$STR_HRS_K7_ElectroInstrumental0";
	descriptionShort = "$STR_HRS_K7_ElectroInstrumental1";
};