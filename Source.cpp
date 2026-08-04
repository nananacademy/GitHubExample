#include "MyHeader.h"
#include "Utlilities.h"
#include "MyFunctions.h"
#include "AActor.h"
#include "NarrativeSystem.h"
#include "AEnemyCharacter.h"
#include "ACharacter.h"
#include "CombatSystem.h"
#include "Item.h"

int FeatureToAdd(int InValueA, int InValueB)
{
	return InValueA + InValueA + 5000;
}

int ComplicatedFunctionForNarrative()
{
	// start aweome

	std::cout << "very complicated narrative system code" << std::endl;
	std::cout << "dialogue print" << std::endl;




	//end of awesome code
	return 5;
}

int main()
{
	Item* myItem = new Item();
	Item weapon;
	ACharacter myCharacter;
	myCharacter.Attack();
	AActor myActor;
	int DamageToApply = 1000;
	AEnemyCharacter myEnemy;
	myEnemy.Attack(myEnemy);

	CombatSystem myCombatSystem(10);
	myCombatSystem.DamageCharacter(myCharacter);

	Add(10);
	String myOtherString = "my name";
	String myString = "hello world";
	FeatureToAdd(1,3);
	int* myPtr;
	int otherCheckpoint = 8;
	int checkPoint = 3; //staged

	myPtr = &otherCheckpoint;
	float myFloat = 4.0f; //staged
	
	float myFloatB = 166.5f;

	float myFloatC = 0;

	bool isItemPickedUp = false;
	bool isItemExistingInWorld = true;

	if (isItemPickedUp == true)
	{
		isItemExistingInWorld = false;
	}

	int someInt = 10;

	delete myItem;
	
}