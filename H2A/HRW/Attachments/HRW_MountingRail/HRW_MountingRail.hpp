class HRW_MountingRail: Inventory_Base
{
	scope = 2;
	displayName = "$STR_MountingRail0";
	descriptionShort = "$STR_MountingRail1";
	model = "H2A\HRW\Attachments\HRW_MountingRail\HRW_MountingRail.p3d";
	rotationFlags = 17;
	reversed = 0;
	weight = 70;
	itemSize[] = {2,1};
	inventorySlot = "weaponMountingRail";
	dispersionModifier = -0.00012500001;
	dispersionCondition = "true";
	recoilModifier[] = {0.80000001,0.80000001,0.80000001};

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1,{"H2A\HRW\Attachments\HRW_MountingRail\Data\BodyMetal.rvmat"}},
					{0.69999999,{"H2A\HRW\Attachments\HRW_MountingRail\Data\BodyMetal.rvmat"}},
					{0.5,{"H2A\HRW\Attachments\HRW_MountingRail\Data\BodyMetal_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Attachments\HRW_MountingRail\Data\BodyMetal_damage.rvmat"}},
					{0,{"H2A\HRW\Attachments\HRW_MountingRail\Data\BodyMetal_destruct.rvmat"}}
				};
			};
		};
	};
	
	isMeleeWeapon = 1;
	
	class MeleeModes
	{
		class Default
		{
			ammo = "MeleeLightBlunt";
			range = 1;
		};
		class Heavy
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 1;
		};
		class Sprint
		{
			ammo = "MeleeLightBlunt_Heavy";
			range = 2.8;
		};
	};
};
