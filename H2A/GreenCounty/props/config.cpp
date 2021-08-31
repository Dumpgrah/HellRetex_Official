class CfgPatches
{
	class H2A_GreenCounty_props
	{
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_GC_PoliceStation_Village: HouseNoDestruct
	{
		scope = 1;
		model = "\H2A\GreenCounty\props\GC_PoliceStation_Village\GC_PoliceStation_Village.p3d";
	};
	
	class Land_GC_Wreck_CrownVictoria_1: HouseNoDestruct
	{
		scope = 1;
		model = "\H2A\GreenCounty\props\GC_Wreck_CrownVictoria\GC_Wreck_CrownVictoria_1.p3d";
	};

	class Land_GC_Wreck_CrownVictoria_2: HouseNoDestruct
	{
		scope = 1;
		model = "\H2A\GreenCounty\props\GC_Wreck_CrownVictoria\GC_Wreck_CrownVictoria_2.p3d";
	};
	
	class Land_GC_Wreck_CrownVictoria_3: HouseNoDestruct
	{
		scope = 1;
		model = "\H2A\GreenCounty\props\GC_Wreck_CrownVictoria\GC_Wreck_CrownVictoria_3.p3d";
	};
};