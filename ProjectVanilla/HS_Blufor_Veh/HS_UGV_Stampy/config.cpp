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

/*extern*/ class DefaultEventHandlers;
/*extern*/ class WeaponFireGun;
/*extern*/ class WeaponCloudsGun;
/*extern*/ class WeaponFireMGun;
/*extern*/ class WeaponCloudsMGun;
/*extern*/ class RCWSOptics;
/*extern*/ class Components;
class DefaultVehicleSystemsDisplayManagerLeft {
	/*extern*/ class components;
};

class DefaultVehicleSystemsDisplayManagerRight {
	/*extern*/ class components;
};

class CfgVehicles {
    /*extern*/ class LandVehicle;
    
    class Car: LandVehicle {
        /*extern*/ class NewTurret;
    };
    class Car_F: Car {
        /*extern*/ class ViewOptics;

        class HitPoints {
            /*extern*/ class HitLFWheel;
			/*extern*/ class HitLBWheel;
			/*extern*/ class HitLMWheel;
			/*extern*/ class HitLF2Wheel;
			/*extern*/ class HitRFWheel;
			/*extern*/ class HitRBWheel;
			/*extern*/ class HitRMWheel;
			/*extern*/ class HitRF2Wheel;
        };
        /*extern*/ class NewTurret;

        class Turrets {
            class MainTurret: NewTurret {
                /*extern*/ class ViewOptics;
            };
        };
        /*extern*/ class AnimationSources;
        /*extern*/ class Components;
    };

    class UGV_01_base_F: Car_F {
        class Turrets {
            class MainTurret: NewTurret {};
        };
    };
    class UGV_01_rcws_base_f;

    class HS_UGV_Base: UGV_01_base_F {
        scope = 0;
        author = "Helix Studios";
        displayName = "$STR_HS_CfgVehicles_UGV_base0";
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		editorSubcategory = "HS_Drones";
        picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_CA.paa";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {};
        /*engine*/
        thrustDelay = 0.100000;
		brakeIdleSpeed = 1.780000;
		fuelCapacity = 30;
		wheelCircumference = 3.160000;
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 30;
		idleRpm = 800;
		redRpm = 5400;
		clutchStrength = 55.000000;
		enginePower = 240;
		maxOmega = 320;
		peakTorque = 800;
		dampingRateFullThrottle = 0.080000;
		dampingRateZeroThrottleClutchEngaged = 2.000000;
		dampingRateZeroThrottleClutchDisengaged = 0.350000;
		torqueCurve[] = {{0.000000, 0.200000}, {0.278000, 0.500000}, {0.350000, 0.850000}, {0.461000, 1.000000}, {0.600000, 0.950000}, {0.700000, 0.850000}, {0.800000, 0.700000}, {1.000000, 0.500000}};
		changeGearMinEffectivity[] = {0.950000, 0.150000, 0.950000, 0.950000, 0.950000};
		switchTime = 0.100000;
		latency = 1.000000;
		maxFordingDepth = -0.500000;
		maxSpeed = 110;
		terrainCoef = 1.200000;
		turnCoef = 5;
		precision = 10;
		acceleration = 45;
		armor = 250;
		armorStructural = 4.2;
		damageResistance = 0.007190;
		canFloat = 1; //we'll try
		enableGPS = 1;
		fuelExplosionPower = 2;
		transportSoldier = 0;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		weapons[] = {};
		magazines[] = {};
		transportMaxWeapons = 8;
		transportMaxMagazines = 64;
		transportMaxBackpacks = 8;
		maximumLoad = 1500;
        
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

    class HS_UGV_base_RCWS: HS_UGV_Base {
		displayName = "$STR_HS_CfgVehicles_UGV_rcws_base0";
		scope = 0;
        class Turrets {
			/*extern*/ class NewTurret;

			class MainTurret: NewTurret {

				class HitPoints {

					class HitTurret {
						armor = 250;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "OtocVez";
						passThrough = 0.30000;
						minimalHit = 0.030000;
						explosionShielding = 0.500000;
						radius = 0.250000;
						isTurret = 1;
					};

					class HitGun {
						armor = 300;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "OtocHlaven";
						passThrough = 0.01000;
						minimalHit = 0.030000;
						explosionShielding = 0.800000;
						radius = 0.200000;
						isGun = 1;
					};
				};
			weapons[] = {"HS_HMG_UGV","HS_30mm_AC_CTWS"};
			magazines[] = {};
			minElev = -12;
			maxElev = 75;
    };


	/*unarmed*/
	class HS_UGV_GAR: HS_UGV_Base {
		_generalMacro = "HS_UGV_GAR";
		scope = 2;
		displayName = "[HS] UGV-Stampy [GAR]";
		crew = "B_UAV_AI";
		typicalCargo = {"B_Soldier_F"};
		side = 1;
		faction = "HS_GAR";
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
	};

	/* class HS_UGV_CIS: HS_UGV_Base {
		_generalMacro = "HS_UGV_CIS";
		scope = 2;
		displayName = "[HS] UGV-Stampy [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = {};
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
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
		
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
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_C_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_C_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_C_Turret.paa"};

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