class HRS_Crafted_CamoTent: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_CamoTent0";
	descriptionShort = "$STR_HRS_CamoTent1";
	model = "H2A\HRS\Shelters\HRS_Crafted_CamoTent\HRS_Crafted_CamoTent.p3d";
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
						{1.0,{"H2A\HRS\Shelters\HRS_Crafted_CamoTent\Data\Tent.rvmat"}},
						{0.7,{"H2A\HRS\Shelters\HRS_Crafted_CamoTent\Data\Tent.rvmat"}},
						{0.5,{"H2A\HRS\Shelters\HRS_Crafted_CamoTent\Data\Tent_damage.rvmat"}},
						{0.3,{"H2A\HRS\Shelters\HRS_Crafted_CamoTent\Data\Tent_destruct.rvmat"}},
						{0.0,{"H2A\HRS\Shelters\HRS_Crafted_CamoTent\Data\Tent_destruct.rvmat"}}
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

class HRS_Crafted_CamoTent_NoGeo: HRS_Crafted_CamoTent
{
	scope = 2;
	displayName = "$STR_HRS_CamoTent0";
	descriptionShort = "$STR_HRS_CamoTent1";
	model = "H2A\HRS\Shelters\HRS_Crafted_CamoTent\HRS_Crafted_CamoTent_NoGeo.p3d";
};

class HRS_Crafted_CamoTent_Placing: HRS_Crafted_CamoTent
{
	model = "H2A\HRS\Shelters\HRS_Crafted_CamoTent\HRS_Crafted_CamoTent_Placing.p3d";
};



