#include "UI.h"

// This function location is gonna change, current location is just for testing!
void BeginColors()
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();
	ImDrawList* drawlist = window->DrawList;

	const ImVec2 pos = ImVec2(20, 20);
	const ImVec2 size = ImVec2(200, ImGui::GetWindowSize().y - 40);


	ImGui::SetCursorPos(pos);

	ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(5, 5));
	ImGui::BeginChild("colors", size, true);
	{
		// NOTE: This is just testing, ofcourse this will have it's own functions to make a lot more readable!
		static ImColor red = ImColor(255, 0, 0, 255);
		ImGui::ColorEdit4("color_picker", (float*)&red, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel);
		ImGui::SameLine();
		ImGui::ColorEdit4("color_picke2r", (float*)&red, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel);
		ImGui::SameLine();
		ImGui::ColorEdit4("color_picker222", (float*)&red, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoLabel);

	}
	ImGui::PopStyleVar();
}

void EndColors() { ImGui::EndChild(); }

void UI::Render()
{
	ImGui::SetNextWindowSize(startup_size, ImGuiCond_Always);
	ImGui::Begin("ColorSnap", nullptr, flags);
	{
		ImGuiWindow* window = ImGui::GetCurrentWindow();
		ImDrawList* drawlist = window->DrawList;

		ImGui::SetCursorPos(ImVec2(0, ImGui::GetWindowHeight() - child_size.y));
		ImGui::BeginChild("##color_section", child_size);
		{
			BeginColors();

			EndColors();
		}
		ImGui::EndChild();
	}
	ImGui::End();
}