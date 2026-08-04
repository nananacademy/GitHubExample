#include "AActor.h"

AActor::AActor()
{
}

void AActor::ReturnHome()
{
	mLocation.x = 1;
	mLocation.y = 1;
}
