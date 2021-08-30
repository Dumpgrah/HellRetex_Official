class HRS_AnimalCall: Inventory_Base
{
	scope = 0;
	model = "H2A\HRS\Items\HRS_AnimalCall\HRS_AnimalCall.p3d";
	weight = 200;
	itemSize[] = {1,2};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{	
					{1.0,{"H2A\HRS\Items\HRS_AnimalCall\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_AnimalCall\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_AnimalCall\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_AnimalCall\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_AnimalCall\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	
	class NoiseAnimalCall
	{
		strength = 15;
		type = "shot";
	};	
};

class HRS_DeerCall_Male: HRS_AnimalCall
{
	scope = 2;
	displayName = "$STR_HRS_DeerCall_Male0";
	descriptionShort = "$STR_HRS_DeerCall_Male1";	
};

class HRS_DeerCall_Female: HRS_AnimalCall
{
	scope = 2;
	displayName = "$STR_HRS_DeerCall_Female0";
	descriptionShort = "$STR_HRS_DeerCall_Female1";	
};

class HRS_CrowsCall: HRS_AnimalCall
{
	scope = 2;
	displayName = "$STR_HRS_CrowsCall0";
	descriptionShort = "$STR_HRS_CrowsCall1";	
};