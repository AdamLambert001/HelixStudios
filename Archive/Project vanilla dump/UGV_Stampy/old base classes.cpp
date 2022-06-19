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
		_generalMacro = "HS_UGV_base_RCWS";
		displayName = "$STR_HS_CfgVehicles_UGV_rcws_base0";
		picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_RCWS_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_RCWS_CA.paa";
		uavCameraGunnerPos = "PiP1_pos";
		uavCameraGunnerDir = "PiP1_dir";
		threat = {0.800000, 0.600000, 0.300000};
		unitInfoType = "RscOptics_AV_driver";
        class Turrets {
			class NewTurret;

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
		};
	};
