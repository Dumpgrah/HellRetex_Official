class ShelterSite: BaseBuildingBase
{
	scope = 2;
	attachments[] = {"Material_Shelter_FrameSticks","Material_Shelter_Leather","Material_Shelter_Fabric","Material_Shelter_Sticks","Material_Shelter_PlantMaterial","Material_WoodenLogs"};
	class GUIInventoryAttachmentsProps
	{
		class Base
		{
			name = "$STR_HRS_CfgVehicles_Fence_Att_Category_Base";
			description = "";
			attachmentSlots[] = {"Material_Shelter_FrameSticks","Material_WoodenLogs"};
			icon = "cat_shelter_support";
			selection = "site";
		};
		class Material
		{
			name = "$STR_HRS_CfgVehicles_Fence_Att_Category_Materials";
			description = "";
			attachmentSlots[] = {"Material_Shelter_Leather","Material_Shelter_Fabric","Material_Shelter_Sticks","Material_Shelter_PlantMaterial"};
			icon = "cat_shelter_roof";
			selection = "site";
		};
	};
	class Construction
	{
		class site
		{
			class fern
			{
				name = "fern";
				is_base = 1;
				id = 4;
				required_parts[] = {};
				conflicted_parts[] = {"leather","fabric","stick"};
				collision_data[] = {"fern_min","fern_max"};
				build_action_type = 16;
				dismantle_action_type = 16;
				material_type = 2;
				class Materials
				{
					class Material1
					{
						type = "WoodenLog";
						slot_name = "Material_WoodenLogs";
						quantity = 2;
						lockable = 0;
					};	
					class Material2
					{
						type = "HRS_FernPart";
						slot_name = "Material_Shelter_PlantMaterial";
						quantity = 50;
						lockable = 0;
					};
				};
			};
		};
	};
};

class HRS_FernShelter: ShelterBase
{
	scope = 2;
	displayName = "$STR_HRS_FernShelter0";
	descriptionShort = "$STR_HRS_FernShelter1";
	model = "H2A\HRS\Shelters\HRS_FernShelter\HRS_FernShelter.p3d";
	repairableWithKits[] = {5};
	repairCosts[] = {25.0};
	itemsCargoSize[] = { 10, 5 };
	attachments[] = 
	{ 
		"Back",
		"Shoulder",
		"Hatchet",
		"GasLamp",
		"WoodenCrate1",
		"WoodenCrate2",
		"WoodenCrate3" 
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 400;
				healthLevels[] = {
					{1.0,{
						"H2A\HRS\Shelters\HRS_FernShelter\Data\Body.rvmat"
					}},
					{0.7,{
						"H2A\HRS\Shelters\HRS_FernShelter\Data\Body.rvmat"
					}},
					{0.5,{
						"H2A\HRS\Shelters\HRS_FernShelter\Data\Body.rvmat"
					}},
					{0.3,{
						"H2A\HRS\Shelters\HRS_FernShelter\Data\Body.rvmat"
					}},
					{0.0,{
						"H2A\HRS\Shelters\HRS_FernShelter\Data\Body.rvmat"
					}}
				};
			};
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage = 0.05;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.3;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 8;
				};
			};
		};
		componentNames[] = {""};
	};
};

class HRS_FernShelter_NoGeo: ShelterBase
{
	scope = 2;
	displayName = "$STR_HRS_FernShelter0";
	descriptionShort = "$STR_HRS_FernShelter1";
	model = "H2A\HRS\Shelters\HRS_FernShelter\HRS_FernShelter_NoGeo.p3d";
};