class HRW_ModernAxe_Base: FirefighterAxe
{
	scope=0;
	model = "H2A\HRW\Melee\HRW_ModernAxe\HRW_ModernAxe.p3d";
	repairableWithKits[] = {4};
	repairCosts[] = {20.0};
	rotationFlags = 12;
	weight = 1160;
	itemSize[] = {2,7};
	itemBehaviour = 2;
	fragility = 0.01;
	inventorySlot[] = {"Shoulder","Melee"};
	lootCategory = "Tools";
	lootTag[] = {"Work","Forester","Camping"};
	dismantle_action_type = 74;
	openItemSpillRange[] = {20,40};
	itemInfo[] = {"Axe"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.0,{
						"H2A\HRW\Melee\HRW_ModernAxe\Data\BodyMetal.rvmat",
						"H2A\HRW\Melee\HRW_ModernAxe\Data\GripPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Melee\HRW_ModernAxe\Data\BodyMetal.rvmat",
						"H2A\HRW\Melee\HRW_ModernAxe\Data\GripPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Melee\HRW_ModernAxe\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Melee\HRW_ModernAxe\Data\GripPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Melee\HRW_ModernAxe\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Melee\HRW_ModernAxe\Data\GripPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Melee\HRW_ModernAxe\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Melee\HRW_ModernAxe\Data\GripPlastic_destruct.rvmat"
					}}
				};
			};
		};
	};
	isMeleeWeapon = 1;
	suicideAnim = "fireaxe";
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeFireAxe";
			range = 1.8;
		};
		class Heavy
		{
			ammo = "MeleeFireAxe_Heavy";
			range = 1.8;
		};
		class Sprint
		{
			ammo = "MeleeFireAxe_Heavy";
			range = 3.7;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickup_light
			{
				soundSet = "hatchet_pickup_light_SoundSet";
				id = 796;
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
			class FirefighterAxe_loop_SoundSet
			{
				soundSet = "FirefighterAxe_loop_SoundSet";
				id = 1121;
			};
			class FirefighterAxe_end_SoundSet
			{
				soundSet = "FirefighterAxe_end_SoundSet";
				id = 1122;
			};
			class ShoulderR_Hide
			{
				soundset = "ShoulderR_Hide_SoundSet";
				id = 1210;
			};
			class ShoulderR_Show
			{
				soundset = "ShoulderR_Show_SoundSet";
				id = 1211;
			};
		};
	};
};

class HRW_ModernAxe: HRW_ModernAxe_Base
{
	scope=2;
	displayName = "$STR_ModernAxe0";
	descriptionShort = "$STR_ModernAxe1";
};
