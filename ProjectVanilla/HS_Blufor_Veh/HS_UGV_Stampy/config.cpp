class CfgPatches 
{ 
  class HS_UGV
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
            "HS_Core_Weap",
			"HS_Core"
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
			"HS_HMG_UGV",
			"HS_30mm_AC"
		};
	};
};

class CfgFactionClasses 
{
    class HS_GAR;
    class HS_CIS; 
    class HS_HUTT;

};

class CfgWeapons {
	class gatling_30mm_base;
	class MGun;
	class LMG_RCWS: MGun {};
	class lowROF;

	class HS_HMG_UGV: LMG_RCWS {
		scope = 2;
		author = "Helix Studios";
		displayName = "$STR_HS_HMG_UGV0";
		magazines[] = {};
		maxZeroing = 2500;
		class GunParticles {
			class effect1 {
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: MGun {
			displayName = "12.7mm HMG";
			sounds[] = {"StandardSound"};
			class StandardSound {
				begin1[] = {"swlb_a_vehicle\laat\sounds\DC-15R.wss",1.5848932,1,2100};
				soundBegin[] = {"begin1",1};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				soundClosure[] = {"closure1",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};

	class HS_30mm_AC: gatling_30mm_base {
		scope = 2;
		author = "Helix Studios";
		displayName = "$STR_HS_30mm_AC0";
		magazines[] = {};
		muzzles[] = {"HE","AP"};
		class HE: gatling_30mm_base {
			magazines[] = {"HS_R_100rnd_30mm","HS_R_250rnd_30mm","HS_C_100rnd_30mm","HS_C_250rnd_30mm"};
			class LowROF: LowROF {
				dispersion = 0.0055;
			};
		};
		class AP: gatling_30mm_base {
			magazines[] = {"HS_R_150rnd_30mm_APFSDS","HS_C_150rnd_30mm_APFSDS"};
		};
	};

};

class DefaultVehicleSystemsDisplayManagerLeft {
	/*extern*/ class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
	/*extern*/ class components;
};
/*extern*/ class DefaultEventHandlers;
/*extern*/ class WeaponFireGun;
/*extern*/ class WeaponCloudsGun;
/*extern*/ class WeaponFireMGun;
/*extern*/ class WeaponCloudsMGun;
/*extern*/ class RCWSOptics;

class CfgVehicles {

	class UGV_01_base_F {
		/*extern*/ class NewTurret;

		class Turrets {

			class MainTurret: NewTurret {
				/*extern*/ class ViewOptics;
			};
		};
	};
	
	class HS_UGV_Base: UGV_01_base_F {
		scope = 0;
		author = "Helix Studios";
		displayName = "$STR_HS_CfgVehicles_UGV_base0";
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
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

		class complexGearbox {
			GearboxRatios[] = {"R1", -3.182000, "N", 0, "D1", 4.182000, "D2", 3.318000, "D3", 2.150000};
			TransmissionRatios[] = {"High", 5.539000};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.140000;
		differentialType = "all_limited";
		frontRearSplit = 0.500000;
		frontBias = 1.300000;
		rearBias = 1.300000;
		centreBias = 1.300000;
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

		editorSubcategory = "Drones";
		picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_CA.paa";
		cost = 20000;
		unitInfoType = "RscOptics_AV_driverNoWeapon";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		isUav = 1;
		uavCameraDriverPos = "PiP0_pos";
		uavCameraDriverDir = "PiP0_dir";
		maxFordingDepth = -0.500000;

		class AnimationSources {

			class Turret {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};

			class MainTurret: Turret {
			};

			class MainGun: Turret {
			};

			class muzzle_rot_MG { 
				source = "ammorandom";
				weapon = "HS_HMG_UGV";
			};

			class muzzle_rot_GMG { 
				source = "ammorandom";
				weapon = "HS_30mm_AC";
			};

			class muzzle_hide_MG {
				source = "reload";
				weapon = "HS_HMG_UGV";
			};

			class muzzle_hide_GMG {
				source = "reload";
				weapon = "HS_30mm_AC";
			};

			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			}; 
		};
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

		class HitPoints {

			class HitHull {
				armor = 0.700000;
				material = 50;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 0.8;
				minimalHit = 0.200000;
				explosionShielding = 0.200000;
				radius = 0.300000;
			};

			class HitEngine {
				armor = 2;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.400000;
				minimalHit = 0.200000;
				explosionShielding = 0.200000;
				radius = 0.300000;
			};

			class HitFuel {
				armor = 1;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.300000;
				minimalHit = 0.100000;
				explosionShielding = 0.600000;
				radius = 0.300000;
			};

			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1";
				visual = "-";
				passThrough = 0.3;
				explosionShielding = 4;
			};

			class HitLF2Wheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_1_2";
			};

			class HitLMWheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_1_3";
			};

			class HitRFWheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_2_1";
			};

			class HitRF2Wheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_2_2";
			};

			class HitRMWheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_2_3";
			};
		};

		class VehicleTransport {

			class Cargo {
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				parachuteClass = "B_Parachute_02_F";
				dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
			};
		};
		weapons[] = {};
		magazines[] = {};
		threat[] = {0.000000, 0.000000, 0.000000};
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {};
		transportMaxWeapons = 8;
		transportMaxMagazines = 64;
		transportMaxBackpacks = 6;
		maximumLoad = 1000;

		class TransportBackpacks {};
		class TransportMagazines {};
		class TransportWeapons {};
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

		class Damage {
			tex[] = {}; //later?
			mat[] = {"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_damage.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_destruct.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_damage.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_destruct.rvmat", "A3\Data_F\Vehicles\Turret.rvmat", "A3\Data_F\Vehicles\Turret_damage.rvmat", "A3\Data_F\Vehicles\Turret_destruct.rvmat"};
		};
		/*extern*/class CargoTurret;
		
		class Turrets {

			class CargoTurret_01: CargoTurret {
				gunnerAction = "passenger_flatground_4";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_GETIN_POS_PASSENGER";
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				maxElev = 65;
				minElev = -10;
				maxTurn = 95;
				minTurn = -60;
				isPersonTurret = 1;
			};
		};
	};

	class HS_UGV_Base_rcws: HS_UGV_Base {
		_generalMacro = "HS_UGV_Base_rcws";
		displayName = "$STR_HS_CfgVehicles_UGV_rcws_base0";
		scope = 0;
		picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_RCWS_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_RCWS_CA.paa";
		threat[] = {0.800000, 0.600000, 0.300000};
		unitInfoType = "RscOptics_AV_driver";
		uavCameraGunnerPos = "PiP1_pos";
		uavCameraGunnerDir = "PiP1_dir";

		class AnimationSources: AnimationSources {

			class Turret {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			/*extern*/ class MainGun;
			/*extern*/ class MainTurret;
		};

		class Turrets: Turrets {

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
				isCopilot = 0;
				dontCreateAI = 0;
				body = "mainTurret";
				gun = "mainGun";
				memoryPointGunnerOptics = "PiP1_pos";
				memoryPointGun = "machinegun";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC"};
				magazines[] = {};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner", 0.316228, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical", 0.316228, 1, 30};
				minElev = -12;
				maxElev = 75;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;

				class ViewOptics: RCWSOptics {
					visionMode[] = {"Normal","NVG","TI"};
					initFov = 0.466700;
					maxFov = 0.466700;
					minFov = 0.035000;
					directionStabilized = 1;
				};

				class Components {

					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {

						class components {

							class EmptyDisplay {
								componentType = "EmptyDisplayComponent";
							};

							class MinimapDisplay {
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};

							class UAVDisplay {
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};

					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {

						class components {

							class EmptyDisplay {
								componentType = "EmptyDisplayComponent";
							};

							class MinimapDisplay {
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};

							class UAVDisplay {
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
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

	/*class HS_UGV_CIS: HS_UGV_Base {
		_generalMacro = "HS_UGV_CIS";
		scope = 2;
		displayName = "[HS] UGV-Stampy [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = {};//"Ext", "Int", "Turret"
	};

	class HS_UGV_IND: HS_UGV_Base {
		_generalMacro = "HS_UGV_IND";
		scope = 2;
		displayName = "[HS] UGV-Stampy [Hutt]";
		crew = "I_UAV_AI";
		typicalCargo = {"I_Soldier_F"};
		side = 2;
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
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};
		
		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC"};
				magazines[] = {"HS_R_1500rnd_13mm", "HS_R_100rnd_30mm", "HS_R_100rnd_30mm"};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};

	class HS_UGV_CIS_rcws: HS_UGV_Base_rcws {
		_generalMacro = "HS_UGV_CIS_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stompy RCWS [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = {"\HS_UGV_Stampy\data\HS_UGV_R_Ext.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Int.paa", "\HS_UGV_Stampy\data\HS_UGV_R_Turret.paa"};//"Ext", "Int", "Turret"

		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC"};
				magazines[] = {"HS_C_1500rnd_13mm", "HS_C_100rnd_30mm", "HS_C_100rnd_30mm"};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};
	
	/*class HS_UGV_IND_rcws: HS_UGV_Base_rcws {
		_generalMacro = "HS_UGV_IND_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stumpy RCWS [Hutt]";
		crew = "I_UAV_AI";
		typicalCargo = {"I_Soldier_F"};
		side = 2;
		faction = "HS_HUTT";
		hiddenSelectionsTextures[] = {};//"Ext", "Int", "Turret"

		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC"};
				magazines[] = {};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};*/
};