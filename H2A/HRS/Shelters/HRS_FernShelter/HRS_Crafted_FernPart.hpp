	class HRS_Crafted_FernPart: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_HRS_FernPart0";
		descriptionShort = "$STR_HRS_FernPart1";
		model = "\dz\gear\cultivation\plant_material.p3d";
		inventorySlot[] = {"Material_Shelter_PlantMaterial"};
		lootCategory = "Crafted";
		itemSize[] = {3,2};
		rotationFlags = 12;
		weight = 10;
		spawnOffset = 0;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 50.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 5.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\plant_material.rvmat"}},{0.7,{"DZ\gear\cultivation\data\plant_material.rvmat"}},{0.5,{"DZ\gear\cultivation\data\plant_material_damage.rvmat"}},{0.3,{"DZ\gear\cultivation\data\plant_material_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\plant_material_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpPlantMaterialLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpPlantMaterial_SoundSet";
					id = 797;
				};
			};
		};
	};
