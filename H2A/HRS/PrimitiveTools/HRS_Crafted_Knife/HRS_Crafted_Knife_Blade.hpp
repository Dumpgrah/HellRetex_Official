class HRS_Crafted_Knife_Blade: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Knife_Blade0";
	descriptionShort = "$STR_HRS_Knife_Blade1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\HRS_Crafted_Knife_Blade.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=60;
	itemSize[]={1,1};
	
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
