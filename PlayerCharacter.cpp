#include "PlayerCharacter.h"

void PlayerCharacter::ChangeHealth(int InHealthChange)
{
	mHealth -= InHealthChange;
}

void PlayerCharacter::Attack(PlayerCharacter& InPlayerToDamage)
{
	InPlayerToDamage.ChangeHealth(100);
}

void PlayerCharacter::UltimateAttack(PlayerCharacter InPlayerToDamage)
{
	InPlayerToDamage.ChangeHealth(500);
}
