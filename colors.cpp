
#include <imgui.h>

#include "colors.h"

void StyleColorsPurple()
{
  ImGuiStyle* style = &ImGui::GetStyle();
  ImVec4* colors = style->Colors;

  // http://www.colourlovers.com/palette/4572779/military_jokes

  //colors[ImGuiCol_Text]                   = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
  //colors[ImGuiCol_TextDisabled]           = ImVec4(0.73f, 0.73f, 0.73f, 1.00f);
  //colors[ImGuiCol_WindowBg]               = ImVec4(0.95f, 0.95f, 0.95f, 1.00f);
  //colors[ImGuiCol_ChildBg]                = ImVec4(1.00f, 1.00f, 1.00f, 0.00f);
  //colors[ImGuiCol_PopupBg]                = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_Border]                 = ImVec4(1.00f, 1.00f, 1.00f, 0.49f);
  //colors[ImGuiCol_BorderShadow]           = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
  //colors[ImGuiCol_FrameBg]                = ImVec4(0.91f, 0.91f, 0.91f, 1.00f);
  //colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.96f, 0.94f, 1.00f, 1.00f);
  //colors[ImGuiCol_FrameBgActive]          = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_TitleBg]                = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_TitleBgActive]          = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_MenuBarBg]              = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  //colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.99f, 0.99f, 0.99f, 1.00f);
  //colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
  //colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
  //colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
  //colors[ImGuiCol_CheckMark]              = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_SliderGrab]             = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_Button]                 = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_ButtonHovered]          = ImVec4(0.70f, 0.39f, 0.98f, 1.00f);
  //colors[ImGuiCol_ButtonActive]           = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  //colors[ImGuiCol_Header]                 = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_HeaderHovered]          = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_HeaderActive]           = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  //colors[ImGuiCol_Separator]              = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_SeparatorActive]        = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  //colors[ImGuiCol_ResizeGrip]             = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  //colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.70f, 0.39f, 0.98f, 1.00f);
  //colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.70f, 0.39f, 0.98f, 1.00f);
  //colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
  //colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
  //colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
  //colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
  //colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.91f, 0.83f, 0.93f, 1.00f);
  //colors[ImGuiCol_ModalWindowDarkening]   = ImVec4(0.80f, 0.80f, 0.80f, 1.00f);
  //colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 1.00f);
  //colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
  //colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);

  colors[ImGuiCol_Text]                   = ImVec4(0.36f, 0.36f, 0.38f, 1.00f);
  colors[ImGuiCol_TextDisabled]           = ImVec4(0.73f, 0.73f, 0.73f, 1.00f);
  colors[ImGuiCol_WindowBg]               = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_ChildBg]                = ImVec4(1.00f, 1.00f, 1.00f, 0.00f);
  colors[ImGuiCol_PopupBg]                = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_Border]                 = ImVec4(1.00f, 1.00f, 1.00f, 0.49f);
  colors[ImGuiCol_BorderShadow]           = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
  colors[ImGuiCol_FrameBg]                = ImVec4(0.91f, 0.91f, 0.91f, 1.00f);
  colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.96f, 0.94f, 1.00f, 1.00f);
  colors[ImGuiCol_FrameBgActive]          = ImVec4(0.46f, 0.44f, 0.47f, 1.00f);
  colors[ImGuiCol_TitleBg]                = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_TitleBgActive]          = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_MenuBarBg]              = ImVec4(0.46f, 0.44f, 0.47f, 1.00f);
  colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.99f, 0.99f, 0.99f, 1.00f);
  colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
  colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
  colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
  colors[ImGuiCol_CheckMark]              = ImVec4(0.58f, 0.51f, 0.53f, 1.00f);
  colors[ImGuiCol_SliderGrab]             = ImVec4(0.58f, 0.51f, 0.53f, 1.00f);
  colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_Button]                 = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_ButtonHovered]          = ImVec4(0.70f, 0.39f, 0.98f, 1.00f);
  colors[ImGuiCol_ButtonActive]           = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  colors[ImGuiCol_Header]                 = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_HeaderHovered]          = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_HeaderActive]           = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  colors[ImGuiCol_Separator]              = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.55f, 0.26f, 0.98f, 1.00f);
  colors[ImGuiCol_SeparatorActive]        = ImVec4(0.49f, 0.04f, 0.82f, 1.00f);
  colors[ImGuiCol_ResizeGrip]             = ImVec4(0.58f, 0.51f, 0.53f, 1.00f);
  colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.58f, 0.51f, 0.53f, 1.00f);
  colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.58f, 0.51f, 0.53f, 1.00f);
  colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
  colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
  colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
  colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
  colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.91f, 0.83f, 0.93f, 1.00f);
  colors[ImGuiCol_ModalWindowDarkening]   = ImVec4(0.80f, 0.80f, 0.80f, 1.00f);
  colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 1.00f);
  colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
  colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);

  style->WindowBorderSize = 0;
}

void StyleColorVulkan()
{
  ImGuiStyle& style = ImGui::GetStyle();
  style.GrabRounding = style.ScrollbarRounding = style.FrameRounding = 2;
  style.WindowRounding = 0;
  style.ItemSpacing.x = 4; style.FramePadding.x = 6;
  style.Colors[ImGuiCol_Text]                  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.84f, 0.84f, 0.84f, 1.00f);
  style.Colors[ImGuiCol_WindowBg]              = ImVec4(0.59f, 0.59f, 0.59f, 0.90f);
  style.Colors[ImGuiCol_ChildWindowBg]         = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
  style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.05f, 0.05f, 0.10f, 0.90f);
  style.Colors[ImGuiCol_Border]                = ImVec4(0.70f, 0.70f, 0.70f, 0.65f);
  style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.15f, 0.15f, 0.15f, 0.09f);
  style.Colors[ImGuiCol_FrameBg]               = ImVec4(0.78f, 0.80f, 0.80f, 0.30f);
  style.Colors[ImGuiCol_FrameBgHovered]        = ImVec4(1.00f, 1.00f, 1.00f, 0.37f);
  style.Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.22f, 0.60f, 0.82f, 0.00f);
  style.Colors[ImGuiCol_TitleBg]               = ImVec4(0.88f, 0.88f, 0.88f, 0.45f);
  style.Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.82f, 0.82f, 0.82f, 0.90f);
  style.Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.82f, 0.82f, 0.82f, 0.91f);
  style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.53f, 0.53f, 0.53f, 0.67f);
  style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.53f, 0.53f, 0.53f, 0.82f);
  style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.00f, 0.00f, 0.00f, 0.15f);
  style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.82f, 0.82f, 0.82f, 0.67f);
  style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  //style.Colors[ImGuiCol_ComboBg]               = ImVec4(0.20f, 0.20f, 0.20f, 0.99f);
  style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.90f, 0.90f, 0.90f, 0.50f);
  style.Colors[ImGuiCol_SliderGrab]            = ImVec4(1.00f, 1.00f, 1.00f, 0.30f);
  style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_Button]                = ImVec4(0.82f, 0.82f, 0.82f, 0.67f);
  style.Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.81f, 0.82f, 0.82f, 0.77f);
  style.Colors[ImGuiCol_ButtonActive]          = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_Header]                = ImVec4(0.22f, 0.60f, 0.82f, 0.50f);
  style.Colors[ImGuiCol_HeaderHovered]         = ImVec4(0.22f, 0.60f, 0.82f, 0.70f);
  style.Colors[ImGuiCol_HeaderActive]          = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_Column]                = ImVec4(0.82f, 0.82f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_ColumnHovered]         = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  style.Colors[ImGuiCol_ColumnActive]          = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(1.00f, 1.00f, 1.00f, 0.30f);
  style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
  style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
  //style.Colors[ImGuiCol_CloseButton]           = ImVec4(0.53f, 0.53f, 0.53f, 1.00f);
  //style.Colors[ImGuiCol_CloseButtonHovered]    = ImVec4(0.82f, 0.82f, 0.82f, 1.00f);
  //style.Colors[ImGuiCol_CloseButtonActive]     = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(1.00f, 0.65f, 0.22f, 0.00f);
  style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.93f, 0.52f, 0.02f, 0.00f);
  style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.92f, 0.82f, 0.00f);
  style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.22f, 0.60f, 0.82f, 1.00f);
  style.Colors[ImGuiCol_ModalWindowDarkening]  = ImVec4(0.20f, 0.20f, 0.20f, 0.22f);

  //ImFontConfig cfg;
  //memset(&cfg, 0, sizeof(ImFontConfig));
  //cfg.OversampleH = 2;
  //cfg.OversampleV = 2;
  //cfg.PixelSnapH = true;
  //cfg.GlyphExtraSpacing.x = 0.1f;
  //cfg.GlyphExtraSpacing.y = 0.0f;

  //ImGuiIO& io = ImGui::GetIO();
  //io.Fonts->AddFontFromFileTTF("default.ttf", 20, &cfg);
}

void StyleDarkAndPurple()
{
  ImVec4* colors = ImGui::GetStyle().Colors;

  colors[ImGuiCol_Text]                   = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_TextDisabled]           = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
  colors[ImGuiCol_WindowBg]               = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_ChildBg]                = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
  colors[ImGuiCol_Border]                 = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
  colors[ImGuiCol_FrameBg]                = ImVec4(0.18f, 0.18f, 0.19f, 1.00f);
  colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_FrameBgActive]          = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_TitleBg]                = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_TitleBgActive]          = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_MenuBarBg]              = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.13f, 0.13f, 0.13f, 1.00f);
  colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.36f, 0.38f, 0.39f, 1.00f);
  colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.36f, 0.38f, 0.39f, 1.00f);
  colors[ImGuiCol_CheckMark]              = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_SliderGrab]             = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_Button]                 = ImVec4(0.36f, 0.38f, 0.39f, 1.00f);
  colors[ImGuiCol_ButtonHovered]          = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_ButtonActive]           = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_Header]                 = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_HeaderHovered]          = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_HeaderActive]           = ImVec4(0.27f, 0.27f, 0.28f, 1.00f);
  colors[ImGuiCol_Separator]              = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
  colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_SeparatorActive]        = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_ResizeGrip]             = ImVec4(0.36f, 0.38f, 0.39f, 1.00f);
  colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
  colors[ImGuiCol_PlotLinesHovered]       = ImVec4(0.60f, 0.36f, 0.76f, 0.40f);
  colors[ImGuiCol_PlotHistogram]          = ImVec4(0.61f, 0.35f, 0.71f, 1.00f);
  colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(0.56f, 0.27f, 0.68f, 1.00f);
  colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
  colors[ImGuiCol_ModalWindowDarkening]   = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
  colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
  colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
  colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);

  ImGuiStyle& style = ImGui::GetStyle();

  style.FrameRounding = 3;
}
