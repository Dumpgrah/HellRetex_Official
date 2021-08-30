class HRW_RecurvedBow_Base: MP5K_Base
{
	scope = 0;
	weight = 1.100;
	PPDOFProperties[] = {};
	WeaponLength = 0.583269;
	chamberableFrom[] = {"Ammo_RecurvedBow"};
	inventorySlot[] = {"Bow"};
	DisplayMagazine = 0;
	magazines[] = {};
	ejectType = 1;
	recoilModifier[] = {0.1,0.1,0.1};
	swayModifier[] = {1.2,1.2,1};
	simpleHiddenSelections[] = {};
	hiddenSelections[] = {"body_metal","body_wood"};
	drySound[] = {};
	reloadMagazineSound[] = {};
	modes[] = {"SemiAuto"};
	
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[]={"HRW_RecurvedBow_SoundSet","HRW_RecurvedBow_SoundSet","HRW_RecurvedBow_SoundSet"};
		reloadTime = 1;
		recoil = "recoil_mp5";
		recoilProne = "recoil_mp5_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
	};
	
	class Particles{};
	
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		modelOptics = "-";
		distanceZoomMin = 25;
		distanceZoomMax = 25;
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
	};
	
	class NoiseShoot
	{
		strength = 0.1;
		type = "shot";
	};
	
	class AnimationSources
	{
		class bullet
		{
			source = "user";
			initPhase = 0;
			animPeriod = 0.01;
		};
	};
};

class  HRW_RecurvedBow:  HRW_RecurvedBow_Base
{
	scope = 2;
	displayName = "$STR_RecurvedBow0";
	descriptionShort = "$STR_RecurvedBow1";
	model = "H2A\HRW\Weapons\HRW_RecurvedBow\HRW_RecurvedBow.p3d";
	attachments[] = {};
	itemSize[] = {2,7};
	
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_RecurvedBow\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_RecurvedBow\Data\Body_co.paa"
	};
	
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood.rvmat"
	};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 500;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_RecurvedBow\Data\BodyWood_destruct.rvmat"
					}}
				};
			};
		};
	};
};
