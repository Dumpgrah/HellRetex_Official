class HRW_M200_Base: CZ527_Base
{
	scope = 0;
	//animName = "cz527";
	weight = 8000;
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
	WeaponLength = 1.406;
	barrelArmor = 1.111;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_408"};
	magazines[] = {"HRW_Mag_M200_7Rnd"};
	magazineSwitchTime = 1;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
	//reloadAction = "Reloadcz527";
	//shotAction = "Reloadcz527Shot";
	hiddenSelections[] = {"body_metal","body_plastic"};
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

class HRW_M200_Dark: HRW_M200_Base
{
	scope = 2;
	color="Dark";
	displayName = "$STR_M200_Dark0";
	descriptionShort="$STR_M2001";
	model="H2A\HRW\Weapons\HRW_M200\HRW_M200.p3d";
	attachments[]={"weaponWrap","weaponOpticsHunting"};
	itemSize[] = {10,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M200\Data\BodyDark_ca.paa",
		"H2A\HRW\Weapons\HRW_M200\Data\BodyDark_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic.rvmat"
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
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic.rvmat"
					}},						
					{0.5,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic_damage.rvmat"

					}},						
					{0.3,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic_damage.rvmat"

					}},						
					{0.0,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkPlastic_destruct.rvmat"

					}},
				};
			};
		};
	};
};

class HRW_M200_Light: HRW_M200_Base
{
	scope = 2;
	color="Light";
	displayName = "$STR_M200_Light0";
	descriptionShort="$STR_M2001";
	model="H2A\HRW\Weapons\HRW_M200\HRW_M200.p3d";
	itemSize[] = {10,3};
	attachments[]={"weaponWrap","weaponOpticsHunting"};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M200\Data\BodyLight_ca.paa",
		"H2A\HRW\Weapons\HRW_M200\Data\BodyLight_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic.rvmat"
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
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic.rvmat"
					}},						
					{0.5,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic_damage.rvmat"

					}},						
					{0.3,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic_damage.rvmat"

					}},						
					{0.0,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M200\Data\BodyLightPlastic_destruct.rvmat"

					}},
				};
			};
		};
	};
};

