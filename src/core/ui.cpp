#include "UI.h"

void UI::Render()
{
	ImGui::SetNextWindowSize(startup_size, ImGuiCond_Always);
	ImGui::Begin("ColorSnap", nullptr, flags);
	{
		ImGui::SetCursorPos(ImVec2(0, 104));
		ImGui::BeginChild("color list", child_size);
		{
			ImGui::BeginChild("colors");
			{

			}
			ImGui::EndChild();
		}
		ImGui::EndChild();
	}
	ImGui::End();
}