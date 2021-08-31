class HRW_Holosight_Optic: ItemOptics
{
	scope=2;
	displayName="$STR_Holosight_Optic0";
	descriptionShort="$STR_Holosight_Optic1";
	model="H2A\HRW\Attachments\HRW_Holosight_Optic\HRW_Holosight_Optic.p3d";
	attachments[]=
	{
		"BatteryD"
	};
	animClass="Binoculars";
	simulation="itemoptics";
	inventorySlot[]=
	{
		"weaponOptics"
	};
	selectionFireAnim="zasleh";
	memoryPointCamera="eyeScope";
	cameraDir="cameraDir";
	rotationFlags=16;
	reversed=0;
	weight=265;
	itemSize[]={2,1};
	recoilModifier[] = { 0.5, 0.5, 0.5 };
	swayModifier[] = { 0.5, 0.5, 0.5 };
	hiddenSelections[]=
	{
		"lenses",
		"body_metal",
		"body_plastic",
		"reddot"
	};
	hiddenSelectionsTextures[]=
	{
		"dz\weapons\attachments\optics\data\onepercentalpha_ca.paa",
		"h2a\hrw\attachments\HRW_holosight_optic\data\bodymetal_ca.paa",
		"h2a\hrw\attachments\HRW_holosight_optic\data\bodyplastic_ca.paa",
		""
	};	
	hiddenSelectionsMaterials[]=
	{
		"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
		"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal.rvmat",
		"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic.rvmat",
		""
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					{1.0,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic.rvmat",
							""
						}
					},
					{0.7,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic.rvmat",
							""
						}
					},
					{0.5,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic_damage.rvmat",
							""
						}
					},
					{0.3,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic_damage.rvmat",
							""
						}
					},
					{0.0,
						{
							"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyMetal_destruct.rvmat",
							"H2A\HRW\Attachments\HRW_Holosight_Optic\Data\BodyPlastic_destruct.rvmat",
							""
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
		opticsPPEffects[]={};
		opticsZoomMin=0.52359998;
		opticsZoomMax=0.52359998;
		opticsZoomInit=0.52359998;
		distanceZoomMin=100;
		distanceZoomMax=100;
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
		PPLensProperties[]={1,0.15000001,0,0};
		PPBlurProperties=0.2;
		opticSightTexture="H2A\HRW\Attachments\HRW_Holosight_Optic\Data\ReddotSight_ca.paa";
	};
	
	repairableWithKits[] = { 5, 7 };
	repairCosts[] = { 50, 50 };
	
	class EnergyManager
	{
		hasIcon=1;
		energyUsagePerSecond=0.02;
		plugType=1;
		attachmentAction=1;
	};
};
