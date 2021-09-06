class HRW_M1Garand_Base: SKS_Base
{
	scope = 0;
	weight = 4700;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	DisplayMagazine = 0;
	WeaponLength = 1.092;
	barrelArmor = 1.667;
	chamberSize = 8;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_762x51"};
	magazines[] = {};
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.4,2.4,1.3};
	simpleHiddenSelections[] = {"hide_barrel"};
	cursor = "aimBowGhost";
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\SKS\SKS_reloading",0.8,1,20};
	//reloadAction = "ReloadSks";
	hiddenSelections[] = {"body_metal","body_wood"};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 1;
		recoil = "recoil_sks";
		recoilProne = "recoil_sks_prone";
		dispersion = 0.001;
		magazineSlot = "magazine";
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
				overrideParticle = "weapon_shot_sks_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.05,0,0};
			};
			class ChamberSmoke
			{
				overrideParticle = "weapon_shot_chamber_smoke";
				overridePoint = "Nabojnicestart";
				overrideDirectionPoint = "Nabojniceend";
			};
		};
		class OnOverheating
		{
			maxOverheatingValue = 20;
			shotsToStartOverheating = 1;
			overheatingDecayInterval = 1;
			class SmokingBarrel1
			{
				overrideParticle = "smoking_barrel_small";
				onlyWithinOverheatLimits[] = {0.0,0.5};
				positionOffset[] = {0.1,0,0};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot1
			{
				overrideParticle = "smoking_barrel";
				onlyWithinOverheatLimits[] = {0.5,0.8};
				positionOffset[] = {0.1,0,0};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot3
			{
				overrideParticle = "smoking_barrel_heavy";
				onlyWithinOverheatLimits[] = {0.8,1};
				positionOffset[] = {0.1,0,0};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHotSteamSmall
			{
				overrideParticle = "smoking_barrel_steam_small";
				positionOffset[] = {0.3,0,0};
				onlyWithinRainLimits[] = {0.2,0.5};
			};
			class SmokingBarrelHotSteam
			{
				overrideParticle = "smoking_barrel_steam";
				positionOffset[] = {0.3,0,0};
				onlyWithinRainLimits[] = {0.5,1};
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
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		modelOptics = "-";
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
	};
	/*
	class AnimationSources
	{
		class Clip_rounds
		{
			source = "user";
			animPeriod = 0.01;
			initPhase = 1;
		};
		class Clip
		{
			source = "user";
			animPeriod = 0.01;
			initPhase = 1;
		};
	};
	*/
};

class HRW_M1Garand: HRW_M1Garand_Base
{
	scope = 2;
	displayName = "$STR_M1Garand0";
	descriptionShort = "$STR_M1Garand1";
	model = "H2A\HRW\Weapons\HRW_M1Garand\HRW_M1Garand.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting","suppressorImpro","weaponMountingRail"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M1Garand\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_M1Garand\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 300;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M1Garand\Data\BodyWood_destruct.rvmat"
					}}
				};
			};
		};
	};
};
