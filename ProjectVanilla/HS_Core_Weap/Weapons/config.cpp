class CfgPatches 
{ 
  class HS_Weapons
	{
		author="Helix Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_UI_F", 
			"SWLW_main",
			"SWLB_main",
            "HS_Core_Weap",
			"HS_Core"
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

class cfgWeapons 
{
	class gatling_30mm_base;
	class autocannon_30mm_CTWS;
	class MGun;
	class LMG_RCWS: MGun {};
	class lowROF;
	class LMG_coax;

	class HS_30mm_AC_CTWS: autocannon_30mm_CTWS {
		scope = 2;
		author = "Helix Studios";
		displayName = "AutoCannon 30mm CTWS";
		magazines[] = {};
		muzzles[] = {"HE","AP"};
		class HE: autocannon_30mm_CTWS {
			displayName = "AutoCannon 30mm HE";
			magazines[] = {"HS_R_100rnd_30mm","HS_R_250rnd_30mm","HS_C_100rnd_30mm","HS_C_250rnd_30mm"};
			class LowROF: LowROF {
				dispersion = 0.0055;
			};
		};
		class AP: autocannon_30mm_CTWS {
			displayName = "AutoCannon 30mm APFSDS";
			magazines[] = {"HS_R_150rnd_30mm_APFSDS","HS_C_150rnd_30mm_APFSDS"};
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

	/*HMG*/
	class HS_HMG_APC_127: LMG_RCWS {
		scope = 2;
		author = "Helix Studios";
		displayName = "12.7 Gatling Gun";
		magazines[] = {"HS_R_1500rnd_13mm"};
		maxZeroing = 2500;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};

	class HS_HMG_MBT_127: HS_HMG_APC_127 {
		class GunParticles
		{
			class effect1
			{
				positionName = "commander_gun_muzzle_pos";
				directionName = "commander_gun_muzzle_end";
				effectName = "MachineGunCloud";
			};
		};
	};

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

	/*LMG*/
	class HS_LMG_APC_762: LMG_RCWS {
		scope = 2;
		author = "Helix Studios";
		displayName = "7.62 Gatling Gun";
		magazines[] = {"HS_R_500rnd_LMG", "HS_R_1000rnd_LMG", "HS_R_2000rnd_LMG", "HS_C_500rnd_LMG", "HS_C_1000rnd_LMG", "HS_C_2000rnd_LMG"};
		maxZeroing = 2500;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};

	class HS_LMG_coax: LMG_coax {
		displayName = "$STR_HS_cfgweapons_coaxial_mg0";
		magazines[] = {"HS_R_500rnd_LMG", "HS_R_1000rnd_LMG", "HS_R_2000rnd_LMG", "HS_C_500rnd_LMG", "HS_C_1000rnd_LMG", "HS_C_2000rnd_LMG"};
	};
	class HS_LMG_coax_ext: HS_LMG_coax {
		magazineReloadTime = 20;
	};
};