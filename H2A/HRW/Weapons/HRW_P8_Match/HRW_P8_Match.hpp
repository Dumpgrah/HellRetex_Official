class HRW_P8_Match_Base: CZ75_Base
{
	scope = 0;
	weight = 1900;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.55,10,280,4,10};
	WeaponLength = 0.835576;
	barrelArmor = 2;
	initSpeedMultiplier = 1;
	chamberSize = 1;
	chamberedRound = "";
	magazines[] = {"HRW_Mag_P8_Match_18Rnd"};
	chamberableFrom[] = {"Ammo_9x19"};
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.2,1.2,0.8};
	drySound[] = {"DZ\sounds\weapons\firearms\CZ75\CZ75_dry",0.5,1,20};
	reloadMagazineSound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_reload",0.8,1,20};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"CZ75_Shot_SoundSet","CZ75_Tail_SoundSet","CZ75_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"CZ75_silencerPro_SoundSet","CZ75_silencerTail_SoundSet","CZ75_silencerInteriorTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_0",1,1,600};
		//begin2[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_1",1,1,600};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin1",0.33333,"begin2",0.33333};
		//beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,60};
		//beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced2",1,1,60};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.125;
		recoil = "recoil_cz75";
		recoilProne = "recoil_cz75_prone";
		dispersion = 0.0015;
		magazineSlot = "magazine";
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlashForward
			{
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				overrideParticle = "weapon_shot_cz75_01";
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
	class NoiseShoot
	{
		strength = 50;
		type = "shot";
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
};

class HRW_P8_Match: HRW_P8_Match_Base
{
	scope = 2;
	displayName = "$STR_P8_Match0";
	descriptionShort = "$STR_P8_Match1";
	model = "H2A\HRW\Weapons\HRW_P8_Match\HRW_P8_Match.p3d";
	attachments[] = {"pistolOptics","pistolMuzzle"};
	itemSize[] = {3,2};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 220;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_P8_Match\Data\Body.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_P8_Match\Data\Body.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_P8_Match\Data\Body_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_P8_Match\Data\Body_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_P8_Match\Data\Body_destruct.rvmat"
					}}
				};
			};
		};
	};
};
