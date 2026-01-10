#pragma once

#include "../../includes_fixed.h"


extern ImFont* icons;

void MovmentTab()
{
    
    ImGui::PushFont(icons);
    ImGui::Text(ICON_FA_PERSON_RUNNING);
    ImGui::PopFont();
    ImGui::SameLine();
    ImGui::TextDisabled("Movement Modules");

    ImGui::Separator();

    
    ImGui::Custom::Toggle("Dynamic Fly", &globals::movement::dynamicfly);
    ImGui::Custom::Toggle("Static Fly", &globals::movement::staticfly);
    ImGui::Custom::Toggle("Custom Walkspeed", &globals::player::changespeed);
    if (globals::player::changespeed)
    {
        ImGui::SliderFloat("Walkspeed", &globals::player::speed, 3.5f, 100.0f);
    }
}