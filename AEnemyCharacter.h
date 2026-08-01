#pragma once
#include "ACharacter.h"
class AEnemyCharacter :public ACharacter
{
	bool mIsBoss = false;
	int mHealth = 100;

	void ChangeHealth(int InHealthChange);

	void Attack(AEnemyCharacter& InCharacterToDamage);
};

