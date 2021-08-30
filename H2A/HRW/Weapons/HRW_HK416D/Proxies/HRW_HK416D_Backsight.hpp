class HRW_HK416D_Backsight: ItemOptics
{
	scope=2;
	memoryPointCamera="eyeScope";
	cameraDir="cameraDir";
	displayName="$STR_HK416D_Backsight0";
	descriptionShort="$STR_HK416D_Backsight1";
	model="H2A\HRW\Weapons\HRW_HK416D\Proxies\HRW_HK416D_Backsight.p3d";
	rotationFlags=17;
	hiddenSelections[] = {"zbytek"};
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat"
	};
	reversed=0;
	weight=100;
	itemSize[]={1,1};
	inventorySlot[]=
	{
		"weaponOptics"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_damage.rvmat"}},
					{0,{"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal_destruct.rvmat"}}
				};
			};
		};
	};
	class OpticsInfo
	{
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		modelOptics="-";
		distanceZoomMin=200;
		distanceZoomMax=200;
		opticsZoomMin=0.52359998;
		opticsZoomMax=0.52359998;
		opticsZoomInit=0.52359998;
		discreteDistance[]={200};
		discreteDistanceInitIndex=0;
		PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
		PPLensProperties[]={1,0.15000001,0,0};
		PPBlurProperties=0.2;
	};
};

class HRW_HK416D_Backsight_Green: HRW_HK416D_Backsight
{
	scope=2;
	color="Green";
	displayName="$STR_HK416D_Backsight_Green0";
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Green_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat"
	};
};

class HRW_HK416D_Backsight_Sand: HRW_HK416D_Backsight
{
	scope=2;
	color="Sand";
	displayName="$STR_HK416D_Backsight_Sand0";
	hiddenSelectionsTextures[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\Body_Sand_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"H2A\HRW\Weapons\HRW_HK416D\Data\BodyMetal.rvmat"
	};
};
