#include "Client.h"
#include <ctime>

//[enc_string_enable /]
//[junk_enable /]

bool Aimbot;
bool Visuals;
bool Misc;
bool Colors;

namespace Client
{
	//[swap_lines]
	int	iScreenWidth = 0;
	int	iScreenHeight = 0;

	string BaseDir = "";
	string LogFile = "";
	string GuiFile = "";
	string IniFile = "";

	vector<string> ConfigList;

	Vector2D	g_vCenterScreen = Vector2D(0.f, 0.f);

	CPlayers*	g_pPlayers = nullptr;
	CRender*	g_pRender = nullptr;
	CGui*		g_pGui = nullptr;

	CAimbot*	g_pAimbot = nullptr;
	CEsp*		g_pEsp = nullptr;
	CSkin*		g_pSkin = nullptr;
	CMisc*		g_pMisc = nullptr;

	bool		bC4Timer = false;
	int			iC4Timer = 40;

	int			iWeaponID = 0;
	int			iWeaponSelectIndex = WEAPON_DEAGLE;
	int			iWeaponSelectSkinIndex = -1;
	//[/swap_lines]

	void ReadConfigs(LPCTSTR lpszFileName)
	{
		if (!strstr(lpszFileName, "gui.ini"))
		{
			ConfigList.push_back(lpszFileName);
		}
	}

	void RefreshConfigs()
	{
		ConfigList.clear();
		string ConfigDir = BaseDir + "\\*.ini";
		SearchFiles(ConfigDir.c_str(), ReadConfigs, FALSE);
	}

	//Menu Stuff

	namespace Global
	{
		int MenuTab;
	}

	void TextColor(bool active)
	{
		auto& style = ImGui::GetStyle();

		if (active)
		{
			style.Colors[ImGuiCol_Text] = ImVec4(0.98f, 0.98f, 0.98f, 1.f);
		}
		else
			style.Colors[ImGuiCol_Text] = ImVec4(0.39f, 0.39f, 0.39f, 1.f);
	}

	void DefineTab()
	{
		if (Global::MenuTab == 0)
		{
			Aimbot = true;
			Visuals = false;
			Misc = false;
			Colors = false;
		}
		else if (Global::MenuTab == 1)
		{
			Aimbot = false;
			Visuals = true;
			Misc = false;
			Colors = false;
		}
		else if (Global::MenuTab == 2)
		{
			Aimbot = false;
			Visuals = false;
			Misc = true;
			Colors = false;
		}
		else if (Global::MenuTab == 3)
		{
			Aimbot = false;
			Visuals = false;
			Misc = false;
			Colors = true;
		}
	}

	void BtnNormal()
	{
		auto& style = ImGui::GetStyle();

		style.Colors[ImGuiCol_Button] = ImVec4(0.10, 0.10, 0.10, .98f);
		style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.20f, 0.20f, 0.20f, 1.f);
		style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.21f, 0.21f, 0.21f, 1.f);
	}

	void BtnColor(bool active)
	{
		auto& style = ImGui::GetStyle();

		if (active)
		{
			style.Colors[ImGuiCol_Button] = ImVec4(.78f, 0.f, 0.f, 1.f);
			style.Colors[ImGuiCol_ButtonHovered] = ImVec4(.78f, 0.f, 0.f, 1.f);
			style.Colors[ImGuiCol_ButtonActive] = ImVec4(.78f, 0.f, 0.f, 1.f);
		}
		else
			style.Colors[ImGuiCol_Button] = ImVec4(0.12, 0.12, 0.12, .98f);
		style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.12, 0.12, 0.12, .98f);
		style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.12, 0.12, 0.12, .98f);
	}

	bool Initialize(IDirect3DDevice9* pDevice)
	{
		g_pPlayers = new CPlayers();
		g_pRender = new CRender(pDevice);
		g_pGui = new CGui();

		g_pAimbot = new CAimbot();
		g_pEsp = new CEsp();
		g_pSkin = new CSkin();
		g_pMisc = new CMisc();

		GuiFile = BaseDir + "\\" + "gui.ini";
		IniFile = BaseDir + "\\" + "settings.ini";

		g_pSkin->InitalizeSkins();

		Settings::LoadSettings(IniFile);

		iWeaponSelectSkinIndex = GetWeaponSkinIndexFromPaintKit(g_SkinChangerCfg[iWeaponSelectIndex].nFallbackPaintKit);

		g_pGui->GUI_Init(pDevice);

		RefreshConfigs();

		return true;
	}

	void Shutdown()
	{
		DELETE_MOD(g_pPlayers);
		DELETE_MOD(g_pRender);
		DELETE_MOD(g_pGui);

		DELETE_MOD(g_pAimbot);
		DELETE_MOD(g_pEsp);
		DELETE_MOD(g_pSkin);
		DELETE_MOD(g_pMisc);
	}


	void OnRender()
	{
		if (g_pRender && !Interfaces::Engine()->IsTakingScreenshot() && Interfaces::Engine()->IsActiveApp())
		{
			g_pRender->BeginRender();

			if (g_pGui)
				g_pGui->GUI_Draw_Elements();

			Interfaces::Engine()->GetScreenSize(iScreenWidth, iScreenHeight);

			g_vCenterScreen.x = iScreenWidth / 2.f;
			g_vCenterScreen.y = iScreenHeight / 2.f;




			if (Settings::Esp::esp_Watermark)
			{
				//bool rainbow; 
				static float rainbow;
				rainbow += 0.005f;
				if (rainbow > 1.f) rainbow = 0.f;
				g_pRender->Text(15, 15, false, true, Color::FromHSB(rainbow, 1.f, 1.f), WATER_MARK);
			}

			g_pGui->MenuColor();

			{
				if (g_pEsp)
					g_pEsp->OnRender();

				if (g_pMisc)
				{
					g_pMisc->OnRender();
					g_pMisc->OnRenderSpectatorList();
				}
			}

			std::time_t result = std::time(nullptr);

			if (Settings::Esp::esp_Time)
				g_pRender->Text(15, 30, false, true, Color::White(), std::asctime(std::localtime(&result)));

			g_pRender->EndRender();
		}
	}

	void OnLostDevice()
	{
		if (g_pRender)
			g_pRender->OnLostDevice();

		if (g_pGui)
			ImGui_ImplDX9_InvalidateDeviceObjects();
	}

	void OnResetDevice()
	{
		if (g_pRender)
			g_pRender->OnResetDevice();

		if (g_pGui)
			ImGui_ImplDX9_CreateDeviceObjects();
	}

	void OnCreateMove(CUserCmd* pCmd)
	{
		if (g_pPlayers && Interfaces::Engine()->IsInGame())
		{
			g_pPlayers->Update();

			if (g_pEsp)
				g_pEsp->OnCreateMove(pCmd);

			if (IsLocalAlive())
			{
				if (!bIsGuiVisible)
				{
					int iWeaponSettingsSelectID = GetWeaponSettingsSelectID();

					if (iWeaponSettingsSelectID >= 0)
						iWeaponID = iWeaponSettingsSelectID;
				}

				if (g_pAimbot)
					g_pAimbot->OnCreateMove(pCmd, g_pPlayers->GetLocal());

				if (g_pMisc)
					g_pMisc->OnCreateMove(pCmd);

				backtracking->legitBackTrack(pCmd);

			}
		}
	}

	void OnFireEventClientSideThink(IGameEvent* pEvent)
	{
		if (!strcmp(pEvent->GetName(), "player_connect_full") ||
			!strcmp(pEvent->GetName(), "round_start") ||
			!strcmp(pEvent->GetName(), "cs_game_disconnected"))
		{
			if (g_pPlayers)
				g_pPlayers->Clear();

			if (g_pEsp)
				g_pEsp->OnReset();
		}

		if (Interfaces::Engine()->IsConnected())
		{
			hitmarker::singleton()->initialize();

			if (g_pEsp)
				g_pEsp->OnEvents(pEvent);

			if (g_pSkin)
				g_pSkin->OnEvents(pEvent);
		}
	}

	void OnFrameStageNotify(ClientFrameStage_t Stage)
	{
		if (Interfaces::Engine()->IsInGame() && Interfaces::Engine()->IsConnected())
		{
			/*
			ConVar* sv_cheats = Interfaces::GetConVar()->FindVar("sv_cheats");
			SpoofedConvar* sv_cheats_spoofed = new SpoofedConvar(sv_cheats);
			sv_cheats_spoofed->SetInt(1);
			*/

			if (g_pMisc)
				g_pMisc->FrameStageNotify(Stage);

			Skin_OnFrameStageNotify(Stage);
			Gloves_OnFrameStageNotify(Stage);
		}
	}

	void OnDrawModelExecute(IMatRenderContext* ctx, const DrawModelState_t &state,
		const ModelRenderInfo_t &pInfo, matrix3x4_t *pCustomBoneToWorld)
	{
		if (Interfaces::Engine()->IsInGame() && ctx && pCustomBoneToWorld)
		{
			if (g_pEsp)
				g_pEsp->OnDrawModelExecute(ctx, state, pInfo, pCustomBoneToWorld);

			if (g_pMisc)
				g_pMisc->OnDrawModelExecute();
		}
	}

	void OnPlaySound(const Vector* pOrigin, const char* pszSoundName)
	{
		if (!pszSoundName || !Interfaces::Engine()->IsInGame())
			return;

		if (!strstr(pszSoundName, "bulletLtoR") &&
			!strstr(pszSoundName, "rics/ric") &&
			!strstr(pszSoundName, "impact_bullet"))
		{
			if (g_pEsp && IsLocalAlive() && Settings::Esp::esp_Sound && pOrigin)
			{
				if (!GetVisibleOrigin(*pOrigin))
					g_pEsp->SoundEsp.AddSound(*pOrigin);
			}
		}
	}

	void OnPlaySound(const char* pszSoundName)
	{
		if (g_pMisc)
			g_pMisc->OnPlaySound(pszSoundName);
	}

	void OnOverrideView(CViewSetup* pSetup)
	{
		if (g_pMisc)
			g_pMisc->OnOverrideView(pSetup);
	}

	void OnGetViewModelFOV(float& fov)
	{
		if (g_pMisc)
			g_pMisc->OnGetViewModelFOV(fov);
	}

	void DrawAimbot()
	{

		if (Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_FovType > 1)
		Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_FovType = 1;

		if (Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_BestHit > 1)
		Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_BestHit = 1;

		if (Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Spot > 5)
		Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Spot = 5;

		ImGui::PushItemWidth(110.f);
		ImGui::Text("Current Weapon: ");
		ImGui::SameLine();
		ImGui::Combo("##AimWeapon", &iWeaponID, pWeaponData, IM_ARRAYSIZE(pWeaponData));
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Friendly Fire", &Settings::Aimbot::aim_Deathmatch);
		ImGui::Checkbox("Auto Wall", &Settings::Aimbot::aim_WallAttack);
		ImGui::Checkbox("Check Smoke", &Settings::Aimbot::aim_CheckSmoke);

		ImGui::Checkbox("Anti Jump", &Settings::Aimbot::aim_AntiJump);
		ImGui::Checkbox("Draw Fov", &Settings::Aimbot::aim_DrawFov);
		ImGui::Checkbox("Draw Spot", &Settings::Aimbot::aim_DrawSpot);

		ImGui::Checkbox("Backtrack", &Settings::Aimbot::aim_Backtrack);
		ImGui::Checkbox("Draw Ticks", &Settings::Aimbot::aim_DrawBacktrack);
		ImGui::SliderInt("Ticks", &Settings::Aimbot::aim_Backtracktickrate, 1, 12);

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Active", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Active);

		if (iWeaponID <= 9)
		{
			ImGui::SameLine();
			ImGui::Checkbox("Autopistol", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_AutoPistol);
		}
		ImGui::PushItemWidth(362.f);
		ImGui::SliderInt("Smooth", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Smooth, 1, 300);
		ImGui::SliderInt("Fov", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Fov, 1, 300);
		ImGui::PopItemWidth();

		const char* AimFovType[] = { "Dynamic" , "Static" };
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("Fov Type", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_FovType, AimFovType, IM_ARRAYSIZE(AimFovType));
		ImGui::PopItemWidth();

		const char* BestHit[] = { "Disable" , "Enable" };
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("BestHit", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_BestHit, BestHit, IM_ARRAYSIZE(BestHit));

		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("if disabled then used Aimspot");

		ImGui::PopItemWidth();

		const char* Aimspot[] = { "Head" , "Neck" , "Low Neck" , "Body" , "Thorax" , "Chest" };
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("Aimspot", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Spot, Aimspot, IM_ARRAYSIZE(Aimspot));
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::PushItemWidth(362.f);
		ImGui::SliderInt("ShotDelay", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Delay, 0, 200);
		ImGui::SliderInt("Rcs", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_Rcs, 0, 100);
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();

		if (iWeaponID >= 10 && iWeaponID <= 30)
		{
			ImGui::PushItemWidth(362.f);
			ImGui::SliderInt("Rcs Fov", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_RcsFov, 1, 300);
			ImGui::SliderInt("Rcs Smooth", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_RcsSmooth, 1, 300);
			ImGui::PopItemWidth();

			const char* ClampType[] = { "All Target" , "Shot" , "Shot + Target" };
			ImGui::PushItemWidth(362.f);
			ImGui::Combo("Rcs Clamp", &Settings::Aimbot::weapon_aim_settings[iWeaponID].aim_RcsClampType, ClampType, IM_ARRAYSIZE(ClampType));
			ImGui::PopItemWidth();

			ImGui::Spacing();
			ImGui::Separator();
			ImGui::Spacing();
		}
	}

	void DrawSkins() // Skins
	{
		const char* quality_items[] =
		{
			"Normal","Genuine","Vintage","Unusual","Community","Developer",
			"Self-Made","Customized","Strange","Completed","Tournament"
		};

		const char* gloves_listbox_items[25] =
		{
			"default",
			"bloodhound_black_silver","bloodhound_snakeskin_brass","bloodhound_metallic","handwrap_leathery",
			"handwrap_camo_grey","slick_black","slick_military","slick_red","sporty_light_blue","sporty_military",
			"handwrap_red_slaughter","motorcycle_basic_black","motorcycle_mint_triangle","motorcycle_mono_boom",
			"motorcycle_triangle_blue","specialist_ddpat_green_camo","specialist_kimono_diamonds_red",
			"specialist_emerald_web","specialist_orange_white","handwrap_fabric_orange_camo","sporty_purple",
			"sporty_green","bloodhound_guerrilla","slick_snakeskin_yellow"
		};
		//[enc_string_enable /]

		ImGui::Separator();

		ImGui::Text("Skin Changer");

		ImGui::Separator();

		ImGui::Text("Current Weapon: %s", pWeaponData[iWeaponID]);

		ImGui::PushItemWidth(362.f);

		static int iOldWeaponID = -1;

		ImGui::Combo("Weapon##WeaponSelect", &iWeaponID, pWeaponData, IM_ARRAYSIZE(pWeaponData));

		iWeaponSelectIndex = pWeaponItemIndexData[iWeaponID];

		if (iOldWeaponID != iWeaponID)
			iWeaponSelectSkinIndex = GetWeaponSkinIndexFromPaintKit(g_SkinChangerCfg[iWeaponSelectIndex].nFallbackPaintKit);

		iOldWeaponID = iWeaponID;

		string WeaponSkin = pWeaponData[iWeaponID];
		WeaponSkin += " Skin";

		ImGui::ComboBoxArray(WeaponSkin.c_str(), &iWeaponSelectSkinIndex, WeaponSkins[iWeaponID].SkinNames);

		ImGui::Combo("Weapon Quality", &g_SkinChangerCfg[pWeaponItemIndexData[iWeaponID]].iEntityQuality, quality_items, IM_ARRAYSIZE(quality_items));
		ImGui::SliderFloat("Weapon Wear", &g_SkinChangerCfg[pWeaponItemIndexData[iWeaponID]].flFallbackWear, 0.001f, 1.f);
		ImGui::InputInt("Weapon StatTrak", &g_SkinChangerCfg[pWeaponItemIndexData[iWeaponID]].nFallbackStatTrak, 1, 100, ImGuiInputTextFlags_CharsDecimal);

		ImGui::Separator();

		ImGui::Combo("Gloves Skin", &Settings::Skin::gloves_skin, gloves_listbox_items,
			IM_ARRAYSIZE(gloves_listbox_items));

		ImGui::Separator();

		ImGui::PopItemWidth();

		if (ImGui::Button("Apply##Skin"))
		{
			if (iWeaponSelectSkinIndex >= 0) {
				g_SkinChangerCfg[iWeaponSelectIndex].nFallbackPaintKit = WeaponSkins[iWeaponID].SkinPaintKit[iWeaponSelectSkinIndex];
			}
			ForceFullUpdate();
		}

		const char* knife_models_items[] =
		{
			"Default","Bayonet","Flip","Gut","Karambit" ,"M9 Bayonet",
			"Huntsman","Falchion","Bowie","Butterfly","Shadow Daggers"
		};

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Text("Knife Changer");
		ImGui::Separator();

		ImGui::Combo("Knife CT Model", &Settings::Skin::knf_ct_model, knife_models_items, IM_ARRAYSIZE(knife_models_items));
		ImGui::Combo("Knife T Model", &Settings::Skin::knf_tt_model, knife_models_items, IM_ARRAYSIZE(knife_models_items));

		ImGui::Separator();

		static int iSelectKnifeCTSkinIndex = -1;
		static int iSelectKnifeTTSkinIndex = -1;

		int iKnifeCTModelIndex = Settings::Skin::knf_ct_model;
		int iKnifeTTModelIndex = Settings::Skin::knf_tt_model;

		static int iOldKnifeCTModelIndex = -1;
		static int iOldKnifeTTModelIndex = -1;

		if (iOldKnifeCTModelIndex != iKnifeCTModelIndex && Settings::Skin::knf_ct_model)
			iSelectKnifeCTSkinIndex = GetKnifeSkinIndexFromPaintKit(Settings::Skin::knf_ct_skin, false);

		if (iOldKnifeTTModelIndex != iKnifeTTModelIndex && Settings::Skin::knf_tt_model)
			iSelectKnifeTTSkinIndex = GetKnifeSkinIndexFromPaintKit(Settings::Skin::knf_ct_skin, true);

		iOldKnifeCTModelIndex = iKnifeCTModelIndex;
		iOldKnifeTTModelIndex = iKnifeTTModelIndex;

		string KnifeCTModel = knife_models_items[Settings::Skin::knf_ct_model];
		string KnifeTTModel = knife_models_items[Settings::Skin::knf_tt_model];

		KnifeCTModel += " Skin##KCT";
		KnifeTTModel += " Skin##KTT";

		ImGui::SliderFloat("Knife CT Wear", &g_SkinChangerCfg[WEAPON_KNIFE].flFallbackWear, 0.001f, 1.f);
		ImGui::Combo("Knife CT Quality", &g_SkinChangerCfg[WEAPON_KNIFE].iEntityQuality, quality_items, IM_ARRAYSIZE(quality_items));
		ImGui::ComboBoxArray(KnifeCTModel.c_str(), &iSelectKnifeCTSkinIndex, KnifeSkins[iKnifeCTModelIndex].SkinNames);

		ImGui::Separator();

		ImGui::SliderFloat("Knife T Wear", &g_SkinChangerCfg[WEAPON_KNIFE_T].flFallbackWear, 0.001f, 1.f);
		ImGui::Combo("Knife T Quality", &g_SkinChangerCfg[WEAPON_KNIFE_T].iEntityQuality, quality_items, IM_ARRAYSIZE(quality_items));
		ImGui::ComboBoxArray(KnifeTTModel.c_str(), &iSelectKnifeTTSkinIndex, KnifeSkins[iKnifeTTModelIndex].SkinNames);

		if (ImGui::Button("Apply##Skin"))
		{
			if (iSelectKnifeCTSkinIndex >= 0 && Settings::Skin::knf_ct_model > 0) {
				Settings::Skin::knf_ct_skin = KnifeSkins[iKnifeCTModelIndex].SkinPaintKit[iSelectKnifeCTSkinIndex];
			}
			else
			{
				Settings::Skin::knf_ct_skin = 0;
				iSelectKnifeCTSkinIndex = -1;
			}

			if (iSelectKnifeTTSkinIndex >= 0 && Settings::Skin::knf_tt_model > 0) {
				Settings::Skin::knf_tt_skin = KnifeSkins[iKnifeTTModelIndex].SkinPaintKit[iSelectKnifeTTSkinIndex];
			}
			else
			{
				Settings::Skin::knf_tt_skin = 0;
				iSelectKnifeTTSkinIndex = -1;
			}

			ForceFullUpdate();
		}

	}

	/*void DrawTrigger() // Trigger
	{
		const char* TriggerEnable[] = { "Disable" , "Fov" , "Trace" };
		ImGui::PushItemWidth(80.f);
		ImGui::Combo("Enable", &Settings::Triggerbot::trigger_Enable, TriggerEnable, IM_ARRAYSIZE(TriggerEnable));
		ImGui::PopItemWidth();
		ImGui::SameLine();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Deathmatch", &Settings::Triggerbot::trigger_Deathmatch);
		ImGui::Checkbox("WallAttack", &Settings::Triggerbot::trigger_WallAttack);
		ImGui::Checkbox("FastZoom", &Settings::Triggerbot::trigger_FastZoom);

		ImGui::Checkbox("SmokCheck", &Settings::Triggerbot::trigger_SmokCheck);
		ImGui::Checkbox("DrawFov", &Settings::Triggerbot::trigger_DrawFov);
		ImGui::Checkbox("DrawSpot", &Settings::Triggerbot::trigger_DrawSpot);
		ImGui::Checkbox("DrawFovAssist", &Settings::Triggerbot::trigger_DrawFovAssist);

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		const char* items1[] = { CVAR_KEY_MOUSE3 , CVAR_KEY_MOUSE4 , CVAR_KEY_MOUSE5 };
		ImGui::PushItemWidth(80.f);
		ImGui::Combo("Key", &Settings::Triggerbot::trigger_Key, items1, IM_ARRAYSIZE(items1));
		ImGui::PopItemWidth();
		ImGui::SameLine();

		const char* items2[] = { "Hold" , "Press" };
		ImGui::PushItemWidth(80.f);
		ImGui::Combo("Key Mode", &Settings::Triggerbot::trigger_KeyMode, items2, IM_ARRAYSIZE(items2));
		ImGui::PopItemWidth();
		ImGui::SameLine();

		ImGui::PushItemWidth(110.f);
		ImGui::Combo("Weapon", &iWeaponID, pWeaponData, IM_ARRAYSIZE(pWeaponData));
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::PushItemWidth(362.f);
		ImGui::SliderInt("Min Disstance", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_DistanceMin, 0, 5000);
		ImGui::SliderInt("Max Disstance", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_DistanceMax, 0, 5000);
		ImGui::SliderInt("Fov", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_Fov, 1, 100);
		ImGui::SliderInt("Delay Before", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_DelayBefore, 0, 200);
		ImGui::SliderInt("Delay After", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_DelayAfter, 0, 1000);
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("HeadOnly", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_HeadOnly);
		ImGui::SameLine();

		const char* AssistMode[] = { "Disable" , "One Shot" , "Auto" };
		ImGui::PushItemWidth(80.f);
		ImGui::Combo("Assist", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_Assist, AssistMode, IM_ARRAYSIZE(AssistMode));
		ImGui::PopItemWidth();
		ImGui::SameLine();

		const char* AssistFovType[] = { "Dynamic" , "Static" };
		ImGui::PushItemWidth(80.f);
		ImGui::Combo("Assist Fov Type", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_AssistFovType, AssistFovType, IM_ARRAYSIZE(AssistFovType));
		ImGui::PopItemWidth();

		const char* HitGroup[] = { "All" , "Head + Body" , "Head" };
		ImGui::Combo("HitGroup", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_HitGroup, HitGroup, IM_ARRAYSIZE(HitGroup));
		//ImGui::PopItemWidth();

		ImGui::PushItemWidth(362.f);
		ImGui::SliderInt("Assist Rcs", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_AssistRcs, 0, 100);
		ImGui::SliderInt("Assist Fov", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_AssistFov, 1, 300);
		ImGui::SliderInt("Assist Smooth", &Settings::Triggerbot::weapon_trigger_settings[iWeaponID].trigger_AssistSmooth, 1, 300);
		ImGui::PopItemWidth();
	}*/
	void DrawVisuals() // Visuals
	{
		const char* iHitSound[] =
		{
			"Off",
			"Default",
			"Anime",
			"Roblox",
			"Gamesense",
		};

		const char* material_items[] =
		{
			"Glass",
			"Crystal",
			"Gold",
			"Dark Chrome",
			"Plastic Glass",
			"Velvet",
			"Crystal Blue",
			"Detailed Gold"
		};

		const char* armtype_items[] =
		{
			"Arms Only",
			"Arms + Weapon"
		};

		string style_1 = "None";
		string style_2 = "Box";
		string style_3 = "Corners";

		const char* items1[] = { style_1.c_str() , style_2.c_str(), style_3.c_str() };

		ImGui::PushItemWidth(339.f);
		ImGui::Combo("Type", &Settings::Esp::esp_Style, items1, IM_ARRAYSIZE(items1));
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Team", &Settings::Esp::esp_Team);
		ImGui::Checkbox("Enemy", &Settings::Esp::esp_Enemy);
		ImGui::Checkbox("Bomb", &Settings::Esp::esp_Bomb);

		ImGui::Checkbox("Sound", &Settings::Esp::esp_Sound);
		ImGui::Checkbox("Line", &Settings::Esp::esp_Line);
		ImGui::Checkbox("OutLine", &Settings::Esp::esp_Outline);
		ImGui::Checkbox("Name", &Settings::Esp::esp_Name);

		ImGui::Checkbox("Rank", &Settings::Esp::esp_Rank);
		ImGui::Checkbox("Weapon", &Settings::Esp::esp_Weapon);
		ImGui::Checkbox("Ammo", &Settings::Esp::esp_Ammo);

		ImGui::Checkbox("Distance", &Settings::Esp::esp_Distance);
		ImGui::Checkbox("Skeleton", &Settings::Esp::esp_Skeleton);
		ImGui::Checkbox("World Weapon", &Settings::Esp::esp_WorldWeapons);

		ImGui::Checkbox("World Grenade", &Settings::Esp::esp_WorldGrenade);
		ImGui::Checkbox("Grenade Boxes", &Settings::Esp::esp_BoxNade);
		ImGui::Checkbox("Time", &Settings::Esp::esp_Time);
		ImGui::Checkbox("Grenade Prediction", &Settings::Esp::esp_GrenadePrediction);
		
		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		string visible_1 = "Enemy";
		string visible_2 = "Team";
		string visible_3 = "All";
		string visible_4 = "Only Visible";

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		const char* items2[] = { visible_1.c_str() , visible_2.c_str() , visible_3.c_str() , visible_4.c_str() };

		string chams_1 = "None";
		string chams_2 = "Flat";
		string chams_3 = "Texture";

		const char* items5[] = { chams_1.c_str() , chams_2.c_str() , chams_3.c_str() };
		ImGui::Combo("Chams", &Settings::Esp::esp_Chams, items5, IM_ARRAYSIZE(items5));
		ImGui::Combo("Chams Visible", &Settings::Esp::esp_ChamsVisible, items2, IM_ARRAYSIZE(items2));
		ImGui::Checkbox("XQZ", &Settings::Esp::esp_XQZ);

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::PushItemWidth(339.f);
		ImGui::Combo("Visible", &Settings::Esp::esp_Visible, items2, IM_ARRAYSIZE(items2));

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::SliderInt("Size", &Settings::Esp::esp_Size, 0, 10);
		ImGui::SliderInt("Bomb Timer", &Settings::Esp::esp_BombTimer, 0, 65);
		ImGui::SliderInt("Bullet Trace", &Settings::Esp::esp_BulletTrace, 0, 3000);

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		string hpbar_1 = "None";
		string hpbar_2 = "Number";
		string hpbar_3 = "Bottom";
		string hpbar_4 = "Left";

		const char* items3[] = { hpbar_1.c_str() , hpbar_2.c_str() , hpbar_3.c_str() , hpbar_4.c_str() };
		ImGui::Combo("Health", &Settings::Esp::esp_Health, items3, IM_ARRAYSIZE(items3));

		string arbar_1 = "None";
		string arbar_2 = "Number";
		string arbar_3 = "Bottom";
		string arbar_4 = "Right";

		const char* items4[] = { arbar_1.c_str() , arbar_2.c_str() , arbar_3.c_str() , arbar_4.c_str() };
		ImGui::Combo("Armor", &Settings::Esp::esp_Armor, items4, IM_ARRAYSIZE(items4));

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Chams Materials", &Settings::Misc::misc_ChamsMaterials);
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("##CHAMSMATERIALS", &Settings::Misc::misc_ChamsMaterialsList, material_items, ARRAYSIZE(material_items));

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Arms Materials", &Settings::Misc::misc_ArmMaterials);
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("##ARMMATERIALTYPE", &Settings::Misc::misc_ArmMaterialsType, armtype_items, ARRAYSIZE(armtype_items));
		ImGui::SameLine();
		ImGui::Text("Type");
		ImGui::PushItemWidth(362.f);
		ImGui::Combo("##ARMMATERIALS", &Settings::Misc::misc_ArmMaterialsList, material_items, ARRAYSIZE(material_items));
		ImGui::SameLine();
		ImGui::Text("Material");

		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Spacing();

		ImGui::Checkbox("Hitmarker", &Settings::Esp::esp_HitMarker);
		ImGui::Combo("##HITSOUND", &Settings::Esp::esp_HitMarkerSound, iHitSound, ARRAYSIZE(iHitSound));
		ImGui::SameLine();
		ImGui::Text("Hitmarker Sound");

	}

	void DrawMisc() // Misc
	{
		const char* skybox_items[] =
		{
			"cs_baggage_skybox_",
			"cs_tibet",
			"embassy",
			"italy",
			"jungle",
			"nukeblank",
			"office",
			"sky_cs15_daylight01_hdr",
			"sky_cs15_daylight02_hdr",
			"sky_cs15_daylight03_hdr",
			"sky_cs15_daylight04_hdr",
			"sky_csgo_cloudy01",
			"sky_csgo_night02",
			"sky_csgo_night02b",
			"sky_csgo_night_flat",
			"sky_day02_05_hdr",
			"sky_day02_05",
			"sky_dust",
			"sky_l4d_rural02_ldr",
			"sky_venice",
			"vertigo_hdr",
			"vertigoblue_hdr",
			"vertigo",
			"vietnam"
		};

//		ImGui::Checkbox("Skin Changer", &Settings::Misc::misc_SkinChanger);
//		ImGui::Checkbox("Knife Changer", &Settings::Misc::misc_KnifeChanger);
//		ImGui::Checkbox("Third Person", &Settings::Misc::misc_ThirdPerson);
//		ImGui::SliderFloat("##THIRDPERSONRANGE", &Settings::Misc::misc_ThirdPersonRange, 0.f, 500.f, "Third Person Range: %0.f");
		ImGui::Checkbox("Auto Accept", &Settings::Misc::misc_AutoAccept);
		ImGui::Checkbox("Auto Bhop", &Settings::Misc::misc_Bhop);
		ImGui::Checkbox("Auto Strafe", &Settings::Misc::misc_AutoStrafe);
		ImGui::Checkbox("Show Spectators", &Settings::Misc::misc_Spectators);
		ImGui::Checkbox("Recoil Crosshair", &Settings::Misc::misc_Punch);
		ImGui::Checkbox("Sniper Crosshair", &Settings::Misc::misc_AwpAim);
		ImGui::Checkbox("No Flash", &Settings::Misc::misc_NoFlash);
		ImGui::Checkbox("No Smoke", &Settings::Misc::misc_NoSmoke);
		ImGui::Checkbox("No Hands", &Settings::Misc::misc_NoHands);
		ImGui::Checkbox("Wire Hands", &Settings::Misc::misc_WireHands);
		ImGui::Separator();
		ImGui::Checkbox("Chat Spam", &Settings::Misc::misc_spamregular);
		ImGui::Checkbox("Random Chat Spam", &Settings::Misc::misc_spamrandom);
		ImGui::Separator();
		ImGui::Checkbox("Static Name Spam", &Settings::Misc::misc_namespamidkmemes_static);

		/*		ImGui::SameLine(180);
				ImGui::Checkbox("Custom Name Spam", &Settings::Misc::misc_namespamidkmemes);
				if (Settings::Misc::misc_namespamidkmemes)
				{
					ImGui::InputText("First", Settings::Misc::First, IM_ARRAYSIZE(Settings::Misc::First));
				}*/
		ImGui::Separator();
		ImGui::Checkbox("FOV Changer", &Settings::Misc::misc_FovChanger);
		ImGui::PushItemWidth(362.f);
		ImGui::SliderInt("FOV View", &Settings::Misc::misc_FovView, 1, 170);
		ImGui::SliderInt("FOV Model View", &Settings::Misc::misc_FovModelView, 1, 190);
		ImGui::Separator();

		string clan_1 = "None";
		string clan_2 = "Clear";
		string clan_3 = "noob.cjh";
		string clan_4 = "noob.cjh No-name";
		string clan_5 = "Valve";
		string clan_6 = "Valve No-name";
		string clan_7 = "Animation";
		const char* items5[] = { clan_1.c_str() , clan_2.c_str() , clan_3.c_str() , clan_4.c_str() , clan_5.c_str() , clan_6.c_str() , clan_7.c_str() };
		ImGui::Combo("Clantag Changer", &Settings::Misc::misc_Clan, items5, IM_ARRAYSIZE(items5));
		ImGui::Separator();
		ImGui::Spacing();

		/*		if (ImGui::Combo("", &Settings::Misc::misc_CurrentSky, skybox_items, IM_ARRAYSIZE(skybox_items)))
				{
					Settings::Misc::misc_SkyName = skybox_items[Settings::Misc::misc_CurrentSky];
				}
				ImGui::SameLine();
				ImGui::Text("SkyBox");
				ImGui::Checkbox("Disable Postprocess", &Settings::Misc::misc_EPostprocess);
				ImGui::Checkbox("No Sky", &Settings::Misc::misc_NoSky);*/


		ImGui::Separator();
		ImGui::Text("Configs");
		ImGui::Separator();
		static int iConfigSelect = 0;
		static int iMenuSheme = 1;
		static char ConfigName[64] = { 0 };

		ImGui::ComboBoxArray("Select Config", &iConfigSelect, ConfigList);

		if (ImGui::Button("Load Config"))
		{
			Settings::LoadSettings(BaseDir + "\\" + ConfigList[iConfigSelect]);
		}
		ImGui::SameLine();
		if (ImGui::Button("Save Config"))
		{
			Settings::SaveSettings(BaseDir + "\\" + ConfigList[iConfigSelect]);
		}
		ImGui::SameLine();
		if (ImGui::Button("Refresh Config List"))
		{
			RefreshConfigs();
		}

		ImGui::Separator();

		ImGui::InputText("Config Name", ConfigName, 64);

		if (ImGui::Button("Create & Save new Config"))
		{
			string ConfigFileName = ConfigName;

			if (ConfigFileName.size() < 1)
			{
				ConfigFileName = "settings";
			}

			Settings::SaveSettings(BaseDir + "\\" + ConfigFileName + ".ini");
			RefreshConfigs();
		}

		ImGui::Separator();

		const char* ThemesList[] = { "Purple" , "Default" , "Light Pink" , "Dark Blue" , "MidNight" , "Night" , "Dunno" , "Blue"  , "Black" , "Green" , "Yellow" , "Light Blue" , "Light Grey" , "pHooK" };

		ImGui::Combo("Menu Color Sheme", &iMenuSheme, ThemesList, IM_ARRAYSIZE(ThemesList));

		ImGui::Separator();

		if (ImGui::Button("Apply Color"))
		{
			if (iMenuSheme == 0)
			{
				g_pGui->purple();
			}
			else if (iMenuSheme == 1)
			{
				g_pGui->DefaultSheme1();
			}
			else if (iMenuSheme == 2)
			{
				g_pGui->RedSheme();
			}
			else if (iMenuSheme == 3)
			{
				g_pGui->darkblue();
			}
			else if (iMenuSheme == 4)
			{
				g_pGui->MidNightSheme();
			}
			else if (iMenuSheme == 5)
			{
				g_pGui->NightSheme();
			}
			else if (iMenuSheme == 6)
			{
				g_pGui->DunnoSheme();
			}
			else if (iMenuSheme == 7)
			{
				g_pGui->BlueSheme();
			}
			else if (iMenuSheme == 8)
			{
				g_pGui->BlackSheme2();
			}
			else if (iMenuSheme == 9)
			{
				g_pGui->green();
			}
			else if (iMenuSheme == 10)
			{
				g_pGui->pink();
			}
			else if (iMenuSheme == 11)
			{
				g_pGui->blue();
			}
			else if (iMenuSheme == 12)
			{
				g_pGui->yellow();
			}
			else if (iMenuSheme == 13)
			{
				g_pGui->BlackSheme();
			}
		}
	}

	void DrawColors()
	{
		ImGui::Text("ESP");
		ImGui::Separator();
		ImGui::ColorEdit3("Color Hit Marker", Settings::Esp::esp_HitMarkerColor);
		ImGui::ColorEdit3("Color CT", Settings::Esp::esp_Color_CT);
		ImGui::ColorEdit3("Color T", Settings::Esp::esp_Color_TT);
		ImGui::ColorEdit3("Color Visible CT", Settings::Esp::esp_Color_VCT);
		ImGui::ColorEdit3("Color Visible T", Settings::Esp::esp_Color_VTT);
		ImGui::Spacing();
		ImGui::Separator();
		ImGui::Text("Chams");
		ImGui::Separator();

		ImGui::ColorEdit3("Chams Color CT", Settings::Esp::chams_Color_CT);
		ImGui::ColorEdit3("Chams Color T", Settings::Esp::chams_Color_TT);
		ImGui::ColorEdit3("Chams Color Visible CT", Settings::Esp::chams_Color_VCT);
		ImGui::ColorEdit3("Chams Color Visible T", Settings::Esp::chams_Color_VTT);
		ImGui::Spacing();
		ImGui::Separator();

	}

	void OnRenderGUI()
	{
		auto& style = ImGui::GetStyle();

		ImGuiIO& io = ImGui::GetIO();

		io.IniFilename = GuiFile.c_str();

		int w;
		int h;

		//fading shit

		if (bIsGuiVisible)
			if (style.Alpha > 1.f)
				style.Alpha = 1.f;
			else if (style.Alpha != 1.f)
				style.Alpha += 0.01f;

			else if (!bIsGuiVisible)
				if (style.Alpha < 0.f)
					style.Alpha = 0.f;
				else if (style.Alpha != 0.f)
					style.Alpha -= 0.01f;

		Interfaces::Engine()->GetScreenSize(w, h);

		ImFont* tabfont = io.Fonts->AddFontFromFileTTF("C:\Windows\Fonts\Aurora_5.ttf", 62.0f);

		ImFont* wepicons = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\astriumwep.ttf", 4.0f);

		ImFont* font = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Arial\\arial.ttf", 14.f, 0, io.Fonts->GetGlyphRangesCyrillic());

		ImVec2 mainWindowPos;


		ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiSetCond_Appearing);

		style.Colors[ImGuiCol_WindowBg] = ImVec4(0.1f, 0.1, 0.1f, 1.f);

		ImGui::Begin("noob.cjh", &bIsGuiVisible, ImVec2(w, h), .5f, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoInputs);
		{

		}ImGui::End();


		style.WindowPadding = ImVec2(8, 8);
		style.Colors[ImGuiCol_WindowBg] = ImVec4(0.1f, 0.1f, 0.1f, 0.95f);
		ImGui::SetNextWindowPosCenter(ImGuiSetCond_Appearing);
		BtnNormal();
		//style.WindowPadding = ImVec2(0, 0);
		ImGui::Begin("!noob.cjh", &bIsGuiVisible, ImVec2(828, 450), 0.98f, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders | ImGuiWindowFlags_NoMove);
		{
			mainWindowPos = ImGui::GetWindowPos();

			if (Global::MenuTab == 0)
				DrawAimbot();
			if (Global::MenuTab == 1)
				DrawVisuals();
			if (Global::MenuTab == 2)
				DrawSkins();
			if (Global::MenuTab == 3)
				DrawMisc();
			if (Global::MenuTab == 4)
				DrawColors();
		}ImGui::End();

		ImGui::SetNextWindowPos(ImVec2(mainWindowPos.x - 6, mainWindowPos.y - 6));
		style.Colors[ImGuiCol_WindowBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.f);

		ImGui::Begin("##border2", &bIsGuiVisible, ImVec2(840, 462), 0.98f, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_ShowBorders);
		{

		}ImGui::End();

		ImGui::SetNextWindowPos(ImVec2(mainWindowPos.x - 6, h - 150));
		style.Colors[ImGuiCol_WindowBg] = ImVec4(1.f, 1.f, 1.f, 0.1f);
		style.WindowPadding = ImVec2(0, 0);
		style.ItemSpacing = ImVec2(8, 4);
		ImGui::Begin("##tabarea", &bIsGuiVisible, ImVec2(840, 150), 0.f, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders);
		{
			ImGui::PushFont(tabfont);
			BtnColor(false);
			if (ImGui::Button("AIMBOT", ImVec2(160.0, 100))) Global::MenuTab = 0;
			ImGui::SameLine();
			if (ImGui::Button("VISUALS", ImVec2(160.0, 100))) Global::MenuTab = 1;
			ImGui::SameLine();
			if (ImGui::Button("SKINS", ImVec2(160.0, 100))) Global::MenuTab = 2;
			ImGui::SameLine();
			if (ImGui::Button("MISC", ImVec2(160.0, 100))) Global::MenuTab = 3;
			ImGui::SameLine();
			if (ImGui::Button("COLOURS", ImVec2(160.0, 100))) Global::MenuTab = 4;
			ImGui::SameLine();

			ImGui::PushFont(font);
			TextColor(true);
			if (ImGui::Button("AIMBOT", ImVec2(133.3, 42))) Global::MenuTab = 0;
			ImGui::SameLine();
			if (ImGui::Button("VISUALS", ImVec2(133.3, 42))) Global::MenuTab = 1;
			ImGui::SameLine();
			if (ImGui::Button("SKINS", ImVec2(133.3, 42))) Global::MenuTab = 2;
			ImGui::SameLine();
			if (ImGui::Button("MISC", ImVec2(133.3, 42))) Global::MenuTab = 3;
			ImGui::SameLine();
			if (ImGui::Button("COLOURS", ImVec2(133.3, 42))) Global::MenuTab = 4;
		}ImGui::End();

	}
}





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































