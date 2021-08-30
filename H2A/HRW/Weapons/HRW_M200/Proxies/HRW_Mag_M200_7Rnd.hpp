class HRW_Mag_M200_7Rnd: Magazine_Base 
{
	scope = 2;
	weight = 280;
	itemSize[] = {1,2};
	count = 7;
	displayName = "$STR_M200_Mag0";
	descriptionShort = "$STR_M200_Mag1";
	model = "H2A\HRW\Weapons\HRW_M200\Proxies\HRW_Mag_M200_7Rnd.p3d";
	ammo = "Bullet_408";
	ammoItems[] = {"Ammo_408"};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 50;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal.rvmat"
					}},						
					{0.5,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_damage.rvmat"

					}},						
					{0.3,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_damage.rvmat"

					}},						
					{0.0,{
						"H2A\HRW\Weapons\HRW_M200\Data\BodyDarkMetal_destruct.rvmat"
					}},
				};
			};
		};
	};
	
	class AnimEvents 
	{
		class SoundWeapon 
		{
			class MagRifle_fill_in 
			{
				soundSet = "MagRifle_fill_in_SoundSet";
				id = 1;
			};
			class MagRifle_fill_loop 
			{
				soundSet = "MagRifle_fill_loop_SoundSet";
				id = 2;
			};
			class MagRifle_fill_out 
			{
				soundSet = "MagRifle_fill_out_SoundSet";
				id = 3;
			};
			class MagRifle_empty_in 
			{
				soundSet = "MagRifle_empty_in_SoundSet";
				id = 4;
			};
			class MagRifle_empty_loop 
			{
				soundSet = "MagRifle_empty_loop_SoundSet";
				id = 5;
			};
			class MagRifle_empty_out 
			{
				soundSet = "MagRifle_empty_out_SoundSet";
				id = 6;
			};
			class MagPistol_fill_in 
			{
				soundSet = "MagPistol_fill_in_SoundSet";
				id = 7;
			};
			class MagPistol_fill_loop 
			{
				soundSet = "MagPistol_fill_loop_SoundSet";
				id = 8;
			};
			class MagPistol_fill_out 
			{
				soundSet = "MagPistol_fill_out_SoundSet";
				id = 9;
			};
			class MagPistol_empty_in 
			{
				soundSet = "MagPistol_empty_in_SoundSet";
				id = 10;
			};
			class MagPistol_empty_loop 
			{
				soundSet = "MagPistol_empty_loop_SoundSet";
				id = 11;
			};
			class MagPistol_empty_out 
			{
				soundSet = "MagPistol_empty_out_SoundSet";
				id = 12;
			};
		};
	};
};
