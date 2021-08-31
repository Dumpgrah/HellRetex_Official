class HRS_Crafted_Shovel: Shovel
{
	scope=2;
	displayName = "$STR_HRS_Shovel0";
	descriptionShort = "$STR_HRS_Shovel1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\HRS_Crafted_Shovel.p3d";
	rotationFlags=17;
	weight=4500;
	itemSize[]={2,7};
	fragility=0.0080000004;
	itemBehaviour=2;
	//repairableWithKits[]={};
	//repairCosts[]={};
	inventorySlot[]=
	{
		"Shoulder",
		"Melee",
		"shovel",
		"shovel1",
		"shovel2",
		"shovel3",
		"shovel4"
	};
	suicideAnim="pitchfork";
	build_action_type=4;
	dismantle_action_type=4;
	openItemSpillRange[]={30,60};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = 
				{
					{1,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood.rvmat"
						}
					},
					{0.69999999,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_damage.rvmat"
						}	
					},
					{0.30000001,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_damage.rvmat"
						}	
					},
					{0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeShovel";
			range=1.8;
		};
		class Heavy
		{
			ammo="MeleeShovel_Heavy";
			range=1.8;
		};
		class Sprint
		{
			ammo="MeleeShovel_Heavy";
			range=3.7;
		};
	};
	class Horticulture
	{
		ToolAnim="DIGGINGSHOVEL";
		DiggingTimeToComplete=4.5;
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpShovel_Light
			{
				soundSet="pickUpShovelLight_SoundSet";
				id=796;
			};
			class pickUpShovel
			{
				soundSet="pickUpShovel_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="shovel_drop_SoundSet";
				id=898;
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
