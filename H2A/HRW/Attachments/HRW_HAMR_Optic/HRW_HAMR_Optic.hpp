class HRW_HAMR_Optic: ItemOptics
{
	scope = 2;
	displayName = "$STR_HAMR_Optic0";
	descriptionShort = "$STR_HAMR_Optic1";
	model = "H2A\HRW\Attachments\HRW_HAMR_Optic\HRW_HAMR_Optic.p3d";
	attachments[] = { "BatteryD" };
	animClass = "Binoculars";
	simulation = "itemoptics";
	inventorySlot[] = { "weaponOptics" };
	selectionFireAnim = "zasleh";
	memoryPointCamera = "eyeScope";
	cameraDir = "cameraDir";
	rotationFlags = 16;
	reversed = 0;
	weight = 265;
	itemSize[] = { 2, 1 };
	recoilModifier[] = { 0.5, 0.5, 0.5 };
	swayModifier[] = { 0.5, 0.5, 0.5 };

	hiddenSelections[] = 
	{
		"body_metal",
		"body_lenses",
		"deltapoint_metal",
		"deltapoint_lenses",
		"reddot" 
	};
	
	hiddenSelectionsTextures[] = 
	{
		"h2a\hrw\attachments\HRW_hamr_optic\data\body_ca.paa",
		"dz\weapons\attachments\optics\data\lensglass_ca.paa",
		"h2a\hrw\attachments\HRW_hamr_optic\data\deltapoint_ca.paa",
		"dz\weapons\attachments\optics\data\lensglass_ca.paa",
		""
	};
	
	hiddenSelectionsMaterials[] = 
	{
		"h2a\hrw\attachments\HRW_hamr_optic\data\bodymetal.rvmat",
		"dz\weapons\attachments\optics\data\lensglass_clearer.rvmat",
		"h2a\hrw\attachments\HRW_hamr_optic\data\deltapointmetal.rvmat",
		"dz\weapons\attachments\optics\data\lensglass_clearer.rvmat",
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
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\BodyMetal.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\DeltaPointMetal.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\BodyMetal.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\DeltaPointMetal.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat"
						}
					},
					{0.5,
						{
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\BodyMetal_damage.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\DeltaPointMetal_damage.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
						}
					},
					{0.3,
						{
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\BodyMetal_damage.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\DeltaPointMetal_damage.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat"
						}
					},
					{0.0,
						{
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\BodyMetal_destruct.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
							"H2A\HRW\Attachments\HRW_HAMR_Optic\Data\DeltaPointMetal_destruct.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat"
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
		modelOptics = "-";
		opticsDisablePeripherialVision = 0.67;
		opticsFlare = 1;
		opticsPPEffects[] = {};
		opticsZoomMin = "0.4926/4";
		opticsZoomMax = "0.4926/4";
		opticsZoomInit = "0.4926/4";
		distanceZoomMin = 100;
		distanceZoomMax = 600;
		discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = { 0.5, 0.5, 0.305, 0.05 };
		PPLensProperties[] = { 1.65, 0.15, 0, 0 };
		PPBlurProperties = 0.55;
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
		PPBlurProperties = 0.55;
		PPDOFProperties[] = { 1, 0.1, 20, 200, 4, 10 };
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
