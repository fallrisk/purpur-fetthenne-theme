
#include <imgui.h>

#include "colors.h"

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
