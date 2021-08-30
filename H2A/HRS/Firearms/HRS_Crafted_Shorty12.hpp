class HRS_Crafted_Shorty12_Base: SawedoffIzh43Shotgun
{
	scope=0;
	absorbency=0;
	repairableWithKits[]={1};
	repairCosts[]={25};
	chamberSize=1;
	chamberedRound="";
	chamberableFrom[]=
	{
		"Ammo_12gaPellets",
		"Ammo_12gaSlug",
		"Ammo_12gaRubberSlug",
		"Ammo_12gaBeanbag",
		"Mag_12gaSnaploader_2Rnd"
	};
	DisplayMagazine=0;
	magazines[]={};
	PPDOFProperties[]={};
	//PPDOFProperties[]={1,0.5,10,175,4,10};
	WeaponLength=0.94999999;
	ejectType=3;
	reloadSkips[]={0.47999999,0.81};
	drySound[]=
	{
		"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
		0.0056234128,
		1
	};
	reloadMagazineSound[]=
	{
		"dz\sounds\weapons\shotguns\Izh43\izh43_reloading",
		1,
		1,
		20
	};
	reloadSound[]={};
	soundBullet[]={};
	class Particles
	{
		class OnFire
		{
			class SmokeCloud
			{
				overrideParticle="weapon_shot_winded_smoke";
				muzzleIndex=0;
			};
			class SmokeCloud2
			{
				overrideParticle="weapon_shot_winded_smoke";
				muzzleIndex=0;
			};
			class SmokeCloud3BadlyDamaged
			{
				overrideParticle="weapon_shot_winded_smoke";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=0;
			};
			class MuzzleFlash
			{
				overrideParticle="weapon_shot_mp133_01";
				illuminateWorld=1;
				muzzleIndex=0;
			};
			class BadlyDamagedChamberSmoke
			{
				overrideParticle="weapon_shot_chamber_smoke";
				overridePoint="Nabojnicestart";
				overrideDirectionPoint="Nabojniceend";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=0;
			};
			class BadlyDamagedChamberSmokeRaise
			{
				overrideParticle="weapon_shot_chamber_smoke_raise";
				overridePoint="Nabojnicestart";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=0;
			};
			class SmokeCloud_2
			{
				overrideParticle="weapon_shot_winded_smoke";
				overridePoint="Usti hlavne_2";
				muzzleIndex=1;
			};
			class SmokeCloud2_2
			{
				overrideParticle="weapon_shot_winded_smoke";
				overridePoint="Usti hlavne_2";
				muzzleIndex=1;
			};
			class SmokeCloud3BadlyDamaged_2
			{
				overrideParticle="weapon_shot_winded_smoke";
				overridePoint="Usti hlavne_2";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=1;
			};
			class MuzzleFlash_2
			{
				overrideParticle="weapon_shot_mp133_01";
				overridePoint="Usti hlavne_2";
				illuminateWorld=1;
				muzzleIndex=1;
			};
			class BadlyDamagedChamberSmoke_2
			{
				overrideParticle="weapon_shot_chamber_smoke";
				overridePoint="Nabojnicestart_2";
				overrideDirectionPoint="Nabojniceend";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=1;
			};
			class BadlyDamagedChamberSmokeRaise_2
			{
				overrideParticle="weapon_shot_chamber_smoke_raise";
				overridePoint="Nabojnicestart_2";
				onlyWithinHealthLabel[]={3,4};
				muzzleIndex=1;
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
	muzzles[]=
	{
		"this",
		"SecondMuzzle"
	};
	reloadAction="ReloadShotgunIZH43";
	shotAction="";
	//hiddenSelections[]=
	//{
	//	"camo"
	//};
	simpleHiddenSelections[]=
	{
		"bullet",
		"bullet2"
	};
	modes[]=
	{
		"Single"
	};
	class Single: Mode_SemiAuto
	{
		soundSetShot[]=
		{
			"IZH43_Shot_SoundSet",
			"IZH43_Tail_SoundSet",
			"IZH43_InteriorTail_SoundSet"
		};
		reloadTime=1;
		dispersion=0.0099999998;
		firespreadangle=1.5;
		magazineSlot="magazine";
	};
	class OpticsInfo: OpticsInfoShotgun
	{
	};
	class SecondMuzzle: Muzzle_Base
	{
		chamberSize=1;
		muzzlePos="usti hlavne_2";
		muzzleEnd="konec hlavne_2";
		cartridgePos="nabojnicestart_2";
		cartridgeVel="nabojniceend_2";
		modes[]=
		{
			"Single"
		};
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Mag_12gaSnaploader_2Rnd"
		};
		barrelArmor=1000;
		initSpeedMultiplier=1;
		irDistance=0;
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		drySound[]=
		{
			"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
			0.0056234128,
			1
		};
		soundBullet[]={};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"IZH43_Shot_SoundSet",
				"IZH43_Tail_SoundSet",
				"IZH43_InteriorTail_SoundSet"
			};
			reloadTime=1;
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
		};
	};
};

class HRS_Crafted_Shorty12: HRS_Crafted_Shorty12_Base
{
	scope=2;
	displayName="$STR_HRS_Shorty120";
	descriptionShort="$STR_HRS_Shorty121";
	model="H2A\HRS\Firearms\HRS_Crafted_Shorty12\HRS_Crafted_Shorty12.p3d";
	attachments[]=
	{
		//"weaponWrap"
	};
	itemSize[]={5,2};
	weight=2600;
	firespreadangle=3;
	recoilModifier[]={2,2,1};
	swayModifier[]={1,5,1,5,1};
	//hiddenSelectionsTextures[]=
	//{
	//	"dz\weapons\shotguns\Izh43\data\izh43_co.paa"
	//};
	//hiddenSelectionsMaterials[]=
	//{
	//	"dz\weapons\shotguns\Izh43\data\izh43.rvmat"
	//};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=300;
				healthLevels[]=
				{
					{1.0,{
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\MecanismMetal.rvmat"
					}},
					{0.7,{
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\MecanismMetal.rvmat"
					}},
					{0.5,{
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_damage.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_damage.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\MecanismMetal_damage.rvmat"
					}},
					{0.3,{
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_damage.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_damage.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\MecanismMetal_damage.rvmat"
					}},
					{0.0,{
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\BarrelMetal_destruct.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\HandleWood_destruct.rvmat",
						"H2A\HRS\Firearms\HRS_Crafted_Shorty12\Data\MecanismMetal_destruct.rvmat"
					}}
				};
			};
		};
	};
	class Single: Mode_SemiAuto
	{
		soundSetShot[]=
		{
			"IZH43sawed_Shot_SoundSet",
			"IZH43_Tail_SoundSet",
			"IZH43_InteriorTail_SoundSet"
		};
		reloadTime=1;
		dispersion=0.079999998;
		firespreadangle=1.5;
	};
	class SecondMuzzle: SecondMuzzle
	{
		chamberSize=1;
		muzzlePos="usti hlavne_2";
		muzzleEnd="konec hlavne_2";
		cartridgePos="nabojnicestart_2";
		cartridgeVel="nabojniceend_2";
		modes[]=
		{
			"Single"
		};
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Mag_12gaSnaploader_2Rnd"
		};
		barrelArmor=1000;
		initSpeedMultiplier=1;
		irDistance=0;
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		drySound[]=
		{
			"dz\sounds\weapons\shotguns\Izh43\izh43_dry",
			0.0056234128,
			1
		};
		soundBullet[]={};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"IZH43_Shot_SoundSet",
				"IZH43_Tail_SoundSet",
				"IZH43_InteriorTail_SoundSet"
			};
			reloadTime=1;
			dispersion=0.079999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
	};
};
