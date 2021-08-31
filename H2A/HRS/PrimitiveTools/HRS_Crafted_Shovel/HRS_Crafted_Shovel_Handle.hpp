class HRS_Crafted_Shovel_Handle: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Shovel_Handle0";
	descriptionShort = "$STR_HRS_Shovel_Handle1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\HRS_Crafted_Shovel_Handle.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=3000;
	itemSize[]={2,7};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 25;
				healthLevels[] = 
				{
					{1.01,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood.rvmat"
						}
					},
					{0.69999999,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_damage.rvmat"
						}	
					},
					{0.30000001,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_damage.rvmat"
						}	
					},
					{0.01,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Shovel\Data\Wood_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
