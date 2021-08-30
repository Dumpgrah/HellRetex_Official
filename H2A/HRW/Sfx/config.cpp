class CfgPatches
{
    class HRW_Sfx
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
    };
};

class CfgSoundShaders
{
	#include "SoundShaders\127x99.hpp"
	#include "SoundShaders\762x51.hpp"
	#include "SoundShaders\750x54.hpp"
	#include "SoundShaders\556x45.hpp"
	#include "SoundShaders\RecurvedBow.hpp"
};

class CfgSoundSets
{
	#include "SoundSets\127x99.hpp"
	#include "SoundSets\762x51.hpp"
	#include "SoundSets\750x54.hpp"
	#include "SoundSets\556x45.hpp"
	#include "SoundSets\RecurvedBow.hpp"
};
