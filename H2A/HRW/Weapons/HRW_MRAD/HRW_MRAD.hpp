class HRW_MRAD_Base: CZ527_Base
{
	scope = 0;
	//animName = "cz527";
	weight = 2720;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	modelOptics = "-";
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	PPDOFProperties[] = {1,0.5,50,160,4,10};
	opticsFlare = 0;
	winchesterTypeOpticsMount = 1;
	ironsightsExcludingOptics[] = {"HuntingOptic"};
	WeaponLength = 1.190;
	barrelArmor = 1.111;
	initSpeedMultiplier = 1.2;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_7x64"};
	magazines[] = {"HRW_Mag_MRAD_10Rnd"};
	magazineSwitchTime = 0.38;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel","sights_up","sights_down"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
	//reloadAction = "Reloadcz527";
	//shotAction = "Reloadcz527Shot";
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"Single"};
	class Single: Mode_Single
	{
		soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
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
	class NoiseShoot
	{
		strength = 100;
		type = "shot";
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
class HRW_MRAD: HRW_MRAD_Base
{
	scope = 2;
	displayName = "$STR_MRAD0";
	descriptionShort="$STR_MRAD1";
	model="H2A\HRW\Weapons\HRW_MRAD\HRW_MRAD.p3d";
	attachments[]={"suppressorImpro","weaponWrap","weaponOpticsHunting"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic.rvmat"
	};	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 300;
				healthLevels[] = {
					{1.0,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic_destruct.rvmat"}}
				};
			};
		};
	};
};
class HRW_MRAD_Green: HRW_MRAD
{
	scope=2;
	color="Green";
	displayName = "$STR_MRAD_Green0";
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_Green_ca.paa",
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_Green_ca.paa"

	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic.rvmat"
	};
};

class HRW_MRAD_Sand: HRW_MRAD
{
	scope=2;
	color="Sand";
	displayName = "$STR_MRAD_Sand0";
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_Sand_ca.paa",
		"H2A\HRW\Weapons\HRW_MRAD\Data\Body_Sand_ca.paa"

	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_MRAD\Data\BodyPlastic.rvmat"
	};
};
