#pragma once

#include "../Main/Main.h"

#define FIX_MIN_FOV_HEAD	30
#define FIX_MIN_FOV_CHEST	50
#define FOV_BASE_DISTANCE	200

namespace Settings
{
	void LoadSettings( string szIniFile );
	void SaveSettings( string szIniFile );
	extern float hitmarkerAlpha;
	int TriggerCharToKey( const char* Key );

	namespace Aimbot
	{
		struct weapon_aim_s
		{
			//[swap_lines]
			bool aim_Active;
			int aim_Smooth;
			int aim_Fov;
			int aim_FovType;
			int aim_BestHit;
			int aim_Spot;
			int aim_Delay;
			int aim_Rcs;
			int aim_RcsFov;
			int aim_RcsSmooth;
			int aim_RcsClampType;
			bool aim_AutoPistol;
			//[/swap_lines]
		};
		//[swap_lines]
		extern int aim_Backtracktickrate;
		extern bool aim_Backtrack;
		extern bool aim_DrawBacktrack;
		extern bool aim_Deathmatch;
		extern bool aim_WallAttack;
		extern bool aim_CheckSmoke;
		extern bool aim_AntiJump;
		extern int aim_RcsType;
		extern bool aim_DrawFov;
		extern bool aim_DrawSpot;
		
		extern weapon_aim_s weapon_aim_settings[33];
		//[/swap_lines]
	}

	namespace Esp
	{
		//[swap_lines]
		extern int esp_Style; // 0 - Box 1 - CoalBox
		extern int esp_Size;
		extern bool esp_Line;
		extern bool esp_Outline; // Box ( 0 - Box 1 - OutlineBox ) ,
						  // CoalBox ( 0 - CoalBox 1 - OutlineCoalBox )	

		extern bool esp_Time;
		extern bool esp_Watermark;
		extern bool esp_Cheatbuild;
		extern bool esp_Name;
		extern bool esp_Rank;
		extern int esp_Health;
		extern int esp_Armor;
		extern bool esp_Weapon;
		extern bool esp_Ammo;
		extern bool esp_Distance;
		extern bool esp_Sound;
		extern bool esp_GrenadePrediction;

		extern float esp_Ambient[3];

		extern bool esp_HitMarker;
		extern int esp_HitMarkerSound;
		extern float esp_HitMarkerColor[3];

		extern bool esp_Skeleton;
		extern int esp_BulletTrace;
		extern bool esp_Team;
		extern bool esp_Enemy;
		extern int esp_Visible;
		extern int esp_ChamsVisible;

		extern int esp_Chams;
		extern bool esp_XQZ;
		extern bool esp_Bomb;
		extern int esp_BombTimer;
		extern bool esp_WorldWeapons;
		extern bool esp_WorldGrenade;
		extern bool esp_BoxNade;

		extern float esp_Color_CT[3];
		extern float esp_Color_TT[3];
		extern float esp_Color_VCT[3];
		extern float esp_Color_VTT[3];

		extern float chams_Color_CT[3];
		extern float chams_Color_TT[3];
		extern float chams_Color_VCT[3];
		extern float chams_Color_VTT[3];
		//[/swap_lines]
	}

	namespace Skin
	{
		//[swap_lines]
		extern int knf_ct_model;
		extern int knf_ct_skin;
		extern int knf_tt_model;
		extern int knf_tt_skin;
		extern int gloves_skin;
		//[/swap_lines]
	}

	namespace Misc
	{
		//[swap_lines]
		extern QAngle qLastTickAngle;
		extern bool misc_ThirdPerson;
		extern float misc_ThirdPersonRange;
		extern const char* misc_SkyName;
		extern float misc_MenuColor[3];
		extern float misc_TextColor[3];
		extern bool misc_ChamsMaterials;
		extern int misc_ChamsMaterialsList;
		extern bool misc_ArmMaterials;
		extern int misc_ArmMaterialsList;
		extern int misc_ArmMaterialsType;
		extern int misc_CurrentSky;
		extern bool misc_SkinChanger;
		extern bool misc_KnifeChanger;
		extern bool misc_NoSky;
		extern bool misc_Snow;
		extern bool misc_EPostprocess;
		extern bool misc_Postprocess;
		extern bool misc_Bhop;
		extern int misc_Clan;
		extern bool misc_spamregular;
		extern bool misc_spamrandom;
		extern bool misc_Punch;
		extern bool misc_AwpAim;
		extern bool misc_NoFlash;	
		extern bool misc_NoSmoke;
		extern bool misc_WireHands;
		extern bool misc_NoHands;
		extern bool misc_AutoStrafe;
		extern bool misc_AutoAccept;
		extern bool misc_Spectators;
		extern bool misc_RainbowMenu;
		extern float misc_RainbowSpeed;
		extern bool misc_FovChanger;
		extern int misc_FovView;
		extern int misc_FovModelView;
		extern float misc_AwpAimColor[3];

		extern bool misc_namespamidkmemes;
		extern bool misc_namespamidkmemes_static;
		extern char First[64];
		extern char Second[64];
		extern char* First_static;
		extern char* Second_static;

		extern float hitmarkerAlpha;
	}
}

#define CHEAT_NAME "HandsomeWJ"
#define WATER_MARK "HandsomeWJ CSGO Cheat V1"
#define AIMBOT_TEXT "Aim"
#define COLORS_TEXT "Colors"
#define CONFIG_TEXT "Config"
#define TRIGGER_TEXT "Trigger"
#define KNIFEBOT_TEXT "Knifebot"
#define VISUAL_TEXT "ESP"
#define RADAR_TEXT "Radar"
#define SKIN_TEXT "Skin"
#define MISC_TEXT "Misc"

#define CVAR_AIMBOT_DEATHMATCH "aim_Deathmatch"
#define CVAR_AIMBOT_WALLATTACK "aim_WallAttack"
#define CVAR_AIMBOT_CHECKSMOKE "aim_CheckSmoke"
#define CVAR_AIMBOT_ANTIJUMP	"aim_IgnoreJump"
#define CVAR_AIMBOT_RCSTYPE "aim_RcsType"
#define CVAR_AIMBOT_DRAWFOV "aim_DrawFov"
#define CVAR_AIMBOT_DRAWSPOT "aim_DrawSpot"

#define CVAR_AIMBOT_ACTIVE "aim_Active"
#define CVAR_AIMBOT_SMOOTH "aim_Smooth"
#define CVAR_AIMBOT_FOV "aim_Fov"
#define CVAR_AIMBOT_FOVTYPE "aim_FovType"
#define CVAR_AIMBOT_BESTHIT "aim_BestHit"
#define CVAR_AIMBOT_SPOT "aim_Spot"
#define CVAR_AIMBOT_DELAY "aim_Delay"

#define CVAR_AIMBOT_RCS "aim_Rcs"
#define CVAR_AIMBOT_RCSFOV "aim_RcsFov"
#define CVAR_AIMBOT_RCSSMOOTH "aim_RcsSmooth"
#define CVAR_AIMBOT_RCSCLAMPTYPE "aim_RcsClampType"
#define CVAR_AIMBOT_AUTOPISTOL "aim_AutoPistol"

#define CVAR_KEY_MOUSE3 "MOUSE3"
#define CVAR_KEY_MOUSE4 "MOUSE4"
#define CVAR_KEY_MOUSE5 "MOUSE5"

#define CVAR_ESP_STYLE "ESP_Style"
#define CVAR_ESP_SIZE "ESP_Size"
#define CVAR_ESP_LINE "ESP_Line"
#define CVAR_ESP_OUTLINE "ESP_Outline"
#define CVAR_ESP_NAME "ESP_Name"
#define CVAR_ESP_RANK "ESP_Rank"
#define CVAR_ESP_TIME "ESP_Time"
#define CVAR_ESP_WATER "ESP_Watermark"
#define CVAR_ESP_CHEATBUILD "ESP_Cheatbuild"

#define CVAR_ESP_HITMARKER_COLOR "ESP_HitMarkerColor"

#define CVAR_ESP_HEALTH "ESP_Health"
#define CVAR_ESP_ARMOR "ESP_Armor"
#define CVAR_ESP_WEAPON "ESP_Weapon"
#define CVAR_ESP_AMMO "ESP_Ammo"
#define CVAR_ESP_DISTANCE "ESP_Distance"
#define CVAR_ESP_SOUND "ESP_Sound"

#define CVAR_ESP_SKELETON "ESP_Skeleton"
#define CVAR_ESP_BULLETTRACE "ESP_BulletTrace"
#define CVAR_ESP_TEAM "ESP_Team"
#define CVAR_ESP_ENEMY "ESP_Enemy"
#define CVAR_ESP_VISIBLE "ESP_Visible"
#define CVAR_ESP_CHAMSVISIBLE "ESP_ChamsVisible"

#define CVAR_ESP_CHAMS "ESP_Chams"
#define CVAR_ESP_BOMB "ESP_Bomb"
#define CVAR_ESP_BOMBTIMER "ESP_BombTimer"
#define CVAR_ESP_WORLDWEAPONS "ESP_WorldWeapons"
#define CVAR_ESP_WORLDGRENADE "ESP_WorldGrenade"

#define CVAR_ESP_COLOR_CT "ESP_Color_CT"
#define CVAR_ESP_COLOR_TT "ESP_Color_TT"
#define CVAR_ESP_COLOR_VCT "ESP_Color_VCT"
#define CVAR_ESP_COLOR_VTT "ESP_Color_VTT"

#define CVAR_CHAMS_COLOR_CT "chams_Color_CT"
#define CVAR_CHAMS_COLOR_TT "chams_Color_TT"
#define CVAR_CHAMS_COLOR_VCT "chams_Color_VCT"
#define CVAR_CHAMS_COLOR_VTT "chams_Color_VTT"

#define C4_TIMER_STRING "C4 Timer: %0.2f"

#define CVAR_RAD_ACTIVE "rad_Active"
#define CVAR_RAD_TEAM "rad_Team"
#define CVAR_RAD_ENEMY "rad_Enemy"
#define CVAR_RAD_SOUND "rad_Sound"
#define CVAR_RAD_INGAME "rad_InGame"
#define CVAR_RAD_RANGE "rad_Range"
#define CVAR_RAD_ALPHA "rad_Alpha"

#define CVAR_RAD_COLOR_CT "rad_Color_CT"
#define CVAR_RAD_COLOR_TT "rad_Color_TT"
#define CVAR_RAD_COLOR_VCT "rad_Color_VCT"
#define CVAR_RAD_COLOR_VTT "rad_Color_VTT"

#define CVAR_SKIN_CT_MODEL "knf_ct_model"
#define CVAR_SKIN_CT_SKIN "knf_ct_skin"
#define CVAR_SKIN_TT_MODEL "knf_tt_model"
#define CVAR_SKIN_TT_SKIN "knf_tt_skin"
#define CVAR_SKIN_GLOVES "gloves_skin"

#define CVAR_MISC_MENU_COLOR "misc_MenuColor"
#define CVAR_MISC_SKIN_CHANGER "misc_SkinChanger"
#define CVAR_MISC_KNIFE_CHANGER "misc_KnifeChanger"
#define CVAR_MISC_EPOSTPROCESS "misc_EPostprocess"
#define CVAR_MISC_POSTPROCESS "misc_Postprocess"
#define CVAR_AIMBOT_BACKTRACK "aim_Backtrack"
#define CVAR_AIMBOT_BACKTRACK_TICK "aim_Backtracktickrate"
#define CVAR_MISC_BHOP "misc_Bhop"
#define CVAR_MISC_PUNCH "misc_Punch"
#define CVAR_MISC_AWPAIM "misc_AwpAim"
#define CVAR_MISC_NOFLASH "misc_NoFlash"
#define CVAR_MISC_NOSMOKE "misc_NoSmoke"
#define CVAR_MISC_NOHANDS "misc_NoHands"
#define CVAR_MISC_WIREHANDS "misc_WireHands"
#define CVAR_MISC_AUTOSTRAFE "misc_AutoStrafe"
#define CVAR_MISC_AUTOACCEPT "misc_AutoAccept"
#define CVAR_MISC_SPECTATORS "misc_Spectators"
#define CVAR_MISC_FOV_CHANGER "misc_FovChanger"
#define CVAR_MISC_FOV_VIEW "misc_FovView"
#define CVAR_MISC_FOV_MDL_VIEW "misc_FovModelView"
#define CVAR_MISC_AWPAIM_COLOR "misc_AwpAimColor"