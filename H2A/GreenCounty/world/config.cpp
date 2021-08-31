class CfgPatches
{
	class H2A_GreenCounty_world
	{
		requiredAddons[] = 
		{
			"H2A_GreenCounty_scripts",
			"H2A_GreenCounty_props",
			"DZ_Data",
			"DZ_Plants",
			"DZ_Plants_Bliss",
			"DZ_Rocks",
			"DZ_Rocks_Bliss",
			"DZ_Structures",
			"DZ_Structures_Furniture",
			"DZ_Structures_Industrial",
			"DZ_Structures_Military",
			"DZ_Structures_Residential",
			"DZ_Structures_Roads",
			"DZ_Structures_Ruins",
			"DZ_Structures_Signs",
			"DZ_Structures_Specific",
			"DZ_Structures_Walls",
			"DZ_Structures_Wrecks",
			"DZ_Structures_Data_Bliss",
			"DZ_Structures_Bliss_Industrial",
			"DZ_Structures_Bliss_Military",
			"DZ_Structures_Bliss_Residential",
			"DZ_Structures_Bliss_Roads",
			"DZ_Structures_Bliss_Ruins",
			"DZ_Structures_Bliss_Signs",
			"DZ_Structures_Bliss_Specific",
			"DZ_Structures_Bliss_Walls",
			"DZ_Structures_Bliss_Wrecks",
			"DZ_Surfaces",
			"DZ_Surfaces_Bliss",
			"DZ_Water",
			"DZ_Water_Bliss"
		};
	};
};

class CfgCharacterScenes
{
	class GreenCounty
	{
		class loc1
		{
			target[] = {4353.24, 3178.16, 27.91};
			position[] = {4361.72, 3172.31, 1.1};
			fov = 0.5236;
			date[] = {2011, 06, 11, 11, 22};
			overcast = 0;
			rain = 0.0;
			fog = 0.0;
		};
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class GreenCountyMenu
		{
			directory = "intro.GreenCounty";
		};
	};
};

class CfgWorlds
{
	class CAWorld;
	class GreenCounty: CAWorld
	{
		cutscenes[] = {"GreenCountyMenu"};
		description = "Green County";
		longitude = 30.0;	// positive is east
		latitude = -45.0;	// positive is south
		
		worldName = "H2A\GreenCounty\world\GreenCounty.wrp";
		ceFiles = "H2A\GreenCounty\ce";

		class Navmesh
		{
			#include "cfgNavmesh.hpp"
		};
		
		startTime = "14:20";
		startDate = "11/06/2020";

		centerPosition[] = {5120, 5120, 300.0};
		clutterGrid = 0.8;
		clutterDist = 150.0;
		noDetailDist = 80.0;
		fullDetailDist = 30.0;
		volFogOffset = 0;
				
		class UsedTerrainMaterials
		{
			material1 = "DZ\surfaces_bliss\data\terrain\en_soil.rvmat";
			material2 = "DZ\surfaces_bliss\data\terrain\en_stubble.rvmat";
			material3 = "DZ\surfaces_bliss\data\terrain\en_grass1.rvmat";
			material4 = "DZ\surfaces_bliss\data\terrain\en_forest_dec.rvmat";
			material5 = "DZ\surfaces_bliss\data\terrain\en_forest_con.rvmat";
			material6 = "DZ\surfaces_bliss\data\terrain\en_grass2.rvmat";
			material7 = "DZ\surfaces_bliss\data\terrain\en_tarmac_old.rvmat";
			material8 = "DZ\surfaces_bliss\data\terrain\en_stones.rvmat";
		};
		
		midDetailTexture = "H2A\GreenCounty\data\GreenCounty_middlesat_mco.paa";
		terrainNormalTexture = "H2A\GreenCounty\data\GreenCounty_global_nohq.paa";

		class OutsideTerrain
		{
			satellite = "H2A\GreenCounty\data\GreenCounty_outsidesat_co.paa";
			enableTerrainSynth = true;
			
			class Layers
			{
				class Layer0
				{
					nopx = "dz\surfaces_bliss\data\terrain\en_soil_nopx.paa";
					texture	= "dz\surfaces_bliss\data\terrain\en_soil_ca.paa";
				};
			};
		};

		class Names
		{
			#include "GreenCounty.hpp"
		};

		ilsPosition[] = {};
		ilsDirection[] = {};
		ilsTaxiOff[] = {};
		ilsTaxiIn[] = {};
		drawTaxiway = false;
		class SecondaryAirports	{};

		class Grid
		{
			offsetX = 0.0;
			offsetY = 0.0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100.0;
				stepY = 100.0;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000.0;
				stepY = 1000.0;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000.0;
				stepY = 10000.0;
			};
		};
		
		// 2D map item params
		mapDisplayNameKey = "Green County Map";
		mapDescriptionKey = "Desc item";
		mapTextureClosed = "H2A\GreenCounty\data\map_greencounty_co.paa";
		mapTextureOpened = "H2A\GreenCounty\data\karta_co.paa";
		mapTextureLegend = "H2A\GreenCounty\data\karta_side_co.paa";
		userMapPath = "H2A\GreenCounty\data\usermap";
		
		minTreesInForestSquare = 10;	// 10 - for 2d map (also affects forest controller)
		minRocksInRockSquare = 5;		// 5 - for 2d map
		
		soundMapAttenCoef = 0.01;		// sound map params
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0.0;
			bushsoft = 0.0;
			forest = 1.0;
			house = 0.3;
			church = 0.5;
		};
		class Sounds
		{
			sounds[] = {};
		};

		class Ambient {};
	
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Wreck_BMP1: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\wrecks\vehicles\wreck_bmp1.p3d";
	};
};
