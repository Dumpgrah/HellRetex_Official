class CfgPatches
{
    class HRS_Scripts
    {
		author = "Hellmaker2a";
        units[]=
		{

		};
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
	class HRS
	{
		dir = "H2A/HRS";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "HellRetex Survival";
		credits = "Hellmaker2a";
		creditsJson = "H2A/HRS/Scripts/Data/Credits.json";
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
				files[] = {"H2A/HRS/Scripts/3_Game", "H2A/HRS/Scripts/Common"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A/HRS/Scripts/4_World", "H2A/HRS/Scripts/Common"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A/HRS/Scripts/5_Mission", "H2A/HRS/Scripts/Common"};
			};
		};
	};
};