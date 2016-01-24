// script macros for ammobox mod version 23.01.16
//CHANGELOG:

//23.01.16
//-updated various folder pointers from Marine_Ammoboxes to Marine_Ammoboxes


#define mar_ADDON_ROOT			"\Marine_Ammoboxes\"
#define mar_LOADOUT_ROOT		"\Marine_Ammoboxes\defaultLoadouts\"

#define QUOTE(A) 				#A

// transport cargo classes
#define mar_CLASS_WEAP(WEAPON,COUNT) 	class _xx_##WEAPON {weapon = #WEAPON; count = COUNT;}
#define mar_CLASS_ITEM(ITEM,COUNT) 		class _xx_##ITEM {name = #ITEM; count = COUNT;}
#define mar_CLASS_MAG(MAGAZINE,COUNT) 	class _xx_##MAGAZINE {magazine = #MAGAZINE; count = COUNT;}
#define mar_CLASS_BAG(BAG,COUNT) 		class _xx_##BAG {backpack = #BAG; count = COUNT;}

// basic box info

#ifdef 	NO_ZEUS_WINDOW	
	#define ZEUS	curatorInfoTypeEmpty = ""; 
#else
	#define ZEUS	curatorInfoTypeEmpty = "RscDisplayAttributesInventory";
#endif

#define mar_CRATE_INFO(NAME) displayname = #NAME; \
		transportmaxmagazines = 9999; \
		transportmaxweapons = 9999; \
		transportMaxBackpacks = 9999; \
		transportMaxitems = 9999; \
		MaximumLoad = 999999; \
		scope = 2;  \
		supplyRadius = 5; \
		vehicleClass = "Marine_Ammoboxes"; \
		mar_INIT_EVENT("_this spawn mar_fnc_crate;") \
		ZEUS
		
// A2 Crates
#define mar_CRATE_SELECTIONS(PATH) hiddenSelectionsTextures[] = {mar_TEXTURE_PATH(PATH),mar_TEXTURE_PATH(usmc_side_final_co)};
#define mar_TEXTURE_PATH(PIC) __EVAL("Marine_Ammoboxes\crateModel\textures\" + #PIC + ".paa")
#define mar_CRATE_TEXTURE(PIC) \
			model = "Marine_Ammoboxes\crateModel\Proxy_UsBasicAmmoBox"; \
			mapSize = 2; \
			slingLoadCargoMemoryPoints[] = {"sling1","sling2","sling3","sling4"}; \
			hiddenSelections[] = {"main","sides"}; \
			mar_CRATE_SELECTIONS(PIC)
		
// eventhander		
#define mar_INIT_EVENT(STRING) 		class EventHandlers { init = STRING; };

// vehicle crate
#define mar_VIC_INFO(NAME)		displayname = #NAME; \
		transportAmmo = 0; \
		scope = 2; \
		supplyRadius = 0; \
		vehicleClass = "Marine_Ammoboxes"; \
		mar_INIT_EVENT("_this spawn mar_fnc_crate;") \
		ZEUS
		
#define mar_VIC_FUNCTION(FILE) 	#[player,call compile preprocessFileLineNumbers (mar_LOADOUT_ROOT + FILE),false,true] call mar_fnc_vehicleLoadout
#define mar_RED_NAME(TEXT) 		__EVAL("<t color='#FF0000'>" + TEXT + "</t>")
#define mar_GREEN_NAME(TEXT) 	__EVAL("<t color='#99FF00'>" + TEXT + "</t>")

#define mar_VIC_LOADOUT(CLASS,TEXT,FILE)	class CLASS##: clearCargo { \
				displayName = mar_RED_NAME(TEXT); \
				statement = mar_VIC_FUNCTION(FILE); \
				};
				
#define mar_VIC_LOADOUT_CLEAR	class clearCargo { \
				userActionID = 50; \
				displayName = mar_GREEN_NAME("Clear Cargo"); \
				displayNameDefault = ""; \
				position = "mph_axis"; \
				radius = 10; \
				animPeriod = 2; \
				onlyForplayer = 1; \
				condition = "(alive this) && (driver (vehicle player) == player) && (vehicle player in vehicles)"; \
				statement = "[player,[],true,true] call mar_fnc_vehicleLoadout;"; \
			};
