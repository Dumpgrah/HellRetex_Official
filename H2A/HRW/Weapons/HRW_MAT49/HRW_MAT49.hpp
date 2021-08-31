class HRW_MAT49_Base: CZ61_Base
{
	scope = 0;
	weight = 2500;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.5,10,190,4,10};
	WeaponLength = 0.72;
	barrelArmor = 1.9;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_9x19"};
	magazines[] = {"HRW_Mag_MAT49_32Rnd"};
	magazineSwitchTime = 0.3;
	initSpeedMultiplier = 1.15;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.1,1.1,1};
	//drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
	reloadAction = "ReloadCZ61";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"FullAuto","SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};		//begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
		//begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
		//begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.125;
		recoil = "recoil_mp5";
		recoilProne = "recoil_mp5_prone";
		dispersion = 0.0045;
		magazineSlot = "magazine";
	};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};		//begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
		//begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
		//begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.067;
		recoil = "recoil_mp5";
		recoilProne = "recoil_mp5_prone";
		dispersion = 0.0045;
		magazineSlot = "magazine";
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_cz61_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
			};
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke_small";
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 3;
			maxOverheatingValue = 10;
			overheatingDecayInterval = 1;
			class SmokingBarrel
			{
				overrideParticle = "smoking_barrel_small";
				onlyWithinOverheatLimits[] = {0.0,0.5};
				onlyWithinRainLimits[] = {0,0.2};
				ignoreIfSuppressed = 1;
			};
			class SmokingBarrelHotSteam
			{
				overrideParticle = "smoking_barrel_steam_small";
				positionOffset[] = {0.1,0.02,0};
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
	class NoiseShoot
	{
		strength = 66;
		type = "shot";
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {75,150};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
};
class HRW_MAT49: HRW_MAT49_Base
{
	scope = 2;
	displayName = "$STR_MAT490";
	descriptionShort = "$STR_MAT491";
	model = "H2A\HRW\Weapons\HRW_MAT49\HRW_MAT49.p3d";
	attachments[]={};
	itemSize[] = {5,2};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_MAT49\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_MAT49\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_MAT49\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_MAT49\Data\BodyPlastic.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Weapons\HRW_MAT49\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MAT49\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_MAT49\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MAT49\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MAT49\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MAT49\Data\BodyPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_MAT49\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_MAT49\Data\BodyPlastic_destruct.rvmat"}}
				};
			};
		};
	};
};
