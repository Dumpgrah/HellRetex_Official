class HRW_HK416D_Base: M4A1_Base
{
	scope = 0;
	weight = 3490;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
	WeaponLength = 0.881;
	barrelArmor = 3.75;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
	magazines[] = {"HRW_Mag_Drum_60Rnd","HRW_Mag_Drum_100Rnd","Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black"};
	magazineSwitchTime = 0.5;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2,2,1.1};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
	//reloadAction = "ReloadM4";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"FullAuto","SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		reloadTime = 0.11;
		recoil = "recoil_m4";
		recoilProne = "recoil_m4_prone";
		dispersion = 0.00125;
		magazineSlot = "magazine";
		//beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
		//beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
	};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		reloadTime = 0.11;
		recoil = "recoil_m4";
		recoilProne = "recoil_m4_prone";
		dispersion = 0.00125;
		magazineSlot = "magazine";
		//beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
		//beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 25;
		distanceZoomMax = 25;
	};
};

class HRW_HK416D: HRW_HK416D_Base
{
	scope = 2;
	displayName = "$STR_HK416D0";
	descriptionShort = "$STR_HK416D1";
	model = "H2A\HRW\Weapons\HRW_HK416D\HRW_HK416D.p3d";
	attachments[]={"weaponButtstockM4","weaponWrap","weaponOptics","weaponFlashlight","weaponMuzzleM4","weaponBayonet"};
	itemSize[] = {8,3};
	spawnDamageRange[] = {0.0,0.6};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
	class Particles
	{
		class OnFire
		{
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke";
			};
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_ump45_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
			};
			class ChamberSmokeBurst
			{
				overrideParticle = "weapon_shot_chamber_smoke";
				overridePoint = "Nabojnicestart";
				overrideDirectionPoint = "Nabojniceend";
			};
		};
		class OnOverheating
		{
			maxOverheatingValue = 60;
			shotsToStartOverheating = 7;
			overheatingDecayInterval = 1;
			class SmokingBarrel1
			{
				positionOffset[] = {0.2,0,0};
				overrideParticle = "smoking_barrel_small";
				onlyWithinOverheatLimits[] = {0.0,0.2};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot1
			{
				positionOffset[] = {0.2,0,0};
				overrideParticle = "smoking_barrel";
				onlyWithinOverheatLimits[] = {0.2,0.6};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot3
			{
				positionOffset[] = {0.2,0,0};
				overrideParticle = "smoking_barrel_heavy";
				onlyWithinOverheatLimits[] = {0.6,1};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHotSteam
			{
				overrideParticle = "smoking_barrel_steam";
				positionOffset[] = {0.35,0,0};
				onlyWithinOverheatLimits[] = {0,1};
				onlyWithinRainLimits[] = {0.2,1};
			};
			class OpenChamberSmoke
			{
				onlyIfBoltIsOpen = 1;
				overrideParticle = "smoking_barrel_small";
				overridePoint = "Nabojnicestart";
			};
		};
		class OnBulletCasingEject
		{
			class ChamberSmokeRaise
			{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "Nabojnicestart";
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
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_destruct.rvmat"
					}}
				};
			};
		};
	};
};

class HRW_HK416D_Green: HRW_HK416D
{
	scope = 2;
	color="Green";
	displayName = "$STR_HK416D_Green0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Green_co.paa",
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Green_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
};

class HRW_HK416D_Sand: HRW_HK416D
{
	scope = 2;
	color="Sand";
	displayName = "$STR_HK416D_Sand0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Sand_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
};