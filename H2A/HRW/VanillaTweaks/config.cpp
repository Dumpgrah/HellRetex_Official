class CfgPatches
{
	class HRW_VanillaTweaks
	{
		author = "Hellmaker2a";
		requiredVersion = 0.1;
        requiredAddons[] = 
		{ 
			"DZ_Data", 
			"DZ_Weapons_Magazines", 
			"DZ_Weapons_Firearms", 
			"DZ_Sounds_Weapons", 
			"DZ_Weapons_Firearms_M4",
			"DZ_Pistols_DE"
		};

	};
};

class CfgWeapons
{
	class Rifle_Base;
	class Pistol_Base;
	
	class M4A1_Base: Rifle_Base
	{
		magazines[]=
		{
			"HRW_Mag_Drum_60Rnd",
			"HRW_Mag_Drum_100Rnd",
			"Mag_STANAG_30Rnd",
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
	};
};

