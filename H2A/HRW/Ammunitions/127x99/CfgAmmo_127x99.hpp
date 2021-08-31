class Bullet_127x99: Bullet_Base
{
	scope = 2;
	casing = "FxCartridge_127x99";
	round = "FxRound_127x99";
	spawnPileType = "Ammo_127x99";
	hit = 15;
	indirectHit = 0;
	indirectHitRange = 0;
	initSpeed = 980;
	typicalSpeed = 980;
	airFriction = -0.00079999998;
	caliber = 1;
	deflecting = 5;
	damageBarrel = 15;
	damageBarrelDestroyed = 60;
	weight = 0.00647;
	impactBehaviour = 1;

	class DamageApplied
	{
		type = "Projectile";
		dispersion = 0;
		bleedThreshold= 1;
		
		defaultDamageOverride[] = {{0.5,1}};
		
		class Health
		{
			damage = 1000;
			armorDamage = 350;
		};
		
		class Blood
		{
			damage = 1000;
		};
		
		class Shock
		{
			damage = 100;
		};
	};

	class NoiseHit
	{
		strength = 35;
		type = "shot";
	};
};