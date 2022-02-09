class CfgPatches 
{ 
  class HS_Unit_21stNova
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

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 206.148470 on Stable branch
// Generated with ALiVE version 1.15.0.2110111
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class SWLB_clone_21stSniper;
    class SWLB_clone_21stSniper_OCimport_01 : SWLB_clone_21stSniper { scope = 0; class EventHandlers; };
    class SWLB_clone_21stSniper_OCimport_02 : SWLB_clone_21stSniper_OCimport_01 { class EventHandlers; };


    class B_21stNova_Trooper_01 : SWLB_clone_21stSniper_OCimport_02 {
        author = "CM/CT-9787 ""Wallace""";
        scope = 2;
        scopeCurator = 2;
        displayName = "Trooper";
		editorSubcategory="SC_Nova_Base";
        side = 1;
        faction = "21stNova";

        identityTypes[] = {"Head_LSD_CLONE","LanguageENG_F"};

        uniformClass = "21st_Trooper_Uniform";

        linkedItems[] = {"SWLB_clone_basic_armor","21st_Trooper_Helmet","ItemMap","SWLB_comlink","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SWLB_clone_basic_armor","21st_Trooper_Helmet","ItemMap","SWLB_comlink","ItemCompass","ItemWatch"};

        weapons[] = {"SWLW_DC15A","SWLW_DC17","SWLB_clone_binocular"};
        respawnWeapons[] = {"SWLW_DC15A","SWLW_DC17","SWLB_clone_binocular"};

        magazines[] = {"SWLW_DC15A_Mag","SWLW_DC17_Mag","Laserbatteries","SWLW_DC15A_Mag","SWLW_DC17_Mag","Laserbatteries"};
        respawnMagazines[] = {"SWLW_DC15A_Mag","SWLW_DC17_Mag","Laserbatteries","SWLW_DC15A_Mag","SWLW_DC17_Mag","Laserbatteries"};

        ALiVE_orbatCreator_loadout[] = {{"SWLW_DC15A","","","",{"SWLW_DC15A_Mag",30},{},""},{},{"SWLW_DC17","","","",{"SWLW_DC17_Mag",20},{},""},{"21st_Trooper_Uniform",{{"FirstAidKit",3},{"ACE_EarPlugs",1},{"SWLW_DC17_Mag",2,20},{"SWLW_beltGrenade_mag",2,1},{"SWLW_DC15A_Mag",3,30}}},{"SWLB_clone_basic_armor",{{"SmokeShell",2,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},{},"21st_Trooper_Helmet","",{"SWLB_clone_binocular","","","",{"Laserbatteries",1},{},""},{"ItemMap","","SWLB_comlink","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};