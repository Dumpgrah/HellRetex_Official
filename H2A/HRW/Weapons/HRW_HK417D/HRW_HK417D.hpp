class HRW_HK417D_Base: M4A1_Base
{
	scope = 0;
	weight = 4490;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.6,50,200,4,10};
	ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","HRW_HAMR_Optic"};
	WeaponLength = 0.994;
	barrelArmor = 3.75;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_762x51"};
	magazines[] = {"HRW_Mag_HK417D_20Rnd"};
	magazineSwitchTime = 0.5;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2,2,1.1};
	simpleHiddenSelections[] = {"hide_barrel"};
	hiddenSelections[] = {"body","parts"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		reloadTime = 0.125;
		recoil = "recoil_fal";
		recoilProne = "recoil_fal_prone";
		dispersion = 0.002;
		magazineSlot = "magazine";
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
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

class HRW_HK417D: HRW_HK417D_Base
{
	scope = 2;
	displayName = "$STR_HK417D0";
	descriptionShort = "$STR_HK417D1";
	model = "H2A\HRW\Weapons\HRW_HK417D\HRW_HK417D.p3d";
	attachments[]={"weaponWrap","weaponOptics","weaponFlashlight","suppressorImpro"};
	itemSize[] = {9,3};
	spawnDamageRange[] = {0.0,0.6};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_HK417D\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_HK417D\Data\Body.rvmat",
		"H2A\HRW\Weapons\HRW_HK417D\Data\Parts.rvmat"
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
						"H2A\HRW\Weapons\HRW_HK417D\Data\Body.rvmat",
						"H2A\HRW\Weapons\HRW_HK417D\Data\Parts.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_HK417D\Data\Body.rvmat",
						"H2A\HRW\Weapons\HRW_HK417D\Data\Parts.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_HK417D\Data\Body_damage.rvmat",
						"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_HK417D\Data\Body_damage.rvmat",
						"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_HK417D\Data\Body_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_destruct.rvmat"
					}}
				};
			};
		};
	};
};
