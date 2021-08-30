class CfgPatches
{
    class HREG_Scripts
    {
		author = "Hellmaker2a";
        units[]= {};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Sounds_Effects",
			"HREG_Sfx",
			"HREG_Gui",
			"HREG_Items"
		};
    };
};

class CfgMods
{
	class HREG
	{
		dir = "H2A/HREG_Fix";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "HellRetexEnhancedGameplay";
		credits = "Hellmaker2a";
		creditsJson = "H2A/HREG_Fix/Scripts/Data/Credits.json";
		author = "Hellmaker2a";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
            class imageSets
            {
                files[]=
                {
                    "H2A/HREG_Fix/Gui/Imagesets/hreg_icons.imageset"
                };
            };
			class gameScriptModule
			{
				value = "";
				files[] = {"H2A/HREG_Fix/Scripts/Common","H2A/HREG_Fix/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A/HREG_Fix/Scripts/Common","H2A/HREG_Fix/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A/HREG_Fix/Scripts/Common","H2A/HREG_Fix/Scripts/5_Mission"};
			};
		};
	};
};

class NoiseDirtyness
{
	strength = 4;
	type = "shot";
};