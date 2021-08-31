class Ammo_7x64: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO7x640";
	descriptionShort = "$STR_AMMO7x641";
	model = "H2A\HRW\Ammunitions\7x64\7x64_Stack.p3d";
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_7x64";
	
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
