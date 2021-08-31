class CfgPatches
{
    class H2A_GreenCounty_PT
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
	class H2A_GreenCounty_PT
	{
		dir = "H2A/GreenCounty";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Green County Private Test";
		credits = "Hellmaker2a";
		creditsJson = "";
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
				files[] = {"H2A/GreenCounty/gcpt/common","H2A/GreenCounty/gcpt/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A/GreenCounty/gcpt/common","H2A/GreenCounty/gcpt/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A/GreenCounty/gcpt/common","H2A/GreenCounty/gcpt/5_mission"};
			};
		};
	};
};