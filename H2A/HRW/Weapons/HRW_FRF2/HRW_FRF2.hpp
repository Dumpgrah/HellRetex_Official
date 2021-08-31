class HRW_FRF2_Base: CZ527_Base
{
	scope = 0;
	//animName = "cz527";
	weight = 5100;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	modelOptics = "-";
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	PPDOFProperties[] = {};
	opticsFlare = 0;
	winchesterTypeOpticsMount = 1;
	ironsightsExcludingOptics[] = {"HuntingOptic"};
	WeaponLength = 1.138;
	barrelArmor = 1.111;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_762x51"};
	magazines[] = {"HRW_Mag_FRF2_10Rnd"};
	magazineSwitchTime = 0.38;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"optic_rail","hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
	//reloadAction = "Reloadcz527";
	//shotAction = "Reloadcz527Shot";
	hiddenSelections[] = {"barrel_metal","barrel_plastic","parts_metal","parts_wood","parts_plastic"};
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
		recoil = "recoil_cz527";
		recoilProne = "recoil_cz527_prone";
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
				overrideParticle = "weapon_shot_cz527_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.05,0,0};
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 1;
			maxOverheatingValue = 4;
			overheatingDecayInterval = 3;
			class BarrelSmoke
			{
				overrideParticle = "smoking_barrel_small";
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
};

class HRW_FRF2: HRW_FRF2_Base
{
	scope = 2;
	displayName = "$STR_FRF20";
	descriptionShort="$STR_FRF21";
	model="H2A\HRW\Weapons\HRW_FRF2\HRW_FRF2.p3d";
	attachments[]={"weaponWrap","weaponOpticsHunting","suppressorImpro"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_FRF2\Data\Barrel_co.paa",
		"H2A\HRW\Weapons\HRW_FRF2\Data\Barrel_co.paa",
		"H2A\HRW\Weapons\HRW_FRF2\Data\Parts_co.paa",
		"H2A\HRW\Weapons\HRW_FRF2\Data\Parts_co.paa",
		"H2A\HRW\Weapons\HRW_FRF2\Data\Parts_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
		"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
		"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
		"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
		"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
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
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
					}},						
					{0.5,{
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
					}},						
					{0.3,{
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
					}},						
					{0.0,{
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\BarrelPlastic.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsMetal.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsWood.rvmat",
						"H2A\HRW\Weapons\HRW_FRF2\Data\PartsPlastic.rvmat"
					}},
				};
			};
		};
	};
};
