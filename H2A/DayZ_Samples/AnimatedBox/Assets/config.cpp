class CfgPatches
{
	class H2A_AnimatedBox_Assets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data", 
			"DZ_Sounds_Effects"
		};
	};
};

class CfgVehicles
{
	class Container_Base;
	class H2A_Box: Container_Base
	{
		scope = 2;
		displayName = "H2A_Box";
		descriptionShort = "H2A_Box";
		model = "H2A\DayZ_Samples\AnimatedBox\Assets\box.p3d";
		heavyItem = 1;
		weight = 10000;
		itemSize[] = {10,15};
		itemBehaviour = 0;
		absorbency = 0;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		
		class Cargo
		{
			itemsCargoSize[] = {10,15};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		
		class AnimationSources
		{
			class Top
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.01;
			};
			
			class Top2
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};
	};
};

