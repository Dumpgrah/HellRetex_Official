class HRW_Gewehr43_Base: UMP45_Base
{
	scope = 0;
	weight = 4400;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	//ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
	WeaponLength = 1.115;
	barrelArmor = 1.5;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_792x57"};
	magazines[] = {"HRW_Mag_Gewehr43_10Rnd"};
	magazineSwitchTime = 0.45;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.3,1.3,1};
	//drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
	//reloadAction = "ReloadUMP";
	simpleHiddenSelections[] = {"hide_barrel"};
	hiddenSelections[] = {"body_metal","body_wood"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.125;
		recoil = "recoil_sks";
		recoilProne = "recoil_sks_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
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

class HRW_Gewehr43: HRW_Gewehr43_Base
{
	scope = 2;
	displayName = "$STR_Gewehr430";
	descriptionShort = "$STR_Gewehr431";
	model = "H2A\HRW\Weapons\HRW_Gewehr43\HRW_Gewehr43.p3d";
	attachments[] = {"weaponWrap","weaponOpticsGewehr","suppressorImpro"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_Gewehr43\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_Gewehr43\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood.rvmat"
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
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_Gewehr43\Data\BodyWood_destruct.rvmat"
					}}
				};
			};
		};
	};
};
