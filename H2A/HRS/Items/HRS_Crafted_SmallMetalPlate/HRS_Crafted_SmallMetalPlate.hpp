class HRS_Crafted_SmallMetalPlate: Inventory_Base
{
	scope=2;
	displayName="$STR_HRS_SmallMetalPlate0";
	descriptionShort="$STR_HRS_SmallMetalPlate1";
	model="H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\HRS_Crafted_SmallMetalPlate.p3d";
	weight=0.3;
	absorbency=1;
	itemSize[]={3,3};
	canBeSplit=1;
	varQuantityInit=1;
	varQuantityMin=0;
	varQuantityMax=10;
	varQuantityDestroyOnMin=1;
	rotationFlags=17;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					{1.0,{"H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_Crafted_SmallMetalPlate\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class Bandage_loop1
			{
				soundSet="Bandage_loop_SoundSet";
				id=201;
			};
			class Bandage_loop2
			{
				soundSet="Bandage_loop_SoundSet";
				id=202;
			};
			class Bandage_loop3
			{
				soundSet="Bandage_loop_SoundSet";
				id=203;
			};
			class Bandage_start
			{
				soundSet="Bandage_start_SoundSet";
				id=204;
			};
			class Bandage_end
			{
				soundSet="Bandage_end_SoundSet";
				id=205;
			};
			class pickUpItem_Light
			{
				soundSet="pickUpCourierBag_Light_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpCourierBag_SoundSet";
				id=797;
			};
		};
	};
};

/*
class HRS_SmallMetalPlate: HRS_Crafted_SmallMetalPlate
{
	scope = 2;
	displayName = "WARNING ITEM";
	descriptionShort = "This item (HRS_SmallMetalPlate) will be removed soon (replaced now), contact your admin for remove it from XML files";
};
*/