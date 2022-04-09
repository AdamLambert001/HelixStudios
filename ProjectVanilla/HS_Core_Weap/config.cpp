class CfgPatches 
{ 
  class HS_Core_Weap
	{
		author="Helix Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_UI_F", 
			"SWLW_main",
			"SWLW_clones",
			"SWLB_equipment",
			"SWLB_main",
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
/*extern*/ class Mode_SemiAuto;
/*extern*/ class Mode_Burst;
/*extern*/ class Mode_FullAuto;

class CfgAmmo {
	/*extern*/ class BulletCore;
	class BulletBase: BulletCore {
		/*extern*/ class SuperSonicCrack;
	};
	/*extern*/ class GrenadeBase;
};

class CfgMagazines {
	/*extern*/ class UGL_FlareRed_F;
	/*extern*/ class 1Rnd_Smoke_Grenade_shell;
	/*extern*/ class 1Rnd_SmokeRed_Grenade_shell;
	/*extern*/ class CA_Magazine;
};

class CfgLights {};

class CfgWeapons {
	/*extern*/ class Default;
	/*extern*/ class CannonCore;

};

class cfgMods {
	author = "Helix Studios";
	timepacked = "180009042022";
};