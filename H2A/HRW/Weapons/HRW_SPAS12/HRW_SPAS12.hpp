class HRW_SPAS12_Base: Mp133Shotgun_Base
{
	scope = 0;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	chamberSize = 9;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
	magazines[] = {};
	DisplayMagazine = 0;
	PPDOFProperties[] = {1,0.5,10,140,4,10};
	WeaponLength = 1.100;
	barrelArmor = 2.25;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.3,2.3,1.2};
	hiddenSelections[] = {"body_metal","body_plastic"};
	modes[] = {"Single"};
	class Particles
	{
		class OnFire
		{
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke";
			};
			class SmokeCloud2
			{
				overrideParticle = "weapon_shot_winded_smoke";
			};
			class SmokeCloud3BadlyDamaged
			{
				overrideParticle = "weapon_shot_winded_smoke";
				onlyWithinHealthLabel[] = {3,4};
			};
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_mp133_01";
				illuminateWorld = 1;
			};
			class BadlyDamagedChamberSmoke
			{
				overrideParticle = "weapon_shot_chamber_smoke";
				overridePoint = "Nabojnicestart";
				overrideDirectionPoint = "Nabojniceend";
				onlyWithinHealthLabel[] = {3,4};
			};
			class BadlyDamagedChamberSmokeRaise
			{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "Nabojnicestart";
				onlyWithinHealthLabel[] = {3,4};
			};
		};
		class OnOverheating
		{
			maxOverheatingValue = 4;
			shotsToStartOverheating = 1;
			overheatingDecayInterval = 3;
			class SmokingBarrel
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
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.5;
		recoil = "recoil_Mp133";
		recoilProne = "recoil_Mp133_prone";
		dispersion = 0.001;
		firespreadangle = 0.5;
		magazineSlot = "magazine";
	};
	class OpticsInfo: OpticsInfoShotgun
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
};

class HRW_SPAS12: HRW_SPAS12_Base
{
	scope = 2;
	displayName="$STR_SPAS120";
	descriptionShort="$STR_SPAS121";
	model="H2A\HRW\Weapons\HRW_SPAS12\HRW_SPAS12.p3d";
	attachments[]={};
	itemSize[] = {8,3};
	weight = 4100;
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_SPAS12\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_SPAS12\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = {
					{1.0,{"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_SPAS12\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_SPAS12\Data\BodyPlastic_destruct.rvmat"}}
				};
			};
		};
	};
};


