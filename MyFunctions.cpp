#include "MyFunctions.h"

int Add(int InValue)
{
	int* myInt = new int(200000000);
	
	delete myInt;
	return InValue +400;
}

int GetValue()
{
	return 6;
}
