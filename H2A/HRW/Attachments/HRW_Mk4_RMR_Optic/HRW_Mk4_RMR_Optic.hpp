class HRW_Mk4_RMR_Optic: ItemOptics
{
	scope = 2;
	displayName = "$STR_Mk4_RMR_Optic0";
	descriptionShort = "$STR_Mk4_RMR_Optic1";
	model = "H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\HRW_Mk4_RMR_Optic.p3d";
	attachments[] = { "BatteryD" };
	animClass = "Binoculars";
	simulation = "itemoptics";
	inventorySlot[] = { "weaponOptics", "weaponOpticsHunting" };
	selectionFireAnim = "zasleh";
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";
	rotationFlags = 16;
	reversed = 0;
	weight = 265;
	itemSize[] = { 4, 1 };
	recoilModifier[] = { 0.5, 0.5, 0.5 };
	swayModifier[] = { 0.5, 0.5, 0.5 };
	hiddenSelections[] = 
	{ 
		"body_metal", 
		"holosight_metal",
		"body_lenses",
		"holosight_lenses",
		"reddot" 
	};
	hiddenSelectionsTextures[] = 
	{ 
		"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\Body_ca.paa", 
		"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\Holosight_ca.paa",
		"\dz\weapons\attachments\optics\data\lensglass_ca.paa",
		"\dz\weapons\attachments\optics\data\lensglass_ca.paa",
		"" 
	};
	hiddenSelectionsMaterials[] = 
	{ 
		"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal.rvmat", 
		"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal.rvmat",
		"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
		"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
		"" 
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
					{1.0,
						{
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal.rvmat", 
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal.rvmat", 
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal_damage.rvmat", 
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal_damage.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
						}
					},
					{0.3,
						{
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal_damage.rvmat", 
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal_damage.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
						}
					},
					{0.0,
						{
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\BodyMetal_destruct.rvmat", 
							"H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\Data\HolosightMetal_destruct.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
							"\DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat"
						}
					}
				};
			};
		};
	};
	
	class OpticsInfo
	{
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		useModelOptics = 1;
		modelOptics = "H2A\HRW\Attachments\HRW_Mk4_RMR_Optic\HRW_Mk4_RMR_Optic_Sight.p3d";
		preloadOpticType = "Preload2DOptic_Longrange";
		opticsDisablePeripherialVision = 0.67;
		opticsFlare = 1;
		opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur1"};
		opticsZoomMin = "0.3926/7";
		opticsZoomMax = "0.3926/7";
		opticsZoomInit = "0.3926/7";
		distanceZoomMin = 100;
		distanceZoomMax = 700;
		discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700 };
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = {0.5, 0.5, 0.43, 0.1};
		PPLensProperties[] = {0.3, 0.15, 0, 0};
		PPBlurProperties = 0.3;
		opticSightTexture = "\dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
	};

	class OpticsInfoWeaponOverride
	{
		memoryPointCamera = "eyeIronsights";
		cameraDir = "cameraDirIronsights";
		opticsZoomMin = 0.5236;
		opticsZoomMax = 0.5236;
		opticsZoomInit = 0.5236;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		discreteDistance[] = { 200 };
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = { 0.5, 0.5, 0.375, 0.05 };
		PPLensProperties[] = { 0.5, 0.15, 0, 0 };
		PPBlurProperties = 0;
		PPDOFProperties[] = {};
	};

	repairableWithKits[] = { 5, 7 };
	repairCosts[] = { 50, 50 };

	class EnergyManager
	{
		hasIcon = 1;
		energyUsagePerSecond = 0.02;
		plugType = 1;
		attachmentAction = 1;
	};
};