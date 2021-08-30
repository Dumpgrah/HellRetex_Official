class HRW_APX_SOM_Optic: ItemOptics
{
	scope = 2;
	displayName = "$STR_APX_SOM_Optic0";
	descriptionShort = "$STR_APX_SOM_Optic1";
	model = "H2A\HRW\Attachments\HRW_APX_SOM_Optic\HRW_APX_SOM_Optic.p3d";
	animClass = "Binoculars";
	rotationFlags = 16;
	reversed = 0;
	weight = 800;
	itemSize[] = { 3, 1 };
	inventorySlot[] = { "weaponOpticsMAS" };
	simulation = "itemoptics";
	dispersionModifier = -9.9999997e-005;
	dispersionCondition = "true";
	recoilModifier[] = { 0.5, 0.5, 0.5 };
	swayModifier[] = { 0.5, 0.5, 0.5 };
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";
	repairableWithKits[] = { 5, 7 };
	repairCosts[] = { 50, 50 };
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyMetal.rvmat",
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyPlastic.rvmat",
						"dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyMetal.rvmat",
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyPlastic.rvmat",
						"dz\weapons\attachments\optics\data\lensglass_clearer.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyPlastic_damage.rvmat",
						"dz\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyPlastic_damage.rvmat",
						"dz\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Attachments\HRW_APX_SOM_Optic\Data\BodyPlastic_destruct.rvmat",
						"dz\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat"
					}}
				};
			};
		};
	};
	
	class OpticsInfo
	{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/3.5";
			opticsZoomMax="0.3926/3.5";
			opticsZoomInit="0.3926/3.5";
			distanceZoomMin=100;
			distanceZoomMax=500;
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.32,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.45;
	};
};