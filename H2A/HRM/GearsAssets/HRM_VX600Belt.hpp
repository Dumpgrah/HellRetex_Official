class HRM_VX600Belt: Clothing
{
	scope = 0;
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_VX600Belt_g.p3d";
	attachments[] = { "Belt_Back", "Belt_Right", "Belt_Left" };
	vehicleClass = "Clothing";
	simulation = "clothing";
	inventorySlot[] = { "Hips" };
	itemInfo[] = { "Clothing", "Belt" };
	itemSize[] = { 4, 6 };
	weight = 1490;
	itemsCargoSize[] = { 4, 6 };
	repairableWithKits[] = { 5, 3 };
	repairCosts[] = { 35, 25 };
	rotationFlags = 5;
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRM\GearsAssets\Data\HRM_VX600Belt.rvmat"}},
					{0.7,{"H2A\HRM\GearsAssets\Data\HRM_VX600Belt.rvmat"}},
					{0.5,{"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_damage.rvmat"}}, // dmged
					{0.3,{"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_damage.rvmat"}}, // dmged
					{0.0,{"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_destruct.rvmat"}} // destred
				};
			};
		};
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_VX600Belt.p3d";
		female = "H2A\HRM\GearsAssets\HRM_VX600Belt.p3d";
	};

	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem
			{
				soundSet = "WorkingGloves_pickup_SoundSet";
				id = 797;
			};

			class drop
			{
				soundset = "WorkingGloves_drop_SoundSet";
				id = 898;
			};
		};
	};
};

class HRM_VX600Belt_Barracuda: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Barracuda";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Barracuda_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Barracuda_co.paa"
	};
};

class HRM_VX600Belt_CADPAT: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_CADPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CADPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CADPAT_co.paa"
	};
};

class HRM_VX600Belt_CCE: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_CCE";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CCE_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CCE_co.paa"
	};
};

class HRM_VX600Belt_DigitalFlora: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_DigitalFlora";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_DigitalFlora_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_DigitalFlora_co.paa"
	};
};

class HRM_VX600Belt_DPM: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_DPM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_DPM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_DPM_co.paa"
	};
};

class HRM_VX600Belt_ERDLUrban: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_ERDLUrban";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_ERDLUrban_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_ERDLUrban_co.paa"
	};
};

class HRM_VX600Belt_Flecktarn: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Flecktarn";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Flecktarn_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Flecktarn_co.paa"
	};
};

class HRM_VX600Belt_Kamysh: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Kamysh";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Kamysh_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Kamysh_co.paa"
	};
};

class HRM_VX600Belt_Lizard: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Lizard";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Lizard_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Lizard_co.paa"
	};
};

class HRM_VX600Belt_Multicam: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Multicam";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Multicam_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Multicam_co.paa"
	};
};

class HRM_VX600Belt_MulticamAlpine: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_MulticamAlpine";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamAlpine_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamAlpine_co.paa"
	};
};

class HRM_VX600Belt_MulticamArid: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_MulticamArid";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamArid_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamArid_co.paa"
	};
};

class HRM_VX600Belt_MulticamBlack: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_MulticamBlack";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamBlack_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamBlack_co.paa"
	};
};

class HRM_VX600Belt_MulticamTropic: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_MulticamTropic";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamTropic_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_MulticamTropic_co.paa"
	};
};

class HRM_VX600Belt_PartizanM: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_PartizanM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_PartizanM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_PartizanM_co.paa"
	};
};

class HRM_VX600Belt_Scorpion: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Scorpion";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Scorpion_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Scorpion_co.paa"
	};
};

class HRM_VX600Belt_Skol: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Skol";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Skol_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Skol_co.paa"
	};
};

class HRM_VX600Belt_SUMRAK: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_SUMRAK";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_SUMRAK_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_SUMRAK_co.paa"
	};
};

class HRM_VX600Belt_SURPAT: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_SURPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_SURPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_SURPAT_co.paa"
	};
};

class HRM_VX600Belt_TigerStripes: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_TigerStripes";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_TigerStripes_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_TigerStripes_co.paa"
	};
};

class HRM_VX600Belt_VSR: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_VSR";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_VSR_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_VSR_co.paa"
	};
};

class HRM_VX600Belt_Black: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Black";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Black_co.paa"
	};
};

class HRM_VX600Belt_CoyoteBrown: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_CoyoteBrown";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CoyoteBrown_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_CoyoteBrown_co.paa"
	};
};

class HRM_VX600Belt_OliveDrab: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_OliveDrab";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_OliveDrab_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_OliveDrab_co.paa"
	};
};

class HRM_VX600Belt_Tan: HRM_VX600Belt
{
	scope = 2;
	displayName = "$STR_VX600Belt_Tan";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = { 
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_VX600Belt_Tan_co.paa"
	};
};