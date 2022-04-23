class CfgPatches 
{ 
  class HS_Badger_IFV
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

class CfgFactionClasses 
{
    class HS_GAR;
    class HS_CIS; 
    class HS_HUTT;

};

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
};