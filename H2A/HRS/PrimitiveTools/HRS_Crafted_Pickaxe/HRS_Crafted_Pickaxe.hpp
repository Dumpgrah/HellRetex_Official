class HRS_Crafted_Pickaxe: Pickaxe
{
	scope=2;
	displayName = "$STR_HRS_Pickaxe0";
	descriptionShort = "$STR_HRS_Pickaxe1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\HRS_Crafted_Pickaxe.p3d";
	inventorySlot[]=
	{
		"Shoulder",
		"Melee",
		"pickaxe",
		"pickaxe1",
		"pickaxe2",
		"pickaxe3",
		"pickaxe4"
	};
	rotationFlags=12;
	repairableWithKits[]={};
	repairCosts[]={};
	build_action_type=4;
	dismantle_action_type=14;
	itemInfo[]=
	{
		"Pickaxe"
	};
	RestrainUnlockType=1;
	itemSize[]={3,6};
	weight=1200;
	itemBehaviour=2;
	lootTag[]=
	{
		"Work"
	};
	lootCategory="Tools";
	openItemSpillRange[]={40,70};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 260;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
	isMeleeWeapon=1;
	suicideAnim="fireaxe";
	class MeleeModes
	{
		class Default
		{
			ammo="MeleePickaxe";
			range=1.8;
		};
		class Heavy
		{
			ammo="MeleePickaxe_Heavy";
			range=1.8;
		};
		class Sprint
		{
			ammo="MeleePickaxe_Heavy";
			range=3.7;
		};
	};
	class Horticulture
	{
		ToolAnim="CHOPPINGWOOD";
		DiggingTimeToComplete=4.5;
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup_light
			{
				soundSet="pickUpShovelLight_SoundSet";
				id=796;
			};
			class pickup
			{
				soundSet="pickUpShovel_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="woodaxe_drop_SoundSet";
				id=898;
			};
			class FirefighterAxe_loop_SoundSet
			{
				soundSet="FirefighterAxe_loop_SoundSet";
				id=1121;
			};
			class FirefighterAxe_end_SoundSet
			{
				soundSet="FirefighterAxe_end_SoundSet";
				id=1122;
			};
			class ShoulderR_Hide
			{
				soundset="ShoulderR_Hide_SoundSet";
				id=1210;
			};
			class ShoulderR_Show
			{
				soundset="ShoulderR_Show_SoundSet";
				id=1211;
			};
		};
	};
};
