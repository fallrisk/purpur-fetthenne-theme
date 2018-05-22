
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
