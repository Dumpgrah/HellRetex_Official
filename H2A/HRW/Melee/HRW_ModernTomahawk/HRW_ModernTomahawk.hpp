class HRW_ModernTomahawk_Base: Hatchet
{
	scope=0;
	model = "H2A\HRW\Melee\HRW_ModernTomahawk\HRW_ModernTomahawk.p3d";
	build_action_type = 10;
	dismantle_action_type = 74;
	repairableWithKits[] = {4};
	repairCosts[] = {18.0};
	rotationFlags = 17;
	weight = 1133;
	itemSize[] = {2,4};
	fragility = 0.01;
	inventorySlot[]=
	{
		"hatchet",
		"hatchet1",
		"hatchet2",
		"hatchet3",
		"hatchet4"
	};
	lootCategory = "Tools";
	lootTag[] = {"Work","Forester","Camping"};
	itemInfo[] = {"Axe"};
	openItemSpillRange[] = {20,40};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 175;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyMetal.rvmat",
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyPlastic.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyMetal.rvmat",
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyPlastic.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyPlastic_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyPlastic_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyMetal_destruct.rvmat",
							"H2A\HRW\Melee\HRW_ModernTomahawk\Data\BodyPlastic_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
	isMeleeWeapon = 1;
	suicideAnim = "woodaxe";
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeHatchet";
			range = 1.4;
		};
		class Heavy
		{
			ammo = "MeleeHatchet_Heavy";
			range = 1.4;
		};
		class Sprint
		{
			ammo = "MeleeHatchet_Heavy";
			range = 3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup_light
			{
				soundSet = "hatchet_pickup_light_SoundSet";
				id = 796;
			};
			class pickup
			{
				soundSet = "hatchet_pickup_SoundSet";
				id = 797;
			};
			class drop
			{
				soundset = "woodaxe_drop_SoundSet";
				id = 898;
			};
			class FirefighterAxe_loop_SoundSet
			{
				soundSet = "FirefighterAxe_loop_SoundSet";
				id = 1121;
			};
			class FirefighterAxe_end_SoundSet
			{
				soundSet = "FirefighterAxe_end_SoundSet";
				id = 1122;
			};
			class ShoulderR_Hide
			{
				soundset = "ShoulderR_Hide_SoundSet";
				id = 1210;
			};
			class ShoulderR_Show
			{
				soundset = "ShoulderR_Show_SoundSet";
				id = 1211;
			};
			class WoodHammer_SoundSet
			{
				soundSet = "WoodHammer_SoundSet";
				id = 11161;
			};
		};
	};
};

class HRW_ModernTomahawk: HRW_ModernTomahawk_Base
{
	scope=2;
	displayName = "$STR_ModernTomahawk0";
	descriptionShort = "$STR_ModernTomahawk1";
};