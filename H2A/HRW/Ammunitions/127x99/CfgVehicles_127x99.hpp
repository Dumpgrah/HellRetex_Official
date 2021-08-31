class AmmoBox_127x99_10Rnd: Box_Base
{
	scope = 2;
	displayName = "$STR_AMMOBOX127x990";
	descriptionShort = "$STR_AMMOBOX127x991";
	model = "\dz\weapons\ammunition\545x39_20RoundBox.p3d";
	rotationFlags = 17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRW\Ammunitions\Data\127x99_Ammobox_co.paa"};
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
		class Ammo_127x99
		{
			value = 10;
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

class FxCartridge_127x99: FxCartridge
{
	model="H2A\HRW\Ammunitions\127x99\127x99_Casing.p3d";
};

class FxRound_127x99: FxRound
{
	model="H2A\HRW\Ammunitions\127x99\127x99_Projectile.p3d";
};
