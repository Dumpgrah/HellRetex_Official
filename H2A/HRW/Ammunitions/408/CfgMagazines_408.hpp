class Ammo_408: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO4080";
	descriptionShort = "$STR_AMMO4081";
	model = "H2A\HRW\Ammunitions\408\408_Stack.p3d";
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_408";
	
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
