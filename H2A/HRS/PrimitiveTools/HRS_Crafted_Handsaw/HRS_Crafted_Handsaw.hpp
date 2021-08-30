class HRS_Crafted_Handsaw: Handsaw
{
	scope=2;
	displayName = "$STR_HRS_Handsaw0";
	descriptionShort = "$STR_HRS_Handsaw1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\HRS_Crafted_Handsaw.p3d";
	repairableWithKits[]={};
	repairCosts[]={};
	itemInfo[]=
	{
		"Knife"
	};
	rotationFlags=17;
	RestrainUnlockType=1;
	canSkinBodies=1;
	weight=700;
	itemSize[]={4,2};
	fragility=0.079999998;
	inventorySlot[]=
	{
		"handsaw",
		"handsaw1",
		"handsaw2",
		"handsaw3",
		"handsaw4"
	};
	openItemSpillRange[]={10,40};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Wood.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Wood.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Wood_damage.rvmat"
						}	
					},
					{0.3,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_damage.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Wood_damage.rvmat"
						}	
					},
					{0.0,
						{
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Metal_destruct.rvmat",
							"H2A\HRS\PrimitiveTools\HRS_Crafted_Handsaw\Data\Wood_destruct.rvmat"
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
			ammo="MeleeHacksaw";
			range=1.2;
		};
		class Heavy
		{
			ammo="MeleeHacksaw_Heavy";
			range=1.2;
		};
		class Sprint
		{
			ammo="MeleeHacksaw_Heavy";
			range=3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class CutTiesSaw_end
			{
				soundSet="CutTiesSaw_end_SoundSet";
				id=519;
			};
			class CutTiesSaw_loop
			{
				soundSet="CutTiesSaw_loop_SoundSet";
				id=520;
			};
			class drop
			{
				soundset="hacksaw_drop_SoundSet";
				id=898;
			};
			class HackSaw_loop
			{
				soundSet="HackSaw_loop_SoundSet";
				id=1123;
			};
			class HackSaw_end
			{
				soundSet="HackSaw_end_SoundSet";
				id=1124;
			};
		};
	};
};
