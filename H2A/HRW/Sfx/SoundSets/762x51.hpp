/*
soundSetShot[] = 
{
	"HRW_762x51_Shot_SoundSet",
	"HRW_762x51_Tail_SoundSet",
	"HRW_762x51_InteriorTail_SoundSet"
};
*/

class HRW_762x51_Shot_SoundSet
{
	soundShaders[] = 
	{
		"HRW_762x51_closeShot_SoundShader",
		"HRW_762x51_midShot_SoundShader",
		"HRW_762x51_distShot_SoundShader"
	};
	
	volumeFactor = 1.6;
	volumeCurve = "InverseSquare2Curve";
	sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	occlusionFactor = 0.6;
	obstructionFactor = 0.6;
	spatial = 1;
	doppler = 0;
	loop = 0;
};

class HRW_762x51_Tail_SoundSet
{
	soundShaders[] = 
	{
		"HRW_762x51_tailDistant_SoundShader",
		"HRW_762x51_tailTrees_SoundShader",
		"HRW_762x51_tailForest_SoundShader",
		"HRW_762x51_tailMeadows_SoundShader",
		"HRW_762x51_tailHouses_SoundShader"
	};
	
	volumeFactor = 1.2;
	volumeCurve = "InverseSquare2Curve";
	frequencyRandomizer = 1;
	sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	occlusionFactor = 0.35;
	obstructionFactor = 0.35;
	spatial = 1;
	doppler = 0;
	loop = 0;
	soundShadersLimit = 2;
};

class HRW_762x51_InteriorTail_SoundSet
{
	soundShaders[] = 
	{
		"HRW_762x51_tailInterior_SoundShader"
	};
	
	volumeFactor = 1;
	volumeCurve = "InverseSquare2Curve";
	frequencyRandomizer = 1;
	sound3DProcessingType = "WeaponInteriorShotTail3DProcessingType";
	distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	occlusionFactor = 0.35;
	obstructionFactor = 0.35;
	spatial = 1;
	doppler = 0;
	loop = 0;
};