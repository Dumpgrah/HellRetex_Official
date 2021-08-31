class CfgPatches
{
	class HREG_Items
	{
		author = "Hellmaker2a";
		magazines[] = {};
		ammo[] = {};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "DZ_Data", "DZ_Gear_Medical" };
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class HREG_CleaningWipes: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_HREG_CLEANING_WIPES0";
		descriptionShort = "$STR_HREG_CLEANING_WIPES1";
		model = "\dz\gear\food\PowderedMilk.p3d";
		rotationFlags = 17;
		weight = 100;
		itemSize[] = { 1, 2 };
		varQuantityInit = 5.0;
		varQuantityMin = 0.0;
		varQuantityMax = 5.0;
		//quantityBar = 1;
		absorbency = 0.9;
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "\H2A\HREG_Evo\Items\Data\HREG_CleaningWipes_co.paa" };

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{ 1.0,{"DZ\gear\food\data\powdered_milk.rvmat" }},
						{ 0.7,{"DZ\gear\food\data\powdered_milk.rvmat" }},
						{ 0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat" }},
						{ 0.3,{"DZ\gear\food\data\powdered_milk_damage.rvmat" }},
						{ 0.0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat" }}
					};
				};
			};
		};
	};

	class HREG_AntiRabies_Injector: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_HREG_ITEM_RABIES_VACCINE0";
		descriptionShort = "$STR_HREG_ITEM_RABIES_VACCINE1";
		model = "\dz\gear\medical\Epinephrine.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"\H2A\HREG_Evo\Items\Data\HREG_AntiRabies_Injector_co.paa"};
	};
};