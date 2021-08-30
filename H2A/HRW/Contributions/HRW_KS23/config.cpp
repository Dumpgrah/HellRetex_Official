class CfgPatches
{
    class HRW_Contributions_KS23
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;

class cfgWeapons
{
	class Shotgun_Base;
	class HRW_KS23_Base: Shotgun_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		chamberSize=5;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=1.0352499;
		barrelArmor=2.25;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.2};
		cartridgeCreateTime[]={0.55000001,0.81999999};
		reloadSkips[]={0.25999999,0.40000001,0.52999997,0.63999999,0.73500001};
		drySound[]=
		{
			"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\shotguns\mp133\mp133_reload_0",
			0.80000001,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\shotguns\mp133\mp133_pump_0",
			1,
			1,
			20
		};
		reloadAction="ReloadMP133";
		shotAction="ReloadMP133Shot";
		hiddenSelections[]=
		{
			"zbytek"
		};
		modes[]=
		{
			"Single"
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Mp133_Shot_SoundSet",
				"Mp133_Tail_SoundSet",
				"Mp133_InteriorTail_SoundSet"
			};
			reloadTime=1;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};
	
	class HRW_KS23: HRW_KS23_Base
	{
		scope=2;
		displayName="$STR_KS230";
		descriptionShort="$STR_KS231";
		model="H2A\HRW\Contributions\HRW_KS23\HRW_KS23.p3d";
		animName="ShotgunMp133";
		attachments[]=
		{};
		itemSize[]={7,3};
		weight=3300;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"H2A\HRW\Contributions\HRW_KS23\Data\ks23_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23.rvmat"
							}
						},
						
						{
							0.6,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_damaged.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_damaged.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_ruined.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class HRW_KS23_Sawed: HRW_KS23_Base
	{
		scope=2;
		displayName="$STR_KS23S0";
		descriptionShort="$STR_KS231";
		model="H2A\HRW\Contributions\HRW_KS23\HRW_KS23_Sawed.p3d";
		animName="ShotgunMp133";
		attachments[]=
		{};
		itemSize[]={4,3};
		weight=3300;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"H2A\HRW\Contributions\HRW_KS23\Data\ks23sawn_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23.rvmat"
							}
						},
						
						{
							0.6,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_damaged.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_damaged.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"H2A\HRW\Contributions\HRW_KS23\Data\ks23_ruined.rvmat"
							}
						}
					};
				};
			};
		};
	};
};