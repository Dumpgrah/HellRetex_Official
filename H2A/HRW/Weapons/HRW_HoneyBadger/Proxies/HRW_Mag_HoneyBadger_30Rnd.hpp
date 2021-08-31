class HRW_Mag_HoneyBadger_30Rnd: Magazine_Base
{
	scope = 2;
	weight = 110;
	itemSize[] = {1,3};
	count = 30;
	displayName = "$STR_HoneyBadger_Mag0";
	descriptionShort = "$STR_HoneyBadger_Mag1";
	model="H2A\HRW\Weapons\HRW_HoneyBadger\Proxies\HRW_Mag_HoneyBadger_30Rnd.p3d";
	ammo = "Bullet_300AAC";
	ammoItems[] = {"Ammo_300AAC"};
	hiddenSelections[] = {"zbytek" };
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_HoneyBadger\Data\Body_co.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic.rvmat"};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.01,{"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_HoneyBadger\Data\BodyPlastic_destruct.rvmat"}}
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

class HRW_Mag_HoneyBadger_BattleScars_30Rnd: HRW_Mag_HoneyBadger_30Rnd
{
	scope = 2;
	displayName = "$STR_HoneyBadger_BattleScars_Mag0";
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_HoneyBadger\Data\Body_BattleScars_co.paa"};
};
