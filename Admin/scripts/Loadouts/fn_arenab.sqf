removeAllWeapons Player;
removeAllItems Player;
removeAllAssignedItems Player;
removeUniform Player;
removeVest Player;
removeBackpack Player;
removeHeadgear Player;
removeGoggles Player;
//Weapons
Player addWeapon "JLTS_DC15S";
Player addPrimaryWeaponItem "JLTS_DC15A_mag";
//Armor
Player forceAddUniform "180th_Arena_B_Uniform";
Player addVest "180th_Trooper_Vest";
Player addBackpack "180th_clone_bags";
//Additionals
Player addMagazine "Laserbatteries";
Player addWeapon "SWLB_clone_commander_binocular";
//Container
for "_i" from 1 to 4 do {Player addItemToVest "JLTS_DC15A_mag";};
for "_i" from 1 to 20 do {Player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 5 do {Player addItemToBackpack "ACE_tourniquet";};
Player addItemToBackpack "JLTS_stun_mag_short";
Player addHeadgear "180th_Arena_B_Helmet";
//OtherShit
Player linkItem "ItemMap";
Player linkItem "ItemCompass";
Player linkItem "ItemcTab";