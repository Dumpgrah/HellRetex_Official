class CfgPatches
{
    class H2A_GreenCounty_scripts
    {
		author = "Hellmaker2a";
        units[]= {};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
		};
    };
};

class CfgMods
{
	class H2A_GreenCounty
	{
		dir = "H2A/GreenCounty";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Green County";
		credits = "Hellmaker2a";
		creditsJson = "H2A/GreenCounty/scripts/data/Credits.json";
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
				files[] = {"H2A/GreenCounty/scripts/common","H2A/GreenCounty/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A/GreenCounty/scripts/common","H2A/GreenCounty/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A/GreenCounty/scripts/common","H2A/GreenCounty/scripts/5_mission"};
			};
		};
	};
};