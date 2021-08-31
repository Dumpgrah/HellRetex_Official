class HRW_Shashka_Base: Machete
{
	scope=0;
	displayName = "$STR_Shashka0";
	descriptionShort = "$STR_Shashka1";
	model = "H2A\HRW\Melee\HRW_Shashka\HRW_Shashka.p3d";
	animClass = "Knife";
	RestrainUnlockType = 1;
	repairableWithKits[] = {4};
	repairCosts[] = {12.0};
	inventorySlot[]= {"meleeShashkaScabbard","Shoulder"};
	rotationFlags = 17;
	canSkinBodies = 1;
	weight = 500;
	itemSize[] = {1,4};
	lootTag[] = {"Work","Forester","Hunting","Farm"};
	lootCategory = "Tools";
	itemInfo[] = {"Knife"};
	openItemSpillRange[]={20,40};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 200;
				healthLevels[] = 
				{
					{1,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyFabric.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyMetal.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyFabric.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyMetal.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyFabric_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyMetal_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyFabric_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyMetal_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyFabric_destruct.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_destruct.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyMetal_destruct.rvmat"
					}}
				};
			};
		};
	};
	isMeleeWeapon = 1;
	suicideAnim = "onehanded";
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeMachete";
			range = 1.4;
		};
		class Heavy
		{
			ammo = "MeleeMachete_Heavy";
			range = 1.4;
		};
		class Sprint
		{
			ammo = "MeleeMachete_Heavy";
			range = 3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class animalSkinning_in
			{
				soundSet = "animalSkinning_in_SoundSet";
				id = 516;
			};
			class animalSkinning
			{
				soundSet = "animalSkinning_SoundSet";
				id = 517;
			};
			class animalSkinning_out
			{
				soundSet = "animalSkinning_out_SoundSet";
				id = 518;
			};
			class CutTies_end
			{
				soundSet = "CutTies_end_SoundSet";
				id = 519;
			};
			class CutTies_loop
			{
				soundSet = "CutTies_loop_SoundSet";
				id = 520;
			};
			class pickup
			{
				soundSet = "hatchet_pickup_SoundSet";
				id = 797;
			};
			class drop
			{
				soundset = "woodaxe_drop_SoundSet";
				id = 898;
			};
		};
	};
};

class HRW_Shashka: HRW_Shashka_Base
{
	scope = 2;
	displayName = "$STR_Shashka0";
	descriptionShort = "$STR_Shashka1";
};

class HRW_RussianShashka: HRW_Shashka_Base
{
	scope = 2;
	displayName = "$STR_Shashka0";
	descriptionShort = "PLEASE CONTACT YOUR ADMIN : Remove HRW_RussianShashka from XML !";
};
