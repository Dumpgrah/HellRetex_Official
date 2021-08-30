class HRS_Crafted_Shorty12_Barrel: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Shorty12_Barrel0";
	descriptionShort = "$STR_HRS_Shorty12_Barrel1";
	model = "H2A\HRS\Firearms\HRS_Crafted_Shorty12\HRS_Crafted_Shorty12_Barrel.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=300;
	itemSize[]={3,1};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{
					{1.0,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal.rvmat"}},
					{0.7,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal.rvmat"}},
					{0.5,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_damage.rvmat"}},
					{0.3,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_damage.rvmat"}},
					{0.0,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_destruct.rvmat"}}
				};
			};
		};
	};
};
