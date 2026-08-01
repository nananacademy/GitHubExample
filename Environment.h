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

	void SetName(std::string InName);

	char GetIcon()
	{
		return mIcon;
	}
};

