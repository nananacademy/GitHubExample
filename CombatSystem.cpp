#include "CombatSystem.h"
#include "MainMenu.h"

CombatSystem::CombatSystem(int InMaxDamage)
	: mMaxDamage(InMaxDamage)
{
}

void CombatSystem::UpdateMenu()
{
	MainMenu* instance = MainMenu::GetInstance();
	instance->DisplayDamage(10);

}
