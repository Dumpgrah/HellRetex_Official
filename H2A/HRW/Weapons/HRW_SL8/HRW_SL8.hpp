class HRW_SL8_Base: AKM_Base
{
	scope = 0;
	weight = 3900;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.5,50,150,4,10};
	WeaponLength = 0.98;
	barrelArmor = 2.4;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[]=
	{
		"Ammo_556x45",
		"Ammo_556x45Tracer"
	};
	magazines[]=
	{
		"HRW_Mag_SL8_20Rnd"
	};
	magazineSwitchTime = 0.38;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel", "sights"};
	reloadAction = "ReloadVSS";
	hiddenSelections[] = {"body_metal", "body_plastic"};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_SL8\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_SL8\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic.rvmat"
	};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		reloadTime = 0.125;
		dispersion = 0.002;
		magazineSlot = "magazine";
		soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {100,200,300,400};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
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
};

class HRW_SL8: HRW_SL8_Base
{
	scope = 2;
	displayName = "$STR_SL80";
	descriptionShort = "$STR_SL81";
	model = "H2A\HRW\Weapons\HRW_SL8\HRW_SL8.p3d";
	attachments[]=
	{
		"weaponWrap",
		"weaponOptics",
		"weaponMuzzleM4"
	};
	itemSize[]={8,3};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = {
					{1.0,{"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal.rvmat", "H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal.rvmat", "H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal_damage.rvmat", "H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal_damage.rvmat", "H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_SL8\Data\BodyMetal_destruct.rvmat", "H2A\HRW\Weapons\HRW_SL8\Data\BodyPlastic_destruct.rvmat"}}
				};
			};
		};
	};
};

