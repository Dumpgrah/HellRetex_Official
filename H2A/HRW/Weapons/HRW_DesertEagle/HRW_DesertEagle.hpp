class HRW_DesertEagle_Base: Deagle_Base
{
	scope = 0;
	weight = 1400;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	WeaponLength = 0.25;
	barrelArmor = 1.453;
	initSpeedMultiplier = 1.265;
	chamberSize = 1;
	chamberedRound = "";
	magazines[] = {"HRW_Mag_DesertEagle_9Rnd"};
	chamberableFrom[] = {"Ammo_357"};
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.3,1.3,0.9};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\waltherP1\WaltherP1_reload_00",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"DEG_Shot_SoundSet","DEG_Tail_SoundSet","DEG_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"DEG_silencerPro_SoundSet","DEG_silencerTail_SoundSet","DEG_silencerInteriorTail_SoundSet"}};
		reloadTime = 0.18;
		dispersion = 0.004;
		magazineSlot = "magazine";
	};
	class OpticsInfo: OpticsInfoPistol
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlashForward
			{
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				overrideParticle = "weapon_shot_fnx_01";
			};
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke_small";
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 1;
			maxOverheatingValue = 7;
			overheatingDecayInterval = 1;
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
};

class HRW_DesertEagle: HRW_DesertEagle_Base
{
	scope = 2;
	displayName = "$STR_DesertEagle0";
	descriptionShort = "$STR_DesertEagle1";
	model = "H2A\HRW\Weapons\HRW_DesertEagle\HRW_DesertEagle.p3d";
	attachments[] = {"weaponOpticsCrossbow","pistolFlashlight","pistolMuzzle"};
	itemSize[] = {4,2};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_DesertEagle\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_DesertEagle\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic.rvmat"
	};	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 220;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_DesertEagle\Data\BodyPlastic_destruct.rvmat"
					}}
				};
			};
		};
	};
};
