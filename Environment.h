#pragma once
#include <string>

class Environment
{
	std::string mName = "default";
	char mIcon = '=';

public:
	virtual void Interact();
	virtual void OnOverlap();
};

