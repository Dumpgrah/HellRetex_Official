class HRW_Surefire_Flashlight: Switchable_Base
{
	scope=2;
	displayName="$STR_Surefire_Flashlight0";
	descriptionShort="$STR_Surefire_Flashlight1";
	model="H2A\HRW\Attachments\HRW_Surefire_Flashlight\HRW_Surefire_Flashlight.p3d";
	rotationFlags=17;
	reversed=1;
	weight=118;
	itemSize[]={1,1};
	inventorySlot[]=
	{
		"pistolFlashlight"
	};
	
	hiddenSelections[]=
	{
		"body_metal",
		"body_plastic",
		"glass",
		"reflector"
	};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\Body_ca.paa",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\Body_ca.paa",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\Glass_ca.paa",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\Glass_ca.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal.rvmat",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic.rvmat",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
		"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"
	};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=70;
				healthLevels[]=
				{
					{1.0,{
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"
			
					}},
					{0.5,{
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic_damage.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic_damage.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"					
					}},
					{0.0,{
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\BodyPlastic_destruct.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat",
						"H2A\HRW\Attachments\HRW_Surefire_Flashlight\Data\GlassPlastic.rvmat"			
					}}
				};
			};
		};
	};
	
	repairableWithKits[] = { 7, 8 };
	repairCosts[] = { 50, 50 };

	class EnergyManager
	{
		hasIcon=1;
		autoSwitchOffWhenInCargo=1;
		energyUsagePerSecond=0.0099999998;
		plugType=1;
		attachmentAction=1;
		updateInterval=30;
	};
};
