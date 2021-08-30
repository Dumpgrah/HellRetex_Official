class HRW_MP9_Base: Colt1911_Base
{
	scope = 0;
	weight = 1400;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {1,0.9,10,250,4,10};
	WeaponLength = 0.523;
	barrelArmor = 1.523;
	initSpeedMultiplier = 1;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_9x19"};
	magazines[] = {"HRW_Mag_MP9_30Rnd"};
	magazineSwitchTime = 0.24;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.1,1.1,0.5};
	//drySound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_reload",0.8,1,20};
	hiddenSelections[] = {"body_metal","body_Metal"};
	modes[] = {"FullAuto","SemiAuto"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_0",1,1,700};
		//begin2[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_1",1,1,700};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.08;
		recoil = "recoil_mp5";
		recoilProne = "recoil_mp5_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
	};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_0",1,1,700};
		//begin2[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_1",1,1,700};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
		reloadTime = 0.08;
		recoil = "recoil_mp5";
		recoilProne = "recoil_mp5_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
	};
	class NoiseShoot
	{
		strength = 66;
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
class HRW_MP9: HRW_MP9_Base
{
	scope = 2;
	displayName = "$STR_MP90";
	descriptionShort = "$STR_MP91";
	model = "H2A\HRW\Weapons\HRW_MP9\HRW_MP9.p3d";
	attachments[] = {"weaponOptics","pistolFlashlight","pistolMuzzleMP9"};
	itemSize[] = {5,2};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_ca.paa",
		"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat","H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_MP9\Data\BodyMetal_destruct.rvmat"}}
				};
			};
		};
	};
};