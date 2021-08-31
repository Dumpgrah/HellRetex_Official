class CfgPatches
{
    class HRW_Ammunitions
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Projectiles" 
		};
    };
};


class cfgAmmoTypes
{
	#include "6x35\CfgAmmoTypes_6x35.hpp"
	#include "7x64\CfgAmmoTypes_7x64.hpp"
	#include "127x99\CfgAmmoTypes_127x99.hpp"
	#include "300AAC\CfgAmmoTypes_300AAC.hpp"
	#include "750x54\CfgAmmoTypes_750x54.hpp"
	#include "792x57\CfgAmmoTypes_792x57.hpp"
	#include "762x51\CfgAmmoTypes_762x51.hpp"
	#include "408\CfgAmmoTypes_408.hpp"
};

class CfgMagazines
{
	class Ammunition_Base;
	#include "6x35\CfgMagazines_6x35.hpp"
	#include "7x64\CfgMagazines_7x64.hpp"
	#include "127x99\CfgMagazines_127x99.hpp"
	#include "300AAC\CfgMagazines_300AAC.hpp"
	#include "750x54\CfgMagazines_750x54.hpp"
	#include "792x57\CfgMagazines_792x57.hpp"
	#include "762x51\CfgMagazines_762x51.hpp"
	#include "408\CfgMagazines_408.hpp"
};

class CfgVehicles
{
	class Box_Base;
	class FxCartridge;
	class FxRound;
	#include "6x35\CfgVehicles_6x35.hpp"
	#include "7x64\CfgVehicles_7x64.hpp"
	#include "127x99\CfgVehicles_127x99.hpp"
	#include "300AAC\CfgVehicles_300AAC.hpp"
	#include "750x54\CfgVehicles_750x54.hpp"
	#include "792x57\CfgVehicles_792x57.hpp"
	#include "762x51\CfgVehicles_762x51.hpp"
	#include "408\CfgVehicles_408.hpp"
};

class CfgAmmo
{
	class Bullet_Base;	
	#include "6x35\CfgAmmo_6x35.hpp"	
	#include "7x64\CfgAmmo_7x64.hpp"	
	#include "127x99\CfgAmmo_127x99.hpp"	
	#include "300AAC\CfgAmmo_300AAC.hpp"	
	#include "750x54\CfgAmmo_750x54.hpp"	
	#include "792x57\CfgAmmo_792x57.hpp"	
	#include "762x51\CfgAmmo_762x51.hpp"	
	#include "408\CfgAmmo_408.hpp"	
};
