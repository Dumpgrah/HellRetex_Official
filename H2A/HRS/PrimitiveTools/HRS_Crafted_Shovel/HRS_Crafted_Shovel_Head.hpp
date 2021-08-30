class HRS_Crafted_Shovel_Head: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Shovel_Head0";
	descriptionShort = "$STR_HRS_Shovel_Head1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\HRS_Crafted_Shovel_Head.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=1500;
	itemSize[]={2,2};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Metal_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
