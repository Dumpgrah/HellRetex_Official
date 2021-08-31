class HRW_SIG553_Base: AKM_Base
{
	scope = 0;
	weight = 3200;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.6,50,200,4,10};
	ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
	WeaponLength = 0.73;
	barrelArmor = 4.444;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
	magazines[] = {"HRW_Mag_SIG553_30Rnd"};
	magazineSwitchTime = 0.2;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2,2,1.1};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadAction = "ReloadAKM";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"FullAuto","SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
		//begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
		//begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.11;
		recoil = "recoil_m4";
		recoilProne = "recoil_m4_prone";
		dispersion = 0.0015;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
	};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
		//begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
		//begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.11;
		recoil = "recoil_m4";
		recoilProne = "recoil_m4_prone";
		dispersion = 0.0015;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
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

class HRW_SIG553: HRW_SIG553_Base
{
	scope = 2;
	displayName = "$STR_SIG5530";
	descriptionShort = "$STR_SIG5531";
	model = "H2A\HRW\Weapons\HRW_SIG553\HRW_SIG553.p3d";
	attachments[] = {"weaponWrap","weaponOptics","weaponMuzzleM4","weaponMountingRail"};
	itemSize[] = {6,3};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_SIG553\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_SIG553\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic.rvmat"
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
				overrideParticle = "weapon_shot_akm_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.05,0,0};
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
			maxOverheatingValue = 40;
			shotsToStartOverheating = 5;
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
	class DamageSystem 
	{
		class GlobalHealth 
		{
			class Health 
			{
				hitpoints = 300;
				healthLevels[] = 
				{
					{1.0,{
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_SIG553\Data\BodyPlastic_destruct.rvmat"
					}},
				};
			};
		};
	};
};
