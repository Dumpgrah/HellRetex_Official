class CfgPatches
{
    class HRW_Melee
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
        requiredAddons[] = 
		{ 
			"DZ_Data", 
			"DZ_Weapons_Melee" 
		};
    };
};

class CfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class Machete;
	class Sword;
	class FirefighterAxe;
	class Hatchet;
	class BaseballBat;
	#include "HRW_Shashka\HRW_Shashka.hpp"
	#include "HRW_Shashka\HRW_ShashkaScabbard.hpp"
	#include "HRW_Katana\HRW_Katana.hpp"
	#include "HRW_Katana\HRW_KatanaScabbard.hpp"
	#include "HRW_ModernAxe\HRW_ModernAxe.hpp"
	#include "HRW_ModernTomahawk\HRW_ModernTomahawk.hpp"
	#include "HRW_GolfClub\HRW_GolfClub.hpp"
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;

	class ProxyHRW_Katana: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "meleeKatanaScabbard";
		model = "H2A\HRW\Melee\HRW_Katana\HRW_Katana.p3d";
	};
	
	class ProxyHRW_Shashka: ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "meleeShashkaScabbard";
		model = "H2A\HRW\Melee\HRW_Shashka\HRW_Shashka.p3d";
	};
};

class CfgSlots
{
	class Slot_meleeKatanaScabbard
	{
		name="meleeKatanaScabbard";
		displayName="meleeKatanaScabbard";
		ghostIcon="knifeholster";
	};
	
	class Slot_meleeShashkaScabbard
	{
		name="meleeShashkaScabbard";
		displayName="meleeShashkaScabbard";
		ghostIcon="knifeholster";
	};
};