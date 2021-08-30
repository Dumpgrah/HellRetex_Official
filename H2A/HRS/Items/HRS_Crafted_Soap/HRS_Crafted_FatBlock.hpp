class HRS_Crafted_FatBlock: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_FatBlock0";
	descriptionShort = "$STR_HRS_FatBlock1";	
	model = "H2A\HRS\Items\HRS_Crafted_Soap\HRS_Crafted_Soap.p3d";
	weight = 200;
	itemSize[] = {1,2};
	hiddenSelections[] = {"zbytek"};
	rotationFlags=4;
	
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat.rvmat"};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{	
					{1.0,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Fat_destruct.rvmat"}}
				};
			};
		};
	};
};