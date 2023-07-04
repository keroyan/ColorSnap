#pragma once
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <wtypes.h>
#include "../fonts/InterRegular.h"
#include "../fonts/InterSemiBold.h"

class UI
{
public:

	void Render();

	void InitalizeStyles()
	{
		ImGuiStyle& style = ImGui::GetStyle();
		auto colors = style.Colors;

		// Colors
		colors[ImGuiCol_WindowBg] = ImColor(9, 14, 20, 255);
		colors[ImGuiCol_ChildBg] = ImColor(12, 22, 34, 255);
		
		// Others styles
		style.WindowPadding = ImVec2(0, 0);
		style.WindowBorderSize = 0.f;

		
	}

	void InitalizeFonts()
	{
		ImGuiIO& io = ImGui::GetIO();
		auto fonts = io.Fonts;
		InterSemiBold = fonts->AddFontFromMemoryCompressedTTF(InterSemiBold_compressed_data, InterSemiBold_compressed_size, 12.f);
		InterRegular = fonts->AddFontFromMemoryCompressedTTF(InterRegular_compressed_data, InterRegular_compressed_size, 12.f);
	}

private:
	ImFont* InterSemiBold = nullptr;
	ImFont* InterRegular = nullptr;
	ImVec2 startup_size = ImVec2(410, 323);
	ImVec2 child_size = ImVec2(410, 219);

	DWORD flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize;
};

