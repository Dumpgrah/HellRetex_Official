class CfgPatches
{
	class HRM_GearsAssets
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Headgear",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Melee",
			"DZ_Gear_Tools"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	class Inventory_Base;
	#include "HRM_Civilian_SherpaBag.hpp"
	#include "HRM_VX600Belt.hpp"
	#include "HRM_BaseballCap.hpp"
	#include "HRM_OperationBag.hpp"
	#include "HRM_LightMilBag.hpp"
	#include "HRM_TacticalBag.hpp"
	#include "Vanilla.hpp"	
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	
	class ProxyBagWeaponProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder"};
		model = "H2A\HRM\GearsAssets\Proxies\BagWeaponProxy.p3d";
	};
	
	class ProxyBagAxeProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Melee"};
		model = "H2A\HRM\GearsAssets\Proxies\BagAxeProxy.p3d";
	};
	
	class ProxyBagCanteenProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Belt_Left"};
		model = "H2A\HRM\GearsAssets\Proxies\BagCanteenProxy.p3d";
	};
	
	class ProxyBagRopeProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Rope"};
		model = "H2A\HRM\GearsAssets\Proxies\BagRopeProxy.p3d";
	};
	
	class ProxyBagTalkiewalkieProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"WalkieTalkie"};
		model = "H2A\HRM\GearsAssets\Proxies\BagTalkiewalkieProxy.p3d";
	};
	
	class ProxyBagChemlightProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Chemlight"};
		model = "H2A\HRM\GearsAssets\Proxies\BagChemlightProxy.p3d";
	};
	
	class ProxyBagMacheteProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Machete"};
		model = "H2A\HRM\GearsAssets\Proxies\BagMacheteProxy.p3d";
	};
	
	class ProxyBagHolsterProxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Belt_Right"};
		model = "H2A\HRM\GearsAssets\Proxies\BagHolsterProxy.p3d";
	};
};

class CfgSlots
{
	class Slot_Machete
	{
		name="Machete";
		displayName="Machete";
		ghostIcon="shoulderright";
	};
};


