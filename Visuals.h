#pragma once
#include "../../includes_fixed.h"

extern ImFont* icons;

void VisualsTab()
{
	ImGui::PushFont(icons);
	ImGui::Text(ICON_FA_EYE);
	ImGui::PopFont();
	ImGui::SameLine();
	ImGui::TextDisabled("Visual Modules");

	ImGui::Separator();
	ImGui::Custom::Toggle("ESP", &globals::network::esp);
	ImGui::Custom::Toggle("FOV", &globals::player::fovtoggle);
	if (globals::player::fovtoggle)
	{
		ImGui::SliderFloat("FOV", &globals::player::fov, 60.0f, 120.0f);
	}


}