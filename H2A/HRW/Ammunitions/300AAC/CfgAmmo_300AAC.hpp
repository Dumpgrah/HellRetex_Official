class Bullet_300AAC: Bullet_Base
{
	scope=2;
	casing="FxCartridge_300AAC";
	round="FxRound_300AAC";
	spawnPileType = "Ammo_300AAC";
	hit=11;
	indirectHit=0;
	indirectHitRange=0;
	tracerScale=1;
	caliber=0.89999998;
	deflecting=20;
	typicalSpeed=720;
	airFriction=-0.00055;
	initSpeed=720;
	weight=0.016799999;
	supersonicCrackNear[]={};
	supersonicCrackFar[]={};
	class DamageApplied
	{
		type="Projectile";
		dispersion=0;
		bleedThreshold=1;
		defaultDamageOverride[]=
		{
			{0.5,1}
		};
		class Health
		{
			damage=95;
		};
		class Blood
		{
			damage=100;
		};
		class Shock
		{
			damage=66;
		};
	};
	class NoiseHit
	{
		strength=20;
		type="shot";
	};
	strength = 7;
	type = "shot";
};