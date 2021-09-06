class HRW_TOZ_Base: B95_Base
{
	scope = 0;
	weight = 2820;
	itemSize[] = {9,3};
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
	magazines[] = {};
	DisplayMagazine = 0;
	winchesterTypeOpticsMount = 1;
	PPDOFProperties[] = {1,0.5,50,160,4,10};
	WeaponLength = 1.160;
	barrelArmor = 1.6;
	initSpeedMultiplier = 1.05;
	muzzles[] = {"this","SecondMuzzle"};
	ejectType = 3;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
	reloadAction = "ReloadB95";
	reloadMagazineSound[] = {"dz\sounds\weapons\firearms\B95\b95_reload2",0.8,1,20};
	reloadSound[] = {"",0.05623413,1,20};
	hiddenSelections[] = {"body_metal","body_wood"};
	simpleHiddenSelections[] = {"bullet","bullet2","hide_barrel"};
	modes[] = {"Single","Double"};
	class Single: Mode_Single
	{
		soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
		reloadTime = 0.5;
		dispersion = 0.00075;
		magazineSlot = "magazine";
	};
	class Double: Mode_Double
	{
		soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
		reloadTime = 0.5;
		dispersion = 0.001;
		magazineSlot = "magazine";
	};
	class SecondMuzzle: Muzzle_Base
	{
		chamberSize = 1;
		muzzlePos = "usti hlavne_2";
		muzzleEnd = "konec hlavne_2";
		cartridgePos = "nabojnicestart_2";
		cartridgeVel = "nabojniceend_2";
		modes[] = {"Single","Burst"};
		magazines[] = {};
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Mag_308WinSnaploader_2Rnd"};
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.05;
		irDistance = 0.0;
		irLaserPos = "laser pos";
		irLaserEnd = "laser dir";
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.005623413,1};
		soundBullet[] = {};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime = 0.5;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime = 0.5;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
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
		distanceZoomMin = 50;
		distanceZoomMax = 200;
		discreteDistance[] = {50,100,200};
		discreteDistanceInitIndex = 0;
	};
};
class HRW_TOZ: HRW_TOZ_Base
{
	scope = 2;
	displayName = "$STR_TOZ0";
	descriptionShort = "$STR_TOZ1";
	model = "H2A\HRW\Weapons\HRW_TOZ\HRW_TOZ.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting"};
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_TOZ\Data\Body_ca.paa","H2A\HRW\Weapons\HRW_TOZ\Data\Body_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood.rvmat"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_TOZ\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_TOZ\Data\BodyWood_destruct.rvmat"}}
				};
			};
		};
	};
	class Particles
	{
		class OnFire
		{
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke";
				muzzleIndex = 0;
			};
			class SmokeCloud_2
			{
				overrideParticle = "weapon_shot_winded_smoke";
				overridePoint = "Usti hlavne_2";
				muzzleIndex = 1;
			};
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_winch70_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
			};
			class MuzzleFlash_2
			{
				overrideParticle = "weapon_shot_winch70_01";
				overridePoint = "Usti hlavne_2";
				illuminateWorld = 1;
				muzzleIndex = 1;
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
};

