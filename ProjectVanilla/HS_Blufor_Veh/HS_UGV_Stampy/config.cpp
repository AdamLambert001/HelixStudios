class CfgPatches {
    class HS_UGV {
        author = "Helix Studios";
        requiredAddons[] = {
            "A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_Drones_F",
			"A3_UI_F", 
			"SWLW_main",
			"HS_Core",
            "HS_Core_Weap",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",

        };
        requiredVersion = 0.2;
        units[] = {};
        weapons[] = {};
    };
};

class CfgFactionClasses {
    class HS_GAR;
    class HS_CIS;
};

class CfgVehicles {
    /*extern*/ class UGV_01_base_F;
    /*extern*/ class UGV_01_rcws_base_f;

	/*unarmed*/
	class HS_UGV_GAR: UGV_01_base_F {
		_generalMacro = "HS_UGV_GAR";
		scope = 2;
		displayName = "[HS] UGV-Stampy [GAR]";
		crew = "B_UAV_AI";
		typicalCargo = {"B_Soldier_F"};
		side = 1;
		faction = "HS_GAR";
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
		
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};

			class _xx_Toolkit {
				name = "ToolKit";
				count = 1;
			};
		};
    };
	

	/*armed*/
	class HS_UGV_GAR_rcws: UGV_01_rcws_base_f {
		_generalMacro = "HS_UGV_GAR_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stompy RCWS [GAR]";
		crew = "B_UAV_AI";
		typicalCargo = {"B_Soldier_F"};
		side = 1;
		faction = "HS_GAR";
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
		
		class Turrets {

			class MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC_CTWS"};
				magazines[] = {"HS_R_1500rnd_13mm", "HS_R_100rnd_30mm", "HS_R_100rnd_30mm"};
			};
		};

		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};

			class _xx_Toolkit {
				name = "ToolKit";
				count = 1;
			};
		};
	};
};