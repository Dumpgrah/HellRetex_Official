class HRS_Crafted_Knife: StoneKnife
{
	scope=2;
	displayName = "$STR_HRS_Knife0";
	descriptionShort = "$STR_HRS_Knife1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\HRS_Crafted_Knife.p3d";
	itemInfo[]=
	{
		"Knife"
	};
	repairableWithKits[] = {};
	repairCosts[] = {};
	rotationFlags=17;
	RestrainUnlockType=1;
	suicideAnim="onehanded";
	canSkinBodies=1;
	weight=160;
	itemSize[]={2,1};
	inventorySlot[]=
	{
		"knife",
		"knife1",
		"knife2",
		"knife3",
		"knife4"
	};
	openItemSpillRange[]={10,30};
	isMeleeWeapon=1;
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Blade_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Handle_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\HandleTop_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Knife\Data\Leather_destruct.rvmat"
						}	
					}
				};
			};
		};
	};	
	
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeStoneKnife";
			range=1.1;
		};
		class Heavy
		{
			ammo="MeleeStoneKnife_Heavy";
			range=1.1;
		};
		class Sprint
		{
			ammo="MeleeStoneKnife_Heavy";
			range=3.3;
		};
	};
	
	class AnimEvents
	{
		class SoundWeapon
		{
			class ChoppingTree
			{
				soundSet="ChoppingTree_SoundSet";
				id=415;
			};
			class animalSkinning_in
			{
				soundSet="animalSkinning_in_SoundSet";
				id=516;
			};
			class animalSkinning
			{
				soundSet="animalSkinning_SoundSet";
				id=517;
			};
			class animalSkinning_out
			{
				soundSet="animalSkinning_out_SoundSet";
				id=518;
			};
		};
	};
};
