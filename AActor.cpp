#include "AActor.h"

int AActor::badStatic = 1;

AActor::AActor()
{
}

void AActor::ReturnHome()
{
	mLocation.x = 1;
	mLocation.y = 1;
}
