#pragma once
#include "ACharacter.h"
class PlayerCharacter : public ACharacter
{
	int mHealth = 1000;

public:
	void ChangeHealth(int InHealthChange);

	void Attack(PlayerCharacter& InPlayerToDamage);

	void UltimateAttack(PlayerCharacter InPlayerToDamage);

	void Jump();
};

