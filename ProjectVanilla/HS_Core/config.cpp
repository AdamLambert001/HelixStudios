class CfgPatches 
{ 
  class HS_Core
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

class cfgFactionClasses 
{ 
    class HS_GAR_Fac  //Galatic Republic
    { 
        displayName = "[HS] Grand Army of the Republic"; 
        priority = 2; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\HS_UI\Map\Markers\Flags\rep_ca.paa"; //Custom Icon 
    };
	class HS_CIS_Fac  //Confederacy of Independent Systems
    { 
        displayName = "[HS] Confederacy of Independent Systems"; 
        priority = 2; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\HS_UI\Map\Markers\Flags\cis_ca.paa"; //Custom Icon 
    };
	class HS_Indep_Fac  //Independent Forces
    { 
        displayName = "[HS] Galactic Insurgents "; 
        priority = 2; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\HS_UI\Map\Markers\Flags\ins_ca.paa"; //Custom Icon 
    };
};

class CfgEditorSubcategories
{
	class HS_CAR
	{
		displayName="Cars";
	};
	class HS_TANK
	{
		displayName="Tanks";
	};
	class HS_APC
	{
		displayName="Apc";
	};
	class HS_Drone
	{
		displayName="Drones";
	};
};