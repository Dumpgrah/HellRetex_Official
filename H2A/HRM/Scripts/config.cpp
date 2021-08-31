class CfgPatches
{
	class HRM_Scripts
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"HRM_GearsAssets",
			"HRM_Retex"
		};
	};
};

class CfgMods
{
	class HRM
	{
		dir = "H2A/HellRetex";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "HellRetex Mod";
		credits = "Hellmaker2a";
		creditsJson = "H2A/HRM/Scripts/Data/Credits.json";
		author = "Hellmaker2a";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"H2A/HRM/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A/HRM/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A/HRM/Scripts/5_Mission"};
			};
		};
	};
};
