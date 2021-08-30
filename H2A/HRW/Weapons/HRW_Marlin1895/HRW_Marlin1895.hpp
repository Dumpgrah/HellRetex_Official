class HRW_Marlin1895_Base: Repeater_Base
{
	scope = 0;
	//animName = "Repeater";
	weight = 2720;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	DisplayMagazine = 0;
	WeaponLength = 1.1;
	barrelArmor = 0.54;
	initSpeedMultiplier = 1.344;
	chamberSize = 7;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_357"};
	magazines[] = {};
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_reload_0",0.8,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_cycle_0",0.8,1,20};
	//reloadSkips[] = {0.21,0.35,0.48,0.59,0.69,0.78};
	//reloadAction = "ReloadRepeater";
	//shotAction = "ReloadRepeaterShot";
	hiddenSelections[] = {"body_metal","body_wood","leather"};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"Repeater_Shot_SoundSet","Repeater_Tail_SoundSet","Repeater_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Repeater_silencerHomeMade_SoundSet","Repeater_silencerHomeMadeTail_SoundSet","Repeater_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_0",3.9810717,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_1",3.9810717,1,1000};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		reloadTime = 1;
		recoil = "recoil_repeater";
		recoilProne = "recoil_repeater_prone";
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
				positionOffset[] = {-0.05,0,0};
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
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {50,100,200,300};
		discreteDistanceInitIndex = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather_destruct.rvmat"
					}},
				};
			};
		};
	};
};

class HRW_Marlin1895: HRW_Marlin1895_Base
{
	scope = 2;
	displayName = "$STR_Marlin18950";
	descriptionShort = "$STR_Marlin18951";
	model = "H2A\HRW\Weapons\HRW_Marlin1895\HRW_Marlin1895.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting","suppressorImpro"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\Body_co.paa"
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\Body_co.paa"
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\BodyWood.rvmat",
		"H2A\HRW\Weapons\HRW_Marlin1895\Data\Leather.rvmat"
	};
};

