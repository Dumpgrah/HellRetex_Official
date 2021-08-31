class HRS_Crafted_Handsaw_Blade: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Handsaw_Blade0";
	descriptionShort = "$STR_HRS_Handsaw_Blade1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\HRS_Crafted_Handsaw_Blade.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=300;
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
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
};
