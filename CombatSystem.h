#pragma once
class AEnemyCharacter;
class PlayerCharacter;
class ACharacter;
class CombatSystem
{
	int mMaxDamage = 500;
public:
	CombatSystem(int InMaxDamage);
	void UpdateMenu();

	void DamageEnemy(AEnemyCharacter& InEnemy);
	void DamagePlayer(PlayerCharacter& InPlayer);
	void DamageCharacter(ACharacter& InCharacter);

};

