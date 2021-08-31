class HRS_Crafted_RopeSling: Clothing
{
	scope = 2;
	displayName = "$STR_HRS_RopeSling0";
	descriptionShort = "$STR_HRS_RopeSling1";
	model = "H2A\HRS\Items\HRS_Crafted_RopeSling\HRS_Crafted_RopeSling_g.p3d";
	attachments[] = {"Shoulder", "Melee"};
	vehicleclass = "Clothing";
	simulation = "clothing";
	inventorySlot[] = {"Shoulder", "Melee"};
	itemInfo[] = { "Clothing" };
	itemSize[] = { 4, 6 };
	weight = 100;
	rotationFlags = 5;
	simpleHiddenSelections[] = {"melee", "sword", "left", "right"};
	hiddenSelections[] = {"Rope"};
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\Body_Black_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_damage.rvmat"}}, // dmged
					{0.3,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_damage.rvmat"}}, // dmged
					{0.0,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_destruct.rvmat"}} // destred
				};
			};
		};
	};
	
	class ClothingTypes
	{
		male = "H2A\HRS\Items\HRS_Crafted_RopeSling\HRS_Crafted_RopeSling.p3d";
		female = "H2A\HRS\Items\HRS_Crafted_RopeSling\HRS_Crafted_RopeSling.p3d";
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

class HRS_Crafted_FibersRopeSling: HRS_Crafted_RopeSling
{
	scope = 2;
	displayName = "$STR_HRS_RopeSling0";
	descriptionShort = "$STR_HRS_RopeSling1";
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\Body_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_damage.rvmat"}}, // dmged
					{0.3,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_damage.rvmat"}}, // dmged
					{0.0,{"H2A\HRS\Items\HRS_Crafted_RopeSling\Data\BodyFabric_destruct.rvmat"}} // destred
				};
			};
		};
	};
};
