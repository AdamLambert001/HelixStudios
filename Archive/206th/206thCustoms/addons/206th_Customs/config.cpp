class CfgPatches
{
	class 206th_SW_Customs
	{
		author="Helix Company";
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
	class 206th_Cus
	{
	displayName = "206th Customs";
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

	class 206th_Cue_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[206th Customs] Clone Trooper Helmet (Cue)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\206th_Customs\Data\Helmets\206th_Cue_Helmet.paa"
		};
	};

    class 206th_Iron_ARC_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[206th Customs] Clone ARC Trooper Helmet (Iron)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\206th_Customs\Data\Helmets\206th_ARC_Iron_Helmet.paa"
		};
	};

	class 206th_Rib_ARC_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[206th Customs] Clone ARC Trooper Helmet (Rib)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\206th_Customs\Data\Helmets\206th_Rib_Helmet.paa"
		};
	};

	class 206th_Wallace_ARF_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[206th Customs] Clone ARF Trooper Helmet (Wallace)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"\206th_Customs\Data\Helmets\206th_ARF_Wallace.paa"
		};
	};

	//-------------------------------------------------Vests-------------------------------------------------//

    class 206th_Iron_ARC_Vest: SWLB_clone_arc_armor
	{
		displayName="[206th Customs] Clone ARC trooper vest (Iron)";
		hiddenSelectionsTextures[]=
		{
			"\206th_SW_Base\Data\Extras\206th_ARC_ACC", //this one lil bit fucked rn
			"\206th_Customs\Data\Extras\206th_Officer_Acc_Iron_1"
		};
	};

	class HS_Rib_Force_Recon: SWLB_CEE_Force_Recon_Commander
	{
		displayName="[206th Customs] Clone Force Recon Commander vest (Rib)";
		hiddenSelectionsTextures[]=
		{"\206th_Customs\Data\Extras\light_accessories_co.paa", 
		"\206th_Customs\Data\Extras\Ribs_Officer_Pads", 
		"\206th_Customs\Data\Extras\light_accessories_co.paa", 
		"\206th_Customs\Data\Extras\Ribs_Officer_Pads"};
	};
	
	//-------------------------------------------------Standard Uniforms-------------------------------------------------//

    class 206th_Wallace_Uniform: SWLB_clone_uniform
	{
		displayName="[206th Customs] Clone Trooper Uniform (Wallace)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="206th_Wallace";
			containerClass="Supply140";
			mass=40;
		};
	};

	class 206th_Rib_Uniform: SWLB_clone_uniform
	{
		displayName="[206th Customs] Clone Trooper Uniform (Rib)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="206th_Rib";
			containerClass="Supply140";
			mass=40;
		};
	};

	//-------------------------------------------------Night Vision Goggles-------------------------------------------------//
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

    class 206th_Wallace: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
		displayName="206th Melonman";
        faction = "206th_Base";
		uniformclass="206th_Wallace_Uniform";
        hiddenSelectionsTextures[]=
		{
	        "\206th_Customs\Data\Armour\206th_Wallace_Armor1",
			"\206th_Customs\Data\Armour\206th_Wallace_Armor2"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};

	class 206th_Rib: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
		displayName="206th Senior Trooper";
        faction = "206th_Base";
		uniformclass="206th_Rib_Uniform";
        hiddenSelectionsTextures[]=
		{
	        "\206th_SW_Base\Data\Armour\206th_Sgt_Trooper_1",
			"\206th_Customs\Data\Armour\206th_Rib_Armor2"
		};
		linkedItems[]=
		{
			"206th_Sgt_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"206th_Sr_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
};