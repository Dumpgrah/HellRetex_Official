////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

// Fichiers

// Sans Silencieux :
// - Shot_Ext.ogg
// - Shot_Ext_Dist.ogg (Passe-Bas)
// - Shot_Ext_Dist_Tail.ogg (Passe-Bas + Reverberation)
// - Shot_Int.ogg (Son net)

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
class HRW_556x45_closeShot_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext",1}
	};
	volume = 1.1220185;
	
	//volume = 1;
	range = 3500;
	rangeCurve = "closeShotAttenuationCurve";
};

class HRW_556x45_midShot_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	volume = 0.70794576;
	
	//volume = 1;
	range = 3500;
	rangeCurve = "midShotAttenuationCurve";
};

class HRW_556x45_distShot_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	volume = 0.70794576;
	
	//volume = 1;
	range = 3500;
	rangeCurve = "distShotAttenuationCurve";
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class HRW_556x45_tailDistant_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	//volume = 1.7782794;
	
	volume = "(1-interior/4)";
	range = 3500;
	limitation = 1;
	rangeCurve = "tailDistantShotAttenuationCurve";
};

class HRW_556x45_tailTrees_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	
	volume = "(trees/(forest + houses + meadows + sea + trees)) * (1-interior)";
	range = 3500;
	limitation = 1;
	rangeCurve = "tailShotAttenuationCurve";
};

class HRW_556x45_tailForest_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	
	volume = "(forest/(forest + houses + meadows + sea + trees)) * (1-interior)";
	range = 3500;
	limitation = 1;
	rangeCurve = "tailShotAttenuationCurve";
};

class HRW_556x45_tailMeadows_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	
	volume = "((meadows + sea)/(forest + houses + meadows + sea + trees)) * (1-interior)";
	range = 3500;
	limitation = 1;
	rangeCurve = "tailShotAttenuationCurve";
};

class HRW_556x45_tailHouses_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Ext_Dist",1}
	};
	
	volume = "(houses/(forest + houses + meadows + sea + trees)) * (1-interior)";
	range = 3500;
	limitation = 1;
	rangeCurve = "tailShotAttenuationCurve";
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class HRW_556x45_tailInterior_SoundShader
{
	samples[] = 
	{
		{"H2A\HRW\Sfx\556x45\Shot_Int",1}
	};
	
	volume = "interior";
	range = 350;
};