#include"define.h"
#include"Common.h"
#include"Point.h"
#include"Board.h"
#include"Game.h"
#include"Function.h"

#pragma comment (lib, "winmm.lib")

int Game::countX = 0;
int Game::countO = 0;

int main()
{
	Common::fixConsoleWindow();
	int choose;
	Menu();
	cin >> choose;
	Game g(BOARD_SIZE, LEFT, TOP);
	switch (choose)
	{
	case 1:
		g.Play();
		break;
	case 2:
		g.SelectAutoPlay();
		break;
	case 3:
		g.Information();
		break;
	case 4:
		g.SelectSetting();
		break;
	case 5:
		g.exitGame();
		break;
	}
	_getch();
	return 0;
}