
class CfgPatches {

	class ls_vehicles_weapons {
		author = "Legion Studios";
		requiredAddons = {"cba_common", "cba_events", "ls_weapons"};
		requiredVersion = 0.100000;
		units = {};
		weapons = {};
	};
};
/*extern*/ class Mode_SemiAuto;
/*extern*/ class Mode_Burst;

class CfgAmmo {
	/*extern*/ class Sh_82mm_AMOS;
	/*extern*/ class GrenadeBase;
	/*extern*/ class BulletBase;
	/*extern*/ class Sh_105mm_APFSDS_T_Green;
	/*extern*/ class Sh_120mm_HE;
	/*extern*/ class Cannon_30mm_HE_Plane_CAS_02_F;
	/*extern*/ class ls_ammo_127x108_green;

	class ls_40mm_HE: GrenadeBase {
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "swlw_main\Effects\laser_red.p3d";
		effectfly = "SWLW_plasma_red";
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001000;
		fuseDistance = 1;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
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

	class ls_127x99_red: BulletBase {
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		cost = 5;
		airLock = 1;
		caliber = 2.600000;
		typicalSpeed = 880;
		timeToLive = 10;
		model = "swlw_main\Effects\laser_red.p3d";
		effectfly = "SWLW_plasma_red";
		tracerScale = 1.200000;
		tracerStartTime = 0.000010;
		tracerEndTime = 10;
		airFriction = -0.000860;

		class CamShakeExplode {
			power = 3.605550;
			duration = 0.800000;
			frequency = 20;
			distance = 10.816700;
		};

		class CamShakeHit {
			power = 13;
			duration = 0.400000;
			frequency = 20;
			distance = 1;
		};
	};

	class ls_120mm_red_ap: Sh_105mm_APFSDS_T_Green {
		caliber = 18;
		hit = 350;
		model = "swlw_main\Effects\laser_red.p3d";
		effectfly = "SWLW_plasma_red";
		flaresize = 10;
		tracerscale = 2;
	};

	class ls_120mm_red_he: Sh_120mm_HE {
		caliber = 6;
		indirectHit = 40;
		indirectHitRange = 3;
		hit = 150;
		explosive = 0.900000;
		model = "swlw_main\Effects\laser_red.p3d";
		effectfly = "SWLW_plasma_red";
		flaresize = 10;
		tracerscale = 2;
	};

	class ls_ammo_particle_red: ls_ammo_127x108_green {
		displayName = "Particle Beam [Red]";
		model = "ls_weapons_core\effects\green_beam1";
		airFriction = -0.001000;
		coefgravity = 0;
		timeToLive = 0.250000;
	};

	class ls_50mm_he: Cannon_30mm_HE_Plane_CAS_02_F {
		model = "ls_weapons_core\effects\laser_blue";
		effectfly = "ls_plasma_blue";
		flaresize = 3;
		tracerscale = 3;
		hit = 150;
		indirectHit = 10;
		indirectHitRange = 4;
		caliber = 6;
		explosive = 0.650000;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};

	class ls_50mm_apfsds: Cannon_30mm_HE_Plane_CAS_02_F {
		model = "ls_weapons_core\effects\laser_blue";
		effectfly = "ls_plasma_blue";
		flaresize = 3;
		tracerscale = 3;
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.200000;
		caliber = 10;
		explosive = 0;
		tracerStartTime = 0;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
	};

	class ls_50mm_laat_he: ls_50mm_he {
		model = "ls_weapons_core\effects\laser_green";
		effectfly = "ls_plasma_green";
		flaresize = 3;
		tracerscale = 3;
	};

	class ls_50mm_laat_apfsds: ls_50mm_apfsds {
		model = "ls_weapons_core\effects\laser_green";
		effectfly = "ls_plasma_green";
		flaresize = 3;
		tracerscale = 3;
	};

	class ls_ammo_mortar_base: Sh_82mm_AMOS {
		whistleDist = 200;
		whistleOnFire = 1;
		scope = 0;
		soundHit1 = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss", 2.511890, 1, 1900};
		soundHit2 = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit2.wss", 2.511890, 1, 1900};
		soundHit3 = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit3.wss", 2.511890, 1, 1900};
		soundHit4 = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit4.wss", 2.511890, 1, 1900};
		soundHit5 = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit5.wss", 2.511890, 1, 1900};
		multiSoundHit = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.200000, "soundHit5", 0.200000};
		soundFly = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 250};
	};

	class ls_ammo_mortar_HE: ls_ammo_mortar_base {
		scope = 1;
	};

	class ls_speeder_HE: GrenadeBase {
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "swlw_main\Effects\laser_red.p3d";
		effectfly = "SWLW_plasma_red";
		hit = 20;
		indirectHit = 8;
		indirectHitRange = 3;
		warheadName = "HE";
		visibleFire = 1;
		audibleFire = 30;
		visibleFireTime = 3;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		explosive = 1;
		cost = 10;
		deflecting = 0;
		airFriction = -0.001000;
		fuseDistance = 1;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
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
};

class CfgMagazines {
	/*extern*/ class ACE_1Rnd_82mm_Mo_HE;
	/*extern*/ class 8Rnd_82mm_Mo_shells;
	/*extern*/ class CA_Magazine;
	/*extern*/ class VehicleMagazine;
	/*extern*/ class 40Rnd_105mm_APFSDS_T_Green;
	/*extern*/ class ls_mag_base;
	/*extern*/ class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;

	class ls_50Rnd_40mm_G_belt: VehicleMagazine {
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "ls_40mm_HE";
		initSpeed = 400;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 50;
		displayName = "40mm 50Rnd HE Plasma Grenades";
		descriptionShort = "40mm HE";
		muzzleImpulseFactor = {0.100000, 0.100000};
	};

	class ls_500Rnd_127x99_mag_red: VehicleMagazine {
		displayname = "12.7x99mm 500Rnd plasma cell (Red)";
		displaynameshort = "12.7x99mm";
		scope = 2;
		count = 500;
		ammo = "ls_127x99_red";
		initSpeed = 910;
		maxLeadSpeed = 36.111099;
		tracersEvery = 1;
		nameSound = "mgun";
		muzzleImpulseFactor = {0.050000, 0.050000};
	};

	class ls_30Rnd_120mm_HE_mag_red: 40Rnd_105mm_APFSDS_T_Green {
		scope = 2;
		displayName = "120mm 30Rnd HE Plasma Rod (Red)";
		displayNameShort = "120mm HE";
		ammo = "ls_120mm_red_he";
		count = 30;
		tracersEvery = 1;
		muzzleImpulseFactor = {1, 6};
	};

	class ls_30Rnd_120mm_AP_mag_red: ls_30Rnd_120mm_HE_mag_red {
		displayName = "120mm 30Rnd AP Plasma Rod (Red)";
		displayNameShort = "120mm AP";
		ammo = "ls_120mm_red_ap";
	};

	class ls_mag_1000charge_beam: ls_mag_base {
		displayName = "1000 charge [Green]";
		ammo = "ls_ammo_particle_red";
		count = 1000;
		initSpeed = 800;
	};

	class 200rnd_saber_he_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
		author = "Legion Studios";
		displayname = "50mm HE";
		displaynameMagazine = "50mm Cannons HE";
		shortNameMagazine = "50mm Cannons HE";
		ammo = "ls_50mm_he";
		count = 200;
	};

	class 200rnd_saber_apfsds_mag: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
		author = "Legion Studios";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
		ammo = "ls_50mm_apfsds";
		count = 200;
	};

	class 200rnd_laat_he_mag: 200rnd_saber_he_mag {
		ammo = "ls_50mm_laat_he";
		displayNameShort = "50mm HE";
	};

	class 200rnd_laat_apfsds_mag: 200rnd_laat_he_mag {
		ammo = "ls_50mm_laat_apfsds";
		displayNameShort = "50mm AP";
		displayname = "50mm APFSDS";
		displaynameMagazine = "50mm Cannons APFSDS";
		shortNameMagazine = "50mm Cannons APFSDS";
	};

	class ls_mag_5rnd_mortar_HE: 8Rnd_82mm_Mo_shells {
		displayName = "HE Mortar Cartridge [5 rnd]";
		count = 5;
		descriptionShort = "Used in Mortar Launcher";
		ammo = "ls_ammo_mortar_HE";
	};

	class ls_50Rnd_speederHE_belt: VehicleMagazine {
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		ammo = "ls_speeder_HE";
		initSpeed = 350;
		maxLeadSpeed = 25;
		nameSound = "";
		count = 50;
		displayName = "50Rnd HE Plasma Cartridge";
		descriptionShort = "HE Plasma Cartridge";
		muzzleImpulseFactor = {0.100000, 0.100000};
	};

	class ls_mag_60rnd_CMFlare_red: ls_mag_base {
		displayName = "Flares";
		ammo = "ls_ammo_CMFlare_red";
		count = 60;
		initSpeed = 30;
	};

	class ls_mag_120rnd_CMFlare_red: ls_mag_60rnd_CMFlare_red {
		count = 120;
	};

	class ls_mag_240rnd_CMFlare_red: ls_mag_60rnd_CMFlare_red {
		count = 240;
	};

	class ls_mag_60rnd_CMFlareChaff_red: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlareChaff_red";
	};

	class ls_mag_120rnd_CMFlareChaff_red: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlareChaff_red";
	};

	class ls_mag_168rnd_CMFlareChaff_red: ls_mag_60rnd_CMFlareChaff_red {
		count = 168;
	};

	class ls_mag_192rnd_CMFlareChaff_red: ls_mag_60rnd_CMFlareChaff_red {
		count = 192;
	};

	class ls_mag_240rnd_CMFlareChaff_red: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlareChaff_red";
	};

	class ls_mag_300rnd_CMFlareChaff_red: ls_mag_60rnd_CMFlareChaff_red {
		count = 300;
	};

	class ls_mag_60rnd_CMFlare_yellow: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_yellow";
	};

	class ls_mag_120rnd_CMFlare_yellow: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_yellow";
	};

	class ls_mag_240rnd_CMFlare_yellow: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_yellow";
	};

	class ls_mag_60rnd_CMFlareChaff_yellow: ls_mag_60rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_120rnd_CMFlareChaff_yellow: ls_mag_120rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_168rnd_CMFlareChaff_yellow: ls_mag_168rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_192rnd_CMFlareChaff_yellow: ls_mag_192rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_240rnd_CMFlareChaff_yellow: ls_mag_240rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_300rnd_CMFlareChaff_yellow: ls_mag_300rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_yellow";
	};

	class ls_mag_60rnd_CMFlare_green: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_green";
	};

	class ls_mag_120rnd_CMFlare_green: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_green";
	};

	class ls_mag_240rnd_CMFlare_green: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_green";
	};

	class ls_mag_60rnd_CMFlareChaff_green: ls_mag_60rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_120rnd_CMFlareChaff_green: ls_mag_120rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_168rnd_CMFlareChaff_green: ls_mag_168rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_192rnd_CMFlareChaff_green: ls_mag_192rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_240rnd_CMFlareChaff_green: ls_mag_240rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_300rnd_CMFlareChaff_green: ls_mag_300rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_green";
	};

	class ls_mag_60rnd_CMFlare_blue: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_blue";
	};

	class ls_mag_120rnd_CMFlare_blue: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_blue";
	};

	class ls_mag_240rnd_CMFlare_blue: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_blue";
	};

	class ls_mag_60rnd_CMFlareChaff_blue: ls_mag_60rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_120rnd_CMFlareChaff_blue: ls_mag_120rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_168rnd_CMFlareChaff_blue: ls_mag_168rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_192rnd_CMFlareChaff_blue: ls_mag_192rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_240rnd_CMFlareChaff_blue: ls_mag_240rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_300rnd_CMFlareChaff_blue: ls_mag_300rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_blue";
	};

	class ls_mag_60rnd_CMFlare_cyan: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_cyan";
	};

	class ls_mag_120rnd_CMFlare_cyan: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_cyan";
	};

	class ls_mag_240rnd_CMFlare_cyan: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_cyan";
	};

	class ls_mag_60rnd_CMFlareChaff_cyan: ls_mag_60rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_120rnd_CMFlareChaff_cyan: ls_mag_120rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_168rnd_CMFlareChaff_cyan: ls_mag_168rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_192rnd_CMFlareChaff_cyan: ls_mag_192rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_240rnd_CMFlareChaff_cyan: ls_mag_240rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_300rnd_CMFlareChaff_cyan: ls_mag_300rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_cyan";
	};

	class ls_mag_60rnd_CMFlare_purple: ls_mag_60rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_purple";
	};

	class ls_mag_120rnd_CMFlare_purple: ls_mag_120rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_purple";
	};

	class ls_mag_240rnd_CMFlare_purple: ls_mag_240rnd_CMFlare_red {
		ammo = "ls_ammo_CMFlare_purple";
	};

	class ls_mag_60rnd_CMFlareChaff_purple: ls_mag_60rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};

	class ls_mag_120rnd_CMFlareChaff_purple: ls_mag_120rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};

	class ls_mag_168rnd_CMFlareChaff_purple: ls_mag_168rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};

	class ls_mag_192rnd_CMFlareChaff_purple: ls_mag_192rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};

	class ls_mag_240rnd_CMFlareChaff_purple: ls_mag_240rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};

	class ls_mag_300rnd_CMFlareChaff_purple: ls_mag_300rnd_CMFlareChaff_red {
		ammo = "ls_ammo_CMFlareChaff_purple";
	};
};

class CfgWeapons {
	/*extern*/ class mortar_82mm;
	/*extern*/ class mgun;
	/*extern*/ class LMG_RCWS;
	/*extern*/ class cannon_120mm;
	/*extern*/ class GMG_F;
	/*extern*/ class gatling_20mm;
	/*extern*/ class missiles_titan;
	/*extern*/ class missiles_DAR;
	/*extern*/ class CMFlareLauncher;

	class ls_weapon_DirectAttackRocket_base: missiles_DAR {
		scope = 1;
		/*extern*/ class Burst;
	};

	class ls_aat_127_base: LMG_RCWS {
		/*extern*/ class GunParticles;
		/*extern*/ class manual;
	};

	class ls_aat_120mm_base: cannon_120mm {
		/*extern*/ class GunParticles;
		/*extern*/ class TopDown;
	};

	class ls_aat_gmg: GMG_F {
		scope = 1;
		displayName = "Anti-personnel 40mm HE";
		magazines = {"ls_50Rnd_40mm_G_belt"};
		reloadMagazineSound = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG", 0.891251, 1, 20};

		class GunClouds {
		};

		class GunParticles {

			class effect1 {
				positionName = "gun_driver_l";
				directionName = "gun_driver_l_2";
				effectName = "GrenadeLauncherCloud";
			};

			class effect2 {
				positionName = "gun_driver_r";
				directionName = "gun_driver_r_2";
				effectName = "GrenadeLauncherCloud";
			};
		};
		maxZeroing = 2000;
		modes = {"manual", "close", "short", "medium", "far"};

		class manual: GMG_F {
			displayName = "$STR_A3_GMG_20mm0";
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\aat\weapon\AAT_launcher_shot.wss", 1.122018, 1, 1200};
				soundBegin = {"begin1", 1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.240000;
			dispersion = 0.003800;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 16;
			minRangeProbab = 0.100000;
			midRange = 200;
			midRangeProbab = 0.500000;
			maxRange = 400;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 5;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.500000;
			midRange = 400;
			midRangeProbab = 0.700000;
			maxRange = 800;
			maxRangeProbab = 0.700000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 700;
			minRange = 700;
			minRangeProbab = 0.700000;
			midRange = 1000;
			midRangeProbab = 0.800000;
			maxRange = 1500;
			maxRangeProbab = 0.750000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.800000;
			midRange = 1500;
			midRangeProbab = 0.750000;
			maxRange = 2000;
			maxRangeProbab = 0.100000;
		};
	};

	class ls_aat_127: ls_aat_127_base {
		displayName = "12.7mm AAT Side-mounted Guns";
		scope = 1;
		magazines = {"ls_500Rnd_127x99_mag_red"};
		maxZeroing = 2000;

		class GunParticles {

			class effect1 {
				positionName = "usti_hlavne_1";
				directionName = "konec_hlavne_1";
				effectName = "MachineGunCloud";
			};

			class effect2: effect1 {
				positionName = "usti_hlavne_2";
				directionName = "konec_hlavne_2";
			};
		};
		showAimCursorInternal = 0;

		class manual: mgun {
			TextureType = "";
			displayName = "12.7mm AAT Side Gun";
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\aat\weapon\aat_light_shot.wss", 1.584893, 1, 2100};
				soundBegin = {"begin1", 1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.100000;
			dispersion = 0.001200;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.500000;
			aiRateOfFireDispersion = 1.500000;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.700000;
			midRange = 100;
			midRangeProbab = 0.700000;
			maxRange = 200;
			maxRangeProbab = 0.200000;
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
			minRangeProbab = 0.700000;
			midRange = 400;
			midRangeProbab = 0.750000;
			maxRange = 800;
			maxRangeProbab = 0.200000;
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
			minRangeProbab = 0.750000;
			midRange = 800;
			midRangeProbab = 0.700000;
			maxRange = 1500;
			maxRangeProbab = 0.100000;
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
			minRangeProbab = 0.600000;
			midRange = 1500;
			midRangeProbab = 0.250000;
			maxRange = 2000;
			maxRangeProbab = 0.050000;
		};
	};

	class ls_aat_cannon_120mm: ls_aat_120mm_base {
		scope = 1;
		displayName = "120mm AAT Cannon";
		reloadSound = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01", 2.511886, 1, 10};
		reloadMagazineSound = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01", 2.511886, 1, 10};
		magazines = {"ls_30Rnd_120mm_HE_mag_red", "ls_30Rnd_120mm_AP_mag_red"};
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		modes = {"player", "close", "short", "medium", "far"};

		class GunParticles {

			class FirstEffect {
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};

		class player: Mode_SemiAuto {
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\aat\weapon\aat_main_shot.wss", 3.162278, 1, 1500};
				soundBegin = {"begin1", 1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.000570;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class TopDown: player {
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.400000;
			midRange = 400;
			midRangeProbab = 0.950000;
			maxRange = 8000;
			maxRangeProbab = 0.950000;
		};

		class close: player {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.500000;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.100000;
			midRange = 500;
			midRangeProbab = 0.800000;
			maxRange = 1000;
			maxRangeProbab = 0.850000;
		};

		class short: close {
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.300000;
			midRange = 1000;
			midRangeProbab = 0.850000;
			maxRange = 1500;
			maxRangeProbab = 0.850000;
		};

		class medium: close {
			dispersion = 0.000713;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.600000;
			midRange = 1500;
			midRangeProbab = 0.850000;
			maxRange = 2000;
			maxRangeProbab = 0.800000;
		};

		class far: close {
			dispersion = 0.000713;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.750000;
			midRange = 2000;
			midRangeProbab = 0.800000;
			maxRange = 3500;
			maxRangeProbab = 0.050000;
		};
	};

	class ls_weapon_beamCannon: ls_aat_127 {
		displayName = "Beam Cannon";
		magazines = {"ls_mag_1000charge_beam"};

		class manual: manual {

			class StandardSound {
			};
			reloadTime = 0.010000;
		};
	};

	class ls_saber_gun: gatling_20mm {
		displayname = "50mm Cannons";
		displaynameMagazine = "50mm Cannons";
		shortNameMagazine = "50mm Cannons";
		scope = 1;
		displayNameShort = "50mm";
		magazines = {"200rnd_saber_he_mag", "200rnd_saber_apfsds_mag", "200rnd_saber_he_mag_green", "200rnd_saber_apfsds_mag_green"};
		modes = {"FullAuto", "close", "short", "medium"};
		reloadtime = 0.137500;
		magazinereloadtime = 10;
		magazineReloadSwitchPhase = 5;

		class gunparticles {
		};

		class FullAuto: mgun {
			reloadTime = 0.137500;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.300000;
			midRange = 300;
			midRangeProbab = 0.700000;
			maxRange = 800;
			maxRangeProbab = 0.050000;
		};

		class close: FullAuto {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.040000;
			showToPlayer = 0;
		};

		class short: close {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.040000;
		};

		class medium: close {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000;
			midRange = 300;
			midRangeProbab = 0.700000;
			maxRange = 500;
			maxRangeProbab = 0.100000;
		};
	};

	class ls_laat_gun: ls_saber_gun {
		displayname = "Laat nose guns HE";
		displaynameshort = "50mm HE";
		magazines = {"200rnd_laat_he_mag"};

		class GunParticles {
		};

		class FullAuto: mgun {
			sounds = {"StandardSound"};
			/*extern*/ class BaseSoundModeType;

			class StandardSound: BaseSoundModeType {
				begin1 = {"lsd_sounds\vehicles\laat\DC-15R.wss", 1, 1, 500};
				soundBegin = {"begin1", 1};
			};
			reloadTime = 0.137500;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.300000;
			midRange = 300;
			midRangeProbab = 0.700000;
			maxRange = 800;
			maxRangeProbab = 0.050000;
		};

		class close: FullAuto {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000;
			midRange = 20;
			midRangeProbab = 0.700000;
			maxRange = 50;
			maxRangeProbab = 0.040000;
			showToPlayer = 0;
		};

		class short: close {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000;
			midRange = 150;
			midRangeProbab = 0.700000;
			maxRange = 300;
			maxRangeProbab = 0.040000;
		};

		class medium: close {
			burst = 10;
			aiRateOfFire = 0.137500;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000;
			midRange = 300;
			midRangeProbab = 0.700000;
			maxRange = 500;
			maxRangeProbab = 0.100000;
		};
	};

	class ls_laat_DAR: ls_weapon_DirectAttackRocket_base {

		class Burst: Burst {
		};
	};

	class ls_laat_gun_2: ls_laat_gun {
		magazines = {"200rnd_laat_apfsds_mag"};
		displayname = "Laat nose guns AP";
		displaynameshort = "50mm AP";
	};

	class ls_laat_gun_3: ls_laat_gun {

		class GunParticles {
		};
	};

	class ls_weapon_mortarLauncher: mortar_82mm {
		displayName = "Mortar Launcher";
		magazines = {"ls_mag_5rnd_mortar_HE"};

		class StandardSound {
			begin1 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", 1.500000, 1, 250};
			begin2 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", 1.500000, 1, 250};
			begin3 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", 1.500000, 1, 250};
			begin4 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", 1.500000, 1, 250};
			begin5 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", 1.500000, 1, 250};
			soundBegin = {"begin1", 0.150000, "begin2", 0.250000, "begin3", 0.100000, "begin4", 0.300000, "begin5", 0.200000};
		};
		reloadSound = {"\swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 2, 1, 20};
		reloadMagazineSound = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reloadMagazine.wss", 1, 1, 20};
		reloadTime = 1.800000;
		magazineReloadTime = 3;

		class Single1: Mode_SemiAuto {
			displayName = "Semi (close)";
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", 1.258930, 1, 250};
				begin2 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", 1.258930, 1, 250};
				begin3 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", 1.258930, 1, 250};
				begin4 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", 1.258930, 1, 250};
				begin5 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", 1.258930, 1, 250};
				soundBegin = {"begin1", 0.150000, "begin2", 0.250000, "begin3", 0.100000, "begin4", 0.300000, "begin5", 0.200000};
			};
			reloadSound = {"\swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 2, 1, 20};
			reloadTime = 1.300000;
			artilleryDispersion = 1.900000;
			artilleryCharge = 0.350000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class Single2: Single1 {
			displayName = "Semi (medium)";
			artilleryCharge = 0.700000;
		};

		class Single3: Single1 {
			displayName = "Semi (far)";
			artilleryCharge = 1;
		};

		class Burst1: Mode_Burst {
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 4;
			aiBurstTerminable = 1;
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", 1.258930, 1, 250};
				begin2 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", 1.258930, 1, 250};
				begin3 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", 1.258930, 1, 250};
				begin4 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", 1.258930, 1, 250};
				begin5 = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", 1.258930, 1, 250};
				soundBegin = {"begin1", 0.150000, "begin2", 0.250000, "begin3", 0.100000, "begin4", 0.300000, "begin5", 0.200000};
			};
			reloadSound = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 1, 1, 20};
			reloadTime = 1.300000;
			soundServo = {"", 0.000100, 1};
			soundBurst = 0;
			artilleryDispersion = 2.200000;
			artilleryCharge = 0.350000;
			minRange = 60;
			minRangeProbab = 0.500000;
			midRange = 290;
			midRangeProbab = 0.700000;
			maxRange = 665;
			maxRangeProbab = 0.500000;
		};

		class Burst2: Burst1 {
			showToPlayer = 0;
			displayName = "Burst (medium)";
			artilleryCharge = 0.700000;
			minRange = 230;
			minRangeProbab = 0.400000;
			midRange = 1175;
			midRangeProbab = 0.600000;
			maxRange = 2660;
			maxRangeProbab = 0.400000;
		};

		class Burst3: Burst1 {
			showToPlayer = 0;
			displayName = "Burst (far)";
			artilleryCharge = 1;
			minRange = 540;
			minRangeProbab = 0.300000;
			midRange = 2355;
			midRangeProbab = 0.400000;
			maxRange = 5500;
			maxRangeProbab = 0.300000;
		};
	};

	class ls_speeder_AP: GMG_F {
		scope = 1;
		displayName = "Anti-personnel HE Plasma";
		magazines = {"ls_50Rnd_speederHE_belt"};
		reloadMagazineSound = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG", 0.891251, 1, 20};

		class GunClouds {
		};

		class GunParticles {

			class effect1 {
				positionName = "gun_driver_l";
				directionName = "gun_driver_l_2";
				effectName = "GrenadeLauncherCloud";
			};

			class effect2 {
				positionName = "gun_driver_r";
				directionName = "gun_driver_r_2";
				effectName = "GrenadeLauncherCloud";
			};
		};
		maxZeroing = 2000;
		modes = {"manual", "close", "short", "medium", "far"};

		class manual: GMG_F {
			displayName = "$STR_A3_GMG_20mm0";
			sounds = {"StandardSound"};

			class StandardSound {
				begin1 = {"swlb_core\data\sounds\vehicles\speeder\weapon\BARC_shot.wss", 1.122018, 1, 1200};
				soundBegin = {"begin1", 1};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.240000;
			dispersion = 0.003800;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.010000;
			midRange = 1;
			midRangeProbab = 0.010000;
			maxRange = 2;
			maxRangeProbab = 0.010000;
		};

		class close: manual {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 6;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 16;
			minRangeProbab = 0.100000;
			midRange = 200;
			midRangeProbab = 0.500000;
			maxRange = 400;
			maxRangeProbab = 0.200000;
		};

		class short: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 5;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 200;
			minRange = 200;
			minRangeProbab = 0.500000;
			midRange = 400;
			midRangeProbab = 0.700000;
			maxRange = 800;
			maxRangeProbab = 0.700000;
		};

		class medium: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 2;
			burstRangeMax = 5;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 700;
			minRange = 700;
			minRangeProbab = 0.700000;
			midRange = 1000;
			midRangeProbab = 0.800000;
			maxRange = 1500;
			maxRangeProbab = 0.750000;
		};

		class far: close {
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 3;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.800000;
			midRange = 1500;
			midRangeProbab = 0.750000;
			maxRange = 2000;
			maxRangeProbab = 0.100000;
		};
	};

	class ls_weapon_CMFlareLauncher: CMFlareLauncher {
		magazines = {"60Rnd_CMFlareMagazine", "120Rnd_CMFlareMagazine", "240Rnd_CMFlareMagazine", "60Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "192Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine", "ls_mag_60rnd_CMFlare_red", "ls_mag_120rnd_CMFlare_red", "ls_mag_240rnd_CMFlare_red", "ls_mag_60rnd_CMFlareChaff_red", "ls_mag_120rnd_CMFlareChaff_red", "ls_mag_168rnd_CMFlareChaff_red", "ls_mag_192rnd_CMFlareChaff_red", "ls_mag_240rnd_CMFlareChaff_red", "ls_mag_300rnd_CMFlareChaff_red", "ls_mag_60rnd_CMFlare_yellow", "ls_mag_120rnd_CMFlare_yellow", "ls_mag_240rnd_CMFlare_yellow", "ls_mag_60rnd_CMFlareChaff_yellow", "ls_mag_120rnd_CMFlareChaff_yellow", "ls_mag_168rnd_CMFlareChaff_yellow", "ls_mag_192rnd_CMFlareChaff_yellow", "ls_mag_240rnd_CMFlareChaff_yellow", "ls_mag_300rnd_CMFlareChaff_yellow", "ls_mag_60rnd_CMFlare_green", "ls_mag_120rnd_CMFlare_green", "ls_mag_240rnd_CMFlare_green", "ls_mag_60rnd_CMFlareChaff_green", "ls_mag_120rnd_CMFlareChaff_green", "ls_mag_168rnd_CMFlareChaff_green", "ls_mag_192rnd_CMFlareChaff_green", "ls_mag_240rnd_CMFlareChaff_green", "ls_mag_300rnd_CMFlareChaff_green", "ls_mag_60rnd_CMFlare_blue", "ls_mag_120rnd_CMFlare_blue", "ls_mag_240rnd_CMFlare_blue", "ls_mag_60rnd_CMFlareChaff_blue", "ls_mag_120rnd_CMFlareChaff_blue", "ls_mag_168rnd_CMFlareChaff_blue", "ls_mag_192rnd_CMFlareChaff_blue", "ls_mag_240rnd_CMFlareChaff_blue", "ls_mag_300rnd_CMFlareChaff_blue", "ls_mag_60rnd_CMFlare_cyan", "ls_mag_120rnd_CMFlare_cyan", "ls_mag_240rnd_CMFlare_cyan", "ls_mag_60rnd_CMFlareChaff_cyan", "ls_mag_120rnd_CMFlareChaff_cyan", "ls_mag_168rnd_CMFlareChaff_cyan", "ls_mag_192rnd_CMFlareChaff_cyan", "ls_mag_240rnd_CMFlareChaff_cyan", "ls_mag_300rnd_CMFlareChaff_cyan", "ls_mag_60rnd_CMFlare_purple", "ls_mag_120rnd_CMFlare_purple", "ls_mag_240rnd_CMFlare_purple", "ls_mag_60rnd_CMFlareChaff_purple", "ls_mag_120rnd_CMFlareChaff_purple", "ls_mag_168rnd_CMFlareChaff_purple", "ls_mag_192rnd_CMFlareChaff_purple", "ls_mag_240rnd_CMFlareChaff_purple", "ls_mag_300rnd_CMFlareChaff_purple"};
	};
};

class ace_csw_groups {

	class ls_mag_5rnd_mortar_HE {
		ls_mag_5rnd_mortar_HE = 5;
	};
};

class cfgMods {
	author = "";
	timepacked = "1643966394";
};
