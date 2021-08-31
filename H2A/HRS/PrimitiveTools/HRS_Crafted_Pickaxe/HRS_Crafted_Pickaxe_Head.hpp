class HRS_Crafted_Pickaxe_Head: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Pickaxe_Head0";
	descriptionShort = "$STR_HRS_Pickaxe_Head1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\HRS_Crafted_Pickaxe_Head.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=200;
	itemSize[]={3,1};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Head_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Rope_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
