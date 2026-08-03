#include "AEnemyCharacter.h"
#include <iostream>

void AEnemyCharacter::ChangeHealth(int InHealthChange)
{
	mHealth -= InHealthChange;
}

void AEnemyCharacter::Attack(AEnemyCharacter& InCharacterToDamage)
{
	InCharacterToDamage.ChangeHealth(10);
}


void AEnemyCharacter::Move()
{
}

void AEnemyCharacter::Jump()
{
	if (mJumpHeight > 3)
	{
		std::cout << "massive jump";
	}
	else
	{
		std::cout << "small jump";
	}
}