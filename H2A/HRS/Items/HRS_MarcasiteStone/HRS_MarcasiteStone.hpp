class HRS_MarcasiteStone: SmallStone
{
	scope = 2;
	displayName = "$STR_HRS_MarcasiteStone0";
	descriptionShort = "$STR_HRS_MarcasiteStone1";
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone_co.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone.rvmat"};
	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {
						{1.0,{"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone.rvmat"}},
						{0.7,{"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone.rvmat"}},
						{0.5,{"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone_damage.rvmat"}},
						{0.3,{"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone_damage.rvmat"}},
						{0.0,{"H2A\HRS\Items\HRS_MarcasiteStone\Data\stone_destruct.rvmat"}}
					};
				};
			};
		};
};
