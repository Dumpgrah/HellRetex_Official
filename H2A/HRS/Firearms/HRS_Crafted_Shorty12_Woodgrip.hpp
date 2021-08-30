class HRS_Crafted_Shorty12_Woodgrip: Inventory_Base
{
	scope=2;
	displayName = "$STR_HRS_Shorty12_Woodgrip0";
	descriptionShort = "$STR_HRS_Shorty12_Woodgrip1";
	model = "H2A\HRS\Firearms\HRS_Crafted_Shorty12\HRS_Crafted_Shorty12_Woodgrip.p3d";
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	weight=300;
	itemSize[]={1,1};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{
					{1.0,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood.rvmat"}},
					{0.7,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood.rvmat"}},
					{0.5,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_damage.rvmat"}},
					{0.3,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_damage.rvmat"}},
					{0.0,{"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_destruct.rvmat"}}
				};
			};
		};
	};
};
