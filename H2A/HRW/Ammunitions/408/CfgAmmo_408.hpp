class Bullet_408: Bullet_Base
{
	scope=2;
	casing="FxCartridge_408";
	round="FxRound_408";
	spawnPileType = "Ammo_408";
	hit = 12;
	indirectHit = 0;
	indirectHitRange = 0;
	airLock = 1;
	initSpeed = 790;
	typicalSpeed = 790;
	airFriction = -0.00079999998;
	caliber = 1;
	deflecting = 10;
	damageBarrel = 6;
	damageBarrelDestroyed = 60;
	weight = 0.0099999998;
	impactBehaviour = 1;
	
	tracerScale=1.2;
	tracerStartTime=0.075000003;
	tracerEndTime=3;
	

	class DamageApplied
	{
		type = "Projectile";
		dispersion = 0;
		bleedThreshold= 1;
		
		defaultDamageOverride[] = {{0.5,1}};
		
		class Health
		{
			damage = 110;
		};
		
		class Blood
		{
			damage = 100;
		};
		
		class Shock
		{
			damage = 100;
		};
	};

	class NoiseHit
	{
		strength = 7;
		type = "shot";
	};
};