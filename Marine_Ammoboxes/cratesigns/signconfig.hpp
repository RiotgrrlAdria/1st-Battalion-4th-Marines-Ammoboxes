	
	class SignAd_SponsorS_F;
	class Flag_NATO_F;
	
	#define SIGNPATH(FILE) __EVAL("\mar_ammoBoxes\crateSigns\" + #FILE)
	#define mar_CLASS_SIGN(CLASSNAME,NAME,TEXTURE) \
		class CLASSNAME: SignAd_SponsorS_F { \
			displayName = #NAME; \
			vehicleClass = "mar_signs"; \
			hiddenSelectionsTextures[] = {SIGNPATH(TEXTURE)}; \
		};

	// mar_CLASS_SIGN(classname,displayname,picture)
	mar_CLASS_SIGN(mar_sign_armory,Armory Sign,ARM.paa)
	mar_CLASS_SIGN(mar_sign_bas,BAS Box Sign,BAS.paa)
	mar_CLASS_SIGN(mar_sign_empty,Empty Box Sign,EMPTY.paa)
	mar_CLASS_SIGN(mar_sign_hq,HQ Box Sign,marHQ.paa)
	mar_CLASS_SIGN(mar_sign_rifle,Rifle Box Sign,RIFLE.paa)
	mar_CLASS_SIGN(mar_sign_weapons,Weapons Box Sign,WEAPONS.paa)
	
	class mar_flag_usmc: Flag_NATO_F
	{
		displayName = "USMC Flag";
		vehicleClass = "mar_signs";
		class EventHandlers 
		{
			init = "(_this select 0) setFlagTexture '\Marine_Ammoboxes\crateSigns\USMC_flag.paa';";
		};
	};