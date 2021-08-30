class HRS_Crafted_Hatchet_Handle: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Hatchet_Handle0";
	descriptionShort = "$STR_HRS_Hatchet_Handle1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\HRS_Crafted_Hatchet_Handle.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=400;
	itemSize[]={1,4};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\Data\Handle.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\Data\Handle.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\Data\Handle_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\Data\Handle_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Hatchet\Data\Handle_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
