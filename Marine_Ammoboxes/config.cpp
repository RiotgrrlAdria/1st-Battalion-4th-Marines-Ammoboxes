#define VERSION_DATE	24.01.16 // release date (DD.MM.YY) is used for the version
#include "script_macros.hpp"

//24.01.16 update: updated the folders to point from Marine_Ammoboxes to Marine_Ammoboxes. Also did some tiding


class CfgPatches
{
	class Marine_Ammoboxes
		{
		units[] = 
		{
			"Box_mar_bas",
			"Box_mar_lce",
			"Box_mar_hq",
			"Box_mar_inf",
			"Box_mar_suply",
			"Box_mar_wep",
			"Box_mar_vehicle",
			"Box_mar_soi_student",
			"Box_mar_soi_instructor",
			"Box_mar_empty",
			"mar_sign_armory",
			"mar_sign_bas",
			"mar_sign_empty",
			"mar_sign_hq",
			"mar_sign_rifle",
			"mar_sign_weapons",
			"mar_flag_usmc"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		version = VERSION_DATE;
	};
};

class CfgNotifications 
{
	class mar_vicCrates 
	{
		title = "1/4 Vehicle Crate";
		iconPicture = "%1";
		iconText = "";
		description = "%2";
		color[] = {1,1,1,1};
		duration = 3;
		priority = 0;
		difficulty[] = {};
	};
};

class CfgFunctions
{
	class mar {
		class crate {
			file = "\Marine_Ammoboxes\crateFunctions";
			class vehicleLoadout {};
			class crate {};
		};
		class manager {
			file = "\Marine_Ammoboxes\loadoutManager";
			class manager {};
		};
	};
};

class CfgVehicleClasses
{
	class Marine_Ammoboxes { displayName = "[1/4] Ammo Boxes"; };
	class mar_signs { displayName = "[1/4] Signs"; };
};

class CfgVehicles
{	
	
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class Box_mar_bas: B_supplyCrate_F  
	{
		mar_CRATE_INFO([1/4] BAS Box)
		mar_CRATE_TEXTURE(front_bas_co)

		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{
			{"1/4 BAS Corpsman Desert Loadout","bas\corpsmanloadout_d.sqf"},
			{"1/4 BAS Corpsman Woodland Loadout","bas\corpsmanloadout_w.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS	
			mar_CLASS_ITEM(rhsusf_spc_corpsman,15)
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_surgicalKit,50)
			mar_CLASS_ITEM(ACE_tourniquet,100)
			mar_CLASS_ITEM(ACE_epinephrine,100)
			mar_CLASS_ITEM(ace_Morphine,100)
			mar_CLASS_ITEM(ACE_atropine,100)
			mar_CLASS_ITEM(ACE_bloodIV,100)
			mar_CLASS_ITEM(ACE_bloodIV_500,100)
			mar_CLASS_ITEM(ACE_bloodIV_250,100)
			mar_CLASS_ITEM(ACE_plasmaIV,100)
			mar_CLASS_ITEM(ACE_plasmaIV_500,100)
			mar_CLASS_ITEM(ACE_plasmaIV_250,100)
			mar_CLASS_ITEM(ACE_salineIV,100)
			mar_CLASS_ITEM(ACE_salineIV_500,100)
			mar_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			
			// AMMO
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			
			// WEAPONS
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			mar_CLASS_WEAP(rhs_weap_m16a4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)			
		
		};
	};
	
	class Box_mar_inf: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Infantry Box)	
		mar_CRATE_TEXTURE(front_inf_final_co)
		
		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{
			{"1/4 HQ Woodland Loadout","inf\squadleaderloadout_w.sqf"},
			{"1/4 HQ Desert Loadout","inf\squadleaderloadout_D.sqf"},
			{"Squad Leader Woodland Loadout","inf\squadleaderloadout_w.sqf"},
			{"Squad Leader Desert Loadout","inf\squadleaderloadout_d.sqf"},
			{"Teamleader Woodland Loadout","inf\teamleaderloadout_w.sqf"},
			{"Teamleader Desert Loadout","inf\teamleaderloadout_d.sqf"},
			{"Rifleman Woodland Loadout","inf\riflemanloadout_w.sqf"},
			{"Rifleman Desert Loadout","inf\riflemanloadout_d.sqf"},
			{"AR M27 IAR Woodland","inf\autoriflemanloadout_w.sqf"},
			{"AR M27 IAR Desert","inf\autoriflemanloadout_d.sqf"},
			{"Asst AR Woodland Loadout","inf\aarloadout_w.sqf"},
			{"Asst AR Desert Loadout","inf\aarloadout_d.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			mar_CLASS_ITEM(rhsusf_spc,15)
			mar_CLASS_ITEM(rhsusf_spc_rifleman,15)
			mar_CLASS_ITEM(rhsusf_spc_iar,15)			
			mar_CLASS_ITEM(rhsusf_spc_light,15)
			mar_CLASS_ITEM(rhsusf_spc_marksman,15)
			mar_CLASS_ITEM(rhsusf_spc_mg,15)			
			mar_CLASS_ITEM(rhsusf_spc_squadleader,15)
			mar_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(Laserdesignator,50)
			mar_CLASS_ITEM(Laserbatteries,50)
			mar_CLASS_ITEM(ALiVE_Tablet,50)			
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_RangeCard,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ACE_Altimeter,50)
			mar_CLASS_ITEM(ACE_Kestrel4500,50)
			mar_CLASS_ITEM(ACE_UAVBattery,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ACE_SpareBarrel,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			mar_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			mar_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			mar_CLASS_MAG(rhs_m136_hp_mag,10)
			mar_CLASS_MAG(rhs_m136_hedp_mag,10)
			mar_CLASS_MAG(rhs_m136_mag,10)
			mar_CLASS_MAG(rhs_fim92_mag,10)
			mar_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(rhs_mag_M441_HE,100)
			mar_CLASS_MAG(rhs_mag_M433_HEDP,100)
			mar_CLASS_MAG(rhs_mag_M661_green,50)
			mar_CLASS_MAG(rhs_mag_M662_red,50)
			mar_CLASS_MAG(rhs_mag_M585_white,50)			
			mar_CLASS_MAG(rhs_mag_M713_red,50)
			mar_CLASS_MAG(rhs_mag_M714_white,50)
			mar_CLASS_MAG(rhs_mag_M715_green,50)
			mar_CLASS_MAG(rhs_mag_M716_yellow,50)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			mar_CLASS_WEAP(rhs_weap_m4_m203,20)
			mar_CLASS_WEAP(rhs_weap_m240G,20)
			mar_CLASS_WEAP(rhs_weap_m27iar,20)
			mar_CLASS_WEAP(rhs_weap_m249_pip,20)
			mar_CLASS_WEAP(rhs_weap_M136,20)			
			mar_CLASS_WEAP(rhs_weap_M136_hedp,20)
			mar_CLASS_WEAP(rhs_weap_M136_hp,20)
			mar_CLASS_WEAP(rhs_weap_fgm148,20)
			mar_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
			mar_CLASS_BAG(ACE_TacticalLadder_Pack,15)			
		};
	};
	
	class Box_mar_wep: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Weapons Box)
		mar_CRATE_TEXTURE(front_wpns_co)

		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			mar_CLASS_ITEM(rhs_Booniehat_m81,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_m81,15)
			
			// VESTS
			mar_CLASS_ITEM(rhsusf_spc,15)
			mar_CLASS_ITEM(rhsusf_spc_rifleman,15)
			mar_CLASS_ITEM(rhsusf_spc_iar,15)			
			mar_CLASS_ITEM(rhsusf_spc_corpsman,15)
			mar_CLASS_ITEM(rhsusf_spc_crewman,15)
			mar_CLASS_ITEM(rhsusf_spc_light,15)
			mar_CLASS_ITEM(rhsusf_spc_marksman,15)
			mar_CLASS_ITEM(rhsusf_spc_mg,15)			
			mar_CLASS_ITEM(rhsusf_spc_squadleader,15)
			mar_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(Laserdesignator,50)
			mar_CLASS_ITEM(Laserbatteries,50)
			mar_CLASS_ITEM(ALiVE_Tablet,50)			
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_RangeCard,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ACE_Altimeter,50)
			mar_CLASS_ITEM(ACE_Kestrel4500,50)
			mar_CLASS_ITEM(ACE_UAVBattery,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ACE_SpareBarrel,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			mar_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			mar_CLASS_MAG(rhs_m136_hp_mag,10)
			mar_CLASS_MAG(rhs_m136_hedp_mag,10)
			mar_CLASS_MAG(rhs_m136_mag,10)
			mar_CLASS_MAG(rhs_fim92_mag,10)
			mar_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(rhs_mag_M441_HE,100)
			mar_CLASS_MAG(rhs_mag_M433_HEDP,100)
			mar_CLASS_MAG(rhs_mag_M661_green,50)
			mar_CLASS_MAG(rhs_mag_M662_red,50)
			mar_CLASS_MAG(rhs_mag_M585_white,50)			
			mar_CLASS_MAG(rhs_mag_M713_red,50)
			mar_CLASS_MAG(rhs_mag_M714_white,50)
			mar_CLASS_MAG(rhs_mag_M715_green,50)
			mar_CLASS_MAG(rhs_mag_M716_yellow,50)
			mar_CLASS_MAG(ace_M84,100)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			mar_CLASS_WEAP(rhs_weap_m4_m203,20)
			mar_CLASS_WEAP(rhs_weap_m240G,20)
			mar_CLASS_WEAP(rhs_weap_m249_pip,20)
			mar_CLASS_WEAP(rhs_weap_M136,20)			
			mar_CLASS_WEAP(rhs_weap_M136_hedp,20)
			mar_CLASS_WEAP(rhs_weap_M136_hp,20)
			mar_CLASS_WEAP(rhs_weap_fgm148,20)
			mar_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
			mar_CLASS_BAG(ACE_TacticalLadder_Pack,15)			
		
		};
	};
		
	class Box_mar_hq: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] HQ Box)
		mar_CRATE_TEXTURE(front_hq_co)

		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			mar_CLASS_ITEM(rhsusf_spc,15)
			mar_CLASS_ITEM(rhsusf_spc_crewman,15)
			mar_CLASS_ITEM(rhsusf_spc_light,15)
			mar_CLASS_ITEM(rhsusf_spc_squadleader,15)
			mar_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(Laserdesignator,50)
			mar_CLASS_ITEM(Laserbatteries,50)
			mar_CLASS_ITEM(ALiVE_Tablet,50)			
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_RangeCard,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ACE_Altimeter,50)
			mar_CLASS_ITEM(ACE_Kestrel4500,50)
			mar_CLASS_ITEM(ACE_UAVBattery,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ACE_SpareBarrel,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {

			// AMMO
			mar_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			mar_CLASS_WEAP(rhsusf_weap_m9,20)
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
		};
	};
	
	class Box_mar_lce: B_supplyCrate_F 
	{
		mar_CRATE_INFO([1/4] Logistics Box)
		mar_CRATE_TEXTURE(front_clb_co)
		
		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			mar_CLASS_ITEM(rhsusf_spc,15)
			mar_CLASS_ITEM(rhsusf_spc_crewman,15)
			mar_CLASS_ITEM(rhsusf_spc_light,15)
			mar_CLASS_ITEM(rhsusf_spc_squadleader,15)
			mar_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_tourniquet,100)

		    
			// ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
		};
		class TransportMagazines {
			// AMMO
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(rhs_mag_M441_HE,100)
			mar_CLASS_MAG(rhs_mag_M433_HEDP,100)
			mar_CLASS_MAG(rhs_mag_M661_green,50)
			mar_CLASS_MAG(rhs_mag_M662_red,50)
			mar_CLASS_MAG(rhs_mag_M585_white,50)			
			mar_CLASS_MAG(rhs_mag_M713_red,50)
			mar_CLASS_MAG(rhs_mag_M714_white,50)
			mar_CLASS_MAG(rhs_mag_M715_green,50)
			mar_CLASS_MAG(rhs_mag_M716_yellow,50)
			mar_CLASS_MAG(ace_M84,100)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)			
		
		};
	};
	
	class Box_mar_soi_student: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Student Box)
		mar_CRATE_TEXTURE(front_student_co)
	
		mar_MANAGER = 0;
		mar_LOADOUTS[] = 
		{
			{"1/4 Student, Stage 1 Loadout","train\student_1.sqf"},
			{"1/4 Student, Stage 2 Loadout","train\student_2.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			mar_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			mar_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			mar_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			
			
			
			
			// GOGGLES
			mar_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_ess,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_marpatwd_headset,15)
			mar_CLASS_ITEM(rhsusf_lwh_helmet_M1942,15)
			mar_CLASS_ITEM(rhs_Booniehat_m81,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			mar_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			
			// UNIFORMS
			mar_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			mar_CLASS_ITEM(rhs_uniform_FROG01_m81,15)
			
			// VESTS
			mar_CLASS_ITEM(rhsusf_spc,15)
			mar_CLASS_ITEM(rhsusf_spc_rifleman,15)
			mar_CLASS_ITEM(rhsusf_spc_iar,15)			
			mar_CLASS_ITEM(rhsusf_spc_corpsman,15)
			mar_CLASS_ITEM(rhsusf_spc_crewman,15)
			mar_CLASS_ITEM(rhsusf_spc_light,15)
			mar_CLASS_ITEM(rhsusf_spc_marksman,15)			
			mar_CLASS_ITEM(rhsusf_spc_mg,15)
			mar_CLASS_ITEM(rhsusf_spc_squadleader,15)
			mar_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_surgicalKit,50)
			mar_CLASS_ITEM(ACE_tourniquet,100)
			mar_CLASS_ITEM(ACE_epinephrine,100)
			mar_CLASS_ITEM(ace_Morphine,100)
			mar_CLASS_ITEM(ACE_atropine,100)
			mar_CLASS_ITEM(ACE_bloodIV,100)
			mar_CLASS_ITEM(ACE_bloodIV_500,100)
			mar_CLASS_ITEM(ACE_bloodIV_250,100)
			mar_CLASS_ITEM(ACE_plasmaIV,100)
			mar_CLASS_ITEM(ACE_plasmaIV_500,100)
			mar_CLASS_ITEM(ACE_plasmaIV_250,100)
			mar_CLASS_ITEM(ACE_salineIV,100)
			mar_CLASS_ITEM(ACE_salineIV_500,100)
			mar_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(Laserdesignator,50)
			mar_CLASS_ITEM(Laserbatteries,50)
			mar_CLASS_ITEM(ALiVE_Tablet,50)			
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_RangeCard,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ACE_Altimeter,50)
			mar_CLASS_ITEM(ACE_Kestrel4500,50)
			mar_CLASS_ITEM(ACE_UAVBattery,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ACE_SpareBarrel,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			mar_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,200)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			mar_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			mar_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			mar_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			mar_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			mar_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			mar_CLASS_MAG(rhs_m136_hp_mag,10)
			mar_CLASS_MAG(rhs_m136_hedp_mag,10)
			mar_CLASS_MAG(rhs_m136_mag,10)
			mar_CLASS_MAG(rhs_fim92_mag,10)
			mar_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			mar_CLASS_MAG(rhs_mag_an_m8hc,50)
			mar_CLASS_MAG(rhs_mag_m18_red,50)
			mar_CLASS_MAG(rhs_mag_m18_green,50)
			mar_CLASS_MAG(rhs_mag_m18_yellow,50)
			mar_CLASS_MAG(rhs_mag_m18_purple,50)
			mar_CLASS_MAG(SmokeShellBlue,50)
			mar_CLASS_MAG(SmokeShellOrange,50)
			mar_CLASS_MAG(rhs_mag_m67,100)
			mar_CLASS_MAG(rhs_mag_M441_HE,100)
			mar_CLASS_MAG(rhs_mag_M433_HEDP,100)
			mar_CLASS_MAG(rhs_mag_M661_green,50)
			mar_CLASS_MAG(rhs_mag_M662_red,50)
			mar_CLASS_MAG(rhs_mag_M585_white,50)
			mar_CLASS_MAG(rhs_mag_M713_red,50)
			mar_CLASS_MAG(rhs_mag_M714_white,50)
			mar_CLASS_MAG(rhs_mag_M715_green,50)
			mar_CLASS_MAG(rhs_mag_M716_yellow,50)
			mar_CLASS_MAG(ace_M84,100)
			mar_CLASS_MAG(Chemlight_green,50)
			mar_CLASS_MAG(Chemlight_red,50)
			mar_CLASS_MAG(Chemlight_yellow,50)
			mar_CLASS_MAG(Chemlight_blue,50)
			mar_CLASS_MAG(ace_HandFlare_White,50)
			mar_CLASS_MAG(ace_HandFlare_Red,50)
			mar_CLASS_MAG(ace_HandFlare_Green,50)
			mar_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			mar_CLASS_WEAP(rhsusf_weap_m9,20)
			mar_CLASS_WEAP(rhs_weap_m16a4_carryhandle,20)
			mar_CLASS_WEAP(rhs_weap_m16a4_carryhandle_M203,20)
			mar_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			mar_CLASS_WEAP(rhs_weap_m4_m203,20)
			mar_CLASS_WEAP(rhs_weap_m240G,20)
			mar_CLASS_WEAP(rhs_weap_m27iar,20)
			mar_CLASS_WEAP(rhs_weap_m249_pip,20)
			mar_CLASS_WEAP(rhs_weap_M136,20)			
			mar_CLASS_WEAP(rhs_weap_M136_hedp,20)
			mar_CLASS_WEAP(rhs_weap_M136_hp,20)
			mar_CLASS_WEAP(rhs_weap_fgm148,20)
			mar_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			mar_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
		};
	};	
	
	class Box_mar_soi_instructor: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Instructor Box)
		mar_CRATE_TEXTURE(front_instruct_co)

		mar_MANAGER = 1;
		mar_LOADOUTS[] = 
		{
			{"1/4 Instructor Loadout","train\instructor.sqf"}
		};
		
		class TransportItems 
		{

			mar_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			

			mar_CLASS_ITEM(rhs_uniform_FROG01_wd,15)

			mar_CLASS_ITEM(rhsusf_spc,15)

			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,200)
			mar_CLASS_ITEM(ACE_elasticBandage,200)
			mar_CLASS_ITEM(ACE_packingBandage,200)
			mar_CLASS_ITEM(ACE_quikclot,100)
			mar_CLASS_ITEM(ACE_personalAidKit,100)
			mar_CLASS_ITEM(ACE_surgicalKit,50)
			mar_CLASS_ITEM(ACE_tourniquet,100)
			mar_CLASS_ITEM(ACE_epinephrine,100)
			mar_CLASS_ITEM(ace_Morphine,100)
			mar_CLASS_ITEM(ACE_atropine,100)
			mar_CLASS_ITEM(ACE_bloodIV,100)
			mar_CLASS_ITEM(ACE_bloodIV_500,100)
			mar_CLASS_ITEM(ACE_bloodIV_250,100)
			mar_CLASS_ITEM(ACE_plasmaIV,100)
			mar_CLASS_ITEM(ACE_plasmaIV_500,100)
			mar_CLASS_ITEM(ACE_plasmaIV_250,100)
			mar_CLASS_ITEM(ACE_salineIV,100)
			mar_CLASS_ITEM(ACE_salineIV_500,100)
			mar_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			mar_CLASS_ITEM(ItemWatch,50)
			mar_CLASS_ITEM(ItemCompass,50)
			mar_CLASS_ITEM(ItemGPS,50)
			mar_CLASS_ITEM(ItemMap,50)
			mar_CLASS_ITEM(ItemRadio,50)
			mar_CLASS_ITEM(tf_anprc152,50)
			mar_CLASS_ITEM(tf_rf7800str,50)
			mar_CLASS_ITEM(tf_microdagr,50)
			mar_CLASS_ITEM(Binocular,50)
			mar_CLASS_ITEM(ACE_Vector,50)
			mar_CLASS_ITEM(Laserdesignator,50)
			mar_CLASS_ITEM(Laserbatteries,50)
			mar_CLASS_ITEM(ALiVE_Tablet,50)			
			mar_CLASS_ITEM(ace_earplugs,50)
			mar_CLASS_ITEM(ACE_MX2A,50)
			mar_CLASS_ITEM(ACE_microDAGR,50)
			mar_CLASS_ITEM(ACE_RangeCard,50)
			mar_CLASS_ITEM(ACE_DAGR,50)
			mar_CLASS_ITEM(ACE_ATragMX,50)
			mar_CLASS_ITEM(ACE_wirecutter,50)
			mar_CLASS_ITEM(ACE_key_lockpick,50)
			mar_CLASS_ITEM(ACE_Altimeter,50)
			mar_CLASS_ITEM(ACE_Kestrel4500,50)
			mar_CLASS_ITEM(ACE_UAVBattery,50)
			mar_CLASS_ITEM(ace_MapTools,50)
			mar_CLASS_ITEM(ace_DefusalKit,50)
			mar_CLASS_ITEM(ACE_SpareBarrel,50)
			mar_CLASS_ITEM(ace_Clacker,50)
			mar_CLASS_ITEM(ace_M26_Clacker,50)
			mar_CLASS_ITEM(ace_IR_Strobe_Item,50)
			mar_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {

		};
		class TransportWeapons {

		};		
		class TransportBackpacks
		{
		};
	};
	
	class Box_mar_empty: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Box Empty)
		mar_CRATE_TEXTURE(front_empty_co)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks{};
	};	
	
	class Box_mar_suply: B_supplyCrate_F
	{
		mar_CRATE_INFO([1/4] Resupply)
		
		class TransportItems 
		{
			// MEDICAL
			mar_CLASS_ITEM(ACE_fieldDressing,25)
			mar_CLASS_ITEM(ACE_packingBandage,25)
			mar_CLASS_ITEM(ACE_quikclot,25)
			mar_CLASS_ITEM(ACE_elasticBandage,100)
			mar_CLASS_ITEM(ACE_morphine,25)
			mar_CLASS_ITEM(ACE_epinephrine,25)
			mar_CLASS_ITEM(ACE_salineIV_250,25)
			mar_CLASS_ITEM(ace_earplugs,10) 
			mar_CLASS_ITEM(tf_anprc152,10) 
        };
		class TransportMagazines 
		{
			// EQUIPMENT
			mar_CLASS_MAG(Chemlight_red,20)
			mar_CLASS_MAG(Chemlight_blue,20)
			mar_CLASS_MAG(Chemlight_green,20)
            // AMMO
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,100)
			mar_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			mar_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,12)
            // GRENADE, SMOKE, M203
			mar_CLASS_MAG(rhs_mag_m67,25)
			mar_CLASS_MAG(ace_M84,12)
			mar_CLASS_MAG(rhs_mag_an_m8hc,18)
			mar_CLASS_MAG(rhs_mag_m18_purple,2)
			mar_CLASS_MAG(rhs_mag_m18_green,2)
			mar_CLASS_MAG(rhs_mag_m18_red,6)
			mar_CLASS_MAG(SmokeShellBlue,6)
			mar_CLASS_MAG(rhs_mag_m18_yellow,12)
			mar_CLASS_MAG(rhs_mag_M441_HE,12)
			mar_CLASS_MAG(rhs_mag_M433_HEDP,12)
			mar_CLASS_MAG(ace_HandFlare_White,10)
			mar_CLASS_MAG(ace_HandFlare_Green,10)
			mar_CLASS_MAG(rhs_mag_M661_green,10)
			mar_CLASS_MAG(rhs_mag_M662_red,10)
			mar_CLASS_MAG(rhs_mag_M585_white,10)
			mar_CLASS_MAG(ToolKit,25)
        }; 
        class TransportWeapons 
		{
			// WEAPONS
			mar_CLASS_WEAP(rhs_weap_M136,10)
			mar_CLASS_WEAP(rhs_weap_M136_hedp,4)
        };
		class TransportBackpacks
		{
			
		};
	};

	class Box_mar_vehicle: Box_NATO_AmmoVeh_F
	{
		mar_VIC_INFO([1/4] Vehicle Box)
		
		class UserActions
		{
			mar_VIC_LOADOUT_CLEAR // base class
			/*  
			how to add new loadouts:			
			mar_VIC_LOADOUT(class - any one word, action display name, file with loadout)
			note: no quotations on class
			*/	
			mar_VIC_LOADOUT(rifle,"Rifle Loadout","vehicle\infantry_rifle.sqf")
			mar_VIC_LOADOUT(bas,"Medical Loadout","vehicle\bas.sqf")
		};
	};

	#include "\Marine_Ammoboxes\crateSigns\signConfig.hpp"
};

#include "\Marine_Ammoboxes\loadoutManager\manager_dialog.hpp"
