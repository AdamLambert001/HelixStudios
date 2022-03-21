class CfgPatches
{
	class 206th_SW_Vehicles
	{
		author="Helix Company";
		requiredAddons[]=
		{
			
		};
		requiredVersion=0.1;
		units[]=
		{
			"206th_Base_LAAT"
		};
		weapons[]=
		{
			
		};
	};
};

class CfgFactionClasses 
{

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

};

class CfgVehicles
{
	class LandVehicle;
	class 3as_Z95_Republic;
	class 3as_arc_170_base;
	class 3AS_Jug_base_F;
	class 3as_saber_Base;
	class Car;
    class 3AS_Patrol_LAAT_Base;
	class ls_laat_ab;
    class ls_laat;
	class SWLG_tanks_tx130;

	//-------------------------------------------------Standard Units-------------------------------------------------//
	class 206th_Base_LAAT: ls_laat
	{
		displayname="LAAT/I Gunship (Base)";
		faction = "206th_Base";
		author="Wallace";
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
				"206th_Vehicles\Data\206th_LAAT_Body.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa", 
				"swlb_a_vehicle\laat\data\door1_co.paa", 
				"swlb_a_vehicle\laat\data\door2_co.paa", 
				"swlb_a_vehicle\laat\data\door3_co.paa", 
				"206th_Vehicles\Data\206th_LAAT_Wings.paa", 
				"206th_Vehicles\Data\missiles_co.paa", 
				"206th_Vehicles\Data\Cockpits_co.paa", 
				"206th_Vehicles\Data\glass_ca.paa" 
				
		};
		class TextureSources
		{
			class base
			{
				displayname="Pegasus";
				author="Raccoon";
				textures[]=
				{
				"206th_Vehicles\Data\206th_LAAT_Body.paa", 
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"206th_Vehicles\Data\206th_LAAT_Wings.paa", 
				"206th_Vehicles\Data\missiles_co.paa",
				"206th_Vehicles\Data\Cockpits_co.paa",
				"206th_Vehicles\Data\glass_ca.paa"
				};
				factions[]=
				{
					"MA_Categ_Vic"
				};
			};

		};
		textureList[]=
		{
			"base",
		};
	};
};