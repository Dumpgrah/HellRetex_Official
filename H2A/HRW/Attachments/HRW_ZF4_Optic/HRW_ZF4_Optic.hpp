class HRW_ZF4_Optic : ItemOptics
{
	scope = 2;
	displayName = "$STR_ZF4_Optic0";
	descriptionShort = "$STR_ZF4_Optic1";
	model = "H2A\HRW\Attachments\HRW_ZF4_Optic\HRW_ZF4_Optic.p3d";
	animClass = "Binoculars";
	rotationFlags = 4;
	reversed = 0;
	weight = 350;
	itemSize[] = { 3, 1 };
	inventorySlot[] = { "weaponOpticsGewehr" };
	simulation = "itemoptics";
	dispersionModifier = -9.9999997e-005;
	dispersionCondition = "true";
	recoilModifier[] = { 0.5, 0.5, 0.5 };
	swayModifier[] = { 0.5, 0.5, 0.5 };
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";	
	repairableWithKits[] = { 7, 8 };
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
					{1.0,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopeMetal.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopePlastic.rvmat"
						}
					},
					{0.7,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopeMetal.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopePlastic.rvmat"
						}
					},
					{0.5,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopeMetal_damage.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopePlastic_damage.rvmat"
						}
					},
					{0.3,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopeMetal_damage.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopePlastic_damage.rvmat"
						}
					},
					{0.0,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopeMetal_destruct.rvmat",
							"H2A\HRW\Attachments\HRW_ZF4_Optic\Data\ScopePlastic_destruct.rvmat"
						}
					}
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
			// Position anvancé(0.9)/reculée (0.3) / zoom
			opticsZoomMin = "0.3926/3.5";
			opticsZoomMax = "0.3926/3.5";
			opticsZoomInit = "0.3926/3.5";
			distanceZoomMin=100;
			distanceZoomMax=500;
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28.5,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.45;
	};
	
	class AnimationSources 
	{
		class hide 
		{
			source = "user";
			animPeriod = 0.01;
			initPhase = 0;
		};
	};
};
