#include "PlayerController.h"

void PlayerController::SelectButton(ButtonSelected InButtonSelected)
{
	MainMenu* instace = MainMenu::GetInstance();
	instace->SetButtonSelected(InButtonSelected);
}
