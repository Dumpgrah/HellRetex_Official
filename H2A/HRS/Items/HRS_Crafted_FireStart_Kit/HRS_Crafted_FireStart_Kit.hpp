class HRS_Crafted_FireStart_Kit: PetrolLighter
{
	scope = 2;
	displayName = "$STR_HRS_FireStart_Kit0";
	descriptionShort = "$STR_HRS_FireStart_Kit1";
	model = "H2A\HRS\Items\HRS_Crafted_FireStart_Kit\HRS_Crafted_FireStart_Kit.p3d";
	rotationFlags = 12;
	absorbency = 0;
	weight = 100;
	itemSize[] = {1,1};
	//stackedUnit = "ml";
	quantityBar = 1;
	varQuantityInit = 5.0;
	varQuantityMin = 0.0;
	varQuantityMax = 5.0;
	varQuantityDestroyOnMin = 0;
	destroyOnEmpty = 1;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 20;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRS\Items\HRS_Crafted_FireStart_Kit\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_FireStart_Kit\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_FireStart_Kit\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_Crafted_FireStart_Kit\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_Crafted_FireStart_Kit\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class LighterZippo
			{
				soundSet = "HRS_FireStartKit_Soundset";
				id = 201;
			};
		};
	};
};
