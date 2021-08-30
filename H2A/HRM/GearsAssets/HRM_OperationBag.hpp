class HRM_OperationBag_Base: Clothing
{
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_OperationBag_g.p3d";
	inventorySlot = "Back";
	simulation = "clothing";
	vehicleClass = "Clothing";
	
	simpleHiddenSelections[] = 
	{
		"left_attachment_on",
		"left_attachment_off",
		"right_attachment_on",
		"right_attachment_off"
	};
	
	itemInfo[] = 
	{ 
		"Clothing", 
		"Back" 
	};
	
	rotationFlags = 16;
	itemSize[] = { 5, 8 };
	itemsCargoSize[] = { 10, 12 };
	weight = 3000;
	absorbency = 0;
	heatIsolation = 0.13;
	repairableWithKits[] = { 5, 3 };
	repairCosts[] = { 30, 25 };
	soundAttType = "Outdoor";
	
	attachments[] = 
	{ 
		"Chemlight",
		"WalkieTalkie",
		"Shoulder",
		"Melee",
		"Belt_Left",
		"Rope"
	};
	
	hiddenSelections[] = 
	{ 
		"zbytek",
		"groundCamo" 
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_OperationBag.p3d";
		female = "H2A\HRM\GearsAssets\HRM_OperationBag.p3d";
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
					{1.00000000,{"H2A\HRM\GearsAssets\Data\HRM_OperationBag.rvmat"}},
					{0.69999999,{"H2A\HRM\GearsAssets\Data\HRM_OperationBag.rvmat"}},
					{0.50000000,{"H2A\HRM\GearsAssets\Data\HRM_OperationBag_damage.rvmat"}},
					{0.30000001,{"H2A\HRM\GearsAssets\Data\HRM_OperationBag_damage.rvmat"}},
					{0.00000000,{"H2A\HRM\GearsAssets\Data\HRM_OperationBag_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRM_OperationBag_OliveDrab: HRM_OperationBag_Base
{
	scope = 2;
	displayName = "$STR_OperationBag_OliveDrab";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_OliveDrab_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_OliveDrab_co.paa" 
	};
};

class HRM_OperationBag_Black: HRM_OperationBag_Base
{
	scope = 2;
	displayName = "$STR_OperationBag_Black";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_Black_co.paa" 
	};
};

class HRM_OperationBag_Tan: HRM_OperationBag_Base
{
	scope = 2;
	displayName = "$STR_OperationBag_Tan";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_Tan_co.paa" 
	};
};

class HRM_OperationBag_CoyoteBrown: HRM_OperationBag_Base
{
	scope = 2;
	displayName = "$STR_OperationBag_CoyoteBrown";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_CoyoteBrown_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_OperationBag_CoyoteBrown_co.paa" 
	};
};