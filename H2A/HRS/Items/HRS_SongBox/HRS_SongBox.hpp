class HRS_SongBox: Inventory_Base
{
	scope = 0;
	model = "H2A\HRS\Items\HRS_SongBox\HRS_SongBox.p3d";
	weight = 50;
	itemSize[] = {1,1};
	hiddenSelections[] = {"Cap", "Body"};
	
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=100;
				healthLevels[]=
				{	
					{1.0,{"H2A\HRS\Items\HRS_SongBox\Data\Cap.rvmat"},{"H2A\HRS\Items\HRS_SongBox\Data\Body.rvmat"}},
					{0.7,{"H2A\HRS\Items\HRS_SongBox\Data\Cap.rvmat"},{"H2A\HRS\Items\HRS_SongBox\Data\Body.rvmat"}},
					{0.5,{"H2A\HRS\Items\HRS_SongBox\Data\Cap_damage.rvmat"},{"H2A\HRS\Items\HRS_SongBox\Data\Body_damage.rvmat"}},
					{0.3,{"H2A\HRS\Items\HRS_SongBox\Data\Cap_damage.rvmat"},{"H2A\HRS\Items\HRS_SongBox\Data\Body_damage.rvmat"}},
					{0.0,{"H2A\HRS\Items\HRS_SongBox\Data\Cap_destruct.rvmat"},{"H2A\HRS\Items\HRS_SongBox\Data\Body_destruct.rvmat"}}
				};
			};
		};
	};
	
	class NoiseSongBox
	{
		strength = 12;
		type = "shot";
	};
};

class HRS_MooBox: HRS_SongBox
{
	scope = 2;
	displayName = "$STR_HRS_MooBox0";
	descriptionShort = "$STR_HRS_MooBox1";	
	
	hiddenSelectionsTextures[] = {
		"H2A\HRS\Items\HRS_SongBox\Data\Cap_ca.paa",
		"H2A\HRS\Items\HRS_SongBox\Data\Body_Moo_ca.paa"
	};
};

class HRS_BeeBox: HRS_SongBox
{
	scope = 2;
	displayName = "$STR_HRS_BeeBox0";
	descriptionShort = "$STR_HRS_BeeBox1";	
	
	hiddenSelectionsTextures[] = {
		"H2A\HRS\Items\HRS_SongBox\Data\Cap_ca.paa",
		"H2A\HRS\Items\HRS_SongBox\Data\Body_Bee_ca.paa"
	};
};

class HRS_WooBox: HRS_SongBox
{
	scope = 2;
	displayName = "$STR_HRS_WooBox0";
	descriptionShort = "$STR_HRS_WooBox1";	
	
	hiddenSelectionsTextures[] = {
		"H2A\HRS\Items\HRS_SongBox\Data\Cap_ca.paa",
		"H2A\HRS\Items\HRS_SongBox\Data\Body_Woo_ca.paa"
	};
};

class HRS_RoarBox: HRS_SongBox
{
	scope = 2;
	displayName = "$STR_HRS_RoarBox0";
	descriptionShort = "$STR_HRS_RoarBox1";	
	
	hiddenSelectionsTextures[] = {
		"H2A\HRS\Items\HRS_SongBox\Data\Cap_ca.paa",
		"H2A\HRS\Items\HRS_SongBox\Data\Body_Roar_ca.paa"
	};
};