class HRS_Crafted_Axe_Blade: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Axe_Blade0";
	descriptionShort = "$STR_HRS_Axe_Blade1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\HRS_Crafted_Axe_Blade.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=600;
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Blade_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Axe\Data\Rope_destruct.rvmat"
						}	
					}
				};
			};
		};
	};
};
