#include "CombatSystem.h"
#include "MainMenu.h"
#include "AEnemyCharacter.h"

CombatSystem::CombatSystem(int InMaxDamage)
	: mMaxDamage(InMaxDamage)
{
}

void CombatSystem::UpdateMenu()
{
	MainMenu* instance = MainMenu::GetInstance();
	instance->DisplayDamage(10);

}

void CombatSystem::DamageEnemy(AEnemyCharacter& InEnemy)
{
	InEnemy.ChangeHealth(30);
}
