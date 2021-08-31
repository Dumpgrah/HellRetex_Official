class HRW_AEK971_Base: AK74_Base
{
	scope = 0;
	weight = 3300;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	WeaponLength = 0.96;
	barrelArmor = 2.743;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer"};
	magazines[] = {"Mag_AK74_30Rnd","Mag_AK74_30Rnd_Black","Mag_AK74_30Rnd_Green"};
	magazineSwitchTime = 0.2;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadAction = "ReloadAKM";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_plastic","backsight_metal"};
	modes[] = {"FullAuto","SemiAuto"};
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
				overrideParticle = "weapon_shot_ak74_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.1,0,0};
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
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
		//begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
		//begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.08;
		recoil = "recoil_AK74";
		recoilProne = "recoil_AK74_prone";
		dispersion = 0.002;
		magazineSlot = "magazine";
	};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
		//begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
		//begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.08;
		recoil = "recoil_AK74";
		recoilProne = "recoil_AK74_prone";
		dispersion = 0.002;
		magazineSlot = "magazine";
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
class HRW_AEK971: HRW_AEK971_Base
{
	scope = 2;
	displayName = "$STR_AEK9710";
	descriptionShort = "$STR_AEK9711";
	model = "H2A\HRW\Weapons\HRW_AEK971\HRW_AEK971.p3d";
	attachments[] = {"weaponWrap","weaponOpticsAK","weaponMuzzleAK"};
	itemSize[] = {8,3};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_AEK971\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_AEK971\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_AEK971\Data\Backsight_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic.rvmat",
		"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal.rvmat"
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
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic_damage.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic_damage.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BodyPlastic_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_AEK971\Data\BacksightMetal_destruct.rvmat"
					}},
				};
			};
		};
	};
};
