#pragma once
#include <string>

class Environment
{
	std::string mName = "default";
	char mIcon = '=';


public:
	virtual void Interact();
	virtual void OnOverlap();

	std::string GetName()
	{
		mName;
	}

	char GetIcon()
	{
		return mIcon;
	}
};

