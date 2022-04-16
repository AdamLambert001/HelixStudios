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
	/*extern*/class LandVehicle;


	class Car: LandVehicle {
		class /*extern*/NewTurret;
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
	
	class HS_UGV_Base: Car_F {
		scope = 0;
		author = "Helix Studios";
		mapSize = 5.330000;
		displayName = "$STR_HS_CfgVehicles_UGV_base0";
		_generalMacro = "HS_UGV_base";
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";

		/*sound*/
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"", 0.562341, 1};
		soundGetOut[] = {"", 0.562341, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_start", 0.707946, 0.800000};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_start", 0.707946, 0.800000, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_stop", 0.707946, 0.800000};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_stop", 0.707946, 0.800000, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\armor\noises\tank_building_01", 1.778279, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\armor\noises\tank_building_02", 1.778279, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\armor\noises\tank_building_03", 1.778279, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\armor\noises\tank_building_04", 1.778279, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.250000, "buildCrash1", 0.250000, "buildCrash2", 0.250000, "buildCrash3", 0.250000};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\armor\noises\tank_wood_01", 1.778279, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\armor\noises\tank_wood_02", 1.778279, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\armor\noises\tank_wood_03", 1.778279, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\armor\noises\tank_wood_04", 1.778279, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.250000, "woodCrash1", 0.250000, "woodCrash2", 0.250000, "woodCrash3", 0.250000};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_01", 1.778279, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_02", 1.778279, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_03", 1.778279, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_04", 1.778279, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.250000, "ArmorCrash1", 0.250000, "ArmorCrash2", 0.250000, "ArmorCrash3", 0.250000};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 1.000000, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 1.000000, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 1.000000, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.330000, "soundBushCollision2", 0.330000, "soundBushCollision3", 0.330000};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1.000000, 1, 900};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1.000000, 1, 900};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1.000000, 1, 900};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1.000000, 1, 900};
		soundCrashes[] = {"Crash0", 0.250000, "Crash1", 0.250000, "Crash2", 0.250000, "Crash3", 0.250000};

		class Sounds {

			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_0800", 0.562341, 0.800000, 200};
				frequency = "0.95	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};

			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1000rpm", 0.630957, 0.800000, 200};
				frequency = "0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};

			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1400rpm", 0.707946, 0.800000, 200};
				frequency = "0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};

			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2000rpm", 0.794328, 0.800000, 250};
				frequency = "0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};

			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2400rpm", 1.122018, 0.800000, 300};
				frequency = "0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};

			class Engine4_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2600rpm", 1.412538, 0.800000, 350};
				frequency = "0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};

			class Engine5_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_3200rpm", 1.778279, 0.800000, 400};
				frequency = "0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume = "engineOn*camPos*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};

			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_0800_exhaust", 1.000000, 0.800000, 250};
				frequency = "0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};

			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1000rpm_exhaust", 1.258925, 0.800000, 300};
				frequency = "0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};

			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1400rpm_exhaust", 1.412538, 0.800000, 350};
				frequency = "0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};

			class Engine2_Thrust_ext {
				sound = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2000rpm_exhaust", 1.584893, 0.800000, 400};
				frequency = "0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};

			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2400rpm_exhaust", 1.995262, 0.800000, 450};
				frequency = "0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};

			class Engine4_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2600rpm_exhaust", 1.995262, 0.800000, 450};
				frequency = "0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};

			class Engine5_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_3200rpm_exhaust", 2.238721, 0.800000, 500};
				frequency = "0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};

			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_0800", 0.398107, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};

			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1000rpm", 0.446684, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};

			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1400rpm", 0.501187, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};

			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2000rpm", 0.501187, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};

			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2400rpm", 0.562341, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};

			class Engine4_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2600rpm", 0.562341, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};

			class Engine5_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_3200rpm", 0.630957, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};

			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_0800_exhaust", 0.501187, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};

			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1000rpm_exhaust", 0.562341, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};

			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1400rpm_exhaust", 0.630957, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};

			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2000rpm_exhaust", 0.630957, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};

			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2400rpm_exhaust", 0.707946, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};

			class Engine4_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2600rpm_exhaust", 0.794328, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};

			class Engine5_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_3200rpm_exhaust", 1.000000, 0.800000};
				frequency = "0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};

			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};

			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*rock*(speed factor[2, 20])";
			};

			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*sand*(speed factor[2, 20])";
			};

			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*grass*(speed factor[2, 20])";
			};

			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*mud*(speed factor[2, 20])";
			};

			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*gravel*(speed factor[2, 20])";
			};

			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", 1.000000, 1.000000, 60};
				frequency = 1;
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};

			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1.000000, 1.000000, 90};
				frequency = 1;
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};

			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};

			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};

			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};

			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};

			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};

			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.707946, 1.000000};
				frequency = 1;
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};

			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.707946, 1.000000};
				frequency = 1;
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};

			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.4])*(speed factor[2, 10])";
			};

			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.4])*(speed factor[10, 1])";
			};

			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};

			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};

			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.4])*(speed factor[2, 10])";
			};

			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.4])*(speed factor[10, 1])";
			};

			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};

			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1.000000, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};

			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.4, -0.8])*(speed factor[2, 6])";
			};

			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.4, 0.8])*(speed factor[10, 1])";
			};

			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};

			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};

			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.4, -0.8])*(speed factor[2, 6])";
			};

			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.4, 0.8])*(speed factor[10, 1])";
			};

			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.4])*(speed factor[1, 10])";
			};

			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1.000000, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.4])*(speed factor[1, 10])";
			};

			class RainExt {
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1.000000, 1.000000, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};

			class RainInt {
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1.000000, 1.000000, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
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

		class Wheels {

			class L1 {
				side = "left";
				suspTravelDirection[] = {-0.125000, -1, 0};
				boneName = "wheel_1_1_damper";
				steering = 1;
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 40;
				MOI = 20;
				dampingRate = 0.100000;
				dampingRateDamaged = 1.000000;
				dampingRateDestroyed = 1000.000000;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.150000;
				maxDroop = 0.150000;
				sprungMass = 700;
				springStrength = 36750;
				springDamperRate = 10000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.500000, 1}, {1, 1}};
			};

			class L2: L1 {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};

			class L3: L1 {
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};

			class R1: L1 {
				side = "right";
				suspTravelDirection[] = {0.125000, -1, 0};
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
			};

			class R2: R1 {
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};

			class R3: R1 {
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		vehicleClass = "Autonomous";
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		editorSubcategory = "";
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

		class AnimationSources: AnimationSources {

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
			}; //all above here
		};
		cargoCanControlUAV = 0;
		maxSpeed = 90;
		terrainCoef = 1.200000;
		turnCoef = 5;
		precision = 10;
		acceleration = 45;

		class PlayerSteeringCoefficients {
			turnIncreaseConst = 1.000000;
			turnIncreaseLinear = 3.000000;
			turnIncreaseTime = 0.000000;
			turnDecreaseConst = 8.000000;
			turnDecreaseLinear = 0.000000;
			turnDecreaseTime = 0.000000;
			maxTurnHundred = 1.000000;
		};
		armor = 250;
		armorStructural = 4;
		damageResistance = 0.007190;
		canFloat = 0;
		enableGPS = 1;
		killFriendlyExpCoef = 0.100000;
		fuelExplosionPower = 2;
		wheelDamageThreshold = 0.700000;
		wheelDestroyThreshold = 0.990000;
		wheelDamageRadiusCoef = 0.950000;
		wheelDestroyRadiusCoef = 0.750000;
		transportSoldier = 0;
		radarTargetSize = 0.700000;
		visualTargetSize = 0.700000;
		irTargetSize = 0.500000;
		reportOwnPosition = 1;
		cargoAction = {"driver_ugv_01"};
		showNVGCargo = {1};
		driverForceOptics = 1;
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		memoryPointDriverOptics = "PiP0_pos";
		driverCompartments = "Compartment3";
		cargoCompartments = {"Compartment2"};
		forceHideDriver = 1;
		extCameraPosition = {0, 2, -7.000000};

		class ViewOptics: ViewOptics {
			visionMode[] = {"Normal", "NVG"};
			initFov = 0.850000;
			minFov = 0.850000;
			maxFov = 0.850000;
		};
		cargoIsCoDriver[] = {0, 0};
		ejectDeadGunner = 0;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectDeadCommander = 0;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;

		class HitPoints: HitPoints {

			class HitHull {
				armor = 0.700000;
				material = 50;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
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
				passThrough = 0.500000;
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

			class HitLFWheel: HitLFWheel {
				armor = 0.500000;
				name = "wheel_1_1";
			};

			class HitLF2Wheel: HitLF2Wheel {
				armor = 0.500000;
				name = "wheel_1_2";
			};

			class HitLMWheel: HitLMWheel {
				armor = 0.500000;
				name = "wheel_1_3";
			};

			class HitRFWheel: HitRFWheel {
				armor = 0.500000;
				name = "wheel_2_1";
			};

			class HitRF2Wheel: HitRF2Wheel {
				armor = 0.500000;
				name = "wheel_2_2";
			};

			class HitRMWheel: HitRMWheel {
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

		class TransportBackpacks {
		};

		class TransportMagazines {
		};

		class TransportWeapons {
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

		class Reflectors {

			class Left {
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.000000;

				class Attenuation {
					start = 1.000000;
					constant = 0;
					linear = 0;
					quadratic = 0.250000;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};

			class Right: Left {
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};

			class Right2: Right {
				position = "light_R_flare";
				useFlare = 1;
			};

			class Left2: Left {
				position = "light_L_flare";
				useFlare = 1;
			};

			class Left3: Left2 {
				position = "light_L_flare2";
				flareSize = 0.300000;
			};
		};
		aggregateReflectors[] = {{"Left", "Left2", "Left3", "Right", "Right2"}};

		class Damage {
			tex[] = {}; //later?
			mat[] = {"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_damage.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_destruct.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_damage.rvmat", "A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_destruct.rvmat", "A3\Data_F\Vehicles\Turret.rvmat", "A3\Data_F\Vehicles\Turret_damage.rvmat", "A3\Data_F\Vehicles\Turret_destruct.rvmat"};
		};

		class Components: Components {

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
		cargoProxyIndexes = {1};
		getInProxyOrder = {1};
		/*extern*/ class CargoTurret;

		class Turrets: Turrets {

			class CargoTurret_01: CargoTurret {
				gunnerAction = "passenger_flatground_4";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerName = "$STR_GETIN_POS_PASSENGER";
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				maxElev = 45;
				minElev = -5;
				maxTurn = 95;
				minTurn = -60;
				isPersonTurret = 1;
			};
		};	
	};

	class HS_UGV_rcws_base: HS_UGV_Base {
		_generalMacro = "HS_UGV_rcws_base";
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
						armor = 250;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "OtocHlaven";
						passThrough = 0.42000;
						minimalHit = 0.030000;
						explosionShielding = 0.500000;
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
					visionMode[] = {"Normal", "TI"};
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

	class HS_UGV_CIS: HS_UGV_Base {
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
	};

	/*armed*/
	class HS_UGV_GAR_rcws: HS_UGV_rcws_base {
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

	class HS_UGV_CIS_rcws: HS_UGV_rcws_base {
		_generalMacro = "HS_UGV_CIS_rcws";
		scope = 2;
		displayName = "[HS] UGV-Stompy RCWS [CIS]";
		crew = "O_UAV_AI";
		typicalCargo = {"O_Soldier_F"};
		side = 0;
		faction = "HS_CIS";
		hiddenSelectionsTextures[] = {};//"Ext", "Int", "Turret"

		class Turrets: Turrets {

			class MainTurret: MainTurret {
				weapons[] = {"HS_HMG_UGV","HS_30mm_AC"};
				magazines[] = {"HS_C_1500rnd_13mm", "HS_C_100rnd_30mm", "HS_C_100rnd_30mm"};
			};

			class CargoTurret_01: CargoTurret_01 {
			};
		};
	};
	
	class HS_UGV_IND_rcws: HS_UGV_rcws_base {
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
	};
};