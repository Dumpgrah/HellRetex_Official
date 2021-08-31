class Ammo_762x51: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO762x510";
	descriptionShort = "$STR_AMMO762x511";
	model = "H2A\HRW\Ammunitions\762x51\762x51_Stack.p3d";
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_762x51";
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{}},
					{0.7,{}},
					{0.5,{}},
					{0.3,{}},
					{0.0,{}}
				};
			};
		};
	};
};	
