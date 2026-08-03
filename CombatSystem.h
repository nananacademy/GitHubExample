#pragma once
class AEnemyCharacter;
class CombatSystem
{
	int mMaxDamage = 500;
	CombatSystem(int InMaxDamage);
	void UpdateMenu();

	void DamageEnemy(AEnemyCharacter& InEnemy);

};

