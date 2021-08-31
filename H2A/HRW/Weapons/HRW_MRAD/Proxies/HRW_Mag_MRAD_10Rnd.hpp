class HRW_Mag_MRAD_10Rnd: Magazine_Base 
{
	scope = 2;
	weight = 200;
	itemSize[] = {1,2};
	count = 10;
	displayName = "$STR_MRAD_Mag0";
	descriptionShort = "$STR_MRAD_Mag1";
	model = "H2A\HRW\Weapons\HRW_MRAD\Proxies\HRW_Mag_MRAD_10Rnd.p3d";
	ammo = "Bullet_7x64";
	ammoItems[] = {"Ammo_7x64"};

	class DamageSystem 
	{
		class GlobalHealth 
		{
			class Health 
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.01,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_MRAD\Data\BodyMetal_destruct.rvmat"}}
				};
			};
		};
	};
};
