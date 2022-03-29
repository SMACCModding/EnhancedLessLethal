// You may not re-upload this mod ("EnhancedLessLethal") without modification
// You may otherwise use the content of this file however you wish
// You may repack this mod ("EnhancedLessLethal") into a Server Pack

// If you required assistance I offer support: See my website for more detail;
// Website- https://macmodding.info/
// My Mods- https://steamcommunity.com/id/macrobberts/myworkshopfiles/
// GitHub - https://github.com/MacRobberts?tab=repositories
// Discord- https://discord.com/channels/@me/892288642775650345
class CfgPatches {
    class EnhancedLessLethal_ShockPistol {
        units[]=
        {
            "ELL_ShockPistol_Battery"
        };
        weapons[]=
        {
			"ELL_ShockPistol_Yellow",
			"ELL_ShockPistol_Black"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Weapons_Ammunition"
        };
		magazines[]=
		{
		    "ELL_Ammo_ShockDart",
		    "ELL_Mag_ShockCartridge"
		};
		ammo[]=
		{
		    "ELL_Bullet_ShockDart"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoPistol;
class cfgSlots {
	class Slot_ELL_ShockPistolBattery {
		name="ELL_ShockPistolBattery";
		displayName="X2 Battery";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
};
class cfgVehicles {
    class Battery9V;
    class ELL_ShockPistol_Battery: Battery9V {
		displayName="X2 Taser Battery";
		descriptionShort="An Lightweight Taser battery. Used for powering the X2 Taser Pistol.";
		inventorySlot[]=
		{
			"ELL_ShockPistolBattery"
        };
		varQuantityInit=100;
		varQuantityMax=100;
		quantityBar=0;
        model="\DZ\weapons\attachments\magazine\shockpistol_battery.p3d";
    };
};
class cfgWeapons {
    // Hide vanilla broken shit
    class Shockpistol_Base;
	class Shockpistol: Shockpistol_Base {
	    scope=0;
	};
	class Shockpistol_Black: Shockpistol {
	    scope=0;
	};

	class MKII;
	class ELL_ShockPistol_ColorBase: MKII {
		scope=0;
		displayName="X2 Taser";
		descriptionShort="A stiff plastic Taser intended to be a less lethal alternative to normal firearms. Requires a Battery and a Cartridge to function.";
		itemSize[]={3,2};
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
		attachments[]=
		{
			"ELL_ShockPistolBattery"
        };
		magazines[]=
		{
			"ELL_Mag_ShockCartridge"
		};
		chamberableFrom[]=
		{
			"ELL_Ammo_ShockDart"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		class SemiAuto: Mode_SemiAuto {
			soundSetShot[]=
			{
				"ELL_ShockPistol_Shot_SoundSet"
			};
			begin1[]=
			{
				"EnhancedLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			begin2[]=
			{
				"EnhancedLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			begin3[]=
			{
				"EnhancedLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			reloadTime=5;
		};
    };
	class ELL_ShockPistol_Yellow: ELL_ShockPistol_ColorBase {
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_yel_co.paa"
		};
	};
	class ELL_ShockPistol_Black: ELL_ShockPistol_ColorBase {
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_bk_co.paa"
		};
	};
};
class cfgMagazines {
    // Hide vanilla broken stuff
    class Magazine_Base;
	class Mag_ShockCartridge: Magazine_Base {
	    scope=0;
	};

    class Mag_MKII_10Rnd;
	class ELL_Mag_ShockCartridge: Mag_MKII_10Rnd {
		scope=2;
		displayName="X2 Taser Cartridge";
		descriptionShort="A Duel-Shot Cartridge to go into a X2 Taser, contains two small dart-like electrodes which once fired stick in the skin delivering temporarily incapacitating voltage to the target.";
		model="\DZ\weapons\attachments\magazine\shockpistol_cartridge.p3d";
		itemSize[]={1,1};
		count=2;
		ammo="ELL_Bullet_ShockDart";
		ammoItems[]=
		{
			"ELL_Ammo_ShockDart"
		};
	};

	class Ammo_22;
	class ELL_Ammo_ShockDart: Ammo_22 {
		scope=2;
		displayName="X2 Taser Dart";
		descriptionShort="A small dart-like electrodes which belongs inside of a Taser Cartridge. (Should probably leave on the floor to despawn).";
		count=1;
		ammo="ELL_Bullet_ShockDart";
	};
};
class cfgAmmo {
	class Bullet_22;
	class ELL_Bullet_ShockDart: Bullet_22 {
		spawnPileType="ELL_Ammo_ShockDart";
		class DamageApplied {
			class Health {
				damage=0;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=1000;
			};
		};
	};
};
class CfgSoundShaders {
    class base_Closure_SoundShader;
    class base_ProfessionalSilenced_closeShot_SoundShader;
    class base_ProfessionalSilenced_midShot_SoundShader;
    class base_ProfessionalSilenced_distShot_SoundShader;
	class ELL_ShockPistol_Closure_SoundShader: base_Closure_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.4125376;
	};
	class ELL_ShockPistol_closeShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.9952624;
	};
	class ELL_ShockPistol_midShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.5848932;
	};
	class ELL_ShockPistol_distShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1},
			{"EnhancedLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.5848932;
	};
};
class CfgSoundSets {
    class Pistol_silencerPro_Base_SoundSet;
	class ELL_ShockPistol_Shot_SoundSet: Pistol_silencerPro_Base_SoundSet {
		soundShaders[]=
		{
			"ELL_ShockPistol_closeShot_SoundShader",
			"ELL_ShockPistol_midShot_SoundShader",
			"ELL_ShockPistol_distShot_SoundShader",
			"ELL_ShockPistol_Closure_SoundShader"
		};
	};
};