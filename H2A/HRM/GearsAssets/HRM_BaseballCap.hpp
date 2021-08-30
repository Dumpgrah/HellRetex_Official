class HRM_BaseballCap: Clothing
{
	scope = 0;
	descriptionShort = "$STR_HellRetex_Desc";
	model = "H2A\HRM\GearsAssets\HRM_BaseballCap_g.p3d";
	inventorySlot[] = { "Headgear" };
	simulation = "clothing";
	vehicleClass = "Clothing";
	
	itemInfo[] = 
	{ 
		"Clothing",
		"Headgear" 
	};

	rotationFlags = 0;
	weight = 110;
	itemSize[] = { 3, 2 };
	absorbency = 0.80000001;
	heatIsolation = 0.25;
	repairableWithKits[] = { 5, 2 };
	repairCosts[] = { 30, 25 };
	headSelectionsToHide[] = { "Clipping_baseballcap" };
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1,{"H2A\HRM\GearsAssets\Data\HRM_BaseballCap.rvmat"}},
					{0.69999999,{"H2A\HRM\GearsAssets\Data\HRM_BaseballCap.rvmat"}},
					{0.5,{"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_damage.rvmat"}},
					{0.30000001,{"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_damage.rvmat"}},
					{0,{"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_destruct.rvmat"}}
				};
			};
		};
	};
	
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_BaseballCap.p3d";
		female = "H2A\HRM\GearsAssets\HRM_BaseballCap.p3d";
	};

	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem
			{
				soundSet = "Shirt_pickup_SoundSet";
				id = 797;
			};
			class drop
			{
				soundset = "Shirt_drop_SoundSet";
				id = 898;
			};
		};
	};
};

class HRM_BaseballCapInverted: HRM_BaseballCap
{
	scope = 0;
	class ClothingTypes
	{
		male = "H2A\HRM\GearsAssets\HRM_BaseballCapInverted.p3d";
		female = "H2A\HRM\GearsAssets\HRM_BaseballCapInverted.p3d";
	};
};

class HRM_BaseballCap_Green: HRM_BaseballCap
{
	scope = 2;
	color = "Green";
	displayName = "$STR_BaseballCap_Green";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Green_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Green_co.paa"
	};
};

class HRM_BaseballCapInverted_Green: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Green";
	displayName = "$STR_BaseballCap_Green";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Green_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Green_co.paa"
	};
};

class HRM_BaseballCap_Black: HRM_BaseballCap
{
	scope = 2;
	color = "Black";
	displayName = "$STR_BaseballCap_Black";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Black_co.paa"
	};
};

class HRM_BaseballCapInverted_Black: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Black";
	displayName = "$STR_BaseballCap_Black";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Black_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Black_co.paa"
	};
};

class HRM_BaseballCap_Tan: HRM_BaseballCap
{
	scope = 2;
	color = "Tan";
	displayName = "$STR_BaseballCap_Tan";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Tan_co.paa"
	};
};

class HRM_BaseballCapInverted_Tan: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Tan";
	displayName = "$STR_BaseballCap_Tan";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Tan_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Tan_co.paa"
	};
};

class HRM_BaseballCap_Barracuda: HRM_BaseballCap
{
	scope = 2;
	color = "Barracuda";
	displayName = "$STR_BaseballCap_Barracuda";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Barracuda_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Barracuda_co.paa"
	};
};

class HRM_BaseballCapInverted_Barracuda: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Barracuda";
	displayName = "$STR_BaseballCap_Barracuda";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Barracuda_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Barracuda_co.paa"
	};
};

class HRM_BaseballCap_CADPAT: HRM_BaseballCap
{
	scope = 2;
	color = "CADPAT";
	displayName = "$STR_BaseballCap_CADPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CADPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CADPAT_co.paa"
	};
};

class HRM_BaseballCapInverted_CADPAT: HRM_BaseballCapInverted
{
	scope = 2;
	color = "CADPAT";
	displayName = "$STR_BaseballCap_CADPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CADPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CADPAT_co.paa"
	};
};

class HRM_BaseballCap_CCE: HRM_BaseballCap
{
	scope = 2;
	color = "CCE";
	displayName = "$STR_BaseballCap_CCE";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CCE_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CCE_co.paa"
	};
};

class HRM_BaseballCapInverted_CCE: HRM_BaseballCapInverted
{
	scope = 2;
	color = "CCE";
	displayName = "$STR_BaseballCap_CCE";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CCE_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_CCE_co.paa"
	};
};

class HRM_BaseballCap_DigitalFlora: HRM_BaseballCap
{
	scope = 2;
	color = "DigitalFlora";
	displayName = "$STR_BaseballCap_DigitalFlora";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DigitalFlora_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DigitalFlora_co.paa"
	};
};

class HRM_BaseballCapInverted_DigitalFlora: HRM_BaseballCapInverted
{
	scope = 2;
	color = "DigitalFlora";
	displayName = "$STR_BaseballCap_DigitalFlora";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DigitalFlora_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DigitalFlora_co.paa"
	};
};

class HRM_BaseballCap_DPM: HRM_BaseballCap
{
	scope = 2;
	color = "DPM";
	displayName = "$STR_BaseballCap_DPM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DPM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DPM_co.paa"
	};
};

class HRM_BaseballCapInverted_DPM: HRM_BaseballCapInverted
{
	scope = 2;
	color = "DPM";
	displayName = "$STR_BaseballCap_DPM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DPM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_DPM_co.paa"
	};
};

class HRM_BaseballCap_ERDLUrban: HRM_BaseballCap
{
	scope = 2;
	color = "ERDLUrban";
	displayName = "$STR_BaseballCap_ERDLUrban";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_ERDLUrban_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_ERDLUrban_co.paa"
	};
};

class HRM_BaseballCapInverted_ERDLUrban: HRM_BaseballCapInverted
{
	scope = 2;
	color = "ERDLUrban";
	displayName = "$STR_BaseballCap_ERDLUrban";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_ERDLUrban_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_ERDLUrban_co.paa"
	};
};

class HRM_BaseballCap_Flecktarn: HRM_BaseballCap
{
	scope = 2;
	color = "Flecktarn";
	displayName = "$STR_BaseballCap_Flecktarn";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Flecktarn_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Flecktarn_co.paa"
	};
};

class HRM_BaseballCapInverted_Flecktarn: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Flecktarn";
	displayName = "$STR_BaseballCap_Flecktarn";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Flecktarn_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Flecktarn_co.paa"
	};
};

class HRM_BaseballCap_Kamysh: HRM_BaseballCap
{
	scope = 2;
	color = "Kamysh";
	displayName = "$STR_BaseballCap_Kamysh";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Kamysh_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Kamysh_co.paa"
	};
};

class HRM_BaseballCapInverted_Kamysh: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Kamysh";
	displayName = "$STR_BaseballCap_Kamysh";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Kamysh_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Kamysh_co.paa"
	};
};

class HRM_BaseballCap_Lizard: HRM_BaseballCap
{
	scope = 2;
	color = "Lizard";
	displayName = "$STR_BaseballCap_Lizard";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Lizard_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Lizard_co.paa"
	};
};

class HRM_BaseballCapInverted_Lizard: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Lizard";
	displayName = "$STR_BaseballCap_Lizard";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Lizard_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Lizard_co.paa"
	};
};

class HRM_BaseballCap_Multicam: HRM_BaseballCap
{
	scope = 2;
	color = "Multicam";
	displayName = "$STR_BaseballCap_Multicam";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Multicam_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Multicam_co.paa"
	};
};

class HRM_BaseballCapInverted_Multicam: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Multicam";
	displayName = "$STR_BaseballCap_Multicam";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Multicam_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Multicam_co.paa"
	};
};

class HRM_BaseballCap_MulticamAlpine: HRM_BaseballCap
{
	scope = 2;
	color = "MulticamAlpine";
	displayName = "$STR_BaseballCap_MulticamAlpine";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamAlpine_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamAlpine_co.paa"
	};
};

class HRM_BaseballCapInverted_MulticamAlpine: HRM_BaseballCapInverted
{
	scope = 2;
	color = "MulticamAlpine";
	displayName = "$STR_BaseballCap_MulticamAlpine";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamAlpine_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamAlpine_co.paa"
	};
};

class HRM_BaseballCap_MulticamArid: HRM_BaseballCap
{
	scope = 2;
	color = "MulticamArid";
	displayName = "$STR_BaseballCap_MulticamArid";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamArid_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamArid_co.paa"
	};
};

class HRM_BaseballCapInverted_MulticamArid: HRM_BaseballCapInverted
{
	scope = 2;
	color = "MulticamArid";
	displayName = "$STR_BaseballCap_MulticamArid";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamArid_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamArid_co.paa"
	};
};

class HRM_BaseballCap_MulticamBlack: HRM_BaseballCap
{
	scope = 2;
	color = "MulticamBlack";
	displayName = "$STR_BaseballCap_MulticamBlack";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamBlack_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamBlack_co.paa"
	};
};

class HRM_BaseballCapInverted_MulticamBlack: HRM_BaseballCapInverted
{
	scope = 2;
	color = "MulticamBlack";
	displayName = "$STR_BaseballCap_MulticamBlack";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamBlack_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamBlack_co.paa"
	};
};

class HRM_BaseballCap_MulticamTropic: HRM_BaseballCap
{
	scope = 2;
	color = "MulticamTropic";
	displayName = "$STR_BaseballCap_MulticamTropic";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamTropic_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamTropic_co.paa"
	};
};

class HRM_BaseballCapInverted_MulticamTropic: HRM_BaseballCapInverted
{
	scope = 2;
	color = "MulticamTropic";
	displayName = "$STR_BaseballCap_MulticamTropic";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamTropic_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_MulticamTropic_co.paa"
	};
};

class HRM_BaseballCap_PartizanM: HRM_BaseballCap
{
	scope = 2;
	color = "PartizanM";
	displayName = "$STR_BaseballCap_PartizanM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_PartizanM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_PartizanM_co.paa"
	};
};

class HRM_BaseballCapInverted_PartizanM: HRM_BaseballCapInverted
{
	scope = 2;
	color = "PartizanM";
	displayName = "$STR_BaseballCap_PartizanM";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_PartizanM_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_PartizanM_co.paa"
	};
};

class HRM_BaseballCap_Scorpion: HRM_BaseballCap
{
	scope = 2;
	color = "Scorpion";
	displayName = "$STR_BaseballCap_Scorpion";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Scorpion_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Scorpion_co.paa"
	};
};

class HRM_BaseballCapInverted_Scorpion: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Scorpion";
	displayName = "$STR_BaseballCap_Scorpion";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Scorpion_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Scorpion_co.paa"
	};
};

class HRM_BaseballCap_Skol: HRM_BaseballCap
{
	scope = 2;
	color = "Skol";
	displayName = "$STR_BaseballCap_Skol";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Skol_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Skol_co.paa"
	};
};

class HRM_BaseballCapInverted_Skol: HRM_BaseballCapInverted
{
	scope = 2;
	color = "Skol";
	displayName = "$STR_BaseballCap_Skol";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Skol_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_Skol_co.paa"
	};
};

class HRM_BaseballCap_SUMRAK: HRM_BaseballCap
{
	scope = 2;
	color = "SUMRAK";
	displayName = "$STR_BaseballCap_SUMRAK";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SUMRAK_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SUMRAK_co.paa"
	};
};

class HRM_BaseballCapInverted_SUMRAK: HRM_BaseballCapInverted
{
	scope = 2;
	color = "SUMRAK";
	displayName = "$STR_BaseballCap_SUMRAK";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SUMRAK_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SUMRAK_co.paa"
	};
};

class HRM_BaseballCap_SURPAT: HRM_BaseballCap
{
	scope = 2;
	color = "SURPAT";
	displayName = "$STR_BaseballCap_SURPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SURPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SURPAT_co.paa"
	};
};

class HRM_BaseballCapInverted_SURPAT: HRM_BaseballCapInverted
{
	scope = 2;
	color = "SURPAT";
	displayName = "$STR_BaseballCap_SURPAT";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SURPAT_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_SURPAT_co.paa"
	};
};

class HRM_BaseballCap_TigerStripes: HRM_BaseballCap
{
	scope = 2;
	color = "TigerStripes";
	displayName = "$STR_BaseballCap_TigerStripes";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_TigerStripes_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_TigerStripes_co.paa"
	};
};

class HRM_BaseballCapInverted_TigerStripes: HRM_BaseballCapInverted
{
	scope = 2;
	color = "TigerStripes";
	displayName = "$STR_BaseballCap_TigerStripes";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_TigerStripes_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_TigerStripes_co.paa"
	};
};

class HRM_BaseballCap_VSR: HRM_BaseballCap
{
	scope = 2;
	color = "VSR";
	displayName = "$STR_BaseballCap_VSR";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_VSR_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_VSR_co.paa"
	};
};

class HRM_BaseballCapInverted_VSR: HRM_BaseballCapInverted
{
	scope = 2;
	color = "VSR";
	displayName = "$STR_BaseballCap_VSR";
	hiddenSelections[] = { "camoGround", "zbytek" };
	hiddenSelectionsTextures[] = {
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_VSR_co.paa",
		"H2A\HRM\GearsAssets\Data\HRM_BaseballCap_VSR_co.paa"
	};
};