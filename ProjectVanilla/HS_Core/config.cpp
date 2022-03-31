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
        displayName = "[HS] Galactic Republic Arsenal"; 
        priority = 2; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };
	class HS_CIS_Fac  //Galatic Republic
    { 
        displayName = "[HS] Confederacy Arsenal"; 
        priority = 2; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };
	class HS_Indep_Fac  //Galatic Republic
    { 
        displayName = "[HS] Independant Arsenal"; 
        priority = 2; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };
};