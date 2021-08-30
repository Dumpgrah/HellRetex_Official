class CfgPatches
{
    class HRW_Contributions_AlphaAK
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
    };
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons
{
	class AKM_Base;
	class HRW_AlphaAK_Base: AKM_Base
	{
		scope=0;
		weight=3070;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.82906699;
		barrelArmor=4.4439998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,1.2};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"magazine"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadAKM";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\AK74\ak74_reload",
			0.80000001,
			1,
			20
		};
		hiddenSelections[]=
		{
			"body",
			"handguard",
			"buttstock"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ak74_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.1,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.1;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			
			reloadTime=0.1;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
	};
	class HRW_AlphaAK: HRW_AlphaAK_Base
	{
		scope=2;
		displayName="$STR_AlphaAK0";
		descriptionShort="$STR_AlphaAK1";
		model="H2A\HRW\Contributions\HRW_AlphaAK\HRW_AlphaAK.p3d";
		hiddenSelections[]=
		{
			"body",
			"handguard",
			"buttstock"
		};
		attachments[]=
		{
			
			"weaponOpticsAK",
			"weaponOptics",
			"weaponMuzzleAK",
			"weaponFlashlight"
			
		
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body_ca.paa",
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard_ca.paa",
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body.rvmat",
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard.rvmat",
			"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=	{{1.0,{
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body_damage.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard_damage.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt_damage.rvmat"
							}
						},
						
						{
							0.30,
							
							{
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body_damage.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard_damage.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Body_ruined.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_HandGuard_ruined.rvmat",
								"H2A\HRW\Contributions\HRW_AlphaAK\Data\AK_Butt_ruined.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

