class HRS_Crafted_Hammer: Hammer
{
	scope=2;
	displayName = "$STR_HRS_Hammer0";
	descriptionShort = "$STR_HRS_Hammer1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\HRS_Crafted_Hammer.p3d";
	build_action_type=10;
	dismantle_action_type=0;
	rotationFlags=17;
	weight=900;
	itemSize[]={2,3};
	fragility=0.0080000004;
	inventorySlot[]=
	{
		"hammer",
		"hammer1",
		"hammer2",
		"hammer3",
		"hammer4"
	};
	openItemSpillRange[]={20,50};
	repairableWithKits[]={};
	repairCosts[]={};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_destruct.rvmat"
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
			ammo="MeleeHammer";
			range=1.1;
		};
		class Heavy
		{
			ammo="MeleeHammer_Heavy";
			range=1.1;
		};
		class Sprint
		{
			ammo="MeleeHammer_Heavy";
			range=3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup
			{
				soundSet="hatchet_pickup_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="woodaxe_drop_SoundSet";
				id=898;
			};
			class WoodHammer_SoundSet
			{
				soundSet="WoodHammer_SoundSet";
				id=11161;
			};
		};
	};
};
