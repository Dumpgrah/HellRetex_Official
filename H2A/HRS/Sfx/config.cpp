class CfgPatches
{
    class HRS_Sfx
    {
		author = "Hellmaker2a";
        requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
    };
};

class CfgSoundShaders
{
	class HRS_K7_SoundShader
	{
		range=200;
		rangeCurve="{{0,1},{20,0.9},{40,0.8},{60,0.7},{80,0.6},{100,0.5},{120,0.4},{140,0.3},{160,0.2},{180,0.1},{200,0}}";
		volume=0.35;
	};
	
	class HRS_K7_Electro_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_Electro",1}
		};
	};		
	
	class HRS_K7_Jazz_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_Jazz",1}
		};
	};	
	
	class HRS_K7_Rock_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_Rock",1}
		};
	};	
	
	class HRS_K7_8Bit_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_8Bit",1}
		};
	};	
	
	class HRS_K7_Pop_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_Pop",1}
		};
	};	
	
	class HRS_K7_Folk_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_Folk",1}
		};
	};

	class HRS_K7_PopRock_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_PopRock",1}
		};
	};

	class HRS_K7_ElectroInstrumental_SoundShader: HRS_K7_SoundShader
	{
		samples[]=
		{	
			{"H2A\HRS\Sfx\HRS_K7_ElectroInstrumental",1}
		};
	};	

	class HRS_DeerCall_Male_SoundShader
	{
		samples[]=
		{
			{"DZ\sounds\ai\animals\deer\roar\roar_0",1}
		};
		
		volume=1;
		range=200;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
			
	class HRS_DeerCall_Female_SoundShader
	{
		samples[]=
		{	
			{"DZ\sounds\ai\animals\deer\roar\roar_7",1}
		};
		
		volume=1;
		range=200;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	class HRS_MooBox_SoundShader
	{
		samples[]=
		{
			{"DZ\sounds\ai\animals\cattle\moo_a\moo_a_0",1},
			{"DZ\sounds\ai\animals\cattle\moo_a\moo_a_1",1},
			{"DZ\sounds\ai\animals\cattle\moo_a\moo_a_2",1},
			{"DZ\sounds\ai\animals\cattle\moo_a\moo_a_3",1},
			{"DZ\sounds\ai\animals\cattle\moo_a\moo_a_4",1}
		};
		volume=1;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	class HRS_Beebox_SoundShader
	{
		samples[]=
		{
			{"dz\sounds\ai\animals\sheep\bleat_a\bleat_a_0",1},
			{"dz\sounds\ai\animals\sheep\bleat_a\bleat_a_1",1},
			{"dz\sounds\ai\animals\sheep\bleat_a\bleat_a_2",1}
		};
		volume=1;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	class HRS_WooBox_SoundShader
	{
		samples[]=
		{
			{"dz\sounds\ai\animals\wolf\howls\howls_1",1},
			{"dz\sounds\ai\animals\wolf\howls\howls_2",1},
			{"dz\sounds\ai\animals\wolf\howls\howls_3",1}
		};
		
		volume=1.7782794;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	class HRS_RoarBox_SoundShader
	{
		samples[]=
		{
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_0",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_1",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_2",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_3",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_4",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_5",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_6",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_7",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_8",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_9",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_10",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_11",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_12",1},
			{"dz\sounds_bliss\ai\animals\bear\growl\growl_13",1}
		};
		
		volume=1;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	class HRS_CrowsCall_SoundShader
	{
		samples[]=
		{
			{"DZ\sounds\ai\animals\crows\crow1_0",1},
			{"DZ\sounds\ai\animals\crows\crow1_1",1},
			{"DZ\sounds\ai\animals\crows\crow1_2",1},
			{"DZ\sounds\ai\animals\crows\crow1_3",1}
		};
		
		volume=0.56234133;
		range=50;
		rangeCurve="defaultAnimalAttenuationCurve";
	};
	
	//class Lighter_Soundshader: baseCharacter_SoundShader
	class HRS_FireStartKit_Soundshader
	{
		samples[] = {{"H2A\HRS\Sfx\HRS_FireStartKit",1}};
		volume = 0.56234133;
	};

};

class CfgSoundSets
{
	class HRS_K7_Electro_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_Electro_SoundShader"
		};
	};
	
	class HRS_K7_Jazz_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_Jazz_SoundShader"
		};
	};
	
	class HRS_K7_Rock_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_Rock_SoundShader"
		};
	};
	
	class HRS_K7_8Bit_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_8Bit_SoundShader"
		};
	};
	
	class HRS_K7_Pop_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_Pop_SoundShader"
		};
	};
	
	class HRS_K7_Folk_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_Folk_SoundShader"
		};
	};
	
	class HRS_K7_PopRock_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_PopRock_SoundShader"
		};
	};
	
	class HRS_K7_ElectroInstrumental_SoundSet
	{
		soundShaders[]=
		{
			"HRS_K7_ElectroInstrumental_SoundShader"
		};
	};

	class HRS_DeerCall_Male_SoundSet
	{
		soundShaders[]=
		{
			"HRS_DeerCall_Male_SoundShader"
		};
	
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	
	class HRS_DeerCall_Female_SoundSet
	{
		soundShaders[]=
		{
			"HRS_DeerCall_Female_SoundShader",
		};
	
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	
	class HRS_MooBox_SoundSet
	{
		soundShaders[]=
		{
			"HRS_MooBox_SoundShader"
		};
		
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	
	class HRS_BeeBox_SoundSet
	{
		soundShaders[]=
		{
			"HRS_BeeBox_SoundShader"
		};
		
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	
	class HRS_WooBox_SoundSet
	{
		soundShaders[]=
		{
			"HRS_WooBox_SoundShader"
		};
		
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class HRS_RoarBox_SoundSet
	{
		soundShaders[]=
		{
			"BearGrowl_SoundShader"
		};
		
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	class HRS_CrowsCall_SoundSet
	{
		soundShaders[]=
		{
			"HRS_CrowsCall_SoundShader"
		};
		
		sound3DProcessingType="animal3DProcessingType";
		volumeCurve="animalAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};

	//class HRS_FireStartKit_Soundset: baseCharacter_SoundSet
	class HRS_FireStartKit_Soundset
	{
		soundShaders[] = {"HRS_FireStartKit_SoundShader"};
	};
};
