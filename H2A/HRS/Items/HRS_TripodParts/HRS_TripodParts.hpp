class HRS_TripodParts: Inventory_Base
{
	scope = 2;
	displayName = "$STR_HRS_TripodParts0";
	descriptionShort = "$STR_HRS_TripodParts1";
	model = "H2A\HRS\Items\HRS_TripodParts\HRS_TripodParts.p3d";
	rotationFlags = 17;
	weight = 660;
	itemSize[] = { 1, 2 };
	lootCategory = "Crafted";

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRS\Items\HRS_TripodParts\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_TripodParts\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_TripodParts\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_TripodParts\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_TripodParts\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	
	class AnimEvents
	{
		class SoundWeapon
		{
			class drop
			{
				soundset = "crowbar_drop_SoundSet";
				id = 898;
			};
		};
	};
};