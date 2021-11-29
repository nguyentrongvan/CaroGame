#include"Common.h"

  //Class Common
void Common::gotoXY(int pX, int pY)
{
	COORD coord;
	coord.X = pX;
	coord.Y = pY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Common::fixConsoleWindow()
{
	auto hStdin = GetStdHandle(STD_INPUT_HANDLE);
	auto hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	auto consoleW = GetConsoleWindow();

	SetConsoleTitleA("Caro Game - Nguyen Trong Van - 1712202");
	MoveWindow(consoleW, 150, 40, 1080, 620, TRUE);
	auto style = GetWindowLongA(consoleW, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLongA(consoleW, GWL_STYLE, style);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(hStdout, &info);
	COORD new_size{
		static_cast<short>(info.srWindow.Right - info.srWindow.Left + 1),
		static_cast<short>(info.srWindow.Bottom - info.srWindow.Top + 1)
	};
	info.dwMaximumWindowSize = new_size;
	SetConsoleScreenBufferSize(hStdout, new_size);
}