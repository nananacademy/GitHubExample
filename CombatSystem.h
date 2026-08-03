#pragma once
class AEnemyCharacter;
class PlayerCharacter;
class CombatSystem
{
	int mMaxDamage = 500;
	CombatSystem(int InMaxDamage);
	void UpdateMenu();

	void DamageEnemy(AEnemyCharacter& InEnemy);
	void DamagePlayer(PlayerCharacter& InPlayer);

};

