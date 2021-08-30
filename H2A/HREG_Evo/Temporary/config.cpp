class CfgPatches
{
    class HREG_Temporary
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"HREG_Items"
		};
    };
};

class CfgVehicles
{
	class HREG_CleaningWipes;
	class HREG_AntiRabies_Injector;
	
	class Hell_CleaningWipes: HREG_CleaningWipes
	{
		scope = 2;
		displayName = "WRONG ITEM";
		descriptionShort = "XML FILES NEEDS TO BE UPDATED FOR HELLRETEX ENHANCED GAMEPLAY MOD !";
	};	
	class Hell_AntiRabies_Injector: HREG_AntiRabies_Injector
	{
		scope = 2;
		displayName = "WRONG ITEM";
		descriptionShort = "XML FILES NEEDS TO BE UPDATED FOR HELLRETEX ENHANCED GAMEPLAY MOD !";
	};	
};

