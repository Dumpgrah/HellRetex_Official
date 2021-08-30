class HRW_MAS49_Bayonet: Inventory_Base
{
	scope = 2;
	displayName = "$STR_MAS49_Bayonet0";
	descriptionShort = "$STR_MAS49_Bayonet1";
	model = "H2A\HRW\Weapons\HRW_MAS49\Proxies\HRW_MAS49_Bayonet.p3d";
	repairableWithKits[] = {4};
	repairCosts[] = {10.0};
	animClass = "Knife";
	suicideAnim = "onehanded";
	rotationFlags = 12;
	reversed = 90;
	weight = 150;
	itemSize[] = {4,1};
	itemModelLength = 0.476;
	lootTag[] = {"Civilian"};
	lootCategory = "Attachments";
	openItemSpillRange[] = {10,20};
	inventorySlot[] = {"weaponBayonetMAS49"};
	dispersionModifier = 0.0001;
	dispersionCondition = "true";
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1,1,1};
	itemInfo[] = {"Knife"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = {
					{1.0,{"H2A\HRW\Weapons\HRW_MAS49\Data\BayonetMetal.rvmat","H2A\HRW\Weapons\HRW_MAS49\Data\BayonetPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_MAS49\Data\BayonetMetal.rvmat","H2A\HRW\Weapons\HRW_MAS49\Data\BayonetPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MAS49\Data\BayonetMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MAS49\Data\BayonetPlastic_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_MAS49\Data\BayonetMetal_damage.rvmat","H2A\HRW\Weapons\HRW_MAS49\Data\BayonetPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_MAS49\Data\BayonetMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_MAS49\Data\BayonetPlastic_destruct.rvmat"}}
				};
			};
		};
	};
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeKnife";
			range = 1.1;
		};
		class Heavy
		{
			ammo = "MeleeKnife_Heavy";
			range = 1.1;
		};
		class Sprint
		{
			ammo = "MeleeKnife_Heavy";
			range = 3.3;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class drop
			{
				soundset = "CombatKnife_drop_SoundSet";
				id = 898;
			};
		};
	};
};
