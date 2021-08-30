class CfgPatches
{
    class HRW_Attachments
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
        requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Weapons_Lights",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};   
	};
};

class cfgVehicles
{
	class Switchable_Base;
	class ItemSuppressor;
	class ImprovisedSuppressor;
	class ItemOptics;
	class Inventory_Base;
	#include "HRW_APX_SOM_Optic\HRW_APX_SOM_Optic.hpp"
	#include "HRW_Surefire_Flashlight\HRW_Surefire_Flashlight.hpp"
	#include "HRW_Universal_Suppressor\HRW_Universal_Suppressor.hpp"
	#include "HRW_MarkFXII_Optic\HRW_MarkFXII_Optic.hpp"
	#include "HRW_Holosight_Optic\HRW_Holosight_Optic.hpp"
	#include "HRW_HAMR_Optic\HRW_HAMR_Optic.hpp"
	#include "HRW_Mk4_RMR_Optic\HRW_Mk4_RMR_Optic.hpp"
	#include "HRW_MountingRail\HRW_MountingRail.hpp"
	#include "HRW_ZF4_Optic\HRW_ZF4_Optic.hpp"
};

class CfgMagazines
{
	class Magazine_Base;
	#include "HRW_Mag_Drum_60Rnd\HRW_Mag_Drum_60Rnd.hpp"
	#include "HRW_Mag_Drum_100Rnd\HRW_Mag_Drum_100Rnd.hpp"	
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	
	class ProxyHRW_Mag_Drum_60Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\HRW_Mag_Drum_60Rnd.p3d";
	};	
	
	class ProxyHRW_Mag_Drum_100Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Attachments\HRW_Mag_Drum_100Rnd\HRW_Mag_Drum_100Rnd.p3d";
	};

	class ProxyHRW_Universal_Suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"weaponMuzzleM4", "weaponMuzzleAK"};
		model = "H2A\HRW\Attachments\HRW_Universal_Suppressor\HRW_Universal_Suppressor.p3d";
	};

	class ProxyHRW_MarkFXII_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsHunting";
		model = "H2A\HRW\Attachments\HRW_MarkFXII_Optic\HRW_MarkFXII_Optic.p3d";
	};

	class ProxyHRW_Mk4_RMR_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"weaponOptics", "weaponOpticsHunting"};
		model = "H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\HRW_Mk4_RMR_Optic.p3d";
	};

	class ProxyHRW_MountingRail: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMountingRail";
		model = "H2A\HRW\Attachments\HRW_MountingRail\HRW_MountingRail.p3d";
	};
	
	class ProxyHRW_APX_SOM_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsMAS";
		model = "H2A\HRW\Attachments\HRW_APX_SOM_Optic\HRW_APX_SOM_Optic.p3d";
	};
	
	class ProxyHRW_ZF4_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsGewehr";
		model = "H2A\HRW\Attachments\HRW_ZF4_Optic\HRW_ZF4_Optic.p3d";
	};
	
	class ProxyHRW_HAMR_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "H2A\HRW\Attachments\HRW_HAMR_Optic\HRW_HAMR_Optic.p3d";
	};
	
	class ProxyHRW_Surefire_Flashlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolFlashlight";
		model = "H2A\HRW\Attachments\HRW_Surefire_Flashlight\HRW_Surefire_Flashlight.p3d";
	};
};

class CfgSlots
{
	class Slot_weaponMountingRail
	{
		name="weaponMountingRail";
		displayName="weaponMountingRail";
		ghostIcon="handguard";
	};
	
	class Slot_weaponOpticsMAS
	{
		name="weaponOpticsMAS";
		displayName="weaponOpticsMAS";
		ghostIcon="weaponoptics";
	};
};

