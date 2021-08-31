class CfgPatches
{
	class HRS_Crossbow
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Weapons",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines"
		};

	};
};

class CfgVehicles
{
	class FxRound;
	class Inventory_Base;
	
	class FxRound_HRS_Arrow_Bolt: FxRound
	{
		model = "H2A\HRS\Crossbow\HRS_Crafted_AmmoBolt.p3d";
	};	
	
	class HRS_Crafted_Crossbow_Body: Inventory_Base
	{
		scope=2;
		displayName = "$STR_HRS_Crossbow_Body0";
		descriptionShort = "$STR_HRS_Crossbow_Body1";
		model = "H2A\HRS\Crossbow\HRS_Crafted_Crossbow_Body.p3d";
		repairableWithKits[] = {};
		repairCosts[] = {};
		rotationFlags=17;
		weight=300;
		itemSize[]={1,3};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"H2A\HRS\Crossbow\Data\Metal.rvmat","H2A\HRS\Crossbow\Data\Wood.rvmat"}},
						{0.7,{"H2A\HRS\Crossbow\Data\Metal.rvmat","H2A\HRS\Crossbow\Data\Wood.rvmat"}},
						{0.5,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat","H2A\HRS\Crossbow\Data\Wood_damage.rvmat"}},
						{0.3,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat","H2A\HRS\Crossbow\Data\Wood_damage.rvmat"}},
						{0.0,{"H2A\HRS\Crossbow\Data\Metal_destruct.rvmat","H2A\HRS\Crossbow\Data\Wood_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	
	class HRS_Crafted_Crossbow_MetalParts: Inventory_Base
	{
		scope=2;
		displayName = "$STR_HRS_Crossbow_MetalParts0";
		descriptionShort = "$STR_HRS_Crossbow_MetalParts1";
		model = "H2A\HRS\Crossbow\HRS_Crafted_Crossbow_MetalParts.p3d";
		repairableWithKits[] = {};
		repairCosts[] = {};
		rotationFlags=17;
		weight=300;
		itemSize[]={1,3};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.7,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.5,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0.3,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0.0,{"H2A\HRS\Crossbow\Data\Metal_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	
	class HRS_Crafted_Crossbow_Head: Inventory_Base
	{
		scope=2;
		displayName = "$STR_HRS_Crossbow_Head0";
		descriptionShort = "$STR_HRS_Crossbow_Head1";
		model = "H2A\HRS\Crossbow\HRS_Crafted_Crossbow_Head.p3d";
		repairableWithKits[] = {};
		repairCosts[] = {};
		rotationFlags=17;
		weight=300;
		itemSize[]={1,3};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.7,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.5,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0.3,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0.0,{"H2A\HRS\Crossbow\Data\Metal_destruct.rvmat"}}
					};
				};
			};
		};	
	};
};

class cfgWeapons
{
	class AKM_Base;
	class Mode_SemiAuto;
	class OpticsInfoRifle;
	
	class HRS_Crafted_Crossbow_Base: AKM_Base
	{
		scope = 0;
		weight = 1.100;
		PPDOFProperties[] = {};
		WeaponLength = 0.583269;
		chamberableFrom[] = {"HRS_Crafted_AmmoBolt"};
		DisplayMagazine = 0;
		magazines[] = {};
		ejectType = 1;
		recoilModifier[] = {0.1,0.1,0.1};
		swayModifier[] = {1.2,1.2,1};
		simpleHiddenSelections[] = {"string","string_bend"};
		drySound[] = {};
		reloadMagazineSound[] = {};
		modes[] = {"SemiAuto"};
		
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"HRS_Crossbow_SoundSet","HRS_Crossbow_SoundSet","HRS_Crossbow_SoundSet"};
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

	class  HRS_Crafted_Crossbow:  HRS_Crafted_Crossbow_Base
	{
		scope = 2;
		displayName = "$STR_HRS_Crossbow0";
		descriptionShort = "$STR_HRS_Crossbow1";
		model = "H2A\HRS\Crossbow\HRS_Crafted_Crossbow.p3d";
		attachments[] = {};
		itemSize[] = {5,3};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {
						{1.0,{
							"H2A\HRS\Crossbow\Data\Metal.rvmat",
							"H2A\HRS\Crossbow\Data\Wood.rvmat"
						}},
						{0.7,{
							"H2A\HRS\Crossbow\Data\Metal.rvmat",
							"H2A\HRS\Crossbow\Data\Wood.rvmat"
						}},
						{0.5,{
							"H2A\HRS\Crossbow\Data\Metal_damage.rvmat",
							"H2A\HRS\Crossbow\Data\Wood_damage.rvmat"
						}},
						{0.3,{
							"H2A\HRS\Crossbow\Data\Metal_damage.rvmat",
							"H2A\HRS\Crossbow\Data\Wood_damage.rvmat"
						}},
						{0.0,{
							"H2A\HRS\Crossbow\Data\Metal_destruct.rvmat",
							"H2A\HRS\Crossbow\Data\Wood_destruct.rvmat"
						}}
					};
				};
			};
		};
	};
};

class cfgMagazines
{
	class Ammunition_Base;
	class HRS_Crafted_AmmoBolt: Ammunition_Base
	{
		scope = 2;
		displayName = "$STR_HRS_Crossbow_Bolt0";
		descriptionShort = "$STR_HRS_Crossbow_Bolt1";
		model = "H2A\HRS\Crossbow\HRS_Crafted_AmmoBolt.p3d";
		rotationFlags = 34;
		weight = 24;
		itemSize[] = {2,1};
		count = 10;
		ammo = "HRS_Arrow_Bolt";
		emptySound = "empty_arrows";
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.7,{"H2A\HRS\Crossbow\Data\Metal.rvmat"}},
						{0.5,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0.3,{"H2A\HRS\Crossbow\Data\Metal_damage.rvmat"}},
						{0,{"H2A\HRS\Crossbow\Data\Metal_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class cfgAmmoTypes
{
	class HRS_Arrow_Bolt
	{
		name = "HRS_Arrow_Bolt";
	};
};

class CfgAmmo
{
	class Bullet_Base;	
	class HRS_Arrow_Bolt: Bullet_Base
	{
		scope = 2;
		model = "\dz\weapons\projectiles\arrow_hunting_flying.p3d";
		spawnPileType = "HRS_Crafted_AmmoBolt";
		proxyShape = "H2A\HRS\Crossbow\HRS_Crafted_AmmoBolt.p3d";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		casing = "";
		round = "FxRound_HRS_Arrow_Bolt";
		deflecting = 15;
		caliber = 0.01;
		airFriction = -0.00215;
		typicalSpeed = 120;
		soundFly[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		initSpeed = 120;
		weight = 0.025;
		tracerScale = 1;
		tracerStartTime = 1e-05;
		tracerEndTime = -1;
		
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.5,1}};
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 800;
			};
			class Shock
			{
				damage = 75;
			};
		};
		
		class NoiseHit
		{
			strength=5;
			type="shot";
		};
		
		strength = 0.5;
		type = "shot";
	};
};

class Rifle_Shot_Base_SoundSet;

class CfgSoundShaders
{
	class HRS_Crossbow_SoundShaderClosure
	{
		samples[] = {{"H2A\HRS\Crossbow\Sound\CrossbowShot",1}};
		range = 5;
		volume = 0.5;
	};
};

class CfgSoundSets
{
	class HRS_Crossbow_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = 
		{	
			"HRS_Crossbow_SoundShaderClosure",
			"HRS_Crossbow_SoundShaderClosure",
			"HRS_Crossbow_SoundShaderClosure",
			"HRS_Crossbow_SoundShaderClosure"
		};
	};
};