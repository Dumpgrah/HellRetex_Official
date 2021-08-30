class CfgPatches
{
    class HRW_Scripts
    {
		author = "Hellmaker2a";
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"HRW_Ammunitions",
			"HRW_Attachments",
			"HRW_Contributions",
			"HRW_Melee",
			"HRW_Sfx",
			"HRW_VanillaTweaks",
			"HRW_Weapons"
		};
    };
};

class CfgMods
{
	class HRW
	{
		dir = "H2A/HRW";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "HellRetex Weapons";
		credits = "Hellmaker2a";
		creditsJson = "H2A/HRW/Scripts/Data/Credits.json";
		author = "Hellmaker2a";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = 
				{
					"H2A/HRW/Scripts/3_Game",
					"H2A/HRW/Contributions/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = 
				{
					"H2A/HRW/Scripts/4_World",
					"H2A/HRW/Contributions/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"H2A/HRW/Scripts/5_Mission",
					"H2A/HRW/Contributions/Scripts/5_Mission"
				};
			};
		};
	};
};
