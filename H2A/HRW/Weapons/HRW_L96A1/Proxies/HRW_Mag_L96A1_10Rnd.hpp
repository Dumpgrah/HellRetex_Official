class HRW_Mag_L96A1_10Rnd: Magazine_Base 
{
	scope = 2;
	weight = 120;
	itemSize[] = {1,2};
	count = 10;
	displayName = "$STR_L96A1_Mag0";
	descriptionShort = "$STR_L96A1_Mag1";
	model = "H2A\HRW\Weapons\HRW_L96A1\Proxies\HRW_Mag_L96A1_10Rnd.p3d";
	ammo = "Bullet_762x51";
	ammoItems[] = {"Ammo_762x51"};

	class DamageSystem 
	{
		class GlobalHealth 
		{
			class Health 
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.01,{"H2A\HRW\Weapons\HRW_L96A1\Data\BodyMetal.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_L96A1\Data\BodyMetal.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_L96A1\Data\BodyMetal_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_L96A1\Data\BodyMetal_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_L96A1\Data\BodyMetal_destruct.rvmat"}}
				};
			};
		};
	};
};
