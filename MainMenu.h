#pragma once
class MainMenu
{
protected:
	static MainMenu* mInstance;
	MainMenu();

	MainMenu(const MainMenu& InMainMenuRightOperand) = delete;
	MainMenu& operator=(const MainMenu& InMainMenuRightOperand) = delete;

public:
	static MainMenu* GetInstance();
	void DisplayMenu();

	void DisplayDamage(int InDamage);

	void ChangeButtonSelected(int Input);
};

