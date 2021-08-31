class CfgPatches
{
	class HRS_Shelters
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
        requiredAddons[] = 
		{ 
			"DZ_Data", 
			"DZ_Weapons_Melee_Blade", 
			"DZ_Gear_Containers", 
			"DZ_Gear_Cooking", 
			"DZ_Gear_Camping", 
			"DZ_Weapons_Firearms", 
			"DZ_Weapons_Firearms_M4", 
			"DZ_Characters_Backpacks",
			"DZ_Gear_Consumables", 
			"DZ_Gear_Cultivation", 
			"DZ_Gear_Crafting", 
			"DZ_Characters_Tops"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class ShelterBase;
	class BaseBuildingBase;

	class Hatchet: Inventory_Base
	{
		scope = 2;
		inventorySlot[] = { 
			"Hatchet",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Hatchet4" 
		};
	};

	class PortableGasLamp: Inventory_Base
	{
		inventorySlot[] = { 
			"GasLamp",
			"GasLamp1",
			"GasLamp2",
			"GasLamp3",
			"GasLamp4" 
		};
	};

	class WoodenCrate: Container_Base
	{
		inventorySlot[] = { 
			"WoodenCrate",
			"WoodenCrate1",
			"WoodenCrate2",
			"WoodenCrate3",
			"WoodenCrate4",
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4"
		};
	};
	
	#include "HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTarp.hpp"	
	#include "HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTent.hpp"	
	#include "HRS_Crafted_BurlapTent\HRS_Crafted_BurlapTent_Kit.hpp"	
	#include "HRS_Crafted_CamoTent\HRS_CamoTarp.hpp"
	#include "HRS_Crafted_CamoTent\HRS_Crafted_CamoTent.hpp"
	#include "HRS_Crafted_CamoTent\HRS_Crafted_CamoTent_Kit.hpp"	
	#include "HRS_FernShelter\HRS_FernShelter.hpp"
	#include "HRS_FernShelter\HRS_Crafted_FernPart.hpp"
};

class CfgNonAIVehicles
{
	class ProxyAttachment;

	class Proxymountain_g: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "Back" };
		model = "DZ\characters\backpacks\mountain_g.p3d";
	};

	class Proxym4a1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "Shoulder" };
		model = "DZ\weapons\firearms\m4\m4a1.p3d";
	};

	class ProxyHatchetProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "Hatchet" };
		model = "H2A\HRS\Shelters\Proxies\HatchetProxy.p3d";
	};

	class ProxyGasLampProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "GasLamp" };
		model = "H2A\HRS\Shelters\Proxies\GasLampProxy.p3d";
	};

	class ProxyWoodenCrate1Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "WoodenCrate1" };
		model = "H2A\HRS\Shelters\Proxies\WoodenCrate1Proxy.p3d";
	};

	class ProxyWoodenCrate2Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "WoodenCrate2" };
		model = "H2A\HRS\Shelters\Proxies\WoodenCrate2Proxy.p3d";
	};

	class ProxyWoodenCrate3Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = { "WoodenCrate3" };
		model = "H2A\HRS\Shelters\Proxies\WoodenCrate3Proxy.p3d";
	};
};

class CfgSlots
{
	class Slot_Material_Shelter_PlantMaterial
	{
		name = "Material_Shelter_PlantMaterial";
		displayName = "Material_Shelter_PlantMaterial";
		selection = "Material_Shelter_PlantMaterial";
		ghostIcon = "seedbase";
		stackMax = 50;
	};
	
    class Slot_Hatchet
    {
        name = "Hatchet";
        displayName = "Hatchet";
        ghostIcon = "shoulderright";
    };

    class Slot_GasLamp
    {
        name = "GasLamp";
        displayName = "GasLamp";
        ghostIcon = "gascanister";
    };

    class Slot_WoodenCrate1
    {
        name = "WoodenCrate1";
        displayName = "WoodenCrate1";
        ghostIcon = "none";
    };

    class Slot_WoodenCrate2
    {
        name = "WoodenCrate2";
        displayName = "WoodenCrate2";
        ghostIcon = "none";
    };

    class Slot_WoodenCrate3
    {
        name = "WoodenCrate3";
        displayName = "WoodenCrate3";
        ghostIcon = "none";
    };
};

