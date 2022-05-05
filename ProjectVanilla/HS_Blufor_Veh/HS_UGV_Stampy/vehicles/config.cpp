class CfgPatches { 
  class HS_UGV_Vehicles
	{
		author = "Helix Studios";
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_Drones_F",
			"A3_UI_F", 
			"SWLW_main",
			"HS_Core",
            "HS_Core_Weap",

		};
		requiredVersion = 0.1;
		units[] = 
		{
			"HS_UGV_GAR",
			"HS_UGV_CIS",
			"HS_UGV_GAR_rcws",
			"HS_UGV_CIS_rcws"
		};
		weapons[] =
		{
		};
	};
};

class CfgVehicles {

class HS_UGV_Base;
class HS_UGV_Base_rcws;

    /*unarmed*/
	/*class HS_UGV_GAR: HS_UGV_Base {
		_generalMacro = "HS_UGV_GAR";
		scope = 2;
		displayName = "[HS] UGV-Stampy [GAR]";
		crew = "B_UAV_AI";
		typicalCargo = {"B_Soldier_F"};
		side = 1;
		faction = "HS_GAR";
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
	};

	class HS_UGV_CIS: HS_UGV_Base {
		_generalMacro = "HS_UGV_CIS";
		scope = 2;
		displayName = "[HS] UGV-Stampy [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = {};//"Ext", "Int", "Turret"
	};*/

	/*armed*/
	class HS_UGV_GAR_rcws: HS_UGV_Base_rcws {
		_generalMacro = "HS_UGV_GAR_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stompy RCWS [GAR]";
		crew = "B_UAV_AI";
		typicalCargo = {"B_Soldier_F"};
		side = 1;
		faction = "HS_GAR";
		hiddenSelectionsTextures[] = 
		{
			"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", 
			"\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", 
			"\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"
		};
		
		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC_CTWS"};
				magazines[] = 
				{
					"HS_R_1500rnd_13mm", 
					"HS_R_100rnd_30mm", 
					"HS_R_100rnd_30mm"
				};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};

	/*class HS_UGV_CIS_rcws: HS_UGV_Base_rcws {
		_generalMacro = "HS_UGV_CIS_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stompy RCWS [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = 
		{
			"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", 
			"\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", 
			"\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"
		};

		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC_CTWS"};
				magazines[] = {"HS_C_1500rnd_13mm", "HS_C_100rnd_30mm", "HS_C_100rnd_30mm"};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};*/
};