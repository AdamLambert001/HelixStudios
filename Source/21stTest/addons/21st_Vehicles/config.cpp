class CfgPatches 
{ 
  class HS_V_21stNova
	{
		author="Raccoon";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"SWLW_main",
			"SWLW_clones",
			"SWLB_equipment",
			"SWLB_main",
			"SWLB_groundholders",
			"A3_Characters_F_Proxies"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		};
	};
};
class CfgEditorSubcategories
{

};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
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
	class lsd_laat_base;
	class lsd_heli_laati_ab;
    class ls_laat;
	class ls_laat_medevac;
	class SWLG_tanks_tx130;
	class lsd_heli_laati;
	class 3as_ATTE_Base;
	class 3as_BTLB_Bomber;

	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
		class AnimationSources;
	};
	//--------------------------------------------------------Land Vehicles--------------------------------------------------------//

	//--------------------------------------------------------Starfighters--------------------------------------------------------//

	//--------------------------------------------------------Laat/i (the standard LAAT's)--------------------------------------------------------//

	class 21st_LAAT_Nova: lsd_heli_laati
	{
		displayname="LAAT/I Gunship (Nova)";
		faction="21stNova";
		editorPreview="21st_Vehicles\Data\Icons\21stLAATPre.jpg";
		editorSubcategory="Air_Grph_Nova";
		author="HS";
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
				"21st_Vehicles\Data\LAAT\21st_LAAT Body.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"21st_Vehicles\Data\LAAT\21st_LAAT Wings.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"21st_Vehicles\Data\glass_ca.paa"
				
		};

		class TextureSources
        {
            class base
            {
                displayname="HS";
                author="HS";
                textures[]=
                {
				"21st_Vehicles\Data\LAAT\21st_LAAT Body.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"21st_Vehicles\Data\LAAT\21st_LAAT Wings.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"21st_Vehicles\Data\glass_ca.paa"
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
	class 21st_LAAT_Fairy: lsd_heli_laati
	{
		displayname="LAAT/I Gunship (Fairy)";
		faction="21stNova";
		editorPreview="21st_Vehicles\Data\Icons\21stLAATPre.jpg";
		editorSubcategory="Air_Grph_Nova";
		author="HS";
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
				"21st_Vehicles\Data\LAAT\21st_LAAT Fairy.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"21st_Vehicles\Data\LAAT\21st_LAAT Wings.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"21st_Vehicles\Data\glass_ca.paa"
				
		};

		class TextureSources
        {
            class Fairy
            {
                displayname="Fairy";
                author="Raccoon";
                textures[]=
                {
				"21st_Vehicles\Data\LAAT\21st_LAAT Fairy.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"21st_Vehicles\Data\LAAT\21st_LAAT Wings.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"21st_Vehicles\Data\glass_ca.paa"
                };
                factions[]=
                {
                    "MA_Categ_Vic"
                };
            };

        };
        textureList[]=
        {
            "Fairy",
        };
    };
};