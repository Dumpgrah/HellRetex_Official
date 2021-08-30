class HRM_TacticalBag_Base: Clothing
{
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_TacticalBag_g.p3d";
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
	itemSize[] = { 5, 6 };
	itemsCargoSize[] = { 7, 10 };
	weight = 2800;
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
		"Machete"
	};
	
	hiddenSelections[] = 
	{ 
		"zbytek",
		"groundCamo" 
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_TacticalBag.p3d";
		female = "H2A\HRM\GearsAssets\HRM_TacticalBag.p3d";
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
					{1.00000000,{"H2A\HRM\GearsAssets\Data\HRM_TacticalBag.rvmat"}},
					{0.69999999,{"H2A\HRM\GearsAssets\Data\HRM_TacticalBag.rvmat"}},
					{0.50000000,{"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_damage.rvmat"}},
					{0.30000001,{"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_damage.rvmat"}},
					{0.00000000,{"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRM_TacticalBag_OliveDrab: HRM_TacticalBag_Base
{
	scope = 2;
	displayName = "$STR_TacticalBag_OliveDrab";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_OliveDrab_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_OliveDrab_co.paa" 
	};
};

class HRM_TacticalBag_Black: HRM_TacticalBag_Base
{
	scope = 2;
	displayName = "$STR_TacticalBag_Black";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_Black_co.paa" 
	};
};

class HRM_TacticalBag_Tan: HRM_TacticalBag_Base
{
	scope = 2;
	displayName = "$STR_TacticalBag_Tan";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_Tan_co.paa" 
	};
};

class HRM_TacticalBag_CoyoteBrown: HRM_TacticalBag_Base
{
	scope = 2;
	displayName = "$STR_TacticalBag_CoyoteBrown";
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_CoyoteBrown_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_TacticalBag_CoyoteBrown_co.paa" 
	};
};