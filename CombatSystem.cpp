#include "CombatSystem.h"
#include "MainMenu.h"
#include "AEnemyCharacter.h"
#include "PlayerCharacter.h"

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

void CombatSystem::DamagePlayer(PlayerCharacter& InPlayer)
{
	InPlayer.ChangeHealth(125);
}

void CombatSystem::DamageCharacter(ACharacter& InCharacter)
{
	if (AEnemyCharacter* enemy = dynamic_cast<AEnemyCharacter*>(&InCharacter))
	{
		enemy->ChangeHealth(30);
	}
	else if (PlayerCharacter* player = dynamic_cast<PlayerCharacter*>(&InCharacter))
	{
		player->ChangeHealth(125);
	}
	
}
