class HRW_Mag_FRF2_10Rnd: Magazine_Base 
{
	scope = 2;
	weight = 1100;
	itemSize[] = {1,2};
	count = 10;
	displayName = "$STR_FRF2_Mag0";
	descriptionShort = "$STR_FRF2_Mag1";
	model = "H2A\HRW\Weapons\HRW_FRF2\Proxies\HRW_Mag_FRF2_10Rnd.p3d";
	ammo = "Bullet_762x51";
	ammoItems[] = {"Ammo_762x51"};
	hiddenSelections[] = {"metal","plastic"};
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_FRF2\Data\Attachments_co.paa",
		"H2A\HRW\Weapons\HRW_FRF2\Data\Attachments_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal.rvmat",
		"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic.rvmat"
	};

	class DamageSystem 
	{
		class GlobalHealth 
		{
			class Health 
			{
				hitpoints = 50;
				healthLevels[] = 
				{
					{1.01,{"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal.rvmat","H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal.rvmat","H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_damage.rvmat","H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_damage.rvmat","H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_destruct.rvmat","H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_destruct.rvmat"}}
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
