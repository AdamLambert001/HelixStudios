class CfgPatches 
{ 
  class HS_Core_Weap
	{
		author = "Helix Studios";
		name = "Project Vanilla - Core Weapons & Bases";
		url = "https://discord.gg/92uxcyWmzp";
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_UI_F", 
			"SWLW_main",
			"SWLB_main",
			"HS_Core"
		};
		requiredVersion = 0.1;
		units[] = 
		{

		};
		weapons[] =
		{

		};
	};
};

/*extern*/ class Mode_SemiAuto;
/*extern*/ class Mode_Burst;
/*extern*/ class Mode_FullAuto;

class CfgAmmo {
	/*extern*/ class BulletCore;
	/*extern*/ class GrenadeBase;

	class BulletBase: BulletCore {
		/*extern*/ class SuperSonicCrack;
	};

	class HS_ammo_base_blue: BulletBase {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d"; //thanks legion
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		lightcolor[] = {0.25, 0.25, 0.5};
		flaresize = 5;
		tracerscale = 0.9;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
		nvgonly = 0;
		typicalSpeed = 950;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		effectfly = "HS_plasma_blue";
		timetolive = 5;
		inittime = 0;
		airfriction = 0;
		coefgravity = 0;
		deflecting = 0;
		waterFriction = -0.2;
		cost = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		explosionSoundEffect = "DefaultExplosion";
		cratereffects = "exploammolasercrater";
		explosioneffects = "ExploAmmoExplosion";
		audibleFire = 35;
		caliber = 0.9;
		muzzleeffect = "";
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};

		class SuperSonicCrack: SuperSonicCrack {
			superSonicCrack[] = {"", 3.162280, 1, 500};

			class A {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 10};
				sound[] = {"", 3.162280, 1, 500};
			};

			class B {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {10, 30};
				sound[] = {"", 3.162280, 1, 500};
			};

			class C {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {30, 500};
				sound[] = {"", 3.162280, 1, 500};
			};

			class SCrackForest {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"", 1, 1, 500};
				sound2[] = {"", 1, 1, 500};
				sound3[] = {"", 1, 1, 500};
				sounds[] = {"sound1", 0.333000, "sound2", 0.333000, "sound3", 0.333000};
				trigger = "forest";
			};

			class SCrackHouses {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"", 1, 1, 500};
				sound2[] = {"", 1, 1, 500};
				sound3[] = {"", 1, 1, 500};
				sounds[] = {"sound1", 0.333000, "sound2", 0.333000, "sound3", 0.333000};
				trigger = "houses max interior";
			};

			class SCrackMeadow {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"", 1, 1, 500};
				sound2[] = {"", 1, 1, 500};
				sound3[] = {"", 1, 1, 500};
				sounds[] = {"sound1", 0.333000, "sound2", 0.333000, "sound3", 0.333000};
				trigger = "meadow max sea";
			};

			class SCrackTrees {
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0, 500};
				sound1[] = {"", 1, 1, 500};
				sound2[] = {"", 1, 1, 500};
				sound3[] = {"", 1, 1, 500};
				sounds[] = {"sound1", 0.333000, "sound2", 0.333000, "sound3", 0.333000};
				trigger = "trees";
			};
		};
		bulletFly[] = {"bulletFly1", 0.083000, "bulletFly2", 0.083000, "bulletFly3", 0.083000, "bulletFly4", 0.083000, "bulletFly5", 0.083000, "bulletFly6", 0.083000, "bulletFly7", 0.083000, "bulletFly8", 0.083000, "bulletFly9", 0.083000, "bulletFly10", 0.083000, "bulletFly11", 0.083000, "bulletFly12", 0.083000};
		bulletFly1[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30}; //Again, thanks Legion Studios.
		bulletFly10[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30};
		bulletFly11[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30};
		bulletFly12[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30};
		bulletFly2[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30};
		bulletFly3[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.580000, 1, 30};
		bulletFly4[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		bulletFly5[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		bulletFly6[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		bulletFly7[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		bulletFly8[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		bulletFly9[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 2.238720, 1, 100};
		soundHit1[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		soundHit2[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		soundHit3[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		soundHit4[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		soundHit5[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		soundHit6[] = {"SWLW_main\Carbines\DC15s\sounds\DC15s_hit.wss", 1.995262, 1, 120};
		multiSoundHit[] = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};

	};

	/*Tanks, Missiles, APCs*/
	/*extern*/ class Sh_120mm_APFSDS;
	/*extern*/ class Sh_120mm_HEAT_MP;
	/*extern*/ class Sh_120mm_HE;
	/*extern*/ class Sh_125mm_APFSDS;
	/*extern*/ class Sh_125mm_HEAT;
	/*extern*/ class Sh_125mm_HE;

	/*extern*/ class M_Titan_AA;
	/*extern*/ class M_Titan_AT;
	/*extern*/ class M_Titan_AP;

	/*extern*/ class B_35mm_AA;
	/*extern*/ class B_40mm_GPR;
	/*extern*/ class B_40mm_APFSDS;
	/*extern*/ class B_30mm_APFSDS;
	/*extern*/ class B_30mm_MP;
	/*extern*/ class B_20mm;
	
	/*class HS_R_40mm_g_he: GrenadeBase {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		hit = 100;
		indirecthit = 8;
		indirecthitrange = 6;
		lightcolor[] = {0.25, 0.25, 0.50};
		flaresize = 6;
		tracerscale = 6;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
		nvgonly = 0;
		effectfly = "HS_plasma_blue";
		warheadName = "HE";
		visibleFire = 1;
		visibleFireTime = 3;
		audibleFire = 30;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		deflecting = 0;
		airfriction = -0.02;
		fuseDistance = 0;
		typicalSpeed = 200;
		caliber = 2;
		whistleDist = 28;
		coefgravity = 1;
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		explosionEffects = "GrenadeExplosion";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.162278, 1, 1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.162278, 1, 1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.162278, 1, 1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.162278, 1, 1500};
		multiSoundHit[] = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 8;
			duration = 1.0;
			frequency = 20;
			distance = 72;
		};

		class CamShakeHit {
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 2;
		};

		class CamShakeFire {
			power = 0;
			duration = 0.3;
			frequency = 20;
			distance = 0;
		};

		class CamShakePlayerFire {
			power = 0;
			frequency = 0.2;
			frequency = 20;
			distance = 1;
		};
	}; //find a use for this later*/

	class HS_R_LMG: HS_ammo_base_blue {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		tracerScale = 1;
	};

	class HS_R_HMG: HS_ammo_base_blue {
		model = "SWLW_main\Effects\laser_blue.p3d";
		hit = 30;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 15;
		suppressionRadiusBulletClose = 10;
		suppresionRadiusHit = 15;
		tracerScale = 2;
		audiblefire = 120
		brightness = 25;
		airFriction = 0;
		waterFriction = -0.2;
		caliber = 2.6;
		timetolive = 10;
		effectfly = "HS_plasma_blue";
		typicalSpeed = 900;
		ACE_caliber = 12.96;
		ACE_bulletLength = 58.67;
		ACE_bulletMass = 41.93;
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients[] = {0.670000};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.599976};
	};

	class HS_R_20mm: B_20mm {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 8;
		tracerscale = 3;
	};

	class HS_R_35mm: B_35mm_AA {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 12;
		tracerscale = 4;
	};

	class HS_R_40mm_APFSDS: B_40mm_APFSDS {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 13;
		tracerscale = 4.5;
	};

	class HS_R_40mm: B_40mm_GPR {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 13;
		tracerscale = 4.5;
	};

	class HS_R_30mm: B_30mm_MP {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 11;
		tracerscale = 3.5;
	};

	class HS_R_30mm_APFSDS: B_30mm_APFSDS {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 11;
		tracerscale = 3.5;
	};

	class HS_R_120mm_HE: Sh_120mm_HE {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 12;
		tracerscale = 10;
	};

	class HS_R_120mm_APFSDS: Sh_120mm_APFSDS {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 12;
		tracerscale = 10;
	};

	class HS_R_120mm_HEAT: Sh_120mm_HEAT_MP {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 12;
		tracerscale = 10;
	};

	class HS_R_125mm_HE: Sh_125mm_HE {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 14;
		tracerscale = 12;
	};

	class HS_R_125mm_APFSDS: Sh_125mm_APFSDS {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 14;
		tracerscale = 12;
	};

	class HS_R_125mm_HEAT: Sh_125mm_HEAT {
		author = "Helix Studios";
		model = "SWLW_main\Effects\laser_blue.p3d";
		effectfly = "HS_plasma_blue";
		flaresize = 14;
		tracerscale = 12;
	};
	//kill all the xenos; we're just xenophobic

	/*CIS*/
	class HS_ammo_base_red: HS_ammo_base_blue {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};
	
	class HS_C_LMG: HS_R_LMG {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_HMG: HS_R_HMG {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_20mm: HS_R_20mm {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_35mm: HS_R_35mm {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_40mm_APFSDS: HS_R_40mm_APFSDS {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_40mm: HS_R_40mm {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_30mm: HS_R_30mm {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_30mm_APFSDS: HS_R_30mm_APFSDS {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_120mm_HE: HS_R_120mm_HE {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_120mm_APFSDS: HS_R_120mm_APFSDS {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_120mm_HEAT: HS_R_120mm_HEAT {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_125mm_HE: HS_R_125mm_HE {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_125mm_APFSDS: HS_R_125mm_APFSDS {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};

	class HS_C_125mm_HEAT: HS_R_125mm_HEAT {
		model = "SWLW_main\Effects\laser_red.p3d";
		effectfly = "HS_plasma_red";
	};
};

class CfgMagazines {
	
	/*extern*/ class CA_Magazine;

	class HS_Base_Magazine: CA_Magazine {
		author = "Helix Studios";
		scope = 0;
		type = 0;
		reloadAction = "";
		maxLeadSpeed = 100;
		weaponPoolAvailable = 0;
	};

	/*Republic*/

	class HS_R_500rnd_LMG: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_LMG";
		count = 500;
		initSpeed = 650;
		displayName = "$STR_HS_CfgMagazines_500rnd_LMG0";
		descriptionShort = "$STR_HS_CfgMagazines_500rnd_LMG1";
	};

	class HS_R_1000rnd_LMG: HS_R_500rnd_LMG {
		count = 1000;
		displayName = "$STR_HS_CfgMagazines_1000rnd_LMG0";
		descriptionShort = "$STR_HS_CfgMagazines_1000rnd_LMG1";
	};

	class HS_R_1000rnd_rifle: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_ammo_base_blue";
		count = 1000;
		initSpeed = 600;
		displayName = "$STR_HS_CfgMagazines_1000rnd_rifle0";
		descriptionShort = "$STR_HS_CfgMagazines_1000rnd_rifle1";
	};

	class HS_R_300rnd_20mm: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_20mm";
		count = 300;
		initSpeed = 500;
		maxLeadSpeed = 30;
		nameSound = "";
		displayName = "$STR_HS_CfgMagazines_300rnd_20mm0";
		descriptionShort = "$STR_HS_CfgMagazines_300rnd_20mm1";
		muzzleImpulseFactor[] = {0.1,0.1};
	};

	class HS_R_250rnd_30mm: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_30mm";
		count = 250;
		initSpeed = 1000;
		maxLeadSpeed = 90;
		nameSound = "cannon";
		tracersEvery = 1;
		displayName = "$STR_HS_CfgMagazines_250rnd_30mm0";
		descriptionShort = "$STR_HS_CfgMagazines_250rnd_30mm1";
		muzzleImpulseFactor[] = {1.0,3};
	};

	class HS_R_100rnd_30mm: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_30mm";
		count = 100;
		initSpeed = 1000;
		maxLeadSpeed = 90;
		nameSound = "cannon";
		tracersEvery = 1;
		displayName = "$STR_HS_CfgMagazines_100rnd_30mm0";
		descriptionShort = "$STR_HS_CfgMagazines_100rnd_30mm1";
		muzzleImpulseFactor[] = {1.0,3};
	};

	class HS_R_150rnd_30mm_APFSDS: HS_R_250rnd_30mm {
		ammo = "HS_R_30mm_APFSDS";
		displayName = "$STR_HS_CfgMagazines_150rnd_30mm_APFSDS0";
		descriptionShort = "$STR_HS_CfgMagazines_150rnd_30mm_APFSDS1";
		count = 150;
		initSpeed = 1500;
		muzzleImpulseFactor[] = {0.5,2};
	};

	class HS_R_800rnd_35mm: HS_Base_Magazine {
		scope = 2; 
		ammo = "HS_R_35mm";
		count = 800;
		initSpeed = 1600;
		maxLeadSpeed = 420;
		nameSound = "cannon";
		tracersEvery = 2;
		displayName = "$STR_HS_CfgMagazines_800rnd_35mm0";
		descriptionShort = "$STR_HS_CfgMagazines_800rnd_35mm1";
		muzzleImpulseFactor[] = {1.0,3};
	};

	class HS_R_100rnd_40mm: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_40mm";
		count = 100;
		initSpeed = 1040;
		maxLeadSpeed = 90;
		nameSound = "cannon";
		tracersEvery = 1;
		displayName = "$STR_HS_CfgMagazines_100rnd_40mm0";
		descriptionShort = "$STR_HS_CfgMagazines_100rnd_40mm1";
		muzzleImpulseFactor[] = {1.0,6};
	};

	class HS_R_90rnd_40mm_APFSDS: HS_R_100rnd_40mm {
		ammo = "HS_R_40mm_APFSDS";
		displayName = "$STR_HS_CfgMagazines_90rnd_40mm_APFSDS0";
		descriptionShort = "$STR_HS_CfgMagazines_90rnd_40mm_APFSDS1";
		count = 90;
		initSpeed = 1600;
		muzzleImpulseFactor[] = {0.5,3};
	};

	class HS_R_30rnd_120mm_HE: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_120mm_HE";
		count = 30;
		initSpeed = 1450;
		maxLeadSpeed = 25;
		nameSound = "cannon";
		tracersEvery = 2;
		displayName = "$STR_HS_CfgMagazines_30rnd_120mm_HE0";
		descriptionShort = "$STR_HS_CfgMagazines_30rnd_120mm_HE1";
		muzzleImpulseFactor[] = {1.0,6};		
	};

	class HS_R_30rnd_120mm_APFSDS: HS_R_30rnd_120mm_HE {
		ammo = "HS_R_120mm_APFSDS";
		displayName = "$STR_HS_CfgMagazines_30rnd_120mm_APFSDS0";
		descriptionShort = "$STR_HS_CfgMagazines_30rnd_120mm_APFSDS1";
		initSpeed = 1700;
		muzzleImpulseFactor[] = {0.5,3};
	};

	class HS_R_30rnd_120mm_HEAT: HS_R_30rnd_120mm_HE {
		ammo = "HS_R_120mm_HEAT";
		displayName = "$STR_HS_CfgMagazines_30rnd_120mm_HEAT0";
		descriptionShort = "$STR_HS_CfgMagazines_30rnd_120mm_HEAT1";
		initSpeed = 1400;
		muzzleImpulseFactor[] = {0.5,3};
	};

	class HS_R_20rnd_125mm_HE: HS_Base_Magazine {
		scope = 2;
		ammo = "HS_R_125mm_HE";
		count = 20;
		initSpeed = 950;
		maxLeadSpeed = 25;
		nameSound = "cannon";
		tracersEvery = 2;
		displayName = "$STR_HS_CfgMagazines_20rnd_125mm_HE0";
		descriptionShort = "$STR_HS_CfgMagazines_20rnd_125mm_HE1";
		muzzleImpulseFactor[] = {1.0,8};			
	};

	class HS_R_15rnd_125mm_APFSDS: HS_R_20rnd_125mm_HE {
		ammo = "HS_R_125mm_APFSDS";
		count = 15;
		displayName = "$STR_HS_CfgMagazines_15rnd_125mm_APFSDS0";
		descriptionShort = "$STR_HS_CfgMagazines_15rnd_125mm_APFSDS1";
		initSpeed = 1800;
		muzzleImpulseFactor[] = {0.5,5};
	};

	class HS_R_15rnd_125mm_HEAT: HS_R_20rnd_125mm_HE {
		ammo = "HS_R_125mm_HEAT";
		count = 15;
		displayName = "$STR_HS_CfgMagazines_15rnd_125mm_HEAT0";
		descriptionShort = "$STR_HS_CfgMagazines_15rnd_125mm_HEAT1";
		initSpeed = 1050;
		muzzleImpulseFactor[] = {0.5,3};
	};

	class HS_R_1500rnd_13mm: HS_Base_Magazine {
		ammo = "HS_R_HMG";
		count = 1500;
		displayName = "$STR_HS_CfgMagazines_1500rnd_13mm0";
		descriptionShort = "$STR_HS_CfgMagazines_1500rnd_13mm1";
		initSpeed = 540;
	};

	/*CIS*/
	class HS_C_500rnd_LMG: HS_R_500rnd_LMG {
		ammo = "HS_C_LMG";
	};
	
	class HS_C_1000rnd_LMG: HS_R_1000rnd_LMG {
		ammo = "HS_C_LMG";
	};

	class HS_C_1000rnd_rifle: HS_R_1000rnd_rifle {
		ammo = "HS_ammo_base_red";
	};
	class HS_C_300rnd_20mm: HS_R_300rnd_20mm {
		ammo = "HS_C_20mm";
	};
	
	class HS_C_250rnd_30mm: HS_R_250rnd_30mm {
		ammo = "HS_C_30mm";
	};
	
	class HS_C_100rnd_30mm: HS_R_100rnd_30mm {
		ammo = "HS_C_30mm";
	};

	class HS_C_150rnd_30mm_APFSDS: HS_R_150rnd_30mm_APFSDS {
		ammo = "HS_C_30mm_APFSDS";
	};

	class HS_C_800rnd_35: HS_R_800rnd_35mm {
		ammo = "HS_C_35mm";
	};

	class HS_C_100rnd_40mm: HS_R_100rnd_40mm {
		ammo = "HS_C_40mm";
	};

	class HS_C_90rnd_40mm_APFSDS: HS_R_90rnd_40mm_APFSDS {
		ammo = "HS_C_40mm_APFSDS";
	};

	class H_C_30rnd_120mm_HE: HS_R_30rnd_120mm_HE {
		ammo = "HS_C_120mm_HE";
	};

	class H_C_30rnd_120mm_APFSDS: HS_R_30rnd_120mm_APFSDS {
		ammo = "HS_C_120mm_APFSDS";
	};

	class H_C_30rnd_120mm_HEAT: HS_R_30rnd_120mm_HEAT {
		ammo = "HS_C_120mm_HEAT";
	};

	class H_C_20rnd_125mm_HE: HS_R_20rnd_125mm_HE {
		ammo = "HS_C_125mm_HE";
	};

	class H_C_15rnd_125mm_APFSDS: HS_R_15rnd_125mm_APFSDS {
		ammo = "HS_C_120mm_APFSDS";
	}; 

	class H_C_15rnd_125mm_HEAT: HS_R_15rnd_125mm_HEAT {
		ammo = "HS_C_120mm_HEAT";
	};

	class H_C_1500rnd_13mm: HS_R_1500rnd_13mm {
		ammo = "HS_C_HMG";
	};
};


class cfgMods {
	author = "Helix Studios";
	timepacked = "121002052022";
};