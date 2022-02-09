class CfgPatches
{
	class HS_Nova_Base
	{
		author="Helix Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"SWLB_clones",
			"SWLB_droids",
			"SWLB_main"
		};
		requiredVersion=0.1;
		units[]=
		{
			"21st_Trooper",
		};
		weapons[]=
		{
		};
	};
};
class CfgFactionClasses 
{
	class 21stNova
	{
	displayName = "21st Nova Corps";
	side = 1;
	flag = "";
    icon = "";
    priority = 0;
	};
};
class CfgEditorSubcategories
{
	class SC_Nova_Base
	{
		displayName="Sovereign Company - Troopers";
	};
	class SC_Marine
	{
		displayName="Sovereign Company - Marines";
	};
	class Air_Grph_Nova
	{
		displayName="Gryphon Squadron";
	};
};
class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ab_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_barc_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class NVGoggles;
	class ls_blueforHelmet_base;
	class HeadgearItem;
	class 21st_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[21st] Clone trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"21st_Base\Data\Helmets\21st_S_T_Helm.paa",
		};
	};

	// ---------------------------------------------Vests-------------------------------------
    class SWLB_clone_basic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_assault_armor;
	class SWLB_clone_grenadier_armor;
	class SWLB_clone_specialist_armor;
	class VestItem;
    class 21st_Clone_Kama_Vest: SWLB_clone_kama_armor
	{
		displayName="[21st] Clone trooper kama";
		hiddenSelectionsTextures[]=
		{
			"\21st_Base\Data\Extras\21st_Officer_Acc.paa"
		};
	};
    class SWLB_clone_uniform;
	class UniformItem;
    class 21st_Trooper_Uniform: SWLB_clone_uniform
	{
		displayName="[21st] Clone trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="21st_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_bag;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_engineer_base_P2;
	class SWLB_clone_eod_base_P2;
	class SWLB_clone_backpack_predef_light;
	class SWLB_clone_backpack_predef_heavy;
	class SWLB_clone_backpack_predef_medic;
	class SWLB_clone_backpack_predef_sg;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack;
	class B_Kitbag_rgr;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ARMOR 

	class 21st_Trooper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "21stNova";
		editorSubcategory="SC_Nova_Base";
		uniformclass="21st_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "21st_Base\Data\Armour\21st_M_S_1.paa",
			"21st_Base\Data\Armour\21st_M_S_2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"21st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"21st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
};