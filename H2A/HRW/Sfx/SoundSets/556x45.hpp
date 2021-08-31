/*
soundSetShot[] = 
{
	"HRW_556x45_Shot_SoundSet",
	"HRW_556x45_Tail_SoundSet",
	"HRW_556x45_InteriorTail_SoundSet"
};
*/

class HRW_556x45_Shot_SoundSet
{
	soundShaders[] = 
	{
		"HRW_556x45_closeShot_SoundShader",
		"HRW_556x45_midShot_SoundShader",
		"HRW_556x45_distShot_SoundShader"
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

class HRW_556x45_Tail_SoundSet
{
	soundShaders[] = 
	{
		"HRW_556x45_tailDistant_SoundShader",
		"HRW_556x45_tailTrees_SoundShader",
		"HRW_556x45_tailForest_SoundShader",
		"HRW_556x45_tailMeadows_SoundShader",
		"HRW_556x45_tailHouses_SoundShader"
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

class HRW_556x45_InteriorTail_SoundSet
{
	soundShaders[] = 
	{
		"HRW_556x45_tailInterior_SoundShader"
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