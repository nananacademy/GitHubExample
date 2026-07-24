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
	static int badStatic;
	FVector2 mLocation;
};

