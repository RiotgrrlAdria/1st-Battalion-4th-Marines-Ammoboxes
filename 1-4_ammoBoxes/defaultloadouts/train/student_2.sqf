// REVISION 11JAN16

//USMC Student Stage 2
//Includes all basic equipment including weapons, but no magazines.

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

 _unit addvest "rhsusf_spc";
 _unit addheadgear "rhsusf_mich_helmet_marpatwd"; 

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "rhsusf_ANPVS_14";
 _unit unassignItem "rhsusf_ANPVS_14";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";
 _unit additem "tf_microdagr";
 _unit assignitem "tf_microdagr";

 _unit additem "tf_rf7800str";
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
 
 
 _unit addweapon "rhs_weap_m16a4_carryhandle";
  _unit adduniform "rhs_uniform_FROG01_wd";
