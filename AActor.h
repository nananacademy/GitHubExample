#pragma once

struct FVector2
{
	int x = 0;
	int y = 0;
};
class AActor
{
public:
	AActor();

	FVector2 mLocation;

	void ReturnHome();
};

