class HRW_Mag_Drum_60Rnd: Magazine_Base 
{
	scope = 2;
	weight = 540;
	itemSize[] = {2,2};
	count = 60;
	displayName = "$STR_DRUM60_Mag0";
	descriptionShort = "$STR_DRUM60_Mag1";
	model = "H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\HRW_Mag_Drum_60Rnd.p3d";
	PPDOFProperties[] = {};
	ammo = "Bullet_556x45";
	
	ammoItems[] = 
	{
		"Ammo_556x45",
		"Ammo_556x45Tracer"
	};

	class DamageSystem 
	{
		class GlobalHealth 
		{
			class Health 
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\Data\BodyPlastic.rvmat"}},
					{0.7,{"H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\Data\BodyPlastic_damage.rvmat"}},
					{0.3,{"H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\Data\BodyPlastic_damage.rvmat"}},
					{0.0,{"H2A\HRW\Attachments\HRW_Mag_Drum_60Rnd\Data\BodyPlastic_destruct.rvmat"}}
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
