class HRS_Crafted_Soap: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_Soap0";
	descriptionShort = "$STR_HRS_Soap1";	
	model = "H2A\HRS\Items\HRS_Crafted_Soap\HRS_Crafted_Soap.p3d";
	weight = 200;
	itemSize[] = {1,2};
	stackedUnit = "percentage";
	quantityBar = 1;
	varQuantityInit = 100.0;
	varQuantityMin = 0.0;
	varQuantityMax = 100.0;
	rotationFlags=4;
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{	
					{1.0,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Soap.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Soap.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Soap_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Soap_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_Crafted_Soap\Data\Soap_destruct.rvmat"}}
				};
			};
		};
	};
};
