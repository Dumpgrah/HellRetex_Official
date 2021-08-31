class CfgPatches
{
	class HRS_VanillaTweaks
	{
		author = "Hellmaker2a";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data", "DZ_Animals" };

	};
};

class CfgVehicles
{
	class AnimalBase;
	class ChickenFeather;
	
	class Animal_GallusGallusDomesticus: AnimalBase
	{
		scope=2;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="HRS_ChickenFeather";
				count=1;
				quantityMinMaxCoef[]={0.1,0.2};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
		};
	};

	class Animal_GallusGallusDomesticusF: AnimalBase
	{
		scope=0;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="HRS_ChickenFeather";
				count=1;
				quantityMinMaxCoef[]={0.1,0.2};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
		};
	};

	class HRS_ChickenFeather: ChickenFeather
	{
		scope = 2;
		displayName="$STR_ChickenFeather0";
		descriptionShort="$STR_ChickenFeather1";
	};
};

class CfgNonAIVehicles {};
class CfgSlots {};

