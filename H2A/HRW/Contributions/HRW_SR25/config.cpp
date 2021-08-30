class CfgPatches
{
    class HRW_Contributions_SR25
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class OpticsInfoPistol;
class OpticsInfoShotgun;
class Muzzle_Base;

class CfgWeapons 
{
	class M4A1_Base;
	
	class HRW_SR25_Base: M4A1_Base
	{
		scope=0;
		weight=2500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic",
			"HRW_HAMR_Optic"
		};
		WeaponLength=1.150;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x51"
		};
		magazines[]=
		{
			"HRW_Mag_SR25_20Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.0125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
		};
	};

	class HRW_SR25: HRW_SR25_Base
	{
		scope=2;
		displayName="$STR_SR250";
		descriptionShort = "$STR_SR251";
		model = "H2A\HRW\Contributions\HRW_SR25\HRW_SR25.p3d";
		attachments[]=
		{
			"weaponButtstockM4",
			"weaponFlashlight",
			"WeaponHandguardM4",
			"weaponMuzzleM4",
			"weaponOptics"
		};
		itemSize[]={8,3};
		spawnDamageRange[]={0,0.60000002};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=7;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"H2A\HRW\Contributions\HRW_SR25\Data\Body.rvmat"}},
						{0.7,{"H2A\HRW\Contributions\HRW_SR25\Data\Body.rvmat"}},
						{0.5,{"H2A\HRW\Contributions\HRW_SR25\Data\Body_damage.rvmat"}},
						{0.3,{"H2A\HRW\Contributions\HRW_SR25\Data\Body_damage.rvmat"}},
						{0.0,{"H2A\HRW\Contributions\HRW_SR25\Data\Body_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class Mag_Fal_20Rnd;
	
	class HRW_Mag_SR25_20Rnd: Mag_Fal_20Rnd
	{
		scope = 2;
		displayName = "$STR_SR25_Mag0";
		descriptionShort = "$STR_SR25_Mag1";
		ammo = "Bullet_762x51";
		ammoItems[] = {"Ammo_762x51"};
	};

};
