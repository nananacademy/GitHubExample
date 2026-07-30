#pragma once

enum class Difficultly
{
	Easy,
	Med,
	Hard
};

class MainMenu
{
protected:
	static MainMenu* mInstance;
	Difficultly mDifficultlySelected = Difficultly::Easy;
	MainMenu();

	MainMenu(const MainMenu& InMainMenuRightOperand) = delete;
	MainMenu& operator=(const MainMenu& InMainMenuRightOperand) = delete;

public:
	static MainMenu* GetInstance();
	void DisplayMenu();

	void DisplayDamage(int InDamage);
};

