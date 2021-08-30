class HRS_HikingPot: Pot
{
	scope = 2;
	displayName = "$STR_HRS_HikingPot0";
	descriptionShort = "$STR_HRS_HikingPot1";
	model = "H2A\HRS\Items\HRS_HikingPot\HRS_HikingPot.p3d";
	weight = 220;
	itemSize[] = { 2, 2 };
	itemsCargoSize[] = { 3, 3 };
	varQuantityInit = 512;
	varQuantityMin = 0;
	varQuantityMax = 1000;

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = 
				{
					{1.01,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},
					{0.69999999,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},
					{0.5,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},
					{0.30000001,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},
					{0.01,{"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"}}
				};
			};
		};
	};
};