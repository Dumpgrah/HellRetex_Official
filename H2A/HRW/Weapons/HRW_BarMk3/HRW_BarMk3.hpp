class HRW_BarMk3_Base: AKM_Base
{
	scope = 0;
	weight = 3350;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	//ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
	WeaponLength = 0.89;
	barrelArmor = 4.444;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
	magazines[] = {"HRW_Mag_BarMK3_10Rnd"};
	magazineSwitchTime = 0.2;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadAction = "ReloadAKM";
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
	hiddenSelections[] = {"receiver_metal","receiver_wood","stock_metal","stock_wood"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[]={"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
		soundSetShotExt[]={{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
		//begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
		//begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.125;
		recoil = "recoil_sks";
		recoilProne = "recoil_sks_prone";
		dispersion = 0.0015;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
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

class HRW_BarMk3: HRW_BarMk3_Base
{
	scope = 2;
	displayName = "$STR_BarMK30";
	descriptionShort = "$STR_BarMK31";
	model = "H2A\HRW\Weapons\HRW_BarMk3\HRW_BarMK3.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting","suppressorImpro"};
	itemSize[] = {8,3};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_BarMk3\Data\Receiver_co.paa",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\Receiver_co.paa",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\Stock_co.paa",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\Stock_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal.rvmat",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood.rvmat",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal.rvmat",
		"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood.rvmat"
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
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\ReceiverWood_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_BarMk3\Data\StockWood_destruct.rvmat"
					}}
				};
			};
		};
	};
};
