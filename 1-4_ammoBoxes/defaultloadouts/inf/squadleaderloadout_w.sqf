// REVISION 11JAN16

//USMC Squad Leader Woodland Loadout
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

 _unit addvest "rhsusf_spc_squadleader";
 _unit addheadgear "rhsusf_mich_helmet_marpatwd_norotos_headset"; 

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "rhsusf_ANPVS_14";
 _unit unassignItem "rhsusf_ANPVS_14";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

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
 
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_Mk318_Stanag";
 _unit addmagazine "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
 _unit addmagazine "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
 
 _unit addweapon "rhs_weap_m4_carryhandle";
 _unit addPrimaryWeaponItem "RH_peq15b";
   
 _unit addmagazine "rhs_mag_m67";
 _unit addmagazine "rhs_mag_m67";   
 _unit addmagazine "rhs_mag_m18_green";
 _unit addmagazine "rhs_mag_m18_red";
 _unit addmagazine "rhs_mag_an_m8hc";
 _unit addmagazine "rhs_mag_an_m8hc";
  _unit additem "ACE_EarPlugs";
 
 _unit adduniform "rhs_uniform_FROG01_wd";