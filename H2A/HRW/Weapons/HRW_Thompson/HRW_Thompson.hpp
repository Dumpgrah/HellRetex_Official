class HRW_Thompson_Base: AKS74U
{
	scope = 0;
	displayName = "$STR_Thompson0";
	descriptionShort = "$STR_Thompson1";
	model = "H2A\HRW\Weapons\HRW_Thompson\HRW_Thompson.p3d";		
	attachments[]={"suppressorImpro"};
	weight=4740;
	itemSize[] = {6,3};
	PPDOFProperties[] = {1,0.5,50,175,4,10};
	WeaponLength=0.81;
	initSpeedMultiplier = 0.8;
	recoilModifier[] = {1,1,1};
	swayModifier[] = {1.8,1.8,1};
	//hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
	//hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
	class FullAuto: Mode_FullAuto
	{
		soundSetShot[]={"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		//begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		//begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.11;
		recoil = "recoil_AK74";
		recoilProne = "recoil_AK74_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
	};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[]={"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
		soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
		//begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		//begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		//begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
		soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
		//beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
		//beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
		soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		reloadTime = 0.11;
		recoil = "recoil_AK74";
		recoilProne = "recoil_AK74_prone";
		dispersion = 0.003;
		magazineSlot = "magazine";
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 250;
				healthLevels[] = 
				{
					{1.0,{"H2A\HRW\Weapons\HRW_Thompson\Data\Body.rvmat"}},
					{0.7,{"H2A\HRW\Weapons\HRW_Thompson\Data\Body.rvmat"}},
					{0.5,{"H2A\HRW\Weapons\HRW_Thompson\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRW\Weapons\HRW_Thompson\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRW\Weapons\HRW_Thompson\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
};
class HRW_Thompson: HRW_Thompson_Base
{
	scope = 2;
	displayName = "$STR_Thompson0";
	descriptionShort = "$STR_Thompson1";
};
