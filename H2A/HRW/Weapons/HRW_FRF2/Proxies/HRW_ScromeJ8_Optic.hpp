class HRW_ScromeJ8_Optic : ItemOptics
{
	scope = 2;
	displayName = "$STR_SCROMEJ8_Optic0";
	descriptionShort = "$STR_SCROMEJ8_Optic1";
	model = "H2A\HRW\Weapons\HRW_FRF2\Proxies\HRW_ScromeJ8_Optic.p3d";
	simulation = "itemoptics";
	animClass="Binoculars";
	rotationFlags=4;
	reversed=0;
	weight = 740;
	recoilModifier[] = { 1, 1, 1 };
	itemSize[]={5,1};
	inventorySlot[] = { "weaponOpticsHunting" };	
	repairableWithKits[] = { 5, 7 };
	repairCosts[] = { 30, 25 };
	
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
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal.rvmat",
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic.rvmat",
							"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat"
						}								
					},
					{0.7,
						{
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal.rvmat",
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic.rvmat",		
							"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat"		
						}
					},
					{0.5,
						{
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_damage.rvmat",		
							"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat"		
						}
					},
					{0.3,
						{
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_damage.rvmat",		
							"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat"		
						}
					},
					{0.0,
						{
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsMetal_destruct.rvmat",
							"H2A\HRW\Weapons\HRW_FRF2\Data\AttachmentsPlastic_destruct.rvmat",		
							"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat"	
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
		modelOptics = "H2A\HRW\Weapons\HRW_FRF2\Proxies\HRW_ScromeJ8_Optic_Sight.p3d";
		preloadOpticType = "Preload2DOptic_Longrange";
		opticsDisablePeripherialVision = 0.67;
		opticsFlare = 1;
		opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur1"};
		opticsZoomMin = 0.5/8;
		opticsZoomMax = 0.5/8;
		opticsZoomInit = 0.5/8;
		discretefov[] = {0.5/8};	
		discreteInitIndex = 0;			
		distanceZoomMin = 100;
		distanceZoomMax = 800;
		discreteDistance[] = {100, 200, 300, 400, 500,700,800};
		discreteDistanceInitIndex = 0;
		PPMaskProperties[] = {0.5, 0.5, 0.43, 0.1};
		PPLensProperties[] = {0.3, 0.15, 0, 0};
		PPBlurProperties = 0.3;
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
