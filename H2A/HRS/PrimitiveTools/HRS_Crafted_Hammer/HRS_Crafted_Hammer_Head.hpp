class HRS_Crafted_Hammer_Head: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Hammer_Head0";
	descriptionShort = "$STR_HRS_Hammer_Head1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\HRS_Crafted_Hammer_Head.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=750;
	itemSize[]={2,1};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Head_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Rope_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
