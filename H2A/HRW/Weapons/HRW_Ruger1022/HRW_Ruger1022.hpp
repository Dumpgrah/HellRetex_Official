class HRW_Ruger1022_Base: Ruger1022_Base
{
	scope = 0;
	weight = 2300;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.5,50,160,4,10};
	WeaponLength = 1.18986;
	barrelArmor = 2.019;
	initSpeedMultiplier = 1.15;
	winchesterTypeOpticsMount = 1;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_22"};
	magazines[] = {"Mag_Ruger1022_30Rnd","Mag_Ruger1022_15Rnd"};
	magazineSwitchTime = 0.4;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2,2,1.1};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",0.8,1,20};
	reloadAction = "ReloadRuger1022";
	hiddenSelections[]={"body_metal","body_plastic"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[]={"Ruger1022_silencerHomeMade_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"};
		reloadTime = 0.08;
		dispersion = 0.00075;
		magazineSlot = "magazine";
	};
	class NoiseShoot
	{
		strength = 5;
		type = "shot";
	};
	class OpticsInfo: OpticsInfoRifle
	{
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
	};
};
class HRW_Ruger1022: HRW_Ruger1022_Base
{
	scope = 2;
	displayName="$STR_Ruger10220";
	descriptionShort="$STR_Ruger10221";
	model="H2A\HRW\Weapons\HRW_Ruger1022\HRW_Ruger1022.p3d";
	itemSize[] = {9,3};
	attachments[]={"weaponWrap","weaponOptics"};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"
	};	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"}}
				};
			};
		};
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_fnx_02";
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
	};
};
class HRW_Ruger1022_Camo: HRW_Ruger1022
{
	scope=2;
	color="Camo";
	displayName="$STR_Ruger1022_Camo0";
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\Body_Camo_co.paa",
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\Body_Camo_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_Ruger1022\Data\BodyPlastic.rvmat"
	};
};