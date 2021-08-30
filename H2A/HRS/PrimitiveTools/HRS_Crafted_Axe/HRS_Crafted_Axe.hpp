class HRS_Crafted_Axe: WoodAxe
{
	scope = 2;
	displayName = "$STR_HRS_Axe0";
	descriptionShort = "$STR_HRS_Axe1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\HRS_Crafted_Axe.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags = 4;
	weight = 1000;
	itemSize[] = {2,6};
	itemBehaviour = 2;
	fragility = 0.01;
	inventorySlot[] = {"Shoulder","Melee"};
	lootCategory = "Tools";
	lootTag[] = {"Work","Forester","Camping"};
	dismantle_action_type = 74;
	openItemSpillRange[] = {20,40};
	itemInfo[] = {"Axe"};
	isMeleeWeapon = 1;
	suicideAnim = "woodaxe";
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeAxe";
			range = 1.8;
		};
		class Heavy
		{
			ammo = "MeleeAxe_Heavy";
			range = 1.8;
		};
		class Sprint
		{
			ammo = "MeleeAxe_Heavy";
			range = 3.7;
		};
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
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_destruct.rvmat"
						}	
					}
				};
			};
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
		};
	};
};
