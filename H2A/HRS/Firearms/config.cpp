class CfgPatches
{
	class HRS_Firearms
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
        requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Firearms"
		};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoShotgun;

class CfgWeapons
{
	class SawedoffIzh43Shotgun;
	#include "HRS_Crafted_Shorty12.hpp"
};

class CfgVehicles
{
	class Inventory_Base;
	#include "HRS_Crafted_Shorty12_Barrel.hpp"
	#include "HRS_Crafted_Shorty12_Handle.hpp"
	#include "HRS_Crafted_Shorty12_Mecanism.hpp"
	#include "HRS_Crafted_Shorty12_Woodgrip.hpp"
};