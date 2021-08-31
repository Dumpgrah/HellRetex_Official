class CfgPatches
{
	class HREG_Sfx
	{
		author = "Hellmaker2a";
		magazines[] = {};
		ammo[] = {};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "DZ_Data",
			"DZ_Sounds_Effects" };
	};
};

class CfgSoundShaders
{
	class HREG_Yawn_SoundShader
	{
		samples[] = 
		{
			{"H2A\HREG_Fix\Sfx\yawn1", 1},
			{"H2A\HREG_Fix\Sfx\yawn2", 1},
			{"H2A\HREG_Fix\Sfx\yawn3", 1},
			{"H2A\HREG_Fix\Sfx\yawn4", 1},
			{"H2A\HREG_Fix\Sfx\yawn5", 1}
		};
		range = 5;
		volume = 1.0;
	};

	class HREG_Snoring_SoundShader
	{
		samples[] = 
		{
			{"H2A\HREG_Fix\Sfx\snoring", 1}
		};
		range = 5;
		volume = 0.75;
	};
};

class CfgSoundSets
{
	class HREG_Yawn_SoundSet
	{
		soundShaders[] = { "HREG_Yawn_SoundShader" };
	};

	class HREG_Snoring_SoundSet
	{
		soundShaders[] = { "HREG_Snoring_SoundShader" };
	};
};