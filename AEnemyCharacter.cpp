#include "AEnemyCharacter.h"

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
}