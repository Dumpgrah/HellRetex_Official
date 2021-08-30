class HRS_Crafted_Pliers: Pliers
{
	scope = 2;
	displayName = "$STR_HRS_Pliers0";
	descriptionShort = "$STR_HRS_Pliers1";
	model = "H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\HRS_Crafted_Pliers.p3d";
	animClass = "Knife";
	RestrainUnlockType = 1;
	build_action_type = 1;
	dismantle_action_type = 1;
	rotationFlags = 17;
	weight = 240;
	fragility = 0.01;
	itemSize[] = {1,3};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 150;
				healthLevels[] = {{1.0,{"H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\Data\Body.rvmat"}},{0.7,{"H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\Data\Body.rvmat"}},{0.5,{"H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\Data\Body_damage.rvmat"}},{0.3,{"H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\Data\Body_damage.rvmat"}},{0.0,{"H2A\HRS\PrimitiveTools\HRS_Crafted_Pliers\Data\Body_destruct.rvmat"}}};
			};
		};
	};
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleePliers";
			range = 1.0;
		};
		class Heavy
		{
			ammo = "MeleePliers_Heavy";
			range = 1.0;
		};
		class Sprint
		{
			ammo = "MeleePliers_Heavy";
			range = 2.8;
		};
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem
			{
				soundSet = "pickUpPliers_SoundSet";
				id = 797;
			};
			class Pliers_loop
			{
				soundSet = "Pliers_loop_SoundSet";
				id = 203;
			};
		};
	};
};
