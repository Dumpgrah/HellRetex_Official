class Ammo_127x99: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO127x990";
	descriptionShort = "$STR_AMMO127x991";
	model = "H2A\HRW\Ammunitions\127x99\127x99_Stack.p3d";
	weight = 9;
	count = 10;
	iconCartridge=2;
	ammo = "Bullet_127x99";
	
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
