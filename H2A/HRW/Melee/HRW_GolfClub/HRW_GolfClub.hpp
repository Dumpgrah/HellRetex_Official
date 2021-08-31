class HRW_GolfClub_Base: BaseballBat
{
	scope=0;
	model="H2A\HRW\Melee\HRW_GolfClub\HRW_GolfClub.p3d";
	rotationFlags = 17;
	inventorySlot[] = {"Shoulder","Melee"};
	weight = 500;
	itemSize[] = {1,7};
	itemBehaviour = 2;
	fragility = 0.02;
	openItemSpillRange[] = {40,80};
	isMeleeWeapon = 1;
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeBat";
			range = 1.5;
		};
		class Heavy
		{
			ammo = "MeleeBat_Heavy";
			range = 1.5;
		};
		class Sprint
		{
			ammo = "MeleeBat_Heavy";
			range = 4.1;
		};
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = 
				{
					{1,{
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyMetal.rvmat",
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyMetal.rvmat",
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Melee\HRW_GolfClub\Data\BodyPlastic_destruct.rvmat"
					}}
				};
			};
		};
	};		
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUp_Light
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
				soundset = "baseballbat_drop_SoundSet";
				id = 898;
			};
		};
	};
};

class HRW_GolfClub: HRW_GolfClub_Base
{
	scope = 2;
	displayName = "$STR_GolfClub0";
	descriptionShort = "$STR_GolfClub1";
};



