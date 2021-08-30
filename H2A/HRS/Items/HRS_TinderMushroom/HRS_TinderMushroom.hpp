class HRS_TinderMushroom: BoletusMushroom
{
	scope = 2;
	displayName = "$STR_HRS_TinderMushroom0";
	descriptionShort = "$STR_HRS_TinderMushroom1";
	model = "H2A\HRS\Items\HRS_TinderMushroom\HRS_TinderMushroom.p3d";
	weight = 0;
	itemSize[] = {1,2};
	varQuantityInit = 150;
	varQuantityMin = 0;
	varQuantityMax = 150;
	stackedUnit = "";
	inventorySlot[] = {"Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD"};
	hiddenSelections[] = {"cs_raw","cs_dried"};
	hiddenSelectionsTextures[] = {"H2A\HRS\Items\HRS_TinderMushroom\Data\Body_ca.paa","H2A\HRS\Items\HRS_TinderMushroom\Data\Body_ca.paa","H2A\HRS\Items\HRS_TinderMushroom\Data\Body_ca.paa","H2A\HRS\Items\HRS_TinderMushroom\Data\Body_ca.paa","H2A\HRS\Items\HRS_TinderMushroom\Data\Body_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat","H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat","H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat","H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat","H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat","H2A\HRS\Items\HRS_TinderMushroom\Data\Body.rvmat"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 10;
				healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
			};
		};
	};
	class AnimationSources: FoodAnimationSources{};
	class Food
	{
		class FoodStages
		{
			class Raw
			{
				visual_properties[] = {0,0,0};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {0,0};
			};
			class Rotten
			{
				visual_properties[] = {-1,-1,5};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {0,0};
			};
			class Baked
			{
				visual_properties[] = {0,1,1};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {70,35};
			};
			class Boiled
			{
				visual_properties[] = {0,2,2};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {70,45};
			};
			class Dried
			{
				visual_properties[] = {1,3,3};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {70,30,80};
			};
			class Burned
			{
				visual_properties[] = {1,4,4};
				nutrition_properties[] = {0,0,0,0,0,16};
				cooking_properties[] = {100,20};
			};
		};
		class FoodStageTransitions: MushroomsStageTransitions{};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class openTunaCan
			{
				soundSet = "openTunaCan_SoundSet";
				id = 204;
			};
			class Eating_TakeFood
			{
				soundSet = "Eating_TakeFood_Soundset";
				id = 889;
			};
			class Eating_BoxOpen
			{
				soundSet = "Eating_BoxOpen_Soundset";
				id = 893;
			};
			class Eating_BoxShake
			{
				soundSet = "Eating_BoxShake_Soundset";
				id = 894;
			};
			class Eating_BoxEnd
			{
				soundSet = "Eating_BoxEnd_Soundset";
				id = 895;
			};
		};
	};
};