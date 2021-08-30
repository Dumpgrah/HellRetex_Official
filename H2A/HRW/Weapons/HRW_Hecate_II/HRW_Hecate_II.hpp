class HRW_Hecate_II_Base: CZ527_Base
{
	scope = 0;
	//animName = "cz527";
	weight = 15800;
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
	WeaponLength = 1.370;
	barrelArmor = 1.111;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_127x99"};
	magazines[] = {"HRW_Mag_Hecate_II_7Rnd"};
	magazineSwitchTime = 1;
	ejectType = 0;
	recoilModifier[] = {2,2,2};
	swayModifier[] = {2.4,2.4,1.4};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
	//reloadAction = "Reloadcz527";
	//shotAction = "Reloadcz527Shot";
	hiddenSelections[] = {"body_metal","body_wood"};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"HRW_127x99_Shot_SoundSet","HRW_127x99_Tail_SoundSet","HRW_127x99_InteriorTail_SoundSet"};
		//begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		//soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		reloadTime = 1;
		recoil = "recoil_cz527";
		recoilProne = "recoil_cz527_prone";
		dispersion = 0.00001;
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

class HRW_Hecate_II: HRW_Hecate_II_Base
{
	scope = 2;
	displayName = "$STR_Hecate_II0";
	descriptionShort="$STR_Hecate_II1";
	model="H2A\HRW\Weapons\HRW_Hecate_II\HRW_Hecate_II.p3d";
	attachments[]={"weaponWrap","weaponOpticsHunting"};
	itemSize[] = {10,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood.rvmat"
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
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWood_destruct.rvmat"
					}}
				};
			};
		};
	};
};

class HRW_Hecate_II_Green: HRW_Hecate_II
{
	scope = 2;
	color="Green";
	displayName = "$STR_Hecate_II_Green0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_Green_co.paa",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_Green_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWoodPainted.rvmat"
	};
};

class HRW_Hecate_II_Sand: HRW_Hecate_II
{
	scope = 2;
	color="Sand";
	displayName = "$STR_Hecate_II_Sand0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\Body_Sand_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_Hecate_II\Data\BodyWoodPainted.rvmat"
	};
};
