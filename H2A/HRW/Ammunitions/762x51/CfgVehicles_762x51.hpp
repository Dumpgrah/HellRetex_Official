class AmmoBox_762x51_20Rnd: Box_Base
{
	scope = 2;
	displayName = "$STR_AMMOBOX762x510";
	descriptionShort = "$STR_AMMOBOX762x511";
	model = "\dz\weapons\ammunition\545x39_20RoundBox.p3d";
	rotationFlags = 17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRW\Ammunitions\Data\762x51_Ammobox_co.paa"};
	weight = 185;		
	lootCategory = "Ammo";

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\545x39box.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\545x39box.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\545x39box_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\545x39box_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\545x39box_destruct.rvmat"}}};
			};
		};
	};
	
	class Resources
	{
		class Ammo_762x51
		{
			value = 20;
			variable = "quantity";
		};
	};
	
	class AnimEvents
	{
		class SoundWeapon
		{
			class interact
			{
				soundset = "ammoboxUnpack_SoundSet";
				id = 70;
			};
		};
	};

};

class FxCartridge_762x51: FxCartridge
{
	model="H2A\HRW\Ammunitions\762x51\762x51_Casing.p3d";
};

class FxRound_762x51: FxRound
{
	model="H2A\HRW\Ammunitions\762x51\762x51_Projectile.p3d";
};
