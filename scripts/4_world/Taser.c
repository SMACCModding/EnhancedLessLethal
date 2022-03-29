// You may not re-upload this mod ("EnhancedLessLethal") without modification
// You may otherwise use the content of this file however you wish
// You may repack this mod ("EnhancedLessLethal") into a Server Pack

// If you required assistance I offer support: See my website for more detail;
// Website- https://macmodding.info/
// My Mods- https://steamcommunity.com/id/macrobberts/myworkshopfiles/
// GitHub - https://github.com/MacRobberts?tab=repositories
// Discord- https://discord.com/channels/@me/892288642775650345

//TODO: Slightly weird functionality still
// Battery - If has one with 24 >
// Magazine- If has one with 0 >
//TODO: Additional textures
//TODO: Missed shots cut off?

//modded class WeaponGuardHasAmmo extends WeaponGuardBase {
//	override bool GuardCondition (WeaponEventBase e)
//	{
//		int mi = m_weapon.GetCurrentMuzzle();
//		Magazine mag = m_weapon.GetMagazine(mi);
//		if (mag != NULL && mag.GetAmmoCount() > 0)
//		{
//            ItemBase m_ShockBattery = ItemBase.Cast(m_weapon.GetInventory().GetAttachmentFromIndex(0));
//            if (m_ShockBattery == NULL || m_ShockBattery.GetDisplayName() != "X2 Taser Battery")
//                m_ShockBattery = ItemBase.Cast(m_weapon.GetInventory().GetAttachmentFromIndex(1));
//
//            if (m_ShockBattery != NULL && m_ShockBattery.GetQuantity() > 24)
//                return true;
//		}
//		return false;
//	}
//};

class ELL_ShockPistol_ColorBase: MKII_Base
{
    override void OnFire(int muzzle_index)
    {
        m_BurstCount++;
		ItemBase m_ShockBattery = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(0));
		if (m_ShockBattery.GetDisplayName() != "X2 Taser Battery")
		    m_ShockBattery = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(1));
        m_ShockBattery.AddQuantity( -25 );
    }

	override float GetChanceToJam() { return 0; }
	bool CanUnjam() { return false; }
	bool CanEjectBullet() { return false; }

	override bool CanReleaseAttachment(EntityAI attachment)
    {
        PlayerBase player = PlayerBase.Cast( GetHierarchyRootPlayer() );
        if ( player )
            if ( player.GetItemInHands() != this )
                return false;
        Magazine mag = Magazine.Cast(attachment);
        if (mag != NULL)
            if (mag.GetAmmoCount() == 2)
                return true;
            if (mag.GetAmmoCount() > 0 || !IsChamberEmpty(0))
                return false;
        return true;
    }

    override void SetActions()
    {
        super.SetActions();
        RemoveAction(FirearmActionDetachMagazine);
    }
};
class ELL_ShockPistol_Yellow: ELL_ShockPistol_ColorBase {};
class ELL_ShockPistol_Black: ELL_ShockPistol_ColorBase {};
class ELL_Ammo_ShockDart: Ammunition_Base {};
class ELL_Mag_ShockCartridge: Magazine_Base {};
class ELL_ShockPistol_Battery: Battery9V {};

modded class ModItemRegisterCallbacks
{
 	override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
        super.RegisterPistol( pType, pBehavior );
		pType.AddItemInHandsProfileIK("ELL_ShockPistol_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_ij70.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ij70.anm", "dz/anims/anm/player/reloads/IJ70/w_IJ70_states.anm");
	}
};