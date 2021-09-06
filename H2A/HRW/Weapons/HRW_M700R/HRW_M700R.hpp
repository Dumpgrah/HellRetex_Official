class HRW_M700R_Base: Winchester70_Base
{
	scope = 0;
	//animName = "Winchester70";
	weight = 3100;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	WeaponLength = 1.055;
	barrelArmor = 3.125;
	winchesterTypeOpticsMount = 1;
	chamberSize = 5;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_7x64"};
	magazines[] = {};
	DisplayMagazine = 0;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_reload",0.8,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",0.8,1,20};
	//reloadAction = "ReloadWinchester70";
	//shotAction = "ReloadWinchester70_shot";
	hiddenSelections[] = {"body_metal","body_mixed"};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
		//begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 1;
		recoil = "recoil_Winchester";
		recoilProne = "recoil_Winchester_prone";
		dispersion = 0.00075;
		magazineSlot = "magazine";
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
	};
};

class HRW_M700R: HRW_M700R_Base
{
	scope = 2;
	displayName = "$STR_M700R0";
	descriptionShort = "$STR_M700R1";
	model = "H2A\HRW\Weapons\HRW_M700R\HRW_M700R.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting","weaponMuzzleM700R"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_ca.paa",
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M700R\Data\BodyWood_destruct.rvmat"
					}}
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
			};
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_winch70_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {0.1,0,0};
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

class HRW_M700R_Black: HRW_M700R
{
	scope = 2;
	color="Black";
	displayName = "$STR_M700R_Black0";
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Black_ca.paa",
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Black_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyPlastic.rvmat"
	};
};

class HRW_M700R_Camo: HRW_M700R
{
	scope = 2;
	color="Camo";
	displayName = "$STR_M700R_Camo0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Camo_ca.paa",
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Camo_ca.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyPlastic.rvmat"
	};
};

class HRW_M700R_Urban: HRW_M700R
{
	scope = 2;
	color="Urban";
	displayName = "$STR_M700R_Urban0";
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Urban_ca.paa",
		"H2A\HRW\Weapons\HRW_M700R\Data\Body_Urban_ca.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M700R\Data\BodyPlastic.rvmat"
	};
};