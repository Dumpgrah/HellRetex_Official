class HRW_MP9_Suppressor: ItemSuppressor
{
	scope=2;
	displayName="$STR_MP9_Suppressor0";
	descriptionShort="$STR_MP9_Suppressor1";
	model="H2A\HRW\Weapons\HRW_MP9\Proxies\HRW_MP9_Suppressor.p3d";
	rotationFlags=17;
	reversed=0;
	weight=350;
	itemSize[]={3,1};
	itemModelLength=0.148;
	lootCategory="Attachments";
	
	lootTag[]=
	{
		"Military_west",
		"Military_east"
	};
	
	inventorySlot[]=
	{
		"pistolMuzzleMP9"
	};
	
	simulation="ItemSuppressor";
	dispersionModifier=-9.9999997e-005;
	noiseShootModifier=-0.89999998;
	dispersionCondition="true";
	barrelArmor=600;
	recoilModifier[]={0.80000001,0.80000001,0.80000001};
	selectionFireAnim="zasleh";
	soundIndex=1;
	muzzlePos="usti hlavne";
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					{1.01,{"H2A\HRW\Weapons\HRW_MP9\Data\Suppressor.rvmat"}},
					{0.69999999,{"H2A\HRW\Weapons\HRW_MP9\Data\Suppressor.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_MP9\Data\Suppressor_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Weapons\HRW_MP9\Data\Suppressor_damage.rvmat"}},
					{0.01,{"H2A\HRW\Weapons\HRW_MP9\Data\Suppressor_destruct.rvmat"}}
				};
			};
		};
	};
	
	class Particles
	{
		class OnFire
		{
			class MuzzleFlash
			{
				overrideParticle="weapon_shot_fnx_02";
				onlyWithinHealthLabel[]={0,3};
			};
			class Ruined
			{
				onlyWithinHealthLabel[]={4,4};
				illuminateWorld=1;
			};
		};
		
		class OnOverheating
		{
			shotsToStartOverheating=3;
			maxOverheatingValue=10;
			overheatingDecayInterval=1;
			class SmokeTrail
			{
				overrideParticle="smoking_barrel_small";
				onlyWithinRainLimits[]={0,0.2};
			};
			class SmokingBarrelHotSteamSmall
			{
				overrideParticle="smoking_barrel_steam_small";
				positionOffset[]={0,0.1,0};
				onlyWithinOverheatLimits[]={0,1};
				onlyWithinRainLimits[]={0.2,1};
			};
		};
	};
};	
