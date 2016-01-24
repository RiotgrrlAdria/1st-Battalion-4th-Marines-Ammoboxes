// REVISION 11JAN16

//USMC Corpsman Desert Loadout
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

 _unit addvest "rhsusf_spc_corpsman";
 _unit addheadgear "rhsusf_mich_helmet_marpatd"; 

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "rhsusf_ANPVS_14";
 _unit unassignItem "rhsusf_ANPVS_14";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemRadio";

 _unit addbackpack "rhsusf_assault_eagleaiii_coy";

 (unitBackpack _unit) additemCargo ["ACE_fieldDressing" ,15];
 (unitBackpack _unit) additemCargo ["ACE_packingBandage" ,15];
 (unitBackpack _unit) additemCargo ["ACE_elasticBandage" ,20];
 (unitBackpack _unit) additemCargo ["ACE_quikclot" ,15];
 (unitBackpack _unit) additemCargo ["ACE_tourniquet" ,5];
 (unitBackpack _unit) additemCargo ["ACE_epinephrine" ,8];
 (unitBackpack _unit) additemCargo ["ACE_morphine" ,8];
 (unitBackpack _unit) additemCargo ["ACE_salineIV_250" ,6];
 (unitBackpack _unit) additemCargo ["ACE_surgicalKit" ,1];

 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 
 _unit addweapon "rhs_weap_m4_carryhandle";
 _unit addPrimaryWeaponItem "RH_peq15b";
   
 _unit addmagazine "rhs_mag_m18_green";
 _unit addmagazine "rhs_mag_m18_red";
 _unit addmagazine "rhs_mag_m18_purple";
 _unit addmagazine "rhs_mag_m18_purple";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit additem "ACE_EarPlugs";
 
 _unit adduniform "rhs_uniform_FROG01_d";