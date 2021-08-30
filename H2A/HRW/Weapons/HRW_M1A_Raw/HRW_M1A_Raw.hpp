class HRW_M1A_Raw_Base: SVD_Base
{
	scope = 0;
	weight = 4000;
	absorbency = 0.0;
	repairableWithKits[] = {1};
	repairCosts[] = {25.0};
	PPDOFProperties[] = {};
	ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
	WeaponLength = 0.946;
	barrelArmor = 1.6;
	chamberedRound = "";
	chamberSize = 1;
	chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
	magazines[] = {"HRW_Mag_M1A_Raw_10Rnd"};
	magazineSwitchTime = 0.25;
	ejectType = 1;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {2.3,2.3,1.3};
	simpleHiddenSelections[] = {"hide_barrel"};
	//drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
	//reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
	//reloadAction = "ReloadSVD";
	hiddenSelections[] = {"body_metal","body_wood","body_tape","body_plastic"};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.125;
		recoil = "recoil_svd";
		recoilProne = "recoil_svd_prone";
		dispersion = 0.00075;
		magazineSlot = "magazine";
	};
	class Particles
	{
		class OnFire
		{
			class MuzzleFlash
			{
				ignoreIfSuppressed = 1;
			};
			class SmokeCloud1
			{
				overrideParticle = "weapon_shot_winded_smoke";
			};
			class MuzzleFlash2
			{
				overrideParticle = "weapon_shot_m4a1_01";
				ignoreIfSuppressed = 1;
				illuminateWorld = 1;
			};
			class MuzzleFlashStar
			{
				overrideParticle = "weapon_shot_Flame_3D_4star";
				overridePoint = "StarFlash";
				ignoreIfSuppressed = 1;
			};
			class GasPistonBurstR
			{
				overrideParticle = "weapon_shot_chamber_smoke";
				overridePoint = "GasPiston";
				overrideDirectionVector[] = {0,0,0};
			};
			class GasPistonBurstL
			{
				overrideParticle = "weapon_shot_chamber_smoke";
				overridePoint = "GasPiston";
				overrideDirectionVector[] = {180,0,0};
			};
			class GasPistonSmokeRaiseR
			{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "GasPiston";
				overrideDirectionVector[] = {0,0,0};
			};
			class GasPistonSmokeRaiseL
			{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "GasPiston";
				overrideDirectionVector[] = {180,0,0};
			};
		};
		class OnOverheating
		{
			shotsToStartOverheating = 5;
			maxOverheatingValue = 30;
			overheatingDecayInterval = 1;
			class SmokingBarrel1
			{
				overridePoint = "GasPiston";
				positionOffset[] = {0.05,-0.02,0};
				overrideParticle = "smoking_barrel_small";
				onlyWithinOverheatLimits[] = {0.0,0.2};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot1
			{
				overridePoint = "GasPiston";
				positionOffset[] = {0.12,-0.02,0};
				overrideParticle = "smoking_barrel";
				onlyWithinOverheatLimits[] = {0.2,0.6};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class SmokingBarrelHot3
			{
				overridePoint = "GasPiston";
				positionOffset[] = {0.21,-0.02,0};
				overrideParticle = "smoking_barrel_heavy";
				onlyWithinOverheatLimits[] = {0.6,1};
				onlyWithinRainLimits[] = {0,0.2};
			};
			class Steam
			{
				overrideParticle = "smoking_barrel_steam_small";
				positionOffset[] = {0.4,0.02,0};
				onlyWithinOverheatLimits[] = {0,0.5};
				onlyWithinRainLimits[] = {0.2,1};
			};
			class Steam2
			{
				overrideParticle = "smoking_barrel_steam";
				positionOffset[] = {0.45,0.02,0};
				onlyWithinOverheatLimits[] = {0.5,1};
				onlyWithinRainLimits[] = {0.2,1};
			};
			class OpenChamberSmoke
			{
				onlyIfBoltIsOpen = 1;
				overrideParticle = "smoking_barrel_small";
				overridePoint = "Nabojnicestart";
				onlyWithinOverheatLimits[] = {0,1};
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
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 200;
		distanceZoomMax = 200;
	};
	class AnimEvents
	{
		class SoundWeapon
		{
			class walkErc_L
			{
				soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
				id = 1;
			};
			class walkErc_R
			{
				soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
				id = 2;
			};
			class runErc_L
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 3;
			};
			class runErc_R
			{
				soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
				id = 4;
			};
			class sprintErc_L
			{
				soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
				id = 5;
			};
			class sprintErc_R
			{
				soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
				id = 6;
			};
			class walkCro_L
			{
				soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
				id = 21;
			};
			class walkCro_R
			{
				soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
				id = 22;
			};
			class runCro_L
			{
				soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
				id = 23;
			};
			class runCro_R
			{
				soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
				id = 24;
			};
			class walkProne_L
			{
				soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
				id = 31;
			};
			class walkProne_R
			{
				soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
				id = 32;
			};
			class runProne_L
			{
				soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
				id = 33;
			};
			class runProne_R
			{
				soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
				id = 34;
			};
			class jumpErc_L
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 35;
			};
			class jumpErc_R
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 36;
			};
			class landFootErc_L
			{
				soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
				id = 37;
			};
			class landFootErc_R
			{
				soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
				id = 38;
			};
			class walkRasErc_L
			{
				soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
				id = 51;
			};
			class walkRasErc_R
			{
				soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
				id = 52;
			};
			class runRasErc_L
			{
				soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
				id = 53;
			};
			class runRasErc_R
			{
				soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
				id = 54;
			};
			class HandStep_L
			{
				soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
				id = 61;
			};
			class HandStep_R
			{
				soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
				id = 62;
			};
			class HandStep_Hard_L
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 63;
			};
			class HandStep_Hard_R
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 64;
			};
			class landFeetErc
			{
				soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
				id = 100;
			};
			class Weapon_Movement_HRifle_Walk
			{
				soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
				id = 101;
			};
			class Weapon_Movement_HRifle_Run
			{
				soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
				id = 102;
			};
			class Weapon_Movement_HRifle_Sprint
			{
				soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
				id = 103;
			};
			class Weapon_Movement_HRifle_Land
			{
				soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
				id = 104;
			};
			class Char_Gestures_Hand_Grab_Rifle
			{
				soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
				id = 892;
			};
		};
	};
};

class HRW_M1A_Raw: HRW_M1A_Raw_Base
{
	scope = 2;
	displayName="$STR_M1A_Raw0";
	descriptionShort = "$STR_M1A_Raw1";
	model = "H2A\HRW\Weapons\HRW_M1A_Raw\HRW_M1A_Raw.p3d";
	attachments[] = {"weaponWrap","weaponOptics","weaponMuzzleM4"};
	itemSize[] = {8,3};
	hiddenSelectionsTextures[] = 
	{
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\Body_co.paa",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\Body_co.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal.rvmat",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood.rvmat",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape.rvmat",
		"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = {
					{1.0,{
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic.rvmat"
					}},
					{0.7,{
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic.rvmat"
					}},
					{0.5,{
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape_damage.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyMetal_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyWood_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyTape_destruct.rvmat",
						"H2A\HRW\Weapons\HRW_M1A_Raw\Data\BodyPlastic_destruct.rvmat"
					}},
				};
			};
		};
	};

};
