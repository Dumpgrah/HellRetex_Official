class Ammo_792x57: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO792x570";
	descriptionShort = "$STR_AMMO792x571";
	model = "H2A\HRW\Ammunitions\792x57\792x57_Stack.p3d";
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_792x57";
	
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
