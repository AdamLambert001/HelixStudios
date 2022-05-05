class CfgPatches
{
	class HS_41st_EC_Base
	{
		author="Helix Studios";
		requiredAddons[]=
		{
			
		};
		requiredVersion=0.1;
		units[]=
		{
			
		};
		weapons[]=
		{
			
		};
	};
};

class CfgFactionClasses 
{
	class HS_41st_FacBase
	{
	displayName = "41st Elite Corps";
	};
};

class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ab_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_barc_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class ls_blueforHelmet_base;
	class HeadgearItem;
    class NVGoggles;
	class lsd_gar_tanker_ng;
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
	class SWLB_CEE_Force_Recon_Commander;
	class SWLB_clone_assault_armor;
	class SWLB_clone_grenadier_armor;
	class SWLB_clone_specialist_armor;
    class SWLB_clone_uniform;
    class UniformItem;
	class VestItem;
	class SWLB_Officer_Tactical;
	class SWLB_clone_Lieutenant_armor;

	//-------------------------------------------------Standard Helmets-------------------------------------------------//

    class HS_41st_Melon_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[41st EC] Clone Trooper Helmet (Melonman)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\41st_Base\Data\Helmets\41st_Melon_Helmet.paa"
		};
	};
	
	class HS_41st_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[41st EC] Clone Trooper Helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\41st_Base\Data\Helmets\41st_Trooper_Helmet.paa"
		};
	};

	class HS_41st_ARF_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[41st EC] Clone ARF Helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\41st_Base\Data\Helmets\41st_ARF_Helmet.paa"
		};
	};

	//-------------------------------------------------Vests-------------------------------------------------//

	class HS_V_Commander_Armour: SWLB_clone_commander_armor
	{
		displayName="[41st EC] Clone Commander vest";
		hiddenSelectionsTextures[]=
		{
			"\41st_Base\Data\Extras\41st_Officer_Acc"
		};
	};
	
	//-------------------------------------------------Standard Uniforms-------------------------------------------------//

    class HS_41st_Melon_Uniform: SWLB_clone_uniform
	{
		displayName="[41st EC] Clone Trooper Uniform (Melonman)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_41st_Melon";
			containerClass="Supply140";
			mass=40;
		};
	};
	
	class HS_41st_Trooper_Uniform: SWLB_clone_uniform
	{
		displayName="[41st EC] Clone Trooper Uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HS_41st_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};

	//-------------------------------------------------Night Vision Goggles-------------------------------------------------//

	class HS_41st_Commander_Visor_Grn: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[41st EC] Clone commander visor (Green)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\SWLB_clone_ccVisor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\41st_Base\Data\Extras\41st_NVG_Green.paa",
			"\41st_Base\Data\Extras\41st_NVG_Green.paa"
		};
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
		class ItemInfo
		{
			type=616;
			uniformModel="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			modelOff="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
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
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;

	//-------------------------------------------------Standard Units-------------------------------------------------//

    class HS_41st_Melon: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
		displayName="206th Melonman";
        faction = "HS_41st_Base";
		uniformclass="HS_41st_Melon_Uniform";
        hiddenSelectionsTextures[]=
		{
	        "\41st_Base\Data\Armour\41st_Man_1",
			"\41st_Base\Data\Armour\41st_Man_2"
		};
		linkedItems[]=
		{
			"HS_41st_Melon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"HS_41st_Melon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};

	class HS_41st_Trooper: HS_41st_Melon
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
		displayName="206th Trooper";
        faction = "HS_41st_Base";
		uniformclass="HS_41st_Trooper_Uniform";
        hiddenSelectionsTextures[]=
		{
	        "\41st_Base\Data\Armour\41st_Trooper_1",
			"\41st_Base\Data\Armour\41st_Trooper_2"
		};
	};
};