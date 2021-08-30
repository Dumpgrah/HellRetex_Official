class Ammo_6x35: Ammunition_Base
{

	scope = 2;
	displayName = "$STR_AMMO6x350";
	descriptionShort = "$STR_AMMO6x351";
	model = "H2A\HRW\Ammunitions\6x35\6x35_Stack.p3d";
	itemSize[] = {1,1};
	weight = 9;
	count = 20;
	iconCartridge=2;
	ammo = "Bullet_6x35";

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
