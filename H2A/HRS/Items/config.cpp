class CfgPatches
{
	class HRS_Items
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
        requiredAddons[] = 
		{ 
			"DZ_Data", 
			"DZ_Gear_Tools", 
			"DZ_Weapons_Melee_Blade", 
			"DZ_Sounds_Effects", 
			"DZ_Sounds_Bliss",
			"DZ_Gear_Cooking"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	#include "HRS_Radio\HRS_Radio.hpp"
	#include "HRS_Radio\HRS_K7.hpp"
	#include "HRS_AnimalCall\HRS_AnimalCall.hpp"
	#include "HRS_SongBox\HRS_SongBox.hpp"	
	#include "HRS_TripodParts\HRS_TripodParts.hpp"	
	#include "HRS_MilSynth\HRS_MilSynth_Fern.hpp"	
	#include "HRS_ScrapMetal\HRS_ScrapMetal.hpp"	
	#include "HRS_Crafted_VegetalFibers\HRS_Crafted_VegetalFibers.hpp"	
	#include "HRS_Crafted_SmallMetalPlate\HRS_Crafted_SmallMetalPlate.hpp"	
	#include "HRS_Crafted_Soap\HRS_Crafted_FatBlock.hpp"	
	#include "HRS_Crafted_Soap\HRS_Crafted_Soap.hpp"	
	#include "HRS_Crafted_Fertilizer\HRS_Crafted_Fertilizer.hpp"	
	
	class Rope;
	#include "HRS_Crafted_VegetalFibersRope\HRS_Crafted_VegetalFibersRope.hpp"	
	
	class GhillieBushrag_ColorBase;
	class GhillieTop_ColorBase;
	class GhillieSuit_ColorBase;
	class GhillieAtt_ColorBase;
	class GhillieHood_ColorBase;
	#include "HRS_Crafted_FernGhillie\HRS_Crafted_FernGhillie.hpp"	
	
	class Clothing;
	#include "HRS_Crafted_RopeSling\HRS_Crafted_RopeSling.hpp"	
	
	class Pot;	
	#include "HRS_HikingPot\HRS_HikingPot.hpp"	
	
	class MushroomsStageTransitions;
	class FoodAnimationSources;
	class BoletusMushroom;
	#include "HRS_TinderMushroom\HRS_TinderMushroom.hpp"

	class SmallStone;
	#include "HRS_MarcasiteStone\HRS_MarcasiteStone.hpp"
	
	class PetrolLighter;
	#include "HRS_Crafted_FireStart_Kit\HRS_Crafted_FireStart_Kit.hpp"
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	
	class ProxyMelee: ProxyAttachment
	{
		inventorySlot[] = {"Melee"};
		model = "H2A\HRS\Items\HRS_Crafted_RopeSling\Proxies\Melee.p3d";
	};
	class ProxyRifle: ProxyAttachment
	{
		inventorySlot[] = {"Shoulder"};
		model = "H2A\HRS\Items\HRS_Crafted_RopeSling\Proxies\Rifle.p3d";
	};
};

class CfgSlots
{
	class Slot_Tape
	{
		name="Tape";
		displayName="Tape";
		ghostIcon="";
	};
};

