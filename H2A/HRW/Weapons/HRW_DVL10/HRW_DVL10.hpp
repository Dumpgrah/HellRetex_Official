class HRW_DVL10_Base: CZ527_Base
{
	scope = 0;
	//animName = "cz527";
	weight = 5200;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	modelOptics = "-";
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	PPDOFProperties[] = {};
	opticsFlare = 0;
	winchesterTypeOpticsMount = 1;
	ironsightsExcludingOptics[] = {"HuntingOptic"};
	WeaponLength = 1.054;
	barrelArmor = 1.111;
	chamberSize = 1;
	chamberedRound = "";
	chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
	magazines[] = {"HRW_Mag_DVL10_10Rnd"};
	magazineSwitchTime = 0.38;
	ejectType = 0;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.2,2.2,1.2};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
	//reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
	//reloadAction = "Reloadcz527";
	//shotAction = "Reloadcz527Shot";
	hiddenSelections[]=
	{
		"body_metal",
		"body_plastic",
		"grip",
		"suppressor_body",
		"suppressor_cap"
	};
	modes[] = {"Single"};
	class NoiseShoot
	{
		strength = 5;
		type = "shot";
	};
	class Single: Mode_SemiAuto
	{
		soundSetShot[]={"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
		soundBegin[]={"begin1",0.33333001,"begin2",0.33333001,"begin2",0.33333001};
		reloadTime=1;
		recoil="recoil_cz527";
		recoilProne="recoil_cz527_prone";
		dispersion=0.001;
		magazineSlot="magazine";
	};
	class Particles
	{
		class OnFire
		{
			class SmokeCloud
			{
				overrideParticle = "weapon_shot_winded_smoke";
			};
			class MuzzleFlash
			{
				overrideParticle = "weapon_shot_cz527_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
				positionOffset[] = {-0.05,0,0};
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 1;
			maxOverheatingValue = 4;
			overheatingDecayInterval = 3;
			class BarrelSmoke
			{
				overrideParticle = "smoking_barrel_small";
			};
		};
		class OnBulletCasingEject
		{
			class ChamberSmokeRaise
			{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "Nabojnicestart";
			};
		};
	};
	class OpticsInfo: OpticsInfoRifle
	{
		memoryPointCamera = "eye";
		modelOptics = "-";
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
	};
};

class HRW_DVL10: HRW_DVL10_Base
{
	scope = 2;
	displayName = "$STR_DVL100";
	descriptionShort="$STR_DVL101";
	model="H2A\HRW\Weapons\HRW_DVL10\HRW_DVL10.p3d";
	attachments[] = {"weaponWrap","weaponOpticsHunting"};
	itemSize[] = {9,3};
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Grip_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBody_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCap_co.paa"

	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal.rvmat"
	};	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 300;
				healthLevels[] = 
				{
					{1.0,
						{
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal.rvmat"
						}
					},
					{0.7,
						{
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal.rvmat"

						}
					},
					{0.5,
						{
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal_damage.rvmat"
						}
					},
					{0.3,
						{
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal_damage.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal_damage.rvmat"
						}
					},
					{0.0,
						{
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetal_destruct.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlastic_destruct.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlastic_destruct.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetal_destruct.rvmat",
							"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetal_destruct.rvmat"
						}
					}
				};
			};
		};
	};
};

class HRW_DVL10_Green: HRW_DVL10
{
	scope = 2;
	color = "Green";
	displayName = "$STR_DVL10_Green0";
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_Green_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_Green_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Grip_Green_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBody_Green_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCap_Green_co.paa"

	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlasticPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlasticPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetalPainted.rvmat"
	};
};

class HRW_DVL10_Sand: HRW_DVL10
{
	scope = 2;
	color = "Sand";
	displayName = "$STR_DVL10_Sand0";
	hiddenSelectionsTextures[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Body_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\Grip_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBody_Sand_co.paa",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCap_Sand_co.paa"

	};
	hiddenSelectionsMaterials[]=
	{
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\BodyPlasticPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\GripPlasticPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorBodyMetalPainted.rvmat",
		"H2A\HRW\Weapons\HRW_DVL10\Data\SuppressorCapMetalPainted.rvmat"
	};
};