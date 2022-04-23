class CfgPatches 
{ 
  class HS_Gorgon_IFV
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

/*class CfgFactionClasses 
{
    class HS_GAR;
    class HS_CIS; 
    class HS_HUTT;

};*/

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

	class I_APC_Wheeled_03_cannon_F: Car_F 
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};

	class HS_Gorgon_IFV: I_APC_Wheeled_03_cannon_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="HS_APC";
        vehicleClass = "Armoured";
        crew = "SWLB_clone_engineer_base_P2";
        faction = "HS_GAR_Fac";
        displayName = "Gorgon APC (Gun)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {"WS_A_VEHICLES\Data\AV4\180th_APC_1.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_2.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_4.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_3.paa"};
		maxSpeed=250;
		enginePower=1000;
		redRpm=2865;
		idleRpm=450;
		maxOmega=200;
		peakTorque=3000;
		armor=950;
		armorStructural=20;
		damageResistance=0.04;
		crewCrashProtection=0.005;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HS_30mm_AC_CTWS",
					"HS_HMG_APC_127", //No work as of right now
					"missiles_titan"
				};
				magazines[]=
				{
					"HS_R_250rnd_30mm",
					"HS_R_250rnd_30mm",
					"HS_R_150rnd_30mm_APFSDS",
					"HS_R_150rnd_30mm_APFSDS",
					"HS_R_HMG",
					"HS_R_HMG",
					"2Rnd_GAT_missiles"
				};
			};
		};
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};		
    };
};