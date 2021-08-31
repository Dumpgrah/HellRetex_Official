class HRS_Crafted_Fertilizer: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_Fertilizer0";
	descriptionShort = "$STR_HRS_Fertilizer1";
	model = "H2A\HRS\Items\HRS_Crafted_Fertilizer\HRS_Crafted_Fertilizer.p3d";
	animClass = "NoFireClass";
	weight = 100;
	itemSize[] = {3,5};
	stackedUnit = "g";
	quantityBar = 1;
	inventorySlot[] = {"Lime"};
	varQuantityInit = 0.0;
	varQuantityMin = 0.0;
	varQuantityMax = 6000.0;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRS\Items\HRS_Crafted_Fertilizer\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_Fertilizer\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_Fertilizer\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_Crafted_Fertilizer\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_Crafted_Fertilizer\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	class Horticulture
	{
		TexId = 1;
		AddEnergyToSlot = 0.5;
		ConsumedQuantity = 250.0;
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItemLight
			{
				soundSet = "pickUpGardenLimeLight_SoundSet";
				id = 796;
			};
			class pickUpItem
			{
				soundSet = "pickUpGardenLime_SoundSet";
				id = 797;
			};
			class drop
			{
				soundset = "gardenlime_drop_SoundSet";
				id = 898;
			};
		};
	};
};
