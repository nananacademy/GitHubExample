#pragma once
#include "ACharacter.h"
class PlayerCharacter : public ACharacter
{
	int mHealth = 1000;

	void ChangeHealth(int InHealthChange);

	void Attack(PlayerCharacter& InPlayerToDamage);
};

