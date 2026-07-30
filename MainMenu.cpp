#include "MainMenu.h"
#include <iostream>

MainMenu* MainMenu::mInstance = nullptr;

MainMenu::MainMenu()
{
}

MainMenu* MainMenu::GetInstance()
{
	if (mInstance == nullptr)
	{
		mInstance = new MainMenu();
	}
	return mInstance;
}

void MainMenu::DisplayMenu()
{
	std::cout << "main menu" << std::endl;
}

void MainMenu::DisplayDamage(int InDamage)
{
	std::cout << "damage " << InDamage << std::endl;
}

void MainMenu::ChangeButtonSelected(int Input)
{
}
