class HRW_ShashkaScabbard_Base: Inventory_Base
{
	scope = 0;
	model = "H2A\HRW\Melee\HRW_Shashka\Proxies\HRW_ShashkaScabbard.p3d";
	inventorySlot[] = { "Melee" };
	rotationFlags = 4;
	reversed = 0;
	weight = 300;
	itemSize[] = {2,8};
	attachments[] = {"meleeShashkaScabbard"};

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
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyWood.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyWood.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyWood_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_damage.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyWood_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyGold_destruct.rvmat",
						"H2A\HRW\Melee\HRW_Shashka\Data\BodyWood_destruct.rvmat"
					}}
				};
			};
		};
	};

	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeLightBlunt";
			range = 1;
		};
		class Heavy
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 1;
		};
		class Sprint
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 2.8;
		};
	};
};

class HRW_ShashkaScabbard: HRW_ShashkaScabbard_Base
{
	scope = 2;
	displayName = "$STR_ShashkaScabbard0";
	descriptionShort = "$STR_ShashkaScabbard1";
};
