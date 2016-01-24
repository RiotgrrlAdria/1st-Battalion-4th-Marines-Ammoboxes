// REVISION 24JAN16

//USMC MCRT stage 1
//Basic equipment, no weapons
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit addvest "rhsusf_spc";
 _unit addheadgear "rhsusf_lwh_helmet_marpatwd"; 
 _unit adduniform "rhs_uniform_FROG01_wd";
