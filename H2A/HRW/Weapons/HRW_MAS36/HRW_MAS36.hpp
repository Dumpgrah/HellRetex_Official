class HRW_MAS36_Base: Mosin9130_Base
{
	scope = 0;
	displayName = "$STR_MAS360";
	descriptionShort = "$STR_MAS361";
	//animName = "Mosin9130";
	weight = 3720;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.5,20,170,4,10};
	DisplayMagazine = 0;
	WeaponLength = 1.02;
	barrelArmor = 2.0;
	initSpeedMultiplier = 1.05;
	chamberSize = 5;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_750x54"};
	magazines[] = {};
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.5,2.5,1.3};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
	//reloadSound[] = {"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",0.8,1,20};
	//reloadAction = "ReloadMosinFull";
	//shotAction = "ReloadMosinShort";
	hiddenSelections[] = {"body_metal","body_wood"};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_MAS36\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_MAS36\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood.rvmat"
	};
	modes[] = {"Single"};
	class Single: Mode_Single
	{
		soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_1",1,1,1000};
		//begin3[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_2",1,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		reloadTime = 1;
		recoil = "recoil_mosin";
		recoilProne = "recoil_mosin_prone";
		dispersion = 0.001;
		magazineSlot = "magazine";
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_mosin9130_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.03,0,0};
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 1;
			maxOverheatingValue = 3;
			overheatingDecayInterval = 4;
			class BarrelSmoke
			{
				overrideParticle = "smoking_barrel_small";
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
		strength = 90;
		type = "shot";
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 0;
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
					{1.0,{"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_MAS36\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_MAS36\Data\BodyWood_destruct.rvmat"}}
				};
			};
		};
	};
};

class HRW_MAS36: HRW_MAS36_Base
{
	scope = 2;
	model = "H2A\HRW\Weapons\HRW_MAS36\HRW_MAS36.p3d";
	itemSize[] = {7,3};
	attachments[] = {"weaponWrap","weaponOpticsMAS","suppressorImpro","weaponBayonetMAS36"};
};
