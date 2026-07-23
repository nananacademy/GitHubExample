#include "MyFunctions.h"

int Add(int InValue)
{
	int* myInt = new int(20);
	
	delete myInt;
	return InValue +400;
}

class MyClass
{

};
int Add(float InValue)
{
	MyClass instanceOfClass;
	return instanceOfClass;
}
