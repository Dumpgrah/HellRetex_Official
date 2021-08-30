class HRS_Crafted_Knife_Handle: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Knife_Handle0";
	descriptionShort = "$STR_HRS_Knife_Handle1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\HRS_Crafted_Knife_Handle.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=100;
	itemSize[]={1,2};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
