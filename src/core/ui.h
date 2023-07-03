#pragma once
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>

class UI
{
public:

	void Render();

	void InitalizeStyles()
	{
		ImGuiStyle& style = ImGui::GetStyle();
		auto colors = style.Colors;

		// Colors
		colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255);
		colors[ImGuiCol_ChildBg] = ImColor(255, 255, 255, 255);

		// Others styles

		
	}

	void InitalizeFonts()
	{
		ImGuiIO& io = ImGui::GetIO();
		auto fonts = io.Fonts;
	}

private:
	ImVec2 startup_size = ImVec2(500, 500);
};

