
class CfgPatches {

	class ls_weapons_core {
		author = "Legion Studios";
		requiredVersion = 1;
		requiredAddons = {"CBA_Extended_EventHandlers", "CBA_MAIN", "ls_core", "LS_weapon_core", "ls_animation_reloads"};
		units = {"ls_tracer_blue_placeable", "ls_tracer_red_placeable", "ls_tracer_yellow_placeable", "ls_tracer_green_placeable", "ls_tracer_stun_placeable", "ls_muzzleflash_blue_placeable", "ls_muzzleflash_red_placeable", "ls_muzzleflash_yellow_placeable"};
		weapons = {};
	};
};
/*extern*/ class Mode_FullAuto;

class CfgAmmo {
	/*extern*/ class BulletCore;
	/*extern*/ class GrenadeBase;
	/*extern*/ class RocketBase;
	/*extern*/ class ShotgunBase;
	/*extern*/ class CMflareAmmo;
	/*extern*/ class CMFlare_Chaff_Ammo;

	class BulletBase: BulletCore {
		/*extern*/ class SuperSonicCrack;
	};

	class ls_ammo_base: BulletBase {

		class HitEffects {
			default_mat = "ls_plasma_impact";
			Hit_Foliage_Banana = "ls_plasma_impact";
			Hit_Foliage_Dead = "ls_plasma_impact";
			Hit_Foliage_green = "ls_plasma_impact";
			Hit_Foliage_Green_big = "ls_plasma_impact";
			Hit_Foliage_Palm = "ls_plasma_impact";
			Hit_Foliage_Pine = "ls_plasma_impact";
			hitBuilding = "ls_plasma_impact";
			hitConcrete = "ls_plasma_impact";
			hitFoliage = "ls_plasma_impact";
			hitGlass = "ls_plasma_impact";
			hitGlassArmored = "ls_plasma_impact";
			hitGroundHard = "ls_plasma_impact";
			hitGroundRed = "ls_plasma_impact";
			hitGroundSoft = "ls_plasma_impact";
			hitHay = "ls_plasma_impact";
			hitMan = "ls_plasma_impact";
			hitMetal = "ls_plasma_impact";
			hitMetalPlate = "ls_plasma_impact";
			hitPlastic = "ls_plasma_impact";
			hitRubber = "ls_plasma_impact";
			hitTyre = "ls_plasma_impact";
			hitVirtual = "ls_plasma_impact";
			hitWater = "ls_plasma_impact";
			hitWood = "ls_plasma_impact";
		};

		class SuperSonicCrack {
		};
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		model = "ls_weapons_core\effects\laser_blue.p3d";
		lightcolor = {0.250000, 0.250000, 0.500000};
		flaresize = 5;
		tracerscale = 1.100000;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
		nvgonly = 0;
		typicalspeed = 920;
		airlock = 1;
		irtarget = 1;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionradiushit = 8;
		aiAmmoUsageFlags = "64";
		audiblefire = 35;
		brightness = 1000;
		explosionSoundEffect = "DefaultExplosion";
		cratereffects = "exploammolasercrater";
		explosioneffects = "ExploAmmoExplosion";
		effectfly = "ls_plasma_blue";
		airfriction = -0.001200;
		waterFriction = -0.300000;
		caliber = 0.869565;
		cost = 1;
		muzzleeffect = "";
		deflecting = 0;
		inittime = 0;
		timetolive = 6;
		coefgravity = 1;
		supersoniccracknear = {};
		supersoniccrackfar = {};
		bulletFly1 = {"ls_weapons_core\sounds\whiz\whiz1.wss", 1.580000, 1, 30};
		bulletFly2 = {"ls_weapons_core\sounds\whiz\whiz2.wss", 1.580000, 1, 30};
		bulletFly3 = {"ls_weapons_core\sounds\whiz\whiz3.wss", 1.580000, 1, 30};
		bulletFly4 = {"ls_weapons_core\sounds\whiz\whiz4.wss", 2.238720, 1, 100};
		bulletFly5 = {"ls_weapons_core\sounds\whiz\whiz5.wss", 2.238720, 1, 100};
		bulletFly6 = {"ls_weapons_core\sounds\whiz\whiz6.wss", 2.238720, 1, 100};
		bulletFly7 = {"ls_weapons_core\sounds\whiz\whiz7.wss", 2.238720, 1, 100};
		bulletFly8 = {"ls_weapons_core\sounds\whiz\whiz8.wss", 2.238720, 1, 100};
		bulletFly = {"bulletFly1", 0.125000, "bulletFly2", 0.125000, "bulletFly3", 0.125000, "bulletFly4", 0.125000, "bulletFly5", 0.125000, "bulletFly6", 0.125000, "bulletFly7", 0.125000, "bulletFly8", 0.125000};
		soundHit1 = {"ls_weapons_core\sounds\impact\bbi15.wss", 1.995262, 1, 120};
		soundHit2 = {"ls_weapons_core\sounds\impact\bbi16.wss", 1.995262, 1, 120};
		soundHit3 = {"ls_weapons_core\sounds\impact\bbi17.wss", 1.995262, 1, 120};
		soundHit4 = {"ls_weapons_core\sounds\impact\bbi18.wss", 1.995262, 1, 120};
		soundHit5 = {"ls_weapons_core\sounds\impact\bbi19.wss", 1.995262, 1, 120};
		soundHit6 = {"ls_weapons_core\sounds\impact\bbi13.wss", 1.995262, 1, 120};
		multiSoundHit = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
	};

	class ls_shotgun_base: ShotgunBase {

		class HitEffects {
			default_mat = "ls_plasma_impact";
			Hit_Foliage_Banana = "ls_plasma_impact";
			Hit_Foliage_Dead = "ls_plasma_impact";
			Hit_Foliage_green = "ls_plasma_impact";
			Hit_Foliage_Green_big = "ls_plasma_impact";
			Hit_Foliage_Palm = "ls_plasma_impact";
			Hit_Foliage_Pine = "ls_plasma_impact";
			hitBuilding = "ls_plasma_impact";
			hitConcrete = "ls_plasma_impact";
			hitFoliage = "ls_plasma_impact";
			hitGlass = "ls_plasma_impact";
			hitGlassArmored = "ls_plasma_impact";
			hitGroundHard = "ls_plasma_impact";
			hitGroundRed = "ls_plasma_impact";
			hitGroundSoft = "ls_plasma_impact";
			hitHay = "ls_plasma_impact";
			hitMan = "ls_plasma_impact";
			hitMetal = "ls_plasma_impact";
			hitMetalPlate = "ls_plasma_impact";
			hitPlastic = "ls_plasma_impact";
			hitRubber = "ls_plasma_impact";
			hitTyre = "ls_plasma_impact";
			hitVirtual = "ls_plasma_impact";
			hitWater = "ls_plasma_impact";
			hitWood = "ls_plasma_impact";
		};
		effectfly = "ls_plasma_blue";
		simulation = "shotSpread";
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		lightcolor = {0.250000, 0.250000, 0.500000};
		flaresize = 5;
		tracerscale = 1.100000;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
	};

	class ls_ammo_flak: RocketBase {
		explosive = 1.800000;
		explosionForceCoef = 1;
		submunitionAmmo = "ammo_Penetrator_Titan_AT";
		hit = 80;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 8;
		dangerRadusHit = 12;
		suppressionRadusBulletClose = 6;
		suppressionRadusHit = 8;
		audiblefire = 20;
		airFriction = -0.000780;
		waterFriction = -0.300000;
		caliber = 1.600000;
		timetolive = 6;
		effectfly = "SWLW_plasma_blue";
		typicalspeed = 800;
		ACE_caliber = 7.823000;
		ACE_bulletLength = 28.955999;
		ACE_bulletMass = 9.460800;
		ACE_ammoTempMuzzleVelocityShifts = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients = {0.200000};
		cratereffects = "SWLW_plasma_he_impact";
		effectsFire = "SWLW_plasma_he_impact";
		effectsMissile = "";
		explosioneffects = "";
		indirectHit = 12;
		indirectHitRange = 4;
		explosionType = "";
		fusedistance = 0;
		thrust = 210;
		thrustTime = 1.500000;
		warheadName = "HE";
		tracerScale = 1.500000;
		airLock = 1;

		class CamShakeExplode {
			distance = "((3^0.5)*3)";
			duration = "((round (3^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(3^0.5)";
		};

		class CamShakeFire {
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};

		class CamShakeHit {
			distance = 1;
			duration = "((round (3^0.25))*0.2 max 0.2)";
			frequency = 20;
			power = 3;
		};

		class CamShakePlayerFire {
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};

		class HitEffects {
			default_mat = "ls_plasma_impact";
			Hit_Foliage_Banana = "ls_plasma_impact";
			Hit_Foliage_Dead = "ls_plasma_impact";
			Hit_Foliage_green = "ls_plasma_impact";
			Hit_Foliage_Green_big = "ls_plasma_impact";
			Hit_Foliage_Palm = "ls_plasma_impact";
			Hit_Foliage_Pine = "ls_plasma_impact";
			hitBuilding = "ls_plasma_impact";
			hitConcrete = "ls_plasma_impact";
			hitFoliage = "ls_plasma_impact";
			hitGlass = "ls_plasma_impact";
			hitGlassArmored = "ls_plasma_impact";
			hitGroundHard = "ls_plasma_impact";
			hitGroundRed = "ls_plasma_impact";
			hitGroundSoft = "ls_plasma_impact";
			hitHay = "ls_plasma_impact";
			hitMan = "ls_plasma_impact";
			hitMetal = "ls_plasma_impact";
			hitMetalPlate = "ls_plasma_impact";
			hitPlastic = "ls_plasma_impact";
			hitRubber = "ls_plasma_impact";
			hitTyre = "ls_plasma_impact";
			hitVirtual = "ls_plasma_impact";
			hitWater = "ls_plasma_impact";
			hitWood = "ls_plasma_impact";
		};

		class SuperSonicCrack {
		};
		bulletFly1 = {"ls_weapons_core\sounds\whiz\whiz1.wss", 1.580000, 1, 30};
		bulletFly2 = {"ls_weapons_core\sounds\whiz\whiz2.wss", 1.580000, 1, 30};
		bulletFly3 = {"ls_weapons_core\sounds\whiz\whiz3.wss", 1.580000, 1, 30};
		bulletFly4 = {"ls_weapons_core\sounds\whiz\whiz4.wss", 2.238720, 1, 100};
		bulletFly5 = {"ls_weapons_core\sounds\whiz\whiz5.wss", 2.238720, 1, 100};
		bulletFly6 = {"ls_weapons_core\sounds\whiz\whiz6.wss", 2.238720, 1, 100};
		bulletFly7 = {"ls_weapons_core\sounds\whiz\whiz7.wss", 2.238720, 1, 100};
		bulletFly8 = {"ls_weapons_core\sounds\whiz\whiz8.wss", 2.238720, 1, 100};
		bulletFly = {"bulletFly1", 0.125000, "bulletFly2", 0.125000, "bulletFly3", 0.125000, "bulletFly4", 0.125000, "bulletFly5", 0.125000, "bulletFly6", 0.125000, "bulletFly7", 0.125000, "bulletFly8", 0.125000};
		soundHit1 = {"ls_weapons_core\sounds\impact\bbi15.wss", 1.995262, 1, 120};
		soundHit2 = {"ls_weapons_core\sounds\impact\bbi16.wss", 1.995262, 1, 120};
		soundHit3 = {"ls_weapons_core\sounds\impact\bbi17.wss", 1.995262, 1, 120};
		soundHit4 = {"ls_weapons_core\sounds\impact\bbi18.wss", 1.995262, 1, 120};
		soundHit5 = {"ls_weapons_core\sounds\impact\bbi19.wss", 1.995262, 1, 120};
		soundHit6 = {"ls_weapons_core\sounds\impact\bbi13.wss", 1.995262, 1, 120};
		multiSoundHit = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
	};

	class ls_ammo_556_blue: ls_ammo_base {
		hit = 8;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		typicalspeed = 920;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 8;
		dangerRadusHit = 12;
		suppressionRadusBulletClose = 6;
		suppressionRadusHit = 8;
		audiblefire = 35;
		waterFriction = -0.300000;
		caliber = 0.869565;
		timetolive = 6;
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		airFriction = -0.001301;
		ACE_caliber = 5.690000;
		ACE_bulletLength = 23.011999;
		ACE_bulletMass = 4.017600;
		ACE_ammoTempMuzzleVelocityShifts = {-27.200001, -26.440001, -23.760000, -21, -17.540001, -13.100000, -7.950000, -1.620000, 6.240000, 15.480000, 27.750000};
		ACE_ballisticCoefficients = {0.151000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
		ACE_barrelLengths = {210.820007, 238.759995, 269.239990, 299.720001, 330.200012, 360.679993, 391.160004, 419.100006, 449.579987, 480.059998, 508, 609.599976};
	};

	class ls_ammo_65_blue: ls_ammo_base {
		hit = 10;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		visiblefire = 5;
		audiblefire = 60;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		typicalSpeed = 820;
		caliber = 1;
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		airFriction = -0.001301;
		tracerScale = 1.100000;
		ACE_caliber = 6.706000;
		ACE_bulletLength = 32.893002;
		ACE_bulletMass = 7.970400;
		ACE_ammoTempMuzzleVelocityShifts = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients = {0.263000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities = {730, 760, 788, 800, 810, 830};
		ACE_barrelLengths = {254, 406.399994, 508, 609.599976, 660.400024, 762};
	};

	class ls_ammo_762_blue: ls_ammo_base {
		hit = 12;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		visibleFire = 5;
		audibleFire = 70;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		typicalSpeed = 835;
		caliber = 1.800000;
		airFriction = -0.001011;
		ACE_caliber = 7.823000;
		ACE_bulletLength = 28.955999;
		ACE_bulletMass = 9.460800;
		ACE_ammoTempMuzzleVelocityShifts = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients = {0.200000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities = {700, 800, 820, 833, 845};
		ACE_barrelLengths = {254, 406.399994, 508, 609.599976, 660.400024};
	};

	class ls_ammo_9_blue: ls_ammo_base {
		hit = 5;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		airFriction = -0.002111;
		tracerScale = 0.500000;
		ACE_caliber = 9.042000;
		ACE_bulletLength = 15.494000;
		ACE_bulletMass = 7.452000;
		ACE_ammoTempMuzzleVelocityShifts = {-2.655000, -2.547000, -2.285000, -2.012000, -1.698000, -1.280000, -0.764000, -0.153000, 0.596000, 1.517000, 2.619000};
		ACE_ballisticCoefficients = {0.170000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities = {380, 390, 420, 435};
		ACE_barrelLengths = {93.500000, 101.599998, 127, 228.600006};
		typicalSpeed = 380;
	};

	class ls_ammo_45_blue: ls_ammo_base {
		hit = 6;
		audibleFire = 50;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		caliber = 1.400000;
		typicalSpeed = 280;
		tracerStartTime = 0.075000;
		tracerEndTime = 1;
		airFriction = -0.000821;
		tracerScale = 0.600000;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		ACE_caliber = 11.481000;
		ACE_bulletLength = 17.271999;
		ACE_bulletMass = 14.904000;
		ACE_ammoTempMuzzleVelocityShifts = {-2.655000, -2.547000, -2.285000, -2.012000, -1.698000, -1.280000, -0.764000, -0.153000, 0.596000, 1.517000, 2.619000};
		ACE_ballisticCoefficients = {0.195000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities = {230, 250, 285};
		ACE_barrelLengths = {101.599998, 127, 228.600006};
	};

	class ls_ammo_127x33_blue: ls_ammo_base {
		hit = 7.500000;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 50;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		visibleFireTime = 3;
		cost = 50;
		airLock = 1;
		caliber = 1;
		typicalSpeed = 420;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		airFriction = -0.002000;
	};

	class ls_ammo_127x108_blue: ls_ammo_base {
		hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 5;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		visibleFireTime = 3;
		tracerScale = 1.300000;
		cost = 5;
		airLock = 1;
		caliber = 2.800000;
		typicalSpeed = 820;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
		airFriction = -0.000651;
	};

	class ls_ammo_408_blue: ls_ammo_base {
		hit = 24;
		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3;
		caliber = 2.400000;
		typicalSpeed = 910;
		airFriction = -0.000462;
		tracerScale = 1.300000;
		ACE_caliber = 10.363000;
		ACE_bulletLength = 55.194199;
		ACE_bulletMass = 27.150700;
		ACE_transonicStabilityCoef = 1;
		ACE_muzzleVelocityVariationSD = 0.200000;
		ACE_ammoTempMuzzleVelocityShifts = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients = {0.434000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities = {867};
		ACE_barrelLengths = {736.599976};
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		CraterEffects = "ls_plasma_impact";
		explosive = 0.100000;
	};

	class ls_ammo_338_blue: ls_ammo_base {
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 80;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		caliber = 2;
		typicalSpeed = 890;
		tracerScale = 1.200000;
		airFriction = -0.000608;
		ACE_caliber = 8.585000;
		ACE_bulletLength = 39.573002;
		ACE_bulletMass = 16.200001;
		ACE_muzzleVelocityVariationSD = 0.300000;
		ACE_ammoTempMuzzleVelocityShifts = {-26.549999, -25.469999, -22.850000, -20.120001, -16.980000, -12.800000, -7.640000, -1.530000, 5.960000, 15.170000, 26.190001};
		ACE_ballisticCoefficients = {0.322000};
		ACE_velocityBoundaries = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities = {880, 915, 925};
		ACE_barrelLengths = {508, 660.400024, 711.200012};
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;
	};

	class ls_ammo_shotgun_blue: ls_shotgun_base {
		hit = 2;
		typicalSpeed = 400;
		airFriction = -0.008000;
		caliber = 1;
		deflecting = 30;
		indirectHit = 2;
		indirectHitRange = 0.400000;
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		cratereffects = "ls_plasma_impact";
		explosive = 0.100000;

		class CamShakePlayerFire {
			power = 1;
			duration = 0.100000;
			frequency = 20;
		};

		class CamShakeHit {
			power = 10;
			duration = 1;
			frequency = 20;
		};

		class CamShakeFire {
			power = 3;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
	};

	class ls_ammo_40mm_blue: GrenadeBase {
		model = "ls_weapons_core\Effects\laser_blue.p3d";
		lightcolor = {0.250000, 0.250000, 0.500000};
		flaresize = 5;
		tracerscale = 5;
		effectflare = "FlareShell";
		tracerstarttime = 0;
		tracerendtime = 10;
		nvgonly = 0;
		effectfly = "ls_plasma_blue";
		hit = 80;
		indirecthit = 8;
		indirecthitrange = 6;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		deflecting = 0;
		airFriction = -0.001000;
		fuseDistance = 0;
		typicalSpeed = 185;
		caliber = 2;
		ExplosionEffects = "ls_plasma_he_impact";
		CraterEffects = "ls_plasma_he_impact";
		whistleDist = 28;
		coefgravity = 1;
		soundHit1 = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01", 3.162278, 1, 1500};
		soundHit2 = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02", 3.162278, 1, 1500};
		soundHit3 = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03", 3.162278, 1, 1500};
		soundHit4 = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04", 3.162278, 1, 1500};
		multiSoundHit = {"soundHit1", 0.250000, "soundHit2", 0.250000, "soundHit3", 0.250000, "soundHit4", 0.250000};

		class CamShakeExplode {
			power = 8;
			duration = 1.200000;
			frequency = 20;
			distance = 74.596397;
		};

		class CamShakeHit {
			power = 20;
			duration = 0.400000;
			frequency = 20;
			distance = 1;
		};

		class CamShakeFire {
			power = 0;
			duration = 0.200000;
			frequency = 20;
			distance = 0;
		};

		class CamShakePlayerFire {
			power = 0;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};

	class ls_ammo_40mm_at: ls_ammo_40mm_blue {
		submunitionammo = "ammo_Penetrator_Titan_AT";
		hit = 550;
		typicalSpeed = 1550;
		explosive = 1;
		effectsMissile = "missile3";
		caliber = 60;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset = {0, 0, -0.500000};
	};

	class ls_ammo_556_red: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_65_red: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_762_red: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_9_red: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_45_red: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_127x108_red: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_408_red: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_338_red: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_127x33_red: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_shotgun_red: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_40mm_red: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_red.p3d";
		effectfly = "ls_plasma_red";
	};

	class ls_ammo_556_yellow: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_65_yellow: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_762_yellow: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_9_yellow: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_45_yellow: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_127x108_yellow: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_408_yellow: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_338_yellow: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_127x33_yellow: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_shotgun_yellow: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_40mm_yellow: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_yellow.p3d";
		effectfly = "ls_plasma_yellow";
	};

	class ls_ammo_556_green: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_65_green: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_762_green: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_9_green: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_45_green: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_127x108_green: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_408_green: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_338_green: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_127x33_green: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_shotgun_green: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_40mm_green: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_green.p3d";
		effectfly = "ls_plasma_green";
	};

	class ls_ammo_556_lime: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_65_lime: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_762_lime: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_9_lime: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_45_lime: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_127x108_lime: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_408_lime: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_338_lime: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_127x33_lime: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_shotgun_lime: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_40mm_lime: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_lime.p3d";
		effectfly = "ls_plasma_lime";
	};

	class ls_ammo_556_grey: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_65_grey: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_762_grey: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_9_grey: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_45_grey: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_127x108_grey: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_408_grey: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_338_grey: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_127x33_grey: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_shotgun_grey: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_40mm_grey: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_grey.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_556_ice: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_65_ice: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_762_ice: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_9_ice: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_45_ice: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_127x108_ice: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_408_ice: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_338_ice: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_127x33_ice: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_shotgun_ice: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_40mm_ice: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_ice.p3d";
		effectfly = "ls_plasma_ice";
	};

	class ls_ammo_556_heat: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_65_heat: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_762_heat: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_9_heat: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_45_heat: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_127x108_heat: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_408_heat: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_338_heat: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_127x33_heat: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_shotgun_heat: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_40mm_heat: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_heat.p3d";
		effectfly = "ls_plasma_heat";
	};

	class ls_ammo_556_aheago: ls_ammo_556_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_65_aheago: ls_ammo_65_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_762_aheago: ls_ammo_762_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_9_aheago: ls_ammo_9_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_45_aheago: ls_ammo_45_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_127x108_aheago: ls_ammo_127x108_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_408_aheago: ls_ammo_408_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_338_aheago: ls_ammo_338_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_127x33_aheago: ls_ammo_127x33_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_shotgun_aheago: ls_ammo_shotgun_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_40mm_aheago: ls_ammo_40mm_blue {
		model = "ls_weapons_core\Effects\laser_aheago.p3d";
		effectfly = "ls_plasma_grey";
	};

	class ls_ammo_CMFlare_red: CMflareAmmo {
		effectsSmoke = "ls_red_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_red: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_red_counterMeasureChaff";
	};

	class ls_ammo_CMFlare_yellow: CMflareAmmo {
		effectsSmoke = "ls_yellow_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_yellow: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_yellow_counterMeasureChaff";
	};

	class ls_ammo_CMFlare_green: CMflareAmmo {
		effectsSmoke = "ls_green_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_green: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_green_counterMeasureChaff";
	};

	class ls_ammo_CMFlare_blue: CMflareAmmo {
		effectsSmoke = "ls_blue_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_blue: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_blue_counterMeasureChaff";
	};

	class ls_ammo_CMFlare_cyan: CMflareAmmo {
		effectsSmoke = "ls_cyan_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_cyan: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_cyan_counterMeasureChaff";
	};

	class ls_ammo_CMFlare_purple: CMflareAmmo {
		effectsSmoke = "ls_purple_counterMeasureFlare";
	};

	class ls_ammo_CMFlareChaff_purple: CMFlare_Chaff_Ammo {
		effectsSmoke = "ls_purple_counterMeasureChaff";
	};
};

class CfgMagazines {
	/*extern*/ class CA_Magazine;

	class ls_mag_base: CA_Magazine {
		author = "Legion Studios";
		scope = 1;
		displayname = "Base Mag for LS infantry weapons";
		picture = "\ls_data\icons\LS_logo_ca.paa";
		initspeed = 900;
		nameSound = "magazine";
		maxLeadSpeed = 25;
		mass = 8;
		reloadaction = "";
		useactiontitle = "";
		modelspecial = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		tracersevery = 1;
		type = 256;
	};

	class ls_mag_flak_800rnd: ls_mag_base {
		scope = 2;
		displayName = "Pressurized Plasma Flak [800rnd]";
		ammo = "ls_ammo_flak";
		count = 800;
		mass = 50;
	};
};

class CfgWeapons {
	/*extern*/ class Launcher;

	class Launcher_Base_F: Launcher {
		/*extern*/ class WeaponSlotsInfo;
		/*extern*/ class GunParticles;
	};

	class ls_weapon_infantryFlak_base: Launcher_Base_F {
		author = "Legion Studios";
		picture = "\ls_data\icons\LS_logo_ca.paa";
		displayName = "Infantry Mounted Flak Cannon";
		reloadAction = "ReloadRPG";
		recoil = "ls_flak_recoil";
		magazines = {"ls_mag_flak_800rnd"};
		modes = {"FullAuto"};
		maxZeroing = 600;
		modelOptics = "";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.108300;
		opticsZoomMax = 0.108300;
		opticsZoomInit = 0.108300;
		cameraDir = "look";
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 0;

		class FullAuto: Mode_FullAuto {
			sounds = {"StandardSound"};
			/*extern*/ class BaseSoundModeType;

			class StandardSound: BaseSoundModeType {
				begin1 = {"SWLW_clones\machineguns\z6\sounds\Z6_1.wss", 1, 1, 500};
				soundBegin = {"begin1", 1};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.300000;
			midRange = 40;
			midRangeProbab = 0.850000;
			maxRange = 600;
			maxRangeProbab = 0.850000;
			dispersion = 0.030150;
		};
		drySound = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32", 0.446684, 1, 20};
		reloadMagazineSound = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32", 0.251189, 1, 10};
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.900000;
		aimTransitionSpeed = 0.500000;
		dexterity = 1.100000;
		initspeed = 110;

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
		};
		descriptionShort = "";

		class Library {
			libTextDesc = "";
		};

		class GunParticles {
		};

		class OpticsModes {

			class optic {
				opticsID = 1;
				useModelOptics = 0;
				opticsZoomMin = 0.108300;
				opticsZoomMax = 0.108300;
				opticsZoomInit = 0.108300;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode = {"Normal"};
				opticsPPEffects = {"OpticsCHAbera1", "OpticsBlur1"};
			};
		};
	};
};

class CfgVehicles {
	/*extern*/ class Items_Base_F;
	/*extern*/ class House_F;

	class ls_tracer_placeable_base: House_F {
		author = "Legion Studios";
		displayName = "==Tracer Base==";
		editorCategory = "ls_static";
		editorSubcategory = "ls_static_screenshot";
		icon = "SWLB_core\data\icons\actions\intel.paa";
		model = "ls_weapons_core\effects\laser_blue.p3d";
	};

	class ls_tracer_blue_placeable: ls_tracer_placeable_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Tracer: Blue Plasma";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\ls_tracer_blue_placeable.jpg";
		hiddenSelections = {"ends"};
		hiddenSelectionsTextures = {""};
	};

	class ls_tracer_red_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Red Plasma";
		model = "ls_weapons_core\effects\laser_red.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\ls_tracer_red_placeable.jpg";
	};

	class ls_tracer_green_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Green Plasma";
		model = "ls_weapons_core\effects\laser_green.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\ls_tracer_green_placeable.jpg";
	};

	class ls_tracer_yellow_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Yellow Plasma";
		model = "ls_weapons_core\effects\laser_yellow.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\ls_tracer_yellow_placeable.jpg";
	};

	class ls_tracer_greenBeam_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Green Beam";
		model = "ls_weapons_core\effects\green_beam1.p3d";
	};

	class ls_tracer_ice_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Ice";
		model = "ls_weapons_core\effects\laser_ice";
	};

	class ls_tracer_heat_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Heat";
		model = "ls_weapons_core\effects\laser_heat";
	};

	class ls_tracer_lime_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Lime";
		model = "ls_weapons_core\effects\laser_lime";
	};

	class ls_tracer_grey_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Grey";
		model = "ls_weapons_core\effects\laser_grey";
	};

	class ls_tracer_aheago_placeable: ls_tracer_blue_placeable {
		displayName = "Tracer: Aheago";
		model = "ls_weapons_core\effects\laser_aheago";
	};

	class ls_tracer_stun_placeable: ls_tracer_placeable_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Tracer: Stun";
		model = "ls_weapons_core\effects\stun_blue.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\ls_tracer_stun_placeable.jpg";
	};

	class ls_muzzleflash_blue_placeable: ls_tracer_placeable_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Muzzleflash: Blue";
		model = "ls_weapons_core\effects\muzzleflash_pistol_blue.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\muzzleflash_blue.jpg";
	};

	class ls_muzzleflash_red_placeable: ls_tracer_placeable_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Muzzleflash: Red";
		model = "ls_weapons_core\effects\muzzleflash_pistol_red.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\muzzleflash_red.jpg";
	};

	class ls_muzzleflash_yellow_placeable: ls_tracer_placeable_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Muzzleflash: Yellow";
		model = "ls_weapons_core\effects\muzzleflash_pistol_yellow.p3d";
		editorPreview = "ls_weapons_core\effects\data\editorPreview\muzzleflash_yellow.jpg";
	};
};

class ls_plasma_blue {

	class ls_tracer_blue_plasma {
		simulation = "light";
		type = "ls_plasmaBlue";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_yellow {

	class ls_tracer_yellow_plasma {
		simulation = "light";
		type = "ls_plasmaYellow";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_red {

	class ls_tracer_red_plasma {
		simulation = "light";
		type = "ls_plasmaRed";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_green {

	class ls_tracer_green_plasma {
		simulation = "light";
		type = "ls_plasmaGreen";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_lime {

	class ls_tracer_lime_plasma {
		simulation = "light";
		type = "ls_plasmaLime";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_heat {

	class ls_tracer_heat_plasma {
		simulation = "light";
		type = "ls_plasmaHeat";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_ice {

	class ls_tracer {
		simulation = "light";
		type = "ls_plasmaIce";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_grey {

	class ls_tracer {
		simulation = "light";
		type = "ls_plasmaGrey";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};

class ls_plasma_impact {

	class SparksLight {
		simulation = "light";
		type = "ls_sparks";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.500000;
	};

	class ImpactSparks1 {
		simulation = "particles";
		type = "ls_sparks_1";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.200000;
	};
};

class ls_plasma_he_impact {

	class SparksLight {
		simulation = "light";
		type = "ls_sparks";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.500000;
	};

	class ImpactSparks1 {
		simulation = "particles";
		type = "ls_sparks_1";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.200000;
	};

	class ImpactSparks2 {
		simulation = "particles";
		type = "ls_sparks_2";
		position = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.200000;
	};

	class grenadeExp1 {
		intensity = 1;
		interval = 1;
		lifeTime = 0.200000;
		position = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeExp";
	};

	class grenadeSmoke1 {
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = {0, 0, 0};
		simulation = "particles";
		type = "GrenadeSmoke1";
	};
};

class CfgRecoils {
	/*extern*/ class recoil_default;

	class ls_recoil: recoil_default {
		kickBack = {0.020000, 0.030000};
		muzzleOuter = {0.300000, 0.400000, 0.300000, 0.200000};
		permanent = 0.030000;
		temporary = 0.002000;
	};

	class ls_scatter_recoil: recoil_default {
		muzzleOuter = {0.300000, 1, 0.300000, 0.200000};
		muzzleInner = {0, 0, 0.100000, 0.100000};
		kickBack = {0.030000, 0.060000};
		permanent = 0.200000;
		temporary = 0.300000;
	};

	class ls_flak_recoil: recoil_default {
		kickBack = {0.045000, 0.080000};
		muzzleOuter = {0.300000, 1, 0.300000, 0.200000};
		permanent = 0.030000;
		temporary = 0.020000;
	};
};

class CfgLights {
	/*extern*/ class RocketLight;
	/*extern*/ class CmeasuresLight;

	class ls_plasmaBlue {

		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.200000;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		color = {0, 0, 1, 1};
		ambient = {0, 0, 1, 1};
		brightness = 10;
		intensity = 10000;
		drawLight = 0;
		blinking = 1;
		position = {0, 0.200000, 0};
		diffuse = {0, 0, 1};
	};

	class ls_plasmaYellow: ls_plasmaBlue {
		color = {1, 1, 0, 1};
		ambient = {1, 1, 0, 0};
		diffuse = {1, 1, 0};
	};

	class ls_plasmaRed: ls_plasmaBlue {
		color = {1, 0, 0, 1};
		ambient = {1, 0, 0, 0};
		diffuse = {1, 0, 0};
	};

	class ls_plasmaGreen: ls_plasmaBlue {
		color = {0, 1, 0, 1};
		ambient = {0, 1, 0, 0};
		diffuse = {0, 1, 0};
	};

	class ls_plasmaGray: ls_plasmaBlue {
		color = {1, 1, 1, 1};
		ambient = {1, 1, 1, 0};
		diffuse = {1, 1, 1};
	};

	class ls_plasmaLime: ls_plasmaBlue {
		color = {1, 1, 1, 1};
		ambient = {1, 1, 1, 0};
		diffuse = {1, 1, 1};
	};

	class ls_plasmaHeat: ls_plasmaRed {
	};

	class ls_plasmaIce: ls_plasmaBlue {
	};

	class ls_sparks {

		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		diffuse = {1, 0.800000, 0.800000};
		color = {1, 0.800000, 0.800000};
		ambient = {0, 0, 0, 0};
		brightness = 50;
		size = 1;
		intensity = 1000;
		drawLight = 0;
		blinking = 0;
		position = {0, 0, 0};
	};

	class ls_light_hailfireRocket: RocketLight {
		color = {1, 0.501961, 0.752941, 1};
		brightness = 10;
		intensity = 10000;
		drawLight = 0;
		blinking = 1;
	};

	class ls_red_cMeasuresLight: CmeasuresLight {
		color = {0.590000, 0, 0};
		ambient = {0.780000, 0.390000, 0.390000};
	};

	class ls_yellow_cMeasuresLight: CmeasuresLight {
		color = {0.900000, 0.960000, 0.070000};
		ambient = {0.650000, 0.670000, 0.360000};
	};

	class ls_green_cMeasuresLight: CmeasuresLight {
		color = {0, 1, 0, 1};
		ambient = {0.350000, 0.650000, 0.350000, 0};
	};

	class ls_blue_cMeasuresLight: CmeasuresLight {
		color = {0, 0, 1, 1};
		ambient = {0.150000, 0.150000, 0.650000, 0};
	};

	class ls_cyan_cMeasuresLight: CmeasuresLight {
		color = {0, 1, 1, 1};
		ambient = {0.150000, 0.650000, 0.650000, 0};
	};

	class ls_purple_cMeasuresLight: CmeasuresLight {
		color = {1, 0, 1, 1};
		ambient = {0.600000, 0.200000, 0.600000, 0};
	};

	class ls_glowrod_base {
		ambient = {0, 0, 0, 0};
		brightness = 1;
		color = {1, 1, 1, 1};
		diffuse = {1, 1, 1};
		drawLight = 0;
		intensity = 9000;
		position = {0, 0, 0};

		class Attenuation {
			constant = 1;
			hardLimitEnd = 50;
			linear = 0;
			quadratic = 50;
			start = 0;
		};
	};

	class ls_glowrod_hiGreen: ls_glowrod_base {
		color = {0.100000, 1, 0.100000, 1};
		diffuse = {0.100000, 1, 0.100000};
	};

	class ls_glowrod_hiBlue: ls_glowrod_base {
		color = {0, 0.600000, 1, 1};
		diffuse = {0, 0.600000, 1};
	};

	class ls_glowrod_hiRed: ls_glowrod_base {
		color = {1, 0.100000, 0.100000, 1};
		diffuse = {1, 0.100000, 0.100000};
	};

	class ls_glowrod_hiWhite: ls_glowrod_base {
		color = {1, 1, 1, 1};
		diffuse = {1, 1, 1};
	};

	class ls_glowrod_hiYellow: ls_glowrod_base {
		color = {1, 1, 0.100000, 1};
		diffuse = {1, 1, 0.100000};
	};

	class ls_glowrod_hiOrange: ls_glowrod_base {
		color = {1, 0.640000, 0, 1};
		diffuse = {1, 0.400000, 0};
	};
};

class CfgCloudlets {
	/*extern*/ class default;
	/*extern*/ class Missile0;
	/*extern*/ class Cmeasures1;
	/*extern*/ class Cmeasures1L;
	/*extern*/ class Cmeasures1M;
	/*extern*/ class Cmeasures2;
	/*extern*/ class Cmeasures3;

	class ls_sparks_1: default {
		interval = 0.000900;
		lifeTime = 2.500000;
		circleRadius = 0;
		circleVelocity = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		moveVelocity = {0, 0, 0};
		rotationVelocity = 1;
		weight = 100;
		volume = 0.010000;
		rubbing = 0.300000;
		size = {0.120000, 0};
		sizeCoef = 1;
		color = {{1, 0.600000, 0.400000, -50}};
		colorCoef = {1, 1, 1, 1};
		emissiveColor = {{10, 6, 4, 1}};
		animationSpeed = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		bounceOnSurface = 0.100000;
		bounceOnSurfaceVar = 0.100000;
		lifeTimeVar = 5;
		position = {0, 0, 0};
		positionVar = {0.010000, 0.010000, 0.010000};
		moveVelocityVar = {1, 3, 1};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar = {0.050000, 0.050000, 0.050000, 5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class ls_sparks_2: ls_sparks_1 {
		interval = 0.010000;
		lifeTime = 0.039000;
		weight = 1.275000;
		volume = 1;
		rubbing = 0;
		size = {0.450000, 0.225000, 0};
		lifeTimeVar = 0.020000;
		positionVar = {0, 0, 0};
		moveVelocityVar = {0, 0, 0};
		sizeVar = 0.030000;
	};

	class ls_particle_hailfireRocket: Missile0 {
		color = {{1, 0.500000, 0.752941, 0.018000}, {0, 0, 0, 0.200000}, {0, 0, 0, 0.300000}};
	};

	class ls_particle_hailfireRocketSparks: ls_sparks_1 {
		rubbing = 1;
		lifetime = 1;
		weight = 0.013000;
		moveVelocityVar = {1, 1, 1};
	};

	class ls_red_Cmeasures1: Cmeasures1 {
		color = {{0.550000, 0.100000, 0.180000, 0.400000}, {0.550000, 0.100000, 0.180000, 0.300000}, {0.860000, 0.070000, 0.240000, 0}};
	};

	class ls_red_Cmeasures1L: Cmeasures1L {
		color = {{0.590000, 0, 0, 0.400000}, {0.590000, 0, 0, 0.300000}, {0.860000, 0.070000, 0.240000, 0}};
	};

	class ls_red_Cmeasures1M: Cmeasures1M {
		color = {{0.550000, 0.100000, 0.180000, 0.400000}, {0.550000, 0.100000, 0.180000, 0.300000}, {0.860000, 0.070000, 0.240000, 0}};
	};

	class ls_red_Cmeasures2: Cmeasures2 {
		color = {{0.590000, 0, 0, -4}, {0.590000, 0, 0, -4}, {0.590000, 0, 0, -2}, {0.590000, 0, 0, 0}};
	};

	class ls_red_Cmeasures3: Cmeasures3 {
		color = {{0.770000, 0.650000, 0.650000, 1}};
	};

	class ls_yellow_Cmeasures1: Cmeasures1 {
		color = {{0.900000, 0.960000, 0.070000, 0.400000}, {0.900000, 0.960000, 0.070000, 0.300000}, {0.800000, 0.870000, 0.170000, 0}};
	};

	class ls_yellow_Cmeasures1L: Cmeasures1L {
		color = {{0.900000, 0.960000, 0.070000, 0.400000}, {0.900000, 0.960000, 0.070000, 0.300000}, {0.800000, 0.870000, 0.170000, 0}};
	};

	class ls_yellow_Cmeasures1M: Cmeasures1M {
		color = {{0.900000, 0.960000, 0.070000, 0.400000}, {0.900000, 0.960000, 0.070000, 0.300000}, {0.800000, 0.870000, 0.170000, 0}};
	};

	class ls_yellow_Cmeasures2: Cmeasures2 {
		color = {{0.900000, 0.960000, 0.070000, -4}, {0.900000, 0.960000, 0.070000, -4}, {0.900000, 0.960000, 0.070000, -2}, {0.900000, 0.960000, 0.070000, 0}};
	};

	class ls_yellow_Cmeasures3: Cmeasures3 {
		color = {{0.650000, 0.670000, 0.360000, 1}};
	};

	class ls_green_Cmeasures1: Cmeasures1 {
		color = {{0.150000, 0.850000, 0.150000, 0.400000}, {0.470000, 0.800000, 0.200000, 0.300000}, {0, 1, 0, 0}};
	};

	class ls_green_Cmeasures1L: Cmeasures1L {
		color = {{0.150000, 0.850000, 0.150000, 0.400000}, {0.470000, 0.800000, 0.200000, 0.300000}, {0, 1, 0, 0}};
	};

	class ls_green_Cmeasures1M: Cmeasures1M {
		color = {{0.150000, 0.850000, 0.150000, 0.400000}, {0.470000, 0.800000, 0.200000, 0.300000}, {0, 1, 0, 0}};
	};

	class ls_green_Cmeasures2: Cmeasures2 {
		color = {{0.150000, 0.850000, 0.150000, -4}, {0.150000, 0.850000, 0.150000, -4}, {0.150000, 0.850000, 0.150000, -2}, {0.150000, 0.850000, 0.150000, 0}};
	};

	class ls_green_Cmeasures3: Cmeasures3 {
		color = {{0.150000, 0.850000, 0.150000, 1}};
	};

	class ls_blue_Cmeasures1: Cmeasures1 {
		color = {{0, 0, 1, 0.400000}, {0.150000, 0.150000, 0.650000, 0.300000}, {0.310000, 0.310000, 0.890000, 0}};
	};

	class ls_blue_Cmeasures1L: Cmeasures1L {
		color = {{0, 0, 1, 0.400000}, {0.150000, 0.150000, 0.650000, 0.300000}, {0.310000, 0.310000, 0.890000, 0}};
	};

	class ls_blue_Cmeasures1M: Cmeasures1M {
		color = {{0, 0, 1, 0.400000}, {0.150000, 0.150000, 0.650000, 0.300000}, {0.310000, 0.310000, 0.890000, 0}};
	};

	class ls_blue_Cmeasures2: Cmeasures2 {
		color = {{0.150000, 0.150000, 0.650000, -4}, {0.150000, 0.150000, 0.650000, -4}, {0.150000, 0.150000, 0.650000, -2}, {0.150000, 0.150000, 0.650000, 0}};
	};

	class ls_blue_Cmeasures3: Cmeasures3 {
		color = {{0.150000, 0.150000, 0.650000, 1}};
	};

	class ls_cyan_Cmeasures1: Cmeasures1 {
		color = {{0, 1, 1, 0.400000}, {0.150000, 0.650000, 0.650000, 0.300000}, {0, 0.350000, 0.350000, 0}};
	};

	class ls_cyan_Cmeasures1L: Cmeasures1L {
		color = {{0, 1, 1, 0.400000}, {0.150000, 0.650000, 0.650000, 0.300000}, {0, 0.350000, 0.350000, 0}};
	};

	class ls_cyan_Cmeasures1M: Cmeasures1M {
		color = {{0, 1, 1, 0.400000}, {0.150000, 0.650000, 0.650000, 0.300000}, {0, 0.350000, 0.350000, 0}};
	};

	class ls_cyan_Cmeasures2: Cmeasures2 {
		color = {{0.150000, 0.650000, 0.650000, -4}, {0.150000, 0.650000, 0.650000, -4}, {0.150000, 0.650000, 0.650000, -2}, {0.150000, 0.650000, 0.650000, 0}};
	};

	class ls_cyan_Cmeasures3: Cmeasures3 {
		color = {{0.100000, 0.900000, 0.900000, 1}};
	};

	class ls_purple_Cmeasures1: Cmeasures1 {
		color = {{0.470000, 0.320000, 0.660000, 0.400000}, {0.750000, 0.250000, 0.750000, 0.300000}, {1, 0, 1, 0}};
	};

	class ls_purple_Cmeasures1L: Cmeasures1L {
		color = {{0.470000, 0.320000, 0.660000, 0.400000}, {0.750000, 0.250000, 0.750000, 0.300000}, {1, 0, 1, 0}};
	};

	class ls_purple_Cmeasures1M: Cmeasures1M {
		color = {{0.470000, 0.320000, 0.660000, 0.400000}, {0.750000, 0.250000, 0.750000, 0.300000}, {1, 0, 1, 0}};
	};

	class ls_purple_Cmeasures2: Cmeasures2 {
		color = {{0.750000, 0.250000, 0.750000, -4}, {0.750000, 0.250000, 0.750000, -4}, {0.750000, 0.250000, 0.750000, -2}, {0.750000, 0.250000, 0.750000, 0}};
	};

	class ls_purple_Cmeasures3: Cmeasures3 {
		color = {{0.600000, 0.400000, 0.600000, 1}};
	};
};

class ls_hailfireRocket {

	class light1 {
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position = {0, 0, 0};
		simulation = "light";
		type = "ls_light_hailfireRocket";
	};

	class MissileEffect1: light1 {
		simulation = "particles";
		type = "ls_particle_hailfireRocket";
	};

	class MissileEffect2: MissileEffect1 {
		type = "ls_particle_hailfireRocketSparks";
	};
};

class ls_red_counterMeasureFlare {

	class Cmeasures1 {
		intensity = 1;
		interval = 1;
		lifeTime = 4.500000;
		position = {0, 0, 0};
		qualityLevel = 2;
		simulation = "particles";
		type = "ls_red_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1 {
		qualityLevel = 0;
		type = "ls_red_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1 {
		qualityLevel = 1;
		type = "ls_red_Cmeasures1M";
	};

	class Cmeasures2 {
		intensity = 1;
		interval = 1;
		lifeTime = 3.200000;
		position = {0, 0, 0};
		simulation = "particles";
		type = "ls_red_Cmeasures2";
	};

	class Light1 {
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		position = {0, 0, 0};
		simulation = "light";
		type = "ls_red_cMeasuresLight";
	};
};

class ls_red_counterMeasureChaff: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		lifeTime = 8.500000;
	};

	class Cmeasures1L: Cmeasures1L {
		lifeTime = 8.500000;
	};

	class Cmeasures1M: Cmeasures1M {
		lifeTime = 8.500000;
	};

	class Cmeasures2: Cmeasures2 {
		lifeTime = 7.200000;
	};

	class Cmeasures3: Cmeasures2 {
		lifeTime = 0.500000;
		type = "ls_red_Cmeasures3";
	};

	class Light1: Light1 {
		lifeTime = 7;
	};
};

class ls_yellow_counterMeasureFlare: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		type = "ls_yellow_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_yellow_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_yellow_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_yellow_Cmeasures2";
	};

	class Light1: Light1 {
		type = "ls_yellow_cMeasuresLight";
	};
};

class ls_yellow_counterMeasureChaff: ls_red_counterMeasureChaff {

	class Cmeasures1: Cmeasures1 {
		type = "ls_yellow_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_yellow_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_yellow_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_yellow_Cmeasures2";
	};

	class Cmeasures3: Cmeasures3 {
		type = "ls_yellow_Cmeasures3";
	};

	class Light1: Light1 {
		type = "ls_yellow_cMeasuresLight";
	};
};

class ls_green_counterMeasureFlare: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		type = "ls_green_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_green_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_green_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_green_Cmeasures2";
	};

	class Light1: Light1 {
		type = "ls_green_cMeasuresLight";
	};
};

class ls_green_counterMeasureChaff: ls_red_counterMeasureChaff {

	class Cmeasures1: Cmeasures1 {
		type = "ls_green_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_green_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_green_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_green_Cmeasures2";
	};

	class Cmeasures3: Cmeasures3 {
		type = "ls_green_Cmeasures3";
	};

	class Light1: Light1 {
		type = "ls_green_cMeasuresLight";
	};
};

class ls_blue_counterMeasureFlare: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		type = "ls_blue_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_blue_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_blue_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_blue_Cmeasures2";
	};

	class Light1: Light1 {
		type = "ls_blue_cMeasuresLight";
	};
};

class ls_blue_counterMeasureChaff: ls_red_counterMeasureChaff {

	class Cmeasures1: Cmeasures1 {
		type = "ls_blue_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_blue_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_blue_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_blue_Cmeasures2";
	};

	class Cmeasures3: Cmeasures3 {
		type = "ls_blue_Cmeasures3";
	};

	class Light1: Light1 {
		type = "ls_blue_cMeasuresLight";
	};
};

class ls_cyan_counterMeasureFlare: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		type = "ls_cyan_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_cyan_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_cyan_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_cyan_Cmeasures2";
	};

	class Light1: Light1 {
		type = "ls_cyan_cMeasuresLight";
	};
};

class ls_cyan_counterMeasureChaff: ls_red_counterMeasureChaff {

	class Cmeasures1: Cmeasures1 {
		type = "ls_cyan_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_cyan_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_cyan_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_cyan_Cmeasures2";
	};

	class Cmeasures3: Cmeasures3 {
		type = "ls_cyan_Cmeasures3";
	};

	class Light1: Light1 {
		type = "ls_cyan_cMeasuresLight";
	};
};

class ls_purple_counterMeasureFlare: ls_red_counterMeasureFlare {

	class Cmeasures1: Cmeasures1 {
		type = "ls_purple_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_purple_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_purple_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_purple_Cmeasures2";
	};

	class Light1: Light1 {
		type = "ls_purple_cMeasuresLight";
	};
};

class ls_purple_counterMeasureChaff: ls_red_counterMeasureChaff {

	class Cmeasures1: Cmeasures1 {
		type = "ls_purple_Cmeasures1";
	};

	class Cmeasures1L: Cmeasures1L {
		type = "ls_purple_Cmeasures1L";
	};

	class Cmeasures1M: Cmeasures1M {
		type = "ls_purple_Cmeasures1M";
	};

	class Cmeasures2: Cmeasures2 {
		type = "ls_purple_Cmeasures2";
	};

	class Cmeasures3: Cmeasures3 {
		type = "ls_purple_Cmeasures3";
	};

	class Light1: Light1 {
		type = "ls_purple_cMeasuresLight";
	};
};

class ls_glowrod_hiBlue {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiBlue";
	};
};

class ls_glowrod_hiGreen {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiGreen";
	};
};

class ls_glowrod_hiRed {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiRed";
	};
};

class ls_glowrod_hiWhite {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiWhite";
	};
};

class ls_glowrod_hiYellow {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiYellow";
	};
};

class ls_glowrod_hiOrange {

	class Light1 {
		simulation = "light";
		type = "ls_glowrod_hiOrange";
	};
};

class cfgMods {
	author = "";
	timepacked = "1646128378";
};
