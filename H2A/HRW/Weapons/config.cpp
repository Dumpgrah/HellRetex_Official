class CfgPatches
{
    class HRW_Weapons
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Weapons_Lights",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};
    };
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_Double;
class Mode_FullAuto;
class OpticsInfoRifle;
class OpticsInfoPistol;
class OpticsInfoShotgun;
class Muzzle_Base;

class CfgWeapons 
{
	class AK74_Base;
	class AKM_Base;
	class Deagle_Base;
	class CZ527_Base;
	class M4A1_Base;
	class UMP45_Base;
	class Mosin9130_Base;
	class SVD_Base;
	class SKS_Base;
	class Winchester70_Base;
	class Mp133Shotgun_Base;
	class Repeater_Base;
	class CZ61_Base;
	class Colt1911_Base;
	class MP5K_Base;
	class Ruger1022_Base;
	class AKS74U;
	class B95_Base;
	class Glock19_Base;
	class CZ75_Base;
	
	#include "HRW_AEK971\HRW_AEK971.hpp"
	#include "HRW_AK12\HRW_AK12.hpp"
	#include "HRW_BarMk3\HRW_BarMk3.hpp"
	#include "HRW_DesertEagle\HRW_DesertEagle.hpp"
	#include "HRW_DVL10\HRW_DVL10.hpp"
	#include "HRW_FAMASG2\HRW_FAMASG2.hpp"
	#include "HRW_FRF2\HRW_FRF2.hpp"
	#include "HRW_Gewehr43\HRW_Gewehr43.hpp"
	#include "HRW_Hecate_II\HRW_Hecate_II.hpp"
	#include "HRW_HK416D\HRW_HK416D.hpp"
	#include "HRW_HK417D\HRW_HK417D.hpp"
	#include "HRW_HoneyBadger\HRW_HoneyBadger.hpp"
	#include "HRW_KAC_PDW\HRW_KAC_PDW.hpp"
	#include "HRW_KAR98K\HRW_KAR98K.hpp"
	#include "HRW_L96A1\HRW_L96A1.hpp"
	#include "HRW_M1A_Raw\HRW_M1A_Raw.hpp"
	#include "HRW_M1Garand\HRW_M1Garand.hpp"
	#include "HRW_M14_Tactical\HRW_M14_Tactical.hpp"
	#include "HRW_M14EBR\HRW_M14EBR.hpp"
	#include "HRW_M16A1\HRW_M16A1.hpp"
	#include "HRW_M16M\HRW_M16M.hpp"
	#include "HRW_M16M_Raw\HRW_M16M_Raw.hpp"
	#include "HRW_M82\HRW_M82.hpp"
	#include "HRW_M200\HRW_M200.hpp"
	#include "HRW_M700R\HRW_M700R.hpp"
	#include "HRW_M1014\HRW_M1014.hpp"
	#include "HRW_Marlin1895\HRW_Marlin1895.hpp"
	#include "HRW_MAS36\HRW_MAS36.hpp"
	#include "HRW_MAS49\HRW_MAS49.hpp"
	#include "HRW_MAT49\HRW_MAT49.hpp"
	#include "HRW_MP9\HRW_MP9.hpp"
	#include "HRW_MPX\HRW_MPX.hpp"
	#include "HRW_MRAD\HRW_MRAD.hpp"
	#include "HRW_P8_Match\HRW_P8_Match.hpp"
	#include "HRW_R870T\HRW_R870T.hpp"
	#include "HRW_RecurvedBow\HRW_RecurvedBow.hpp"
	#include "HRW_Ruger1022\HRW_Ruger1022.hpp"
	#include "HRW_SIG553\HRW_SIG553.hpp"
	#include "HRW_SL8\HRW_SL8.hpp"
	#include "HRW_SPAS12\HRW_SPAS12.hpp"
	#include "HRW_STF12\HRW_STF12.hpp"
	#include "HRW_Supernova\HRW_Supernova.hpp"
	#include "HRW_SVT40\HRW_AVT40.hpp"
	#include "HRW_SVT40\HRW_SVT40.hpp"
	#include "HRW_Thompson\HRW_Thompson.hpp"
	#include "HRW_TOZ\HRW_TOZ.hpp"
	#include "HRW_USP_9x19\HRW_USP_9x19.hpp"
};

class CfgVehicles
{
	class Inventory_Base;	
	class ItemOptics;
	class ItemSuppressor;
	
	#include "HRW_AK12\Proxies\HRW_AK12_Buttstock.hpp"
	#include "HRW_HK416D\Proxies\HRW_HK416D_Backsight.hpp"
	#include "HRW_HK416D\Proxies\HRW_HK416D_Buttstock.hpp"
	#include "HRW_HK417D\Proxies\HRW_HK417D_Backsight.hpp"
	#include "HRW_M700R\Proxies\HRW_M700R_Suppressor.hpp"
	#include "HRW_MAS36\Proxies\HRW_MAS36_Bayonet.hpp"
	#include "HRW_MAS49\Proxies\HRW_MAS49_Bayonet.hpp"
	#include "HRW_MP9\Proxies\HRW_MP9_Suppressor.hpp"
	#include "HRW_FRF2\Proxies\HRW_ScromeJ8_Optic.hpp"
};

class CfgMagazines
{
	class Magazine_Base;
	class Mag_CZ75_15Rnd;
	
	#include "HRW_RecurvedBow\Ammo_RecurvedBow.hpp"
	#include "HRW_AK12\Proxies\HRW_Mag_AK12_30Rnd.hpp"
	#include "HRW_BarMk3\Proxies\HRW_Mag_BarMk3_10Rnd.hpp"
	#include "HRW_DesertEagle\Proxies\HRW_Mag_DesertEagle_9Rnd.hpp"
	#include "HRW_DVL10\Proxies\HRW_Mag_DVL10_10Rnd.hpp"
	#include "HRW_FRF2\Proxies\HRW_Mag_FRF2_10Rnd.hpp"
	#include "HRW_Gewehr43\Proxies\HRW_Mag_Gewehr43_10Rnd.hpp"
	#include "HRW_Hecate_II\Proxies\HRW_Mag_Hecate_II_7Rnd.hpp"
	#include "HRW_HK417D\Proxies\HRW_Mag_HK417D_20Rnd.hpp"
	#include "HRW_HoneyBadger\Proxies\HRW_Mag_HoneyBadger_30Rnd.hpp"
	#include "HRW_KAC_PDW\Proxies\HRW_Mag_KAC_PDW_30Rnd.hpp"
	#include "HRW_L96A1\Proxies\HRW_Mag_L96A1_10Rnd.hpp"
	#include "HRW_M1A_Raw\Proxies\HRW_Mag_M1A_Raw_10Rnd.hpp"
	#include "HRW_M14_Tactical\Proxies\HRW_Mag_M14_Tactical_15Rnd.hpp"
	#include "HRW_M14EBR\Proxies\HRW_Mag_M14EBR_20Rnd.hpp"
	#include "HRW_M16A1\Proxies\HRW_Mag_M16A1_20Rnd.hpp"
	#include "HRW_M82\Proxies\HRW_Mag_M82_10Rnd.hpp"
	#include "HRW_M200\Proxies\HRW_Mag_M200_7Rnd.hpp"
	#include "HRW_MAS49\Proxies\HRW_Mag_MAS49_10Rnd.hpp"
	#include "HRW_MAT49\Proxies\HRW_Mag_MAT49_32Rnd.hpp"
	#include "HRW_MP9\Proxies\HRW_Mag_MP9_30Rnd.hpp"
	#include "HRW_MPX\Proxies\HRW_Mag_MPX_30Rnd.hpp"
	#include "HRW_MRAD\Proxies\HRW_Mag_MRAD_10Rnd.hpp"
	#include "HRW_P8_Match\Proxies\HRW_Mag_P8_Match_18Rnd.hpp"
	#include "HRW_SIG553\Proxies\HRW_Mag_SIG553_30Rnd.hpp"
	#include "HRW_SL8\Proxies\HRW_Mag_SL8_20Rnd.hpp"
	#include "HRW_SVT40\Proxies\HRW_Mag_SVT40_10Rnd.hpp"
	#include "HRW_Thompson\Proxies\HRW_Mag_Thompson_30Rnd.hpp"
	#include "HRW_USP_9x19\Proxies\HRW_Mag_USP_9x19_15Rnd.hpp"
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;

	class ProxyHRW_Mag_SL8_20Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_SL8\Proxies\HRW_Mag_SL8_20Rnd.p3d";
	};

	class ProxyHRW_Mag_HK417D_20Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_HK417D\Proxies\HRW_Mag_HK417D_20Rnd.p3d";
	};
	
	class ProxyHRW_HK417D_Backsight: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "H2A\HRW\Weapons\HRW_HK417D\Proxies\HRW_HK417D_Backsight.p3d";
	};

	class ProxyHRW_Mag_AK12_30Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_AK12\Proxies\HRW_Mag_AK12_30Rnd.p3d";
	};

	class ProxyHRW_AK12_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "H2A\HRW\Weapons\HRW_AK12\Proxies\HRW_AK12_Buttstock.p3d";
	};
	
	class ProxyHRW_Mag_BarMK3_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_BarMk3\Proxies\HRW_Mag_BarMK3_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_DesertEagle_9Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_DesertEagle\Proxies\HRW_Mag_DesertEagle_9Rnd.p3d";
	};
	
	class ProxyHRW_Mag_DVL10_10Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_DVL10\Proxies\HRW_Mag_DVL10_10Rnd.p3d";
	};	
	
	class ProxyHRW_Mag_Gewehr43_10Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_Gewehr43\Proxies\HRW_Mag_Gewehr43_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_Hecate_II_7Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_Hecate_II\Proxies\HRW_Mag_Hecate_II_7Rnd.p3d";
	};
	
	class ProxyHRW_HK416D_Backsight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "H2A\HRW\Weapons\HRW_HK416D\Proxies\HRW_HK416D_Backsight.p3d";
	};

	class ProxyHRW_HK416D_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "H2A\HRW\Weapons\HRW_HK416D\Proxies\HRW_HK416D_Buttstock.p3d";
	};
	
	class ProxyHRW_Mag_HoneyBadger_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_HoneyBadger\Proxies\HRW_Mag_HoneyBadger_30Rnd.p3d";
	};
	
	class ProxyHRW_Mag_KAC_PDW_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_KAC_PDW\Proxies\HRW_Mag_KAC_PDW_30Rnd.p3d";
	};
	
	class ProxyHRW_Mag_L96A1_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_L96A1\Proxies\HRW_Mag_L96A1_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M1A_Raw_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M1A_Raw\Proxies\HRW_Mag_M1A_Raw_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M14_Tactical_15Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M14_Tactical\Proxies\HRW_Mag_M14_Tactical_15Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M14EBR_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M14EBR\Proxies\HRW_Mag_M14EBR_20Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M16A1_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M16A1\Proxies\HRW_Mag_M16A1_20Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M200_7Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M200\Proxies\HRW_Mag_M200_7Rnd.p3d";
	};
	
	class ProxyHRW_Mag_M82_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_M82\Proxies\HRW_Mag_M82_10Rnd.p3d";
	};
	
	class ProxyHRW_M700R_Suppressor: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM700R";
		model = "H2A\HRW\Weapons\HRW_M700R\Proxies\HRW_M700R_Suppressor.p3d";
	};
	
	class ProxyHRW_MAS36_Bayonet: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetMAS36";
		model = "H2A\HRW\Weapons\HRW_MAS36\Proxies\HRW_MAS36_Bayonet.p3d";
	};
	
	class ProxyHRW_MAS49_Bayonet: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetMAS49";
		model = "H2A\HRW\Weapons\HRW_MAS49\Proxies\HRW_MAS49_Bayonet.p3d";
	};
	
	class ProxyHRW_Mag_MAS49_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_MAS49\Proxies\HRW_Mag_MAS49_10Rnd.p3d";
	};

	class ProxyHRW_Mag_MAT49_32Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_MAT49\Proxies\HRW_Mag_MAT49_32Rnd.p3d";
	};

	class ProxyHRW_Mag_MP9_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_MP9\Proxies\HRW_Mag_MP9_30Rnd.p3d";
	};
	
	class ProxyHRW_MP9_Suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "pistolMuzzleMP9" };
		model = "H2A\HRW\Weapons\HRW_MP9\Proxies\HRW_MP9_Suppressor.p3d";
	};
	
	class ProxyHRW_Mag_MPX_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_MPX\Proxies\HRW_Mag_MPX_30Rnd.p3d";
	};
	
	class ProxyHRW_Mag_MRAD_10Rnd: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_MRAD\Proxies\HRW_Mag_MRAD_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_SIG553_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_SIG553\Proxies\HRW_Mag_SIG553_30Rnd.p3d";
	};
	
	class ProxyHRW_Mag_SVT40_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_SVT40\Proxies\HRW_Mag_SVT40_10Rnd.p3d";
	};
	
	class ProxyHRW_Mag_Thompson_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "H2A\HRW\Weapons\HRW_Thompson\Proxies\HRW_Mag_Thompson_30Rnd.p3d";
	};
};

class CfgSlots
{
	class Slot_weaponOpticsGewehr
	{
		name="weaponOpticsGewehr";
		displayName="weaponOpticsGewehr";
		ghostIcon="weaponoptics";
	};
	
	class Slot_weaponMuzzleM700R
	{
		name="weaponMuzzleM700R";
		displayName="weaponMuzzleM700R";
		ghostIcon="supressor";
	};

	class Slot_weaponBayonetMAS36
	{
		name = "weaponBayonetMAS36";
		displayName = "weaponBayonetMAS36";
		ghostIcon = "bayonet";
	};
	
	class Slot_weaponBayonetMAS49
	{
		name = "weaponBayonetMAS49";
		displayName = "weaponBayonetMAS49";
		ghostIcon = "bayonet";
	};
	
	class Slot_pistolMuzzleMP9
	{
		name="pistolMuzzleMP9";
		displayName="pistolMuzzleMP9";
		ghostIcon="muzzle";
	};
	
	class Slot_weaponOpticsTOZ
	{
		name="weaponOpticsTOZ";
		displayName="weaponOpticsTOZ";
		ghostIcon="weaponoptics";
	};
};



