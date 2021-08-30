class HRS_Crafted_SledgeHammer: SledgeHammer
{
	scope=2;
	displayName = "$STR_HRS_SledgeHammer0";
	descriptionShort = "$STR_HRS_SledgeHammer1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\HRS_Crafted_SledgeHammer.p3d";
	itemInfo[] = {"SledgeHammer"};
	isMeleeWeapon = 1;
	build_action_type = 16;
	dismantle_action_type = 16;
	itemBehaviour = 2;
	openItemSpillRange[] = {30,50};
	rotationFlags=4;
	weight=900;
	itemSize[]={2,6};
	fragility=0.0080000004;
	inventorySlot[]=
	{
		"melee",
		"shoulder"
	};
	repairableWithKits[]={};
	repairCosts[]={};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Head_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_SledgeHammer\Data\Rope_destruct.rvmat"
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
			ammo = "MeleeSledgeHammer";
			range = 1.8;
		};
		class Heavy
		{
			ammo = "MeleeSledgeHammer_Heavy";
			range = 1.8;
		};
		class Sprint
		{
			ammo = "MeleeSledgeHammer_Heavy";
			range = 3.7;
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
			class SledgeWoodHammer_loop
			{
				soundSet = "SledgeWoodHammer_loop_SoundSet";
				id = 1117;
			};
			class SledgeWoodHammer_end
			{
				soundSet = "SledgeWoodHammer_end_SoundSet";
				id = 1118;
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
