// You may not re-upload this mod ("EnhancedLessLethal") without modification
// You may otherwise use the content of this file however you wish
// You may repack this mod ("EnhancedLessLethal") into a Server Pack

// If you required assistance I offer support: See my website for more detail;
// Website- https://macmodding.info/
// My Mods- https://steamcommunity.com/id/macrobberts/myworkshopfiles/
// GitHub - https://github.com/MacRobberts?tab=repositories
// Discord- https://discord.com/channels/@me/892288642775650345
class CfgPatches {
    class EnhancedLessLethal_RubberRounds {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition"
        };
		magazines[]=
		{
		    "ELL_Ammo_22Baton",
		    "ELL_Ammo_380Baton",
		    "ELL_Ammo_9x19Baton"
		};
		ammo[]=
		{
		    "ELL_Bullet_22Baton",
		    "ELL_Bullet_380Baton",
		    "ELL_Bullet_9x19Baton"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoPistol;
class cfgAmmo {
	class Bullet_22;
	class ELL_Bullet_22Baton: Bullet_22 {
		spawnPileType="ELL_Ammo_22Baton";
		class DamageApplied {
			class Health {
				damage=20;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=35;
			};
		};
	};
	class Bullet_380;
	class ELL_Bullet_380Baton: Bullet_380 {
		spawnPileType="ELL_Ammo_380Baton";
		class DamageApplied {
			class Health {
				damage=20;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=45;
			};
		};
	};
	class Bullet_9x19;
	class ELL_Bullet_9x19Baton: Bullet_9x19 {
		spawnPileType="ELL_Ammo_9x19Baton";
		class DamageApplied {
			class Health {
				damage=20;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=55;
			};
		};
	};
};
class cfgWeapons {
    class Pistol_Base;
    class Rifle_Base;

	class Trumpet_Base: Rifle_Base {
		chamberableFrom[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };
	class Ruger1022_Base: Rifle_Base {
		chamberableFrom[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };
	class MKII_Base: Pistol_Base {
		chamberableFrom[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };

	class MakarovIJ70_Base: Pistol_Base {
        chamberableFrom[]=
        {
            "Ammo_380",
            "ELL_Ammo_380Baton"
        };
    };
	class CZ61_Base: Rifle_Base {
		chamberableFrom[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class PM73Rak_Base: Rifle_Base {
		chamberableFrom[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class PP19_Base: Rifle_Base {
		chamberableFrom[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class MakarovPB_Base: Pistol_Base {
		chamberableFrom[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };

	class MP5K_Base: Rifle_Base {
		chamberableFrom[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class CZ75_Base: Pistol_Base {
		chamberableFrom[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Glock19_Base: Pistol_Base {
		chamberableFrom[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class P1_Base: Pistol_Base {
		chamberableFrom[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Red9_Base: Pistol_Base {
		chamberableFrom[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton",
			"Mag_CLIP9x19_10Rnd"
		};
    };
};
class CfgMagazines {
	class Ammo_22;
	class ELL_Ammo_22Baton: Ammo_22 {
		scope=2;
        displayName=".22LR Baton Rounds";
        descriptionShort="Handgun caliber cartridge capped with a Less-Lethal Rubber Coated round intended for crowd control, firearms training, and pest control.";
		ammo="ELL_Bullet_22Baton";
	};

    class Ammo_380;
    class ELL_Ammo_380Baton: Ammo_380 {
        scope=2;
        displayName=".380 Baton Rounds";
        descriptionShort="Handgun caliber cartridge capped with a Less-Lethal Rubber Coated round intended for crowd control, firearms training, and pest control.";
        ammo="ELL_Bullet_380Baton";
    };

	class Ammo_9x19;
	class ELL_Ammo_9x19Baton: Ammo_9x19 {
		scope=2;
        displayName="9x19mm Baton Rounds";
        descriptionShort="Handgun caliber cartridge capped with a Less-Lethal Rubber Coated round intended for crowd control, firearms training, and pest control.";
		ammo="ELL_Bullet_9x19Baton";
	};

    class Magazine_Base;
	class Mag_MKII_10Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };
	class Mag_Ruger1022_10Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };
	class Mag_Ruger1022_15Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };
	class Mag_Ruger1022_30Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_22",
			"ELL_Ammo_22Baton"
		};
    };

	class Mag_IJ70_8Rnd: Magazine_Base {
        ammoItems[]=
        {
            "Ammo_380",
            "ELL_Ammo_380Baton"
        };
    };
	class Mag_PM73_15Rnd: Magazine_Base {
		ammoItems[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class Mag_PM73_25Rnd: Magazine_Base {
		ammoItems[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class Mag_CZ61_20Rnd: Magazine_Base {
		ammoItems[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class Mag_PP19_64Rnd: Magazine_Base {
		ammoItems[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };
	class Mag_MakarovPB_8Rnd: Magazine_Base {
		ammoItems[]=
		{
            "Ammo_380",
            "ELL_Ammo_380Baton"
		};
    };

	class Mag_CZ75_15Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Mag_Glock_15Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Mag_P1_8Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Mag_MP5_15Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
	class Mag_MP5_30Rnd: Magazine_Base {
		ammoItems[]=
		{
			"Ammo_9x19",
            "ELL_Ammo_9x19Baton"
		};
    };
};