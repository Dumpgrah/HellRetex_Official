class Ammo_300AAC: Ammunition_Base
{
	scope = 2;
	displayName = "$STR_AMMO300AAC0";
	descriptionShort = "$STR_AMMO300AAC1";
	model = "H2A\HRW\Ammunitions\300AAC\300AAC_Stack.p3d";
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_300AAC";
	
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
