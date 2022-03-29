// You may not re-upload this mod ("EnhancedLessLethal") without modification
// You may otherwise use the content of this file however you wish
// You may repack this mod ("EnhancedLessLethal") into a Server Pack

// If you required assistance I offer support: See my website for more detail;
// Website- https://macmodding.info/
// My Mods- https://steamcommunity.com/id/macrobberts/myworkshopfiles/
// GitHub - https://github.com/MacRobberts?tab=repositories
// Discord- https://discord.com/channels/@me/892288642775650345
class CfgPatches {
    class EnhancedLessLethal {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data"
        };
		magazines[]={};
		ammo[]={};
    };
};
class CfgMods {
    class EnhancedLessLethal {
        hideName=1;
        hidePicture=1;
        name="EnhancedLessLethal";
        credits="Mac Robberts";
        author="EnhancedLessLethal";
        version="0.1";
        type="mod";
        dependencies[] = {"World"};
        class defs {
            class worldScriptModule {
				files[] = {"EnhancedLessLethal/scripts/4_world"};
            };
		};
	};
};