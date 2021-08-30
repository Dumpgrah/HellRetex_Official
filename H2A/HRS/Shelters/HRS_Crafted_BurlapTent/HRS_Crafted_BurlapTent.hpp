class HRS_Crafted_BurlapTent: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_BurlapTent0";
	descriptionShort = "$STR_HRS_BurlapTent1";
	model = "H2A\HRS\Shelters\HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTent.p3d";
	weight = 100000;
	itemSize[] = { 15, 10 };
	itemsCargoSize[] = { 10, 3 };
	storageCategory = 1;
	physLayer = "item_large";
	lootCategory = "Crafted";
	
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		slopeTolerance=0.44999999;
		minPlacingDist=10;

	attachments[] = { 
		"Back"
	};

	class DamageSystem
	{
		class GlobalHealth
		{
				class Health
				{
					hitpoints = 250;
					transferToGlobalCoef = 0.5;
					healthLevels[] = {
						{1.0,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tent.rvmat"}},
						{0.7,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tent.rvmat"}},
						{0.5,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tent_damage.rvmat"}},
						{0.3,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tent_destruct.rvmat"}},
						{0.0,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tent_destruct.rvmat"}}
					};
				};
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage = 0.05;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.3;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 8;
				};
			};
		};
	};
};

class HRS_Crafted_BurlapTent_NoGeo: HRS_Crafted_BurlapTent
{
	scope = 2;
	displayName = "$STR_HRS_BurlapTent0";
	descriptionShort = "$STR_HRS_BurlapTent1";
	model = "H2A\HRS\Shelters\HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTent_NoGeo.p3d";
};

class HRS_Crafted_BurlapTent_Placing: HRS_Crafted_BurlapTent
{
	model = "H2A\HRS\Shelters\HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTent_Placing.p3d";
};



