#include "Settings.h"

//[enc_string_enable /]
//[junk_enable /]

using namespace Client;

namespace Settings
{
	void LoadSettings( string szIniFile )
	{
		CSX::Cvar::InitPath( szIniFile.c_str() );
		Aimbot::aim_Backtrack = CSX::Cvar::LoadCvar(AIMBOT_TEXT, CVAR_AIMBOT_BACKTRACK, Aimbot::aim_Backtrack) != false;
		Aimbot::aim_Backtracktickrate = CSX::Cvar::LoadCvar(AIMBOT_TEXT, CVAR_AIMBOT_BACKTRACK_TICK, Aimbot::aim_Backtracktickrate);
		Aimbot::aim_Deathmatch = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_DEATHMATCH , Aimbot::aim_Deathmatch );
		Aimbot::aim_WallAttack = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_WALLATTACK , Aimbot::aim_WallAttack );
		Aimbot::aim_CheckSmoke = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_CHECKSMOKE , Aimbot::aim_CheckSmoke );
		Aimbot::aim_AntiJump = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_ANTIJUMP , Aimbot::aim_AntiJump );
		Aimbot::aim_RcsType = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_RCSTYPE , Aimbot::aim_RcsType );
		Aimbot::aim_DrawFov = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_DRAWFOV , Aimbot::aim_DrawFov );
		Aimbot::aim_DrawSpot = CSX::Cvar::LoadCvar( AIMBOT_TEXT , CVAR_AIMBOT_DRAWSPOT , Aimbot::aim_DrawSpot );

		for ( DWORD i = 0; i < WEAPON_DATA_SIZE; i++ )
		{
			// ��������?
			if ( i <= 9 )
			{
				Aimbot::weapon_aim_settings[i].aim_Active = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , 0 );
				Aimbot::weapon_aim_settings[i].aim_Smooth = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , 50 );
				Aimbot::weapon_aim_settings[i].aim_Fov = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , 35 );
				Aimbot::weapon_aim_settings[i].aim_FovType = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , 1 );
				Aimbot::weapon_aim_settings[i].aim_BestHit = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , 0 );
				Aimbot::weapon_aim_settings[i].aim_Spot = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , 5 );
				Aimbot::weapon_aim_settings[i].aim_Delay = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , 0 );
				Aimbot::weapon_aim_settings[i].aim_Rcs = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , 50 );
				Aimbot::weapon_aim_settings[i].aim_AutoPistol = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_AUTOPISTOL , 0 );
			}

			// ��������
			if ( i >= 10 && i <= 30 )
			{
				Aimbot::weapon_aim_settings[i].aim_Active = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , 0 );
				Aimbot::weapon_aim_settings[i].aim_Smooth = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , 50 );
				Aimbot::weapon_aim_settings[i].aim_Fov = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , 35 );
				Aimbot::weapon_aim_settings[i].aim_FovType = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , 1 );
				Aimbot::weapon_aim_settings[i].aim_BestHit = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , 0 );
				Aimbot::weapon_aim_settings[i].aim_Spot = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , 5 );
				Aimbot::weapon_aim_settings[i].aim_Delay = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , 0 );
				Aimbot::weapon_aim_settings[i].aim_Rcs = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , 50 );
				Aimbot::weapon_aim_settings[i].aim_RcsFov = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCSFOV , 50 );
				Aimbot::weapon_aim_settings[i].aim_RcsSmooth = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCSSMOOTH , 50 );
				Aimbot::weapon_aim_settings[i].aim_RcsClampType = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCSCLAMPTYPE , 0 );
			}

			// ��������?
			if ( i >= 31 && i <= 32 )
			{
				Aimbot::weapon_aim_settings[i].aim_Active = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , 0 );
				Aimbot::weapon_aim_settings[i].aim_Smooth = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , 50 );
				Aimbot::weapon_aim_settings[i].aim_Fov = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , 35 );
				Aimbot::weapon_aim_settings[i].aim_FovType = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , 1 );
				Aimbot::weapon_aim_settings[i].aim_BestHit = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , 0 );
				Aimbot::weapon_aim_settings[i].aim_Spot = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , 5 );
				Aimbot::weapon_aim_settings[i].aim_Delay = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , 0 );
				Aimbot::weapon_aim_settings[i].aim_Rcs = CSX::Cvar::LoadCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , 50 );
			}
		}

		Esp::esp_Style = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_STYLE , Esp::esp_Style );
		Esp::esp_Size = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_SIZE , Esp::esp_Size );
		Esp::esp_Line = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_LINE , Esp::esp_Line ) != false;
		Esp::esp_Outline = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_OUTLINE , Esp::esp_Outline ) != false;

		Esp::esp_Name = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_NAME , Esp::esp_Name ) != false;
		Esp::esp_Time = CSX::Cvar::LoadCvar(VISUAL_TEXT, CVAR_ESP_TIME, Esp::esp_Time) != false;
		Esp::esp_Watermark = CSX::Cvar::LoadCvar(VISUAL_TEXT, CVAR_ESP_WATER, Esp::esp_Watermark) != false;
		Esp::esp_Cheatbuild = CSX::Cvar::LoadCvar(VISUAL_TEXT, CVAR_ESP_CHEATBUILD, Esp::esp_Cheatbuild) != false;
		Esp::esp_Rank = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_RANK , Esp::esp_Rank ) != false;
		Esp::esp_Health = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_HEALTH , Esp::esp_Health );
		Esp::esp_Armor = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_ARMOR , Esp::esp_Armor );
		Esp::esp_Weapon = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_WEAPON , Esp::esp_Weapon ) != false;
		Esp::esp_Ammo = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_AMMO , Esp::esp_Ammo ) != false;
		Esp::esp_Distance = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_DISTANCE , Esp::esp_Distance ) != false;
		Esp::esp_Sound = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_SOUND , Esp::esp_Sound ) != false;

		Esp::esp_Skeleton = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_SKELETON , Esp::esp_Skeleton ) != false;
		Esp::esp_BulletTrace = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_BULLETTRACE , Esp::esp_BulletTrace );
		Esp::esp_Team = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_TEAM , Esp::esp_Team ) != false;
		Esp::esp_Enemy = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_ENEMY , Esp::esp_Enemy ) != false;
		Esp::esp_Visible = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_VISIBLE , Esp::esp_Visible );
		Esp::esp_ChamsVisible = CSX::Cvar::LoadCvar(VISUAL_TEXT, CVAR_ESP_CHAMSVISIBLE, Esp::esp_ChamsVisible);

		Esp::esp_Chams = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_CHAMS , Esp::esp_Chams );
		Esp::esp_Bomb = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_BOMB , Esp::esp_Bomb ) != false;
		Esp::esp_BombTimer = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_BOMBTIMER , Esp::esp_BombTimer );
		Esp::esp_WorldWeapons = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_WORLDWEAPONS , Esp::esp_WorldWeapons ) != false;
		Esp::esp_WorldGrenade = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_WORLDGRENADE , Esp::esp_WorldGrenade ) != false;

		string esp_Color_CT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_COLOR_CT , "0,164,255" );
		string esp_Color_TT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_COLOR_TT , "255,64,64" );
		string esp_Color_VCT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_COLOR_VCT , "124,252,0" );
		string esp_Color_VTT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_ESP_COLOR_VTT , "124,252,0" );

		string chams_Color_CT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_CT , "0,164,255" );
		string chams_Color_TT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_TT , "255,64,64" );
		string chams_Color_VCT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_VCT , "124,252,0" );
		string chams_Color_VTT = CSX::Cvar::LoadCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_VTT , "124,252,0" );

		string Color_HITMARKER = CSX::Cvar::LoadCvar(VISUAL_TEXT, "ESP_HitMarkerColor", "255,0,0");

		ScanColorFromCvar(Color_HITMARKER.c_str(), Esp::esp_HitMarkerColor);

		ScanColorFromCvar( esp_Color_CT.c_str() , Settings::Esp::esp_Color_CT );
		ScanColorFromCvar( esp_Color_TT.c_str() , Settings::Esp::esp_Color_TT );
		ScanColorFromCvar( esp_Color_VCT.c_str() , Settings::Esp::esp_Color_VCT );
		ScanColorFromCvar( esp_Color_VTT.c_str() , Settings::Esp::esp_Color_VTT );

		ScanColorFromCvar( chams_Color_CT.c_str() , Settings::Esp::chams_Color_CT );
		ScanColorFromCvar( chams_Color_TT.c_str() , Settings::Esp::chams_Color_TT );
		ScanColorFromCvar( chams_Color_VCT.c_str() , Settings::Esp::chams_Color_VCT );
		ScanColorFromCvar( chams_Color_VTT.c_str() , Settings::Esp::chams_Color_VTT );

		Skin::knf_ct_model = CSX::Cvar::LoadCvar( SKIN_TEXT , CVAR_SKIN_CT_MODEL , Skin::knf_ct_model );
		Skin::knf_ct_skin = CSX::Cvar::LoadCvar( SKIN_TEXT , CVAR_SKIN_CT_SKIN , Skin::knf_ct_skin );
		Skin::knf_tt_model = CSX::Cvar::LoadCvar( SKIN_TEXT , CVAR_SKIN_TT_MODEL , Skin::knf_tt_model );
		Skin::knf_tt_skin = CSX::Cvar::LoadCvar( SKIN_TEXT , CVAR_SKIN_TT_SKIN , Skin::knf_tt_skin );
		Skin::gloves_skin = CSX::Cvar::LoadCvar( SKIN_TEXT , CVAR_SKIN_GLOVES , Skin::gloves_skin );

		for ( DWORD i = 0; i < WEAPON_DATA_SIZE; i++ )
		{
			g_SkinChangerCfg[pWeaponItemIndexData[i]].nFallbackPaintKit = CSX::Cvar::LoadCvar( SKIN_TEXT , pWeaponData[i] , 0 );
		}

		if ( Interfaces::Engine()->IsConnected() )
			ForceFullUpdate();

		Misc::misc_SkinChanger = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_SKIN_CHANGER, Misc::misc_SkinChanger) != false;
		Misc::misc_KnifeChanger = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_KNIFE_CHANGER, Misc::misc_KnifeChanger) != false;
		Misc::misc_EPostprocess = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_EPOSTPROCESS, Misc::misc_EPostprocess) != false;
		Misc::misc_Bhop = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_BHOP , Misc::misc_Bhop ) != false;
		Misc::misc_Punch = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_PUNCH , Misc::misc_Punch ) != false;
		Misc::misc_AwpAim = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_AWPAIM , Misc::misc_AwpAim ) != false;
		Misc::misc_NoFlash = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_NOFLASH , Misc::misc_NoFlash ) != false;
		Misc::misc_NoSmoke = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_NOSMOKE, Misc::misc_NoSmoke) != false;
		Misc::misc_WireHands = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_WIREHANDS, Misc::misc_WireHands) != false;
		Misc::misc_NoHands = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_NOHANDS, Misc::misc_NoHands) != false;
		Misc::misc_AutoStrafe = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_AUTOSTRAFE , Misc::misc_AutoStrafe ) != false;
		Misc::misc_AutoAccept = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_AUTOACCEPT , Misc::misc_AutoAccept ) != false;
		Misc::misc_Spectators = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_SPECTATORS , Misc::misc_Spectators ) != false;
		Misc::misc_FovChanger = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_FOV_CHANGER , Misc::misc_FovChanger ) != false;
		Misc::misc_FovView = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_FOV_VIEW , Misc::misc_FovView );
		Misc::misc_FovModelView = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_FOV_MDL_VIEW , Misc::misc_FovModelView );

		string Color_AWPAIM = CSX::Cvar::LoadCvar( MISC_TEXT , CVAR_MISC_AWPAIM_COLOR , "255,0,0" );

		ScanColorFromCvar( Color_AWPAIM.c_str() , Misc::misc_AwpAimColor );
		
		string Color_MENU = CSX::Cvar::LoadCvar(MISC_TEXT, CVAR_MISC_MENU_COLOR, "0,0,0");

		ScanColorFromCvar(Color_MENU.c_str(), Misc::misc_MenuColor);

		string Color_TEXT = CSX::Cvar::LoadCvar(MISC_TEXT, "misc_TextColor", "255,255,255");

		ScanColorFromCvar(Color_TEXT.c_str(), Misc::misc_TextColor);
}

	void SaveSettings( string szIniFile )
	{
		CSX::Cvar::InitPath( szIniFile.c_str() );

		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_DEATHMATCH , Aimbot::aim_Deathmatch );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_WALLATTACK , Aimbot::aim_WallAttack );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_CHECKSMOKE , Aimbot::aim_CheckSmoke );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_ANTIJUMP , Aimbot::aim_AntiJump );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_RCSTYPE , Aimbot::aim_RcsType );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_DRAWFOV , Aimbot::aim_DrawFov );
		CSX::Cvar::SaveCvar( AIMBOT_TEXT , CVAR_AIMBOT_DRAWSPOT , Aimbot::aim_DrawSpot );
		CSX::Cvar::SaveCvar(AIMBOT_TEXT, CVAR_AIMBOT_BACKTRACK, Aimbot::aim_Backtrack);
		CSX::Cvar::SaveCvar(AIMBOT_TEXT, CVAR_AIMBOT_BACKTRACK_TICK, Aimbot::aim_Backtracktickrate);

		for ( DWORD i = 0; i < WEAPON_DATA_SIZE; i++ )
		{
			// ��������?
			if ( i <= 9 )
			{
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , Aimbot::weapon_aim_settings[i].aim_Active );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , Aimbot::weapon_aim_settings[i].aim_Smooth );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , Aimbot::weapon_aim_settings[i].aim_Fov );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , Aimbot::weapon_aim_settings[i].aim_FovType );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , Aimbot::weapon_aim_settings[i].aim_BestHit );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , Aimbot::weapon_aim_settings[i].aim_Spot );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , Aimbot::weapon_aim_settings[i].aim_Delay );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , Aimbot::weapon_aim_settings[i].aim_Rcs );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_AUTOPISTOL , Aimbot::weapon_aim_settings[i].aim_AutoPistol );
			}

			// ��������
			if ( i >= 10 && i <= 30 )
			{
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , Aimbot::weapon_aim_settings[i].aim_Active );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , Aimbot::weapon_aim_settings[i].aim_Smooth );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , Aimbot::weapon_aim_settings[i].aim_Fov );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , Aimbot::weapon_aim_settings[i].aim_FovType );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , Aimbot::weapon_aim_settings[i].aim_BestHit );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , Aimbot::weapon_aim_settings[i].aim_Spot );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , Aimbot::weapon_aim_settings[i].aim_Delay );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , Aimbot::weapon_aim_settings[i].aim_Rcs );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCSFOV , Aimbot::weapon_aim_settings[i].aim_RcsFov );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCSSMOOTH , Aimbot::weapon_aim_settings[i].aim_RcsSmooth );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCSCLAMPTYPE , Aimbot::weapon_aim_settings[i].aim_RcsClampType );
			}

			// ��������?
			if ( i >= 31 && i <= 32 )
			{
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_ACTIVE , Aimbot::weapon_aim_settings[i].aim_Active );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SMOOTH , Aimbot::weapon_aim_settings[i].aim_Smooth );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOV , Aimbot::weapon_aim_settings[i].aim_Fov );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_FOVTYPE , Aimbot::weapon_aim_settings[i].aim_FovType );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_BESTHIT , Aimbot::weapon_aim_settings[i].aim_BestHit );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_SPOT , Aimbot::weapon_aim_settings[i].aim_Spot );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_DELAY , Aimbot::weapon_aim_settings[i].aim_Delay );
				CSX::Cvar::SaveCvar( pWeaponData[i] , CVAR_AIMBOT_RCS , Aimbot::weapon_aim_settings[i].aim_Rcs );
			}
		}

		
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_STYLE , Settings::Esp::esp_Style );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_SIZE , Settings::Esp::esp_Size );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_LINE , Settings::Esp::esp_Line );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_OUTLINE , Settings::Esp::esp_Outline );

		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_NAME , Settings::Esp::esp_Name );
		CSX::Cvar::SaveCvar(VISUAL_TEXT, CVAR_ESP_TIME, Settings::Esp::esp_Time);
		CSX::Cvar::SaveCvar(VISUAL_TEXT, CVAR_ESP_WATER, Settings::Esp::esp_Watermark);
		CSX::Cvar::SaveCvar(VISUAL_TEXT, CVAR_ESP_CHEATBUILD, Settings::Esp::esp_Cheatbuild);
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_RANK , Settings::Esp::esp_Rank );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_HEALTH , Settings::Esp::esp_Health );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_ARMOR , Settings::Esp::esp_Armor );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_WEAPON , Settings::Esp::esp_Weapon );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_AMMO , Settings::Esp::esp_Ammo );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_DISTANCE , Settings::Esp::esp_Distance );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_SOUND , Settings::Esp::esp_Sound );

		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_SKELETON , Settings::Esp::esp_Skeleton );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_BULLETTRACE , Settings::Esp::esp_BulletTrace );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_TEAM , Settings::Esp::esp_Team );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_ENEMY , Settings::Esp::esp_Enemy );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_VISIBLE , Settings::Esp::esp_Visible );
		CSX::Cvar::SaveCvar(VISUAL_TEXT, CVAR_ESP_CHAMSVISIBLE, Settings::Esp::esp_ChamsVisible);

		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_CHAMS , Settings::Esp::esp_Chams );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_BOMB , Settings::Esp::esp_Bomb );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_BOMBTIMER , Settings::Esp::esp_BombTimer );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_WORLDWEAPONS , Settings::Esp::esp_WorldWeapons );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_WORLDGRENADE , Settings::Esp::esp_WorldGrenade );

		string Color_HITMARKER =
			to_string(int(Esp::esp_HitMarkerColor[0] * 255.f)) + "," +
			to_string(int(Esp::esp_HitMarkerColor[1] * 255.f)) + "," +
			to_string(int(Esp::esp_HitMarkerColor[2] * 255.f));

		string esp_Color_CT =
			to_string( int( Settings::Esp::esp_Color_CT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_CT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_CT[2] * 255.f ) );

		string esp_Color_TT =
			to_string( int( Settings::Esp::esp_Color_TT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_TT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_TT[2] * 255.f ) );

		string esp_Color_VCT =
			to_string( int( Settings::Esp::esp_Color_VCT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_VCT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_VCT[2] * 255.f ) );

		string esp_Color_VTT =
			to_string( int( Settings::Esp::esp_Color_VTT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_VTT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::esp_Color_VTT[2] * 255.f ) );

		CSX::Cvar::SaveCvar(VISUAL_TEXT, "ESP_HitMarkerColor", Color_HITMARKER);
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_COLOR_CT , esp_Color_CT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_COLOR_TT , esp_Color_TT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_COLOR_VCT , esp_Color_VCT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_ESP_COLOR_VTT , esp_Color_VTT );

		string chams_Color_CT =
			to_string( int( Settings::Esp::chams_Color_CT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_CT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_CT[2] * 255.f ) );

		string chams_Color_TT =
			to_string( int( Settings::Esp::chams_Color_TT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_TT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_TT[2] * 255.f ) );

		string chams_Color_VCT =
			to_string( int( Settings::Esp::chams_Color_VCT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_VCT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_VCT[2] * 255.f ) );

		string chams_Color_VTT =
			to_string( int( Settings::Esp::chams_Color_VTT[0] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_VTT[1] * 255.f ) ) + "," +
			to_string( int( Settings::Esp::chams_Color_VTT[2] * 255.f ) );

		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_CT , chams_Color_CT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_TT , chams_Color_TT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_VCT , chams_Color_VCT );
		CSX::Cvar::SaveCvar( VISUAL_TEXT , CVAR_CHAMS_COLOR_VTT , chams_Color_VTT );

		CSX::Cvar::SaveCvar( SKIN_TEXT , CVAR_SKIN_CT_MODEL , Skin::knf_ct_model );
		CSX::Cvar::SaveCvar( SKIN_TEXT , CVAR_SKIN_CT_SKIN , Skin::knf_ct_skin );
		CSX::Cvar::SaveCvar( SKIN_TEXT , CVAR_SKIN_TT_MODEL , Skin::knf_tt_model );
		CSX::Cvar::SaveCvar( SKIN_TEXT , CVAR_SKIN_TT_SKIN , Skin::knf_tt_skin );
		CSX::Cvar::SaveCvar( SKIN_TEXT , CVAR_SKIN_GLOVES , Skin::gloves_skin );

		for ( DWORD i = 0; i < WEAPON_DATA_SIZE; i++ )
		{
			CSX::Cvar::SaveCvar( SKIN_TEXT , pWeaponData[i] , g_SkinChangerCfg[pWeaponItemIndexData[i]].nFallbackPaintKit );
		}

		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_SKIN_CHANGER, Misc::misc_SkinChanger);
		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_KNIFE_CHANGER, Misc::misc_KnifeChanger);
		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_EPOSTPROCESS, Misc::misc_EPostprocess);
		CSX::Cvar::SaveCvar(AIMBOT_TEXT, CVAR_AIMBOT_BACKTRACK, Aimbot::aim_Backtrack);
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_BHOP , Misc::misc_Bhop );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_PUNCH , Misc::misc_Punch );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_NOFLASH , Misc::misc_NoFlash );
		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_NOSMOKE, Misc::misc_NoSmoke);
		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_WIREHANDS, Misc::misc_WireHands);
		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_NOHANDS, Misc::misc_NoHands);
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_AWPAIM , Misc::misc_AwpAim );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_AUTOSTRAFE , Misc::misc_AutoStrafe );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_AUTOACCEPT , Misc::misc_AutoAccept );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_SPECTATORS , Misc::misc_Spectators );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_FOV_CHANGER , Misc::misc_FovChanger );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_FOV_VIEW , Misc::misc_FovView );
		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_FOV_MDL_VIEW , Misc::misc_FovModelView );

		string Color_AWP_AIM =
			to_string( int( Misc::misc_AwpAimColor[0] * 255.f ) ) + "," +
			to_string( int( Misc::misc_AwpAimColor[1] * 255.f ) ) + "," +
			to_string( int( Misc::misc_AwpAimColor[2] * 255.f ) );

		CSX::Cvar::SaveCvar( MISC_TEXT , CVAR_MISC_AWPAIM_COLOR , Color_AWP_AIM );
		
		string Color_MENU =
			to_string(int(Misc::misc_MenuColor[0] * 255.f)) + "," +
			to_string(int(Misc::misc_MenuColor[1] * 255.f)) + "," +
			to_string(int(Misc::misc_MenuColor[2] * 255.f));

		CSX::Cvar::SaveCvar(MISC_TEXT, CVAR_MISC_MENU_COLOR, Color_MENU);

		string Color_TEXT =
			to_string(int(Misc::misc_TextColor[0] * 255.f)) + "," +
			to_string(int(Misc::misc_TextColor[1] * 255.f)) + "," +
			to_string(int(Misc::misc_TextColor[2] * 255.f));

		CSX::Cvar::SaveCvar(MISC_TEXT, "misc_TextColor", Color_TEXT);
}

	float hitmarkerAlpha;

	int TriggerCharToKey( const char* Key )
	{
		if ( !strcmp( Key , CVAR_KEY_MOUSE3 ) ) return 0;
		if ( !strcmp( Key , CVAR_KEY_MOUSE4 ) ) return 1;
		if ( !strcmp( Key , CVAR_KEY_MOUSE5 ) ) return 2;

		return 0;
	}

	namespace Aimbot
	{
		bool aim_Backtrack = false;
		bool aim_DrawBacktrack = false;
		int aim_Backtracktickrate = 1;
		bool aim_Deathmatch = false;
		bool aim_WallAttack = false;
		bool aim_CheckSmoke = false;
		bool aim_AntiJump = false;
		int aim_RcsType = 0;
		bool aim_DrawFov = false;
		bool aim_DrawSpot = false;

		weapon_aim_s weapon_aim_settings[33] = { 0 };
	}

	namespace Esp
	{
		int esp_Style = 0; // 0 - Box 1 - CoalBox
		int esp_Size = 1;
		bool esp_Line = false;
		bool esp_Outline = false; // Box ( 0 - Box 1 - OutlineBox ) ,
						  // CoalBox ( 0 - CoalBox 1 - OutlineCoalBox )	

		bool esp_Time = true;
		bool esp_Watermark = true;
		bool esp_Cheatbuild = true;
		bool esp_Name = false;
		bool esp_Rank = false;
		int esp_Health = 0;
		int esp_Armor = 0;
		bool esp_Weapon = false;
		bool esp_Ammo = false;
		bool esp_Distance = false;
		bool esp_Sound = false;
		bool esp_GrenadePrediction = false;

		float esp_Ambient[3];

		bool esp_HitMarker = false;
		int esp_HitMarkerSound = 0;
		float esp_HitMarkerColor[3] = { 0.f, 0.f, 0.f };

		bool esp_Skeleton = 0;
		int esp_BulletTrace = 0;
		bool esp_Team = 1;
		bool esp_Enemy = 1;
		int esp_Visible = 1;
		int esp_ChamsVisible = 1;

		bool esp_XQZ = false;
		int esp_Chams = 0;
		bool esp_Bomb = false;
		int esp_BombTimer = 40;
		bool esp_WorldWeapons = false;
		bool esp_WorldGrenade = false;
		bool esp_BoxNade = false;

		float esp_Color_CT[3] = { 0.f,0.0f,0.f };
		float esp_Color_TT[3] = { 0.f,0.0f,0.f };
		float esp_Color_VCT[3] = { 0.f,0.0f,0.f };
		float esp_Color_VTT[3] = { 0.f,0.0f,0.f };

		float chams_Color_CT[3] = { 0.f,0.0f,0.f };
		float chams_Color_TT[3] = { 0.f,0.0f,0.f };
		float chams_Color_VCT[3] = { 0.f,0.0f,0.f };
		float chams_Color_VTT[3] = { 0.f,0.0f,0.f };
	}

	
	namespace Skin
	{
		int knf_ct_model = 0;
		int knf_ct_skin = 0;
		int knf_tt_model = 0;
		int knf_tt_skin = 0;
		int gloves_skin = 0;
	}

	namespace Misc
	{
		QAngle qLastTickAngle;
		float misc_MenuColor[3] = { 0.f, 0.f, 0.f };
		bool misc_SkinChanger = true;
		bool misc_KnifeChanger = true;
		bool misc_ThirdPerson = false;
		float misc_ThirdPersonRange = 90.f;
		bool misc_ChamsMaterials = false;
		int misc_ChamsMaterialsList = 0;
		bool misc_ArmMaterials = false;
		int misc_ArmMaterialsList = 0;
		int misc_ArmMaterialsType = 0;
		int misc_Clan = 0;
		bool misc_spamregular = false;
		bool misc_spamrandom = false;
		const char* misc_SkyName;
		int misc_CurrentSky;
		bool misc_NoSky = false;
		bool misc_Snow = false;
		bool misc_EPostprocess = false;
		bool misc_Postprocess = false;
		bool misc_Bhop = false;
		bool misc_Punch = false;
		bool misc_NoFlash = false;
		bool misc_NoSmoke = false;
		bool misc_WireHands = false;
		bool misc_NoHands = false;
		bool misc_AwpAim = false;
		bool misc_AutoStrafe = false;

		bool misc_namespamidkmemes = false;
		bool misc_namespamidkmemes_static = false;
		char* First_static = "noob.cjh";
		char* Second_static = "noob.cjh";
		char First[64];
		char Second[64];

		bool misc_AutoAccept = false;
		bool misc_Spectators = false;
		bool misc_RainbowMenu = false;
		float misc_RainbowSpeed = 0.001f;
		bool misc_FovChanger = false;
		int misc_FovView = 90;
		int misc_FovModelView = 90;
		float misc_AwpAimColor[3] = { 0.f,0.f,0.f };
		float misc_TextColor[3] = { 0.f, 0.f, 0.f };
		float hitmarkerAlpha;
	}
}











































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































