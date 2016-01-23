#define VERSION_DATE	23.01.16 // release date (DD.MM.YY) is used for the version
#include "script_macros.hpp"

//23.01.16 update: updated the folders to point from RCT6_ammoboxes to 1-4_ammoboxes. Also did some tiding


class CfgPatches
{
	class RCT6_ammoBoxes
		{
		units[] = 
		{
			"Box_meu_bas",
			"Box_meu_lce",
			"Box_meu_hq",
			"Box_meu_inf",
			"Box_meu_suply",
			"Box_meu_wep",
			"Box_meu_vehicle",
			"Box_meu_soi_student",
			"Box_meu_soi_instructor",
			"Box_meu_empty",
			"meu_sign_armory",
			"meu_sign_bas",
			"meu_sign_empty",
			"meu_sign_hq",
			"meu_sign_rifle",
			"meu_sign_weapons",
			"meu_flag_usmc"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
		version = VERSION_DATE;
	};
};

class CfgNotifications 
{
	class meu_vicCrates 
	{
		title = "1-4th Vehicle Crate";
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
	class meu {
		class crate {
			file = "\1-4_ammoBoxes\crateFunctions";
			class vehicleLoadout {};
			class crate {};
		};
		class manager {
			file = "\1-4_ammoBoxes\loadoutManager";
			class manager {};
		};
	};
};

class CfgVehicleClasses
{
	class RCT6_ammoBoxes { displayName = "[1-4th] Ammo Boxes"; };
	class meu_signs { displayName = "[1-4th] Signs"; };
};

class CfgVehicles
{	
	
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class Box_meu_bas: B_supplyCrate_F  
	{
		MEU_CRATE_INFO([1-4th] BAS Box)
		MEU_CRATE_TEXTURE(front_bas_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"1-4th BAS Corpsman Desert Loadout","bas\corpsmanloadout_d.sqf"},
			{"1-4th BAS Corpsman Woodland Loadout","bas\corpsmanloadout_w.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS	
			MEU_CLASS_ITEM(rhsusf_spc_corpsman,15)
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_surgicalKit,50)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_bloodIV,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,100)
			MEU_CLASS_ITEM(ACE_bloodIV_250,100)
			MEU_CLASS_ITEM(ACE_plasmaIV,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_500,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_250,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m16a4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)			
		
		};
	};
	
	class Box_meu_inf: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4th] Infantry Box)	
		MEU_CRATE_TEXTURE(front_inf_final_co)
		
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"1-4th HQ Woodland Loadout","inf\squadleaderloadout_w.sqf"},
			{"1-4th HQ Desert Loadout","inf\squadleaderloadout_D.sqf"},
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
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_iar,15)			
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)
			MEU_CLASS_ITEM(rhsusf_spc_mg,15)			
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(Laserdesignator,50)
			MEU_CLASS_ITEM(Laserbatteries,50)
			MEU_CLASS_ITEM(ALiVE_Tablet,50)			
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_RangeCard,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ACE_Altimeter,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,50)
			MEU_CLASS_ITEM(ACE_UAVBattery,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ACE_SpareBarrel,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_m136_hp_mag,10)
			MEU_CLASS_MAG(rhs_m136_hedp_mag,10)
			MEU_CLASS_MAG(rhs_m136_mag,10)
			MEU_CLASS_MAG(rhs_fim92_mag,10)
			MEU_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M661_green,50)
			MEU_CLASS_MAG(rhs_mag_M662_red,50)
			MEU_CLASS_MAG(rhs_mag_M585_white,50)			
			MEU_CLASS_MAG(rhs_mag_M713_red,50)
			MEU_CLASS_MAG(rhs_mag_M714_white,50)
			MEU_CLASS_MAG(rhs_mag_M715_green,50)
			MEU_CLASS_MAG(rhs_mag_M716_yellow,50)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m240G,20)
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip,20)
			MEU_CLASS_WEAP(rhs_weap_M136,20)			
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,20)
			MEU_CLASS_WEAP(rhs_weap_fgm148,20)
			MEU_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
			MEU_CLASS_BAG(ACE_TacticalLadder_Pack,15)			
		};
	};
	
	class Box_meu_wep: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4th] Weapons Box)
		MEU_CRATE_TEXTURE(front_wpns_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_m81,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_m81,15)
			
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_iar,15)			
			MEU_CLASS_ITEM(rhsusf_spc_corpsman,15)
			MEU_CLASS_ITEM(rhsusf_spc_crewman,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)
			MEU_CLASS_ITEM(rhsusf_spc_mg,15)			
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(Laserdesignator,50)
			MEU_CLASS_ITEM(Laserbatteries,50)
			MEU_CLASS_ITEM(ALiVE_Tablet,50)			
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_RangeCard,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ACE_Altimeter,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,50)
			MEU_CLASS_ITEM(ACE_UAVBattery,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ACE_SpareBarrel,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_m136_hp_mag,10)
			MEU_CLASS_MAG(rhs_m136_hedp_mag,10)
			MEU_CLASS_MAG(rhs_m136_mag,10)
			MEU_CLASS_MAG(rhs_fim92_mag,10)
			MEU_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M661_green,50)
			MEU_CLASS_MAG(rhs_mag_M662_red,50)
			MEU_CLASS_MAG(rhs_mag_M585_white,50)			
			MEU_CLASS_MAG(rhs_mag_M713_red,50)
			MEU_CLASS_MAG(rhs_mag_M714_white,50)
			MEU_CLASS_MAG(rhs_mag_M715_green,50)
			MEU_CLASS_MAG(rhs_mag_M716_yellow,50)
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m240G,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip,20)
			MEU_CLASS_WEAP(rhs_weap_M136,20)			
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,20)
			MEU_CLASS_WEAP(rhs_weap_fgm148,20)
			MEU_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
			MEU_CLASS_BAG(ACE_TacticalLadder_Pack,15)			
		
		};
	};
		
	class Box_meu_hq: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4th] HQ Box)
		MEU_CRATE_TEXTURE(front_hq_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_crewman,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)

		    // ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(Laserdesignator,50)
			MEU_CLASS_ITEM(Laserbatteries,50)
			MEU_CLASS_ITEM(ALiVE_Tablet,50)			
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_RangeCard,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ACE_Altimeter,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,50)
			MEU_CLASS_ITEM(ACE_UAVBattery,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ACE_SpareBarrel,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {

			// AMMO
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhsusf_weap_m9,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
		};
	};
	
	class Box_meu_lce: B_supplyCrate_F 
	{
		MEU_CRATE_INFO([1-4th] Logistics Box)
		MEU_CRATE_TEXTURE(front_clb_co)
		
		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{

		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_crewman,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_tourniquet,100)

		    
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)

			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M661_green,50)
			MEU_CLASS_MAG(rhs_mag_M662_red,50)
			MEU_CLASS_MAG(rhs_mag_M585_white,50)			
			MEU_CLASS_MAG(rhs_mag_M713_red,50)
			MEU_CLASS_MAG(rhs_mag_M714_white,50)
			MEU_CLASS_MAG(rhs_mag_M715_green,50)
			MEU_CLASS_MAG(rhs_mag_M716_yellow,50)
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)			
		
		};
	};
	
	class Box_meu_soi_student: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4th] Student Box)
		MEU_CRATE_TEXTURE(front_student_co)
	
		MEU_MANAGER = 0;
		MEU_LOADOUTS[] = 
		{
			{"1-4th Student, Stage 1 Loadout","train\student_1.sqf"},
			{"1-4th Student, Stage 2 Loadout","train\student_2.sqf"}
		};
		
		class TransportItems 
		{
			// OPTICS
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15_light,15)
			MEU_CLASS_ITEM(rhsusf_acc_anpeq15side,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG3_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG2_USMC,15)
			MEU_CLASS_ITEM(rhsusf_acc_ACOG_USMC,15)
			
			
			
			
			// GOGGLES
			MEU_CLASS_ITEM(rhsusf_ANPVS_15,15)
			// HELMETS
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_alt,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_alt_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatwd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc,15)
			MEU_CLASS_ITEM(rhsusf_mich_helmet_marpatd_norotos_arc_headset,15)
			MEU_CLASS_ITEM(rhs_Booniehat_m81,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			MEU_CLASS_ITEM(rhs_Booniehat_marpatd,15)
			
			// UNIFORMS
			MEU_CLASS_ITEM(rhs_uniform_FROG01_d,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)
			MEU_CLASS_ITEM(rhs_uniform_FROG01_m81,15)
			
			// VESTS
			MEU_CLASS_ITEM(rhsusf_spc,15)
			MEU_CLASS_ITEM(rhsusf_spc_rifleman,15)
			MEU_CLASS_ITEM(rhsusf_spc_iar,15)			
			MEU_CLASS_ITEM(rhsusf_spc_corpsman,15)
			MEU_CLASS_ITEM(rhsusf_spc_crewman,15)
			MEU_CLASS_ITEM(rhsusf_spc_light,15)
			MEU_CLASS_ITEM(rhsusf_spc_marksman,15)			
			MEU_CLASS_ITEM(rhsusf_spc_mg,15)
			MEU_CLASS_ITEM(rhsusf_spc_squadleader,15)
			MEU_CLASS_ITEM(rhsusf_spc_teamleader,15)
			
			
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_surgicalKit,50)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_bloodIV,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,100)
			MEU_CLASS_ITEM(ACE_bloodIV_250,100)
			MEU_CLASS_ITEM(ACE_plasmaIV,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_500,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_250,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(Laserdesignator,50)
			MEU_CLASS_ITEM(Laserbatteries,50)
			MEU_CLASS_ITEM(ALiVE_Tablet,50)			
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_RangeCard,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ACE_Altimeter,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,50)
			MEU_CLASS_ITEM(ACE_UAVBattery,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ACE_SpareBarrel,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {
			// AMMO
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M200_Stanag,200)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m80a1epr,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_762x51_m993,100)
			MEU_CLASS_MAG(rhsusf_100Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_200Rnd_556x45_soft_pouch,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_Slug,100)
			MEU_CLASS_MAG(rhsusf_5Rnd_00Buck,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m993_Mag,100)
			MEU_CLASS_MAG(rhsusf_20Rnd_762x51_m118_special_Mag,100)
			MEU_CLASS_MAG(rhs_m136_hp_mag,10)
			MEU_CLASS_MAG(rhs_m136_hedp_mag,10)
			MEU_CLASS_MAG(rhs_m136_mag,10)
			MEU_CLASS_MAG(rhs_fim92_mag,10)
			MEU_CLASS_MAG(rhs_fgm148_magazine_AT,10)
			// THROWN
			MEU_CLASS_MAG(rhs_mag_an_m8hc,50)
			MEU_CLASS_MAG(rhs_mag_m18_red,50)
			MEU_CLASS_MAG(rhs_mag_m18_green,50)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,50)
			MEU_CLASS_MAG(rhs_mag_m18_purple,50)
			MEU_CLASS_MAG(SmokeShellBlue,50)
			MEU_CLASS_MAG(SmokeShellOrange,50)
			MEU_CLASS_MAG(rhs_mag_m67,100)
			MEU_CLASS_MAG(rhs_mag_M441_HE,100)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,100)
			MEU_CLASS_MAG(rhs_mag_M661_green,50)
			MEU_CLASS_MAG(rhs_mag_M662_red,50)
			MEU_CLASS_MAG(rhs_mag_M585_white,50)
			MEU_CLASS_MAG(rhs_mag_M713_red,50)
			MEU_CLASS_MAG(rhs_mag_M714_white,50)
			MEU_CLASS_MAG(rhs_mag_M715_green,50)
			MEU_CLASS_MAG(rhs_mag_M716_yellow,50)
			MEU_CLASS_MAG(ace_M84,100)
			MEU_CLASS_MAG(Chemlight_green,50)
			MEU_CLASS_MAG(Chemlight_red,50)
			MEU_CLASS_MAG(Chemlight_yellow,50)
			MEU_CLASS_MAG(Chemlight_blue,50)
			MEU_CLASS_MAG(ace_HandFlare_White,50)
			MEU_CLASS_MAG(ace_HandFlare_Red,50)
			MEU_CLASS_MAG(ace_HandFlare_Green,50)
			MEU_CLASS_MAG(ace_HandFlare_Yellow,50)
		};
		class TransportWeapons {
			// WEAPONS
			MEU_CLASS_WEAP(rhsusf_weap_m9,20)
			MEU_CLASS_WEAP(rhs_weap_m16a4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m16a4_carryhandle_M203,20)
			MEU_CLASS_WEAP(rhs_weap_m4_carryhandle,20)
			MEU_CLASS_WEAP(rhs_weap_m4_m203,20)
			MEU_CLASS_WEAP(rhs_weap_m240G,20)
			MEU_CLASS_WEAP(rhs_weap_m27iar,20)
			MEU_CLASS_WEAP(rhs_weap_m249_pip,20)
			MEU_CLASS_WEAP(rhs_weap_M136,20)			
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,20)
			MEU_CLASS_WEAP(rhs_weap_M136_hp,20)
			MEU_CLASS_WEAP(rhs_weap_fgm148,20)
			MEU_CLASS_WEAP(rhs_weap_fim92,20)
		};		
		class TransportBackpacks
		{
			MEU_CLASS_BAG(rhsusf_assault_eagleaiii_coy,15)
		};
	};	
	
	class Box_meu_soi_instructor: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4th] Instructor Box)
		MEU_CRATE_TEXTURE(front_instruct_co)

		MEU_MANAGER = 1;
		MEU_LOADOUTS[] = 
		{
			{"1-4th Instructor Loadout","train\instructor.sqf"}
		};
		
		class TransportItems 
		{

			MEU_CLASS_ITEM(rhs_Booniehat_marpatwd,15)
			

			MEU_CLASS_ITEM(rhs_uniform_FROG01_wd,15)

			MEU_CLASS_ITEM(rhsusf_spc,15)

			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,200)
			MEU_CLASS_ITEM(ACE_elasticBandage,200)
			MEU_CLASS_ITEM(ACE_packingBandage,200)
			MEU_CLASS_ITEM(ACE_quikclot,100)
			MEU_CLASS_ITEM(ACE_personalAidKit,100)
			MEU_CLASS_ITEM(ACE_surgicalKit,50)
			MEU_CLASS_ITEM(ACE_tourniquet,100)
			MEU_CLASS_ITEM(ACE_epinephrine,100)
			MEU_CLASS_ITEM(ace_Morphine,100)
			MEU_CLASS_ITEM(ACE_atropine,100)
			MEU_CLASS_ITEM(ACE_bloodIV,100)
			MEU_CLASS_ITEM(ACE_bloodIV_500,100)
			MEU_CLASS_ITEM(ACE_bloodIV_250,100)
			MEU_CLASS_ITEM(ACE_plasmaIV,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_500,100)
			MEU_CLASS_ITEM(ACE_plasmaIV_250,100)
			MEU_CLASS_ITEM(ACE_salineIV,100)
			MEU_CLASS_ITEM(ACE_salineIV_500,100)
			MEU_CLASS_ITEM(ACE_salineIV_250,100)
		    
			// ACCESSORIES
			MEU_CLASS_ITEM(ItemWatch,50)
			MEU_CLASS_ITEM(ItemCompass,50)
			MEU_CLASS_ITEM(ItemGPS,50)
			MEU_CLASS_ITEM(ItemMap,50)
			MEU_CLASS_ITEM(ItemRadio,50)
			MEU_CLASS_ITEM(tf_anprc152,50)
			MEU_CLASS_ITEM(tf_rf7800str,50)
			MEU_CLASS_ITEM(tf_microdagr,50)
			MEU_CLASS_ITEM(Binocular,50)
			MEU_CLASS_ITEM(ACE_Vector,50)
			MEU_CLASS_ITEM(Laserdesignator,50)
			MEU_CLASS_ITEM(Laserbatteries,50)
			MEU_CLASS_ITEM(ALiVE_Tablet,50)			
			MEU_CLASS_ITEM(ace_earplugs,50)
			MEU_CLASS_ITEM(ACE_MX2A,50)
			MEU_CLASS_ITEM(ACE_microDAGR,50)
			MEU_CLASS_ITEM(ACE_RangeCard,50)
			MEU_CLASS_ITEM(ACE_DAGR,50)
			MEU_CLASS_ITEM(ACE_ATragMX,50)
			MEU_CLASS_ITEM(ACE_wirecutter,50)
			MEU_CLASS_ITEM(ACE_key_lockpick,50)
			MEU_CLASS_ITEM(ACE_Altimeter,50)
			MEU_CLASS_ITEM(ACE_Kestrel4500,50)
			MEU_CLASS_ITEM(ACE_UAVBattery,50)
			MEU_CLASS_ITEM(ace_MapTools,50)
			MEU_CLASS_ITEM(ace_DefusalKit,50)
			MEU_CLASS_ITEM(ACE_SpareBarrel,50)
			MEU_CLASS_ITEM(ace_Clacker,50)
			MEU_CLASS_ITEM(ace_M26_Clacker,50)
			MEU_CLASS_ITEM(ace_IR_Strobe_Item,50)
			MEU_CLASS_ITEM(ACE_CableTie,50)
		};
		class TransportMagazines {

		};
		class TransportWeapons {

		};		
		class TransportBackpacks
		{
		};
	};
	
	class Box_meu_empty: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4] Box Empty)
		MEU_CRATE_TEXTURE(front_empty_co)
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackPacks{};
	};	
	
	class Box_meu_suply: B_supplyCrate_F
	{
		MEU_CRATE_INFO([1-4] Resupply)
		
		class TransportItems 
		{
			// MEDICAL
			MEU_CLASS_ITEM(ACE_fieldDressing,25)
			MEU_CLASS_ITEM(ACE_packingBandage,25)
			MEU_CLASS_ITEM(ACE_quikclot,25)
			MEU_CLASS_ITEM(ACE_elasticBandage,100)
			MEU_CLASS_ITEM(ACE_morphine,25)
			MEU_CLASS_ITEM(ACE_epinephrine,25)
			MEU_CLASS_ITEM(ACE_salineIV_250,25)
			MEU_CLASS_ITEM(ace_earplugs,10) 
			MEU_CLASS_ITEM(tf_anprc152,10) 
        };
		class TransportMagazines 
		{
			// EQUIPMENT
			MEU_CLASS_MAG(Chemlight_red,20)
			MEU_CLASS_MAG(Chemlight_blue,20)
			MEU_CLASS_MAG(Chemlight_green,20)
            // AMMO
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,100)
			MEU_CLASS_MAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,100)
			MEU_CLASS_MAG(rhsusf_mag_15Rnd_9x19_FMJ,12)
            // GRENADE, SMOKE, M203
			MEU_CLASS_MAG(rhs_mag_m67,25)
			MEU_CLASS_MAG(ace_M84,12)
			MEU_CLASS_MAG(rhs_mag_an_m8hc,18)
			MEU_CLASS_MAG(rhs_mag_m18_purple,2)
			MEU_CLASS_MAG(rhs_mag_m18_green,2)
			MEU_CLASS_MAG(rhs_mag_m18_red,6)
			MEU_CLASS_MAG(SmokeShellBlue,6)
			MEU_CLASS_MAG(rhs_mag_m18_yellow,12)
			MEU_CLASS_MAG(rhs_mag_M441_HE,12)
			MEU_CLASS_MAG(rhs_mag_M433_HEDP,12)
			MEU_CLASS_MAG(ace_HandFlare_White,10)
			MEU_CLASS_MAG(ace_HandFlare_Green,10)
			MEU_CLASS_MAG(rhs_mag_M661_green,10)
			MEU_CLASS_MAG(rhs_mag_M662_red,10)
			MEU_CLASS_MAG(rhs_mag_M585_white,10)
        }; 
        class TransportWeapons 
		{
			// WEAPONS
			MEU_CLASS_WEAP(rhs_weap_M136,10)
			MEU_CLASS_WEAP(rhs_weap_M136_hedp,4)
        };
		class TransportBackpacks
		{
			
		};
	};

	class Box_meu_vehicle: Box_NATO_AmmoVeh_F
	{
		MEU_VIC_INFO([1-4] Vehicle Box)
		
		class UserActions
		{
			MEU_VIC_LOADOUT_CLEAR // base class
			/*  
			how to add new loadouts:			
			MEU_VIC_LOADOUT(class - any one word, action display name, file with loadout)
			note: no quotations on class
			*/	
			MEU_VIC_LOADOUT(rifle,"Rifle Loadout","vehicle\infantry_rifle.sqf")
			MEU_VIC_LOADOUT(bas,"Medical Loadout","vehicle\bas.sqf")
		};
	};

	#include "\1-4_ammoBoxes\crateSigns\signConfig.hpp"
};

#include "\1-4_ammoBoxes\loadoutManager\manager_dialog.hpp"
