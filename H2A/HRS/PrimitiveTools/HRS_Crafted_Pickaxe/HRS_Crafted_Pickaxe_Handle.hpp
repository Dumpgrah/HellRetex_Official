class HRS_Crafted_Pickaxe_Handle: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Pickaxe_Handle0";
	descriptionShort = "$STR_HRS_Pickaxe_Handle1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\HRS_Crafted_Pickaxe_Handle.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=1000;
	itemSize[]={1,6};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Pickaxe\Data\Handle_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
