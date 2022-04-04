class CfgPatches
{
	class HS_Xian_VTOL_02
	{
		author="Helix Studios";
		requiredAddons[]=
		{
			"A3_Soft_F_EPC",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_UI_F", 
			"SWLW_main",
			"SWLW_clones",
			"SWLB_equipment",
			"SWLB_main"
		};
		requiredVersion=0.1;
		units[]=
		{
			"HS_XIAN_INF_TRANS",
			"HS_XIAN_VEH_TRANS"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
    class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class HS_XIAN_INF_TRANS: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		editorPreview="\HS_UI\EditorPreviews\HS_XIAN_TRANS.jpg";
		scope=2;
		side=1;
		scopeCurator=2;
		crew="SWLB_clone_pilot_base_P2";
		textureList[]={};
		faction="HS_GAR_Fac";
        editorSubcategory="HS_PLN";
		displayName="Y-32 Xi'an (Infantry Transport)";
		author="Helix Studios";
		HiddenSelectionsTextures[]=
		{
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT01_CO.paa",                 
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT02_CO.paa",
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT03_L_CO.paa",
		    "\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT03_R_CO.paa"
		};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class HS_XIAN_VEH_TRANS: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		editorPreview="\HS_UI\EditorPreviews\HS_XIAN_TRANS.jpg";
		scope=2;
		side=1;
		scopeCurator=2;
		crew="SWLB_clone_pilot_base_P2";
		textureList[]={};
		faction="HS_GAR_Fac";
        editorSubcategory="HS_PLN";
		displayName="Y-32 Xi'an (Vehicle Transport)";
		author="Helix Studios";
		HiddenSelectionsTextures[]=
		{
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT01_CO.paa",                 
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT02_CO.paa",
			"\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT03_L_CO.paa",
		    "\HS_Opfor_Veh\HS_Xian\data\HS_VTOL_02_EXT03_R_CO.paa"
		};
	};
};