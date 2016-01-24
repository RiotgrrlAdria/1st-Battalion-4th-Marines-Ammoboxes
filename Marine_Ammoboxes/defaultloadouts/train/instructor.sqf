// REVISION 11JAN16

//USMC Instructor
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit addheadgear "rhs_Booniehat_marpatwd"; 
 _unit adduniform "rhs_uniform_FROG01_wd";