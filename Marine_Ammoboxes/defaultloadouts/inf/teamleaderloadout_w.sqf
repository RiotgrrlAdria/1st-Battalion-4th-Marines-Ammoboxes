// REVISION 24JAN16

//USMC Team Leader Desert Loadout
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

_unit addvest "rhsusf_spc_teamleader";
 _unit addheadgear "rhsusf_lwh_helmet_marpatd_ess";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "rhsusf_ANPVS_14";
 _unit unassignItem "rhsusf_ANPVS_14";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";
 _unit additem "itemandroid";

 _unit additem "itemRadio";
 _unit additem "ItemCtabHCam";
 _unit additem "ACE_CableTie";
 _unit additem "ACE_CableTie";
 _unit additem "ACE_key_lockpick";
 _unit additem "ACE_EarPlugs";
 
 //IFAK
  
 _unit additem "ACE_fieldDressing";
 _unit additem "ACE_fieldDressing";
 _unit additem "ACE_fieldDressing";
 _unit additem "ACE_packingBandage";
 _unit additem "ACE_packingBandage";
 _unit additem "ACE_packingBandage";
 _unit additem "ACE_elasticBandage";
 _unit additem "ACE_elasticBandage";
 _unit additem "ACE_elasticBandage";
 _unit additem "ACE_quikclot";
 _unit additem "ACE_quikclot";
 _unit additem "ACE_quikclot";
 _unit additem "ACE_tourniquet";
 
  _unit addbackpack "rhsusf_assault_eagleaiii_coy";
 (unitBackpack _unit) additemCargo ["rhs_mag_30Rnd_556x45_Mk318_Stanag" ,5];
 (unitBackpack _unit) additemCargo ["rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red" ,2];
 (unitBackpack _unit) additemCargo ["rhs_mag_M441_HE" ,7];
 (unitBackpack _unit) additemCargo ["rhs_mag_M713_red" ,2];
 (unitBackpack _unit) additemCargo ["SmokeShellBlue" ,1];
 (unitBackpack _unit) additemCargo ["rhs_mag_M714_white" ,6];
 (unitBackpack _unit) additemCargo ["rhs_mag_M715_green" ,6];

 
 _unit addweapon "rhs_weap_m4_m203";
 _unit addPrimaryWeaponItem "RH_peq15b";
   
 _unit addmagazine "rhs_mag_m67";
 _unit addmagazine "rhs_mag_m67";   
 _unit addmagazine "rhs_mag_m18_green";
 _unit addmagazine "rhs_mag_m18_blue";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit addmagazine "rhs_mag_an_m8hc";
  _unit additem "ACE_EarPlugs";
 
 _unit adduniform "rhs_uniform_FROG01_d";
