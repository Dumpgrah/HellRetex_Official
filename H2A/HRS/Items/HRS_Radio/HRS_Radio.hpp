class HRS_Radio: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_Radio0";
	descriptionShort = "$STR_HRS_Radio1";
	model = "\dz\gear\radio\unitra_wilga.p3d";
	animclass = "Knife";
	weight = 1700;
	itemSize[] = {2,3};
	fragility = 0.01;
	absorbency = 0.5;
	simulation = "ItemRadio";
	attachments[] = {"BatteryD","Tape"};
	oldpower = 0;
	repairableWithKits[] = {7,8};
	repairCosts[] = {25.0,30.0};

	class EnergyManager
	{
		hasIcon = 1;
		autoSwitchOff = 1;
		autoSwitchOffWhenInCargo = 0;
		plugType = 0;
		energyUsagePerSecond = 0.005;
		attachmentAction = 1;
		wetnessExposure = 0.1;
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
					{1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},
					{0.7,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},
					{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},
					{0.3,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},
					{0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}
				};
			};
		};
	};

	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeLightBlunt";
			range = 1.0;
		};
		class Heavy
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 1.0;
		};
		class Sprint
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 2.8;
		};
	};

	class NoiseRadioK7
	{
		strength = 100;
		type = "shot";
	};
};
