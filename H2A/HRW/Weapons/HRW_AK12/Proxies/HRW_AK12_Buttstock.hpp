class HRW_AK12_Buttstock: Inventory_Base
{
	scope=2;
	displayName="$STR_AK12_Buttstock0";
	descriptionShort="$STR_AK12_Buttstock1";
	model="H2A\HRW\Weapons\HRW_AK12\Proxies\HRW_AK12_Buttstock.p3d";
	rotationFlags=17;
	reversed=90;
	inventorySlot[]=
	{
		"weaponButtstockM4"
	};
	weight=250;
	itemSize[]={2,1};
	dispersionModifier=-0.00025000001;
	dispersionCondition="true";
	recoilModifier[]={0.80000001,0.80000001,0.80000001};
	hiddenSelections[]=
	{
		"zbytek"
	};
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_AK12\Data\Body_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic.rvmat"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1,{"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic_damage.rvmat"}},
					{0,{"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic_destruct.rvmat"}}
				};
			};
		};
	};
	isMeleeWeapon=1;
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeLightBlunt";
			range=1;
		};
		class Heavy
		{
			ammo="MeleeLightBlunt_Heavy";
			range=1;
		};
		class Sprint
		{
			ammo="MeleeLightBlunt_Heavy";
			range=2.8;
		};
	};
};

class HRW_AK12_Buttstock_Green: HRW_AK12_Buttstock
{
	scope=2;
	color="Green";
	displayName="$STR_AK12_Buttstock_Green0";	
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_AK12\Data\Body_Green_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic.rvmat"};
};

class HRW_AK12_Buttstock_Sand: HRW_AK12_Buttstock
{
	scope=2;
	color="Sand";
	displayName="$STR_AK12_Buttstock_Sand0";
	descriptionShort="$STR_AK12_Buttstock1";
	hiddenSelectionsTextures[] = {"H2A\HRW\Weapons\HRW_AK12\Data\Body_Sand_ca.paa"};
	hiddenSelectionsMaterials[] = {"H2A\HRW\Weapons\HRW_AK12\Data\BodyPlastic.rvmat"};
};
