class HRS_Crafted_Hammer_Handle: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Hammer_Handle0";
	descriptionShort = "$STR_HRS_Hammer_Handle1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\HRS_Crafted_Hammer_Handle.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=200;
	itemSize[]={1,3};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = 
				{
					{1.01,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle.rvmat"
						}
					},
					{0.69999999,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_damage.rvmat"
						}	
					},
					{0.30000001,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_damage.rvmat"
						}	
					},
					{0.01,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hammer\Data\Handle_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
