class CfgPatches
{
	class H2A_SampleCassette
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data", 
			"DZ_Sounds_Effects",
			"HRS_Items",
			"HRS_Items_cfg",
			"HRS_Scripts"
		};
	};
};

class CfgVehicles
{
	class HRS_K7;
	class HRS_K7_SampleCassette: HRS_K7
	{
		scope = 2;
		displayName = "Bensound - Ukulélé";
		descriptionShort = "From : https://www.bensound.com/royalty-free-music/track/ukulele";
	};
};


class CfgSoundShaders
{
	class HRS_K7_SoundShader;
	class HRS_K7_SampleCassette_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\DayZ_Samples\SampleCassette\sounds\bensound-ukulele",1}
		};
		volume=1.0;
	};		
};

class CfgSoundSets
{
	class HRS_K7_SampleCassette_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_SampleCassette_SoundShader"
		};
	};
};

