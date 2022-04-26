class CfgPatches
{
	class HS_Drones_GAR
	{
		addonRootClass="A3_Drones_F";
		requiredAddons[]=
		{
			"A3_Drones_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"HS_GAR_UAV_01_F",
            "HS_GAR_UAV_02_F"

		};
		weapons[]={};
	};
};
class CfgVehicles
{
    class Bag_Base;
    class UAV_01_base_F;
    class JLTS_UAV_prowler_base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class HS_UAV_Darter_GAR_backpack: Weapon_Bag_Base
	{
		author="Helix Studios";
		mapSize=0.60000002;
		_generalMacro="HS_UAV_Darter_GAR_backpack";
		scope=2;
		scopeCurator=2;
		displayName="UAV bag (Darter)[GAR]";
		model="\SWLB_equipment\backpacks\SWLB_clone_backpack.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="HS_GAR_Fac";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"cover",
			"heavy",
			"medic",
			"RTO"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
			"",
			""
		};
		maximumLoad=0;
		mass=200;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="Darter";
			assembleTo="HS_GAR_UAV_01_F";
		};
	};
    class HS_GAR_UAV_01_F: UAV_01_base_F
	{
		author="Helix Studios";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		_generalMacro="HS_GAR_UAV_01_F";
		scope=2;
		side=1;
		faction="HS_GAR_Fac";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		displayName="Darter";
		accuracy=0.5;
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"HS_UAV_Darter_GAR_backpack"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_Blufor_Veh\HS_Darter\data\HS_GAR_UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Standard",
			1
		};
	};
};