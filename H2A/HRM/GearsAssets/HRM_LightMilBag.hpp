class HRM_LightMilBag_Base: Clothing
{
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_LightMilBag_g.p3d";
	inventorySlot = "Back";
	simulation = "clothing";
	vehicleClass = "Clothing";
	
	itemInfo[] = 
	{ 
		"Clothing", 
		"Back" 
	};
	
	rotationFlags = 16;
	itemSize[] = { 4, 5 };
	itemsCargoSize[] = { 7, 7 };
	weight = 1500;
	absorbency = 0;
	heatIsolation = 0.13;
	repairableWithKits[] = { 5, 3 };
	repairCosts[] = { 30, 25 };
	soundAttType = "Outdoor";
	
	attachments[] = 
	{ 
		"Chemlight",
		"WalkieTalkie",
		"Belt_Right" 
	};
	
	hiddenSelections[] = 
	{ 
		"zbytek",
		"groundCamo" 
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_LightMilBag.p3d";
		female = "H2A\HRM\GearsAssets\HRM_LightMilBag.p3d";
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
					{1.00000000,{"H2A\HRM\GearsAssets\Data\HRM_LightMilBag.rvmat"}},
					{0.69999999,{"H2A\HRM\GearsAssets\Data\HRM_LightMilBag.rvmat"}},
					{0.50000000,{"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_damage.rvmat"}},
					{0.30000001,{"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_damage.rvmat"}},
					{0.00000000,{"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRM_LightMilBag_OliveDrab: HRM_LightMilBag_Base
{
	scope = 2;
	displayName = "$STR_LightMilBag_OliveDrab";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_OliveDrab_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_OliveDrab_co.paa" 
	};
};

class HRM_LightMilBag_Black: HRM_LightMilBag_Base
{
	scope = 2;
	displayName = "$STR_LightMilBag_Black";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_Black_co.paa" 
	};
};

class HRM_LightMilBag_Tan: HRM_LightMilBag_Base
{
	scope = 2;
	displayName = "$STR_LightMilBag_Tan";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_Tan_co.paa" 
	};
};

class HRM_LightMilBag_CoyoteBrown: HRM_LightMilBag_Base
{
	scope = 2;
	displayName = "$STR_LightMilBag_CoyoteBrown";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_CoyoteBrown_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_LightMilBag_CoyoteBrown_co.paa" 
	};
};