//AmmoBox_545x39_20Rnd

class AmmoBox_6x35_20Rnd: Box_Base
{
	scope = 2;
	displayName = "$STR_AMMOBOX6x350";
	descriptionShort = "$STR_AMMOBOX6x351";
	model = "\dz\weapons\ammunition\545x39_20RoundBox.p3d";
	rotationFlags = 17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRW\Ammunitions\Data\6x35_Ammobox_co.paa"};
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
		class Ammo_6x35
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

class FxCartridge_6x35: FxCartridge
{
	model="H2A\HRW\Ammunitions\6x35\6x35_Casing.p3d";
};

class FxRound_6x35: FxRound
{
	model="H2A\HRW\Ammunitions\6x35\6x35_Projectile.p3d";
};
