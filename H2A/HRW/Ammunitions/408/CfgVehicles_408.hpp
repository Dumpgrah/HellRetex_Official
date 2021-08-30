class AmmoBox_408_20Rnd: Box_Base
{
	scope = 2;
	displayName = "$STR_AMMOBOX4080";
	descriptionShort = "$STR_AMMOBOX4081";
	model = "\dz\weapons\ammunition\545x39_20RoundBox.p3d";
	rotationFlags = 17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {"H2A\HRW\Ammunitions\Data\408_Ammobox_co.paa"};
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
		class Ammo_408
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

class FxCartridge_408: FxCartridge
{
	model="H2A\HRW\Ammunitions\408\408_Casing.p3d";
};

class FxRound_408: FxRound
{
	model="H2A\HRW\Ammunitions\408\408_Projectile.p3d";
};
