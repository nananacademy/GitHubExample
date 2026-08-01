#pragma once

enum class Difficultly
{
	Easy,
	Med,
	Hard
};

enum class ButtonSelected
{
	Play,
	Quit,
	Options,
	None,
};

class MainMenu
{
protected:
	static MainMenu* mInstance;
	Difficultly mDifficultlySelected = Difficultly::Easy;
	ButtonSelected mButtonSelected = ButtonSelected::None;
	int mVolume = 4;


	MainMenu();

	MainMenu(const MainMenu& InMainMenuRightOperand) = delete;
	MainMenu& operator=(const MainMenu& InMainMenuRightOperand) = delete;

public:
	static MainMenu* GetInstance();
	void DisplayMenu();

	void DisplayDamage(int InDamage);

	void SetDifficulty(Difficultly InDifficultySelected);
	void SetVolume(int InVolume);
	void SetButtonSelected(ButtonSelected InButtonSelected);
};

