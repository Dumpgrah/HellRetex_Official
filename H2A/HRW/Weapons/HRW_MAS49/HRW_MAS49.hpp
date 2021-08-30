class HRW_MAS49_Base: AKM_Base
{
	scope = 0;
	weight = 3900;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	//ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
	WeaponLength = 1.10;
	barrelArmor = 4.444;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_750x54"};
	magazines[] = {"HRW_Mag_MAS49_10Rnd"};
	magazineSwitchTime = 0.2;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2,2,1.1};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadAction = "ReloadAKM";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_wood","body_plastic"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.125;
		recoil = "recoil_sks";
		recoilProne = "recoil_sks_prone";
		dispersion = 0.0015;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
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
};

class HRW_MAS49: HRW_MAS49_Base
{
	scope = 2;
	displayName="$STR_MAS490";
	descriptionShort = "$STR_MAS491";
	model = "H2A\HRW\Weapons\HRW_MAS49\HRW_MAS49.p3d";
	attachments[] = {"weaponWrap","weaponOpticsMAS","suppressorImpro","weaponBayonetMAS49"};
	itemSize[] = {8,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_MAS49\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_MAS49\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_MAS49\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood.rvmat",
		"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic.rvmat"
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
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.0,{
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyWood_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_MAS49\Data\BodyPlastic_destruct.rvmat"
					}}
				};
			};
		};
	};
};

