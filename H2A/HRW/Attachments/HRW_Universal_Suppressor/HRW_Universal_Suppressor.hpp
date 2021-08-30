class HRW_Universal_Suppressor: ItemSuppressor
{
	scope=2;
	displayName="$STR_Universal_Suppressor0";
	descriptionShort="$STR_Universal_Suppressor1";
	model="H2A\HRW\Attachments\HRW_Universal_Suppressor\HRW_Universal_Suppressor.p3d";
	repairableWithKits[] = {0};
	repairCosts[] = {0.0};
	rotationFlags = 17;
	reversed = 0;
	weight = 125;
	itemSize[] = {3,1};
	itemModelLength = 0.150;
	barrelArmor = 3800.0;
	lootCategory = "Attachments";
	lootTag[]={"Military_west","Military_east"};
	inventorySlot[] = {"suppressorImpro","weaponMuzzleAK","weaponMuzzleM4"};
	simulation = "ItemSuppressor";
	dispersionModifier = -0.0001;
	noiseShootModifier = -0.9;
	dispersionCondition = "true";
	recoilModifier[] = {0.8,0.8,0.8};
	swayModifier[] = {1,1,1};
	selectionFireAnim = "zasleh";
	soundIndex = 1;
	muzzlePos = "usti hlavne";

	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					{1.01,{"H2A\HRW\Attachments\HRW_Universal_Suppressor\Data\Body.rvmat"}},
					{0.69999999,{"H2A\HRW\Attachments\HRW_Universal_Suppressor\Data\Body.rvmat"}},
					{0.5,{"H2A\HRW\Attachments\HRW_Universal_Suppressor\Data\Body_damage.rvmat"}},
					{0.30000001,{"H2A\HRW\Attachments\HRW_Universal_Suppressor\Data\Body_damage.rvmat"}},
					{0.01,{"H2A\HRW\Attachments\HRW_Universal_Suppressor\Data\Body_destruct.rvmat"}}
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