class CfgPatches
{
	class HRM_Retex
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Gear_Consumables",
			"DZ_Gear_Containers",
			"DZ_Gear_Drinks",
			"DZ_Weapons_Supports"
		};
	};
};

class CfgVehicles
{
	class AliceBag_ColorBase;
	class AssaultBag_ColorBase;
	class HuntingBag;
	class MountainBag_ColorBase;
	class CoyoteBag_ColorBase;
	class CourierBag;
	class ImprovisedBag;
	class SmershBag;
	class TortillaBag;
	class GhillieBushrag_ColorBase;
	class GhillieTop_ColorBase;
	class GhillieSuit_ColorBase;
	class GhillieAtt_ColorBase;
	class Mich2001Helmet;
	class BoonieHat_ColorBase;
	class GhillieHood_ColorBase;
	class BalaclavaMask_ColorBase;
	class Balaclava3Holes_ColorBase;
	class CargoPants_ColorBase;
	class GorkaPants_ColorBase;
	class HunterPants_ColorBase;
	class BDUJacket;
	class GorkaEJacket_ColorBase;
	class M65Jacket_ColorBase;
	class TacticalShirt_ColorBase;
	class TShirt_ColorBase;	
	class HuntingJacket_ColorBase;
	class BomberJacket_ColorBase;	
	class RidersJacket_ColorBase;
	class HikingJacket_ColorBase;
	class HighCapacityVest_ColorBase;
	class UKAssVest_ColorBase;
	class SmershVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class PlateCarrierVest;
	class Spraycan_ColorBase;
	class Barrel_ColorBase;
	class Canteen;
	// Backpacks
	#include "HRM_AliceBag.hpp"
	#include "HRM_AssaultBag.hpp"
	#include "HRM_Civilian_HuntingBag.hpp"
	#include "HRM_Civilian_MountainBag.hpp"
	#include "HRM_CoyoteBag.hpp"
	#include "HRM_Crafted_CourierBag.hpp"
	#include "HRM_Crafted_ImprovisedBag.hpp"
	#include "HRM_HuntingBag.hpp"
	#include "HRM_SmershBag.hpp"
	#include "HRM_TortillaBag.hpp"
	// Ghillies
	#include "HRM_Crafted_GhillieBushrag.hpp"
	#include "HRM_Crafted_GhillieTop.hpp"
	#include "HRM_Crafted_GhillieSuit.hpp"
	#include "HRM_Crafted_GhillieHood.hpp"
	#include "HRM_Crafted_GhillieGunWrap.hpp"
	// Headgears
	#include "HRM_BoonieHat.hpp"
	#include "HRM_Civilian_BoonieHat.hpp"
	#include "HRM_Mich2001Helmet.hpp"
	// Masks
	#include "HRM_BalaclavaMask.hpp"
	#include "HRM_BalaclavaMask3Holes.hpp"
	// Pants
	#include "HRM_CargoPants.hpp"
	#include "HRM_GorkaPants.hpp"
	#include "HRM_Civilian_HunterPants.hpp"
	// Tops
	#include "HRM_BDUJacket.hpp"
	#include "HRM_GorkaJacket.hpp"
	#include "HRM_M65Jacket.hpp"
	#include "HRM_TacticalShirt.hpp"
	#include "HRM_TShirt.hpp"
	#include "HRM_Civilian_TShirt.hpp"
	#include "HRM_Civilian_HuntingJacket.hpp"
	#include "HRM_Civilian_BomberJacket.hpp"
	#include "HRM_Civilian_RidersJacket.hpp"
	#include "HRM_Civilian_HikingJacket.hpp"
	// Vests
	#include "HRM_HighCapacityVest.hpp"
	#include "HRM_UKVest.hpp"
	#include "HRM_SmershVest.hpp"
	#include "HRM_PlateCarrierHolster.hpp"
	#include "HRM_PlateCarrierPouches.hpp"
	#include "HRM_PlateCarrierVest.hpp"
	// Consumables
	#include "HRM_Spraycan.cpp" 
	// Containers
	#include "HRM_Painted_Barrel.hpp"
	// Drinks
	#include "HRM_Canteen.hpp"	
};
