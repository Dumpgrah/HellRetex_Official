class HRS_Crafted_BurlapTarp: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_BurlapTarp0";
	descriptionShort = "$STR_HRS_BurlapTarp1";
	model = "H2A\HRS\Shelters\HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTarp.p3d";
	weight = 1000;
	itemSize[] = { 2, 2 };
	lootCategory = "Crafted";

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{
					{1.0,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tarp.rvmat"}},
					{0.7,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tarp.rvmat"}},
					{0.5,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tarp_damage.rvmat"}},
					{0.3,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tarp_damage.rvmat"}},
					{0.0,{"H2A\HRS\Shelters\HRS_Crafted_BurlapTent\Data\Tarp_destruct.rvmat"}}
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