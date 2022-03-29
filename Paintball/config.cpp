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
        units[]={};
        weapons[]=
        {
            "ELL_PaintballGun_Black",
			"ELL_PaintballGun_Red",
			"ELL_PaintballGun_Blue",
			"ELL_PaintballGun_Yellow"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition"
        };
		magazines[]=
		{
		    "ELL_Ammo_Paintball",
		    "ELL_Mag_PaintballDrum"
		};
		ammo[]=
		{
		    "ELL_Bullet_Paintball"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons {
    class Ruger1022;
    class ELL_PaintballGun_ColorBase: Ruger1022 {
        scope=0;
		weight=1500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		attachments[]=
		{
			"weaponOpticsHunting"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		chamberableFrom[]=
		{
			"ELL_Ammo_Paintball"
		};
		magazines[]=
		{
			"ELL_Mag_PaintballDrum"
		};
		class SemiAuto: Mode_SemiAuto {
			soundSetShot[]=
			{
				"ELL_PaintballGun_Shot_SoundSet"
			};
			begin1[]=
			{
				"EnhancedLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
			begin2[]=
			{
				"EnhancedLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
			begin3[]=
			{
				"EnhancedLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
		};
		class NoiseShoot {
			strength=5;
			type="shot";
		};
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=5000;
                };
            };
        };
    };
    class ELL_PaintballGun_Black: ELL_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"
		};
    };
    class ELL_PaintballGun_Red: ELL_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"EnhancedLessLethal\Paintball\data\PaintballGun_Red_co.paa"
		};
    };
    class ELL_PaintballGun_Blue: ELL_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"EnhancedLessLethal\Paintball\data\PaintballGun_Blue_co.paa"
		};
    };
    class ELL_PaintballGun_Yellow: ELL_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"EnhancedLessLethal\Paintball\data\PaintballGun_Yellow_co.paa"
		};
    };
};
class cfgMagazines {
    class Mag_AKM_Drum75Rnd;
	class ELL_Mag_PaintballDrum: Mag_AKM_Drum75Rnd {
		scope=2;
		displayName="Paintball Drum";
		descriptionShort="";
		weight=500;
		count=200;
		ammo="ELL_Bullet_Paintball";
		ammoItems[]=
		{
			"ELL_Ammo_Paintball"
		};
		tracersEvery=1;
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=5000;
                };
            };
        };
	};

	class Ammo_22;
	class ELL_Ammo_Paintball: Ammo_22 {
		scope=2;
		displayName="Paintball Round";
		descriptionShort="Something Something Something";
		count=200;
		ammo="ELL_Bullet_Paintball";
	};
};
class cfgAmmo {
	class Bullet_22;
	class ELL_Bullet_Paintball: Bullet_22 {
		spawnPileType="ELL_Ammo_Paintball";
		class DamageApplied {
			class Health {
				damage=0;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=20;
			};
		};
	};
};
class CfgSoundShaders {
    class base_Closure_SoundShader;
    class base_ProfessionalSilenced_closeShot_SoundShader;
    class base_ProfessionalSilenced_midShot_SoundShader;
    class base_ProfessionalSilenced_distShot_SoundShader;
	class ELL_PaintballGun_Closure_SoundShader: base_Closure_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.4125376;
	};
	class ELL_PaintballGun_closeShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.9952624;
	};
	class ELL_PaintballGun_midShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.5848932;
	};
	class ELL_PaintballGun_distShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader {
		samples[]=
		{
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1},
			{"EnhancedLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.5848932;
	};
};
class CfgSoundSets {
    class Pistol_silencerPro_Base_SoundSet;
	class ELL_PaintballGun_Shot_SoundSet: Pistol_silencerPro_Base_SoundSet {
		soundShaders[]=
		{
			"ELL_PaintballGun_closeShot_SoundShader",
			"ELL_PaintballGun_midShot_SoundShader",
			"ELL_PaintballGun_distShot_SoundShader",
			"ELL_PaintballGun_Closure_SoundShader"
		};
	};
};