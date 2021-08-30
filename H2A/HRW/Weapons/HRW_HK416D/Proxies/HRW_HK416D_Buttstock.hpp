class HRW_HK416D_Buttstock: Inventory_Base
{
	scope=2;
	weight=250;
	itemSize[]={2,1};
	dispersionModifier=-0.00025000001;
	dispersionCondition="true";
	recoilModifier[]={0.80000001,0.80000001,0.80000001};
	rotationFlags=17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
	reversed=90;
	inventorySlot[]=
	{
		"weaponButtstockM4"
	};
	displayName="$STR_HK416D_Buttstock0";
	descriptionShort="$STR_HK416D_Buttstock1";
	model="H2A\HRW\Weapons\HRW_HK416D\Proxies\HRW_HK416D_Buttstock.p3d";
		
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_damage.rvmat"}},
					{0,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic_destruct.rvmat"}}
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

class HRW_HK416D_Buttstock_Green: HRW_HK416D_Buttstock
{
	scope=2;
	color="Green";
	displayName="$STR_HK416D_Buttstock_Green0";
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Green_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
};

class HRW_HK416D_Buttstock_Sand: HRW_HK416D_Buttstock
{
	scope=2;
	color="Sand";
	displayName="$STR_HK416D_Buttstock0_Sand";
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Sand_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyPlastic.rvmat"
	};
};
