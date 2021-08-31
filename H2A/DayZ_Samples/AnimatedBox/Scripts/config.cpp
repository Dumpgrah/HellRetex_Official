class CfgPatches
{
	class H2A_AnimatedBox
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

class CfgMods
{
	class H2A_AnimatedBox_Scripts
	{
		dir = "H2A\DayZ_Samples\AnimatedBox\Scripts";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "DayZ_Samples";
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
				files[] = {"H2A\DayZ_Samples\AnimatedBox\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"H2A\DayZ_Samples\AnimatedBox\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"H2A\DayZ_Samples\AnimatedBox\Scripts\5_Mission"};
			};
		};
	};
};
