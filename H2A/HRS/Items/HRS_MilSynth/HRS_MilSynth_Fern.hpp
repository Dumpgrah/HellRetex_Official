class HRS_MilSynth_Fern: Inventory_Base
{
	scope=2;
	displayName="$STR_HRS_MilSynth_Fern0";
	descriptionShort="$STR_HRS_MilSynth_Fern1";
	model="\dz\gear\consumables\garden_lime.p3d";
	animclass="NoFireclass";
	weight=100;
	itemSize[]={3,5};
	stackedUnit="g";
	quantityBar=1;
	//inventorySlot[]=
	//{
	//	"Lime"
	//};
	varQuantityInit=5000;
	varQuantityMin=0;
	varQuantityMax=5000;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth_Fern_co.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth.rvmat"};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{
					{1.0,{"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_MilSynth\Data\HRS_MilSynth_destruct.rvmat"}}
				};
			};
		};
	};
	
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItemLight
			{
				soundSet="pickUpGardenLimeLight_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpGardenLime_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="gardenlime_drop_SoundSet";
				id=898;
			};
		};
	};
};
