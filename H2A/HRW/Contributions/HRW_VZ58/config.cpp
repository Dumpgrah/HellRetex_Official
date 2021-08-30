class CfgPatches
{
    class HRW_Contributions_VZ58
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
    };
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons
{
	class AKM_Base;
	class HRW_VZ58_Base: AKM_Base
	{
		scope=0;
		model = "H2A\HRW\Contributions\HRW_VZ58\HRW_VZ58.p3d";
		weight=2900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.82906699;
		barrelArmor=4.4439998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"HRW_Mag_VZ58_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadAKM";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\akm\Akm_reload",
			0.80000001,
			1,
			20
		};
		hiddenSelections[]=
		{};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			
			reloadTime=0.1;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
	};
	
	class HRW_VZ58: HRW_VZ58_Base
	{
		scope = 2;
		displayName = "$STR_VZ580";
		descriptionShort = "$STR_VZ581";
		model = "H2A\HRW\Contributions\HRW_VZ58\HRW_VZ58.p3d";
		attachments[] = {"weaponOptics","weaponMuzzleAK"};
		itemSize[] = {7,3};
		dexterity = 3.2;
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.8,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58.rvmat"}},{0.7,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58.rvmat"}},{0.5,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_damaged.rvmat"}},{0.3,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_damaged.rvmat"}},{0.0,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_ruined.rvmat"}}};
				};
			};
		};
	};
};

class cfgMagazines
{
	class Magazine_Base;
	class HRW_Mag_VZ58_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_VZ58_Mag0";
		descriptionShort = "$STR_VZ58_Mag1";
		model = "H2A\HRW\Contributions\HRW_VZ58\Proxies\HRW_Mag_VZ58_30Rnd";
		rotationFlags=17;
		weight = 80;
		itemSize[] = {1,3};
		count = 30;
		ammo="Bullet_762x39";
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58.rvmat"}},
							{0.7,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58.rvmat"}},
							{0.5,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_damaged.rvmat"}},
							{0.3,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_damaged.rvmat"}},
							{0.0,{"H2A\HRW\Contributions\HRW_VZ58\Data\vz58_ruined.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};


