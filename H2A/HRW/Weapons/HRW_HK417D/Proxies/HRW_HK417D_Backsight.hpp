class HRW_HK417D_Backsight: ItemOptics
{
	scope=2;
	memoryPointCamera="eyeScope";
	cameraDir="cameraDir";
	displayName="$STR_HK417D_Backsight0";
	descriptionShort="$STR_HK417D_Backsight1";
	model="H2A\HRW\Weapons\HRW_HK417D\Proxies\HRW_HK417D_Backsight.p3d";
	rotationFlags=17;
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
					{1,{"H2A\HRW\Weapons\HRW_HK417D\Data\Parts.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_HK417D\Data\Parts.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_damage.rvmat"}},
					{0,{"H2A\HRW\Weapons\HRW_HK417D\Data\Parts_destruct.rvmat"}}
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
