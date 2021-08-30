class HRM_Civilian_SherpaBag_Base: Clothing
{
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_Civilian_SherpaBag_g.p3d";
	inventorySlot = "Back";
	simulation = "clothing";
	vehicleClass = "Clothing";
	
	itemInfo[] = 
	{ 
		"Clothing", 
		"Back" 
	};
	
	rotationFlags = 16;
	itemSize[] = { 5, 7 };
	itemsCargoSize[] = { 10, 9 };
	weight = 2100;
	absorbency = 0.2;
	heatIsolation = 0.13;
	repairableWithKits[] = { 5, 3 };
	repairCosts[] = { 30, 25 };
	soundAttType = "Outdoor";
	
	attachments[] = 
	{ 
		"Chemlight",
		"WalkieTalkie",
		"Shoulder" 
	};
	
	hiddenSelections[] = 
	{ 
		"zbytek",
		"groundCamo" 
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_Civilian_SherpaBag.p3d";
		female = "H2A\HRM\GearsAssets\HRM_Civilian_SherpaBag.p3d";
	};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.00000000,{"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag.rvmat"}},
					{0.69999999,{"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag.rvmat"}},
					{0.50000000,{"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_damage.rvmat"}},
					{0.30000001,{"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_damage.rvmat"}},
					{0.00000000,{"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRM_Civilian_SherpaBag_Olive: HRM_Civilian_SherpaBag_Base
{
	scope = 2;
	displayName = "$STR_SherpaBag_Olive";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Olive_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Olive_co.paa" 
	};
};

class HRM_Civilian_SherpaBag_Wine: HRM_Civilian_SherpaBag_Base
{
	scope = 2;
	displayName = "$STR_SherpaBag_Wine";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Wine_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Wine_co.paa" 
	};
};

class HRM_Civilian_SherpaBag_Sand: HRM_Civilian_SherpaBag_Base
{
	scope = 2;
	displayName = "$STR_SherpaBag_Sand";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Sand_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_Sand_co.paa" 
	};
};

class HRM_Civilian_SherpaBag_CadetBlue: HRM_Civilian_SherpaBag_Base
{
	scope = 2;
	displayName = "$STR_SherpaBag_CadetBlue";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_CadetBlue_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_Civilian_SherpaBag_CadetBlue_co.paa" 
	};
};