#include"Game.h"
#include"define.h"
#include"Function.h"

  //---------------------------------------------------------------------
  //Class Game:
int Game::getCommand() { return _command; }

bool Game::isContinue() { return _loop; }

char Game::waitKeyBoard()
{
	_command = toupper(_getch());
	return _command;
}

char Game::askContinue()
{
	Common::gotoXY(0, _b->getYAt(_b->Size() - 1, _b->Size() - 1) + 4);
	return waitKeyBoard();
}

void Game::startGame()
{
	system("cls");
	PlaySound(NULL, NULL, SND_ASYNC | SND_LOOP);
	_b->resetData(); // Khởi tạo dữ liệu gốc
	_b->drawBoard(); // Vẽ màn hình game
	_x = _b->getXAt(0, 0);
	_y = _b->getYAt(0, 0);
}

void WinX()
{
	for (int i = 1; i < 16; i++)
	{
		Sleep(100);
		TextColor(i);
		Common::gotoXY(105, 11 + 2);
		cout << "=====";
		Common::gotoXY(106, 10 + 2);
		cout << "=====";
		Common::gotoXY(107, 9 + 2);
		cout << "=====";
		Common::gotoXY(108, 8 + 2);
		cout << "=====";
		Common::gotoXY(109, 7 + 2);
		cout << "=====";
		Common::gotoXY(110, 6 + 2);
		cout << "=====";
		Common::gotoXY(111, 5 + 2);
		cout << "=====";
		Common::gotoXY(112, 6);
		cout << "=====";
		Common::gotoXY(113, 5);
		cout << "=====";
		///////////////
		Common::gotoXY(97 + 12 + 3 + 1, 11 + 2);
		cout << "=====";
		Common::gotoXY(96 + 12 + 3 + 1, 10 + 2);
		cout << "=====";
		Common::gotoXY(95 + 12 + 3 + 1, 9 + 2);
		cout << "=====";
		Common::gotoXY(94 + 12 + 3 + 1, 8 + 2);
		cout << "=====";
		Common::gotoXY(92 + 12 + 3 + 1, 6 + 2);
		cout << "=====";
		Common::gotoXY(91 + 12 + 3 + 1, 5 + 2);
		cout << "=====";
		Common::gotoXY(90 + 12 + 3 + 1, 6);
		cout << "=====";
		Common::gotoXY(89 + 12 + 3 + 1, 5);
		cout << "=====";
		Common::gotoXY(102, 15);
		TextColor(i); printf("PLAYER 1 IS WINNER!", true, false);
	}
	TextColor(12);
	Common::gotoXY(105, 11 + 2);
	cout << "=====";
	Common::gotoXY(106, 10 + 2);
	cout << "=====";
	Common::gotoXY(107, 9 + 2);
	cout << "=====";
	Common::gotoXY(108, 8 + 2);
	cout << "=====";
	Common::gotoXY(109, 7 + 2);
	cout << "=====";
	Common::gotoXY(110, 6 + 2);
	cout << "=====";
	Common::gotoXY(111, 5 + 2);
	cout << "=====";
	Common::gotoXY(112, 6);
	cout << "=====";
	Common::gotoXY(113, 5);
	cout << "=====";
	///////////////
	Common::gotoXY(97 + 12 + 3 + 1, 11 + 2);
	cout << "=====";
	Common::gotoXY(96 + 12 + 3 + 1, 10 + 2);
	cout << "=====";
	Common::gotoXY(95 + 12 + 3 + 1, 9 + 2);
	cout << "=====";
	Common::gotoXY(94 + 12 + 3 + 1, 8 + 2);
	cout << "=====";
	Common::gotoXY(92 + 12 + 3 + 1, 6 + 2);
	cout << "=====";
	Common::gotoXY(91 + 12 + 3 + 1, 5 + 2);
	cout << "=====";
	Common::gotoXY(90 + 12 + 3 + 1, 6);
	cout << "=====";
	Common::gotoXY(89 + 12 + 3 + 1, 5);
	cout << "=====";
	Common::gotoXY(102, 15);
	TextColor(14); printf("PLAYER 1 IS WINNER!", true, false);
}

void WinO()
{
	for (int i = 1; i <= 15; i++)
	{
		Sleep(100);
		TextColor(i);
		Common::gotoXY(105, 11 + 2);
		cout << "==========";
		Common::gotoXY(104, 10 + 2);
		cout << "=====  =====";
		Common::gotoXY(103, 9 + 2);
		cout << "=====    =====";
		Common::gotoXY(102, 8 + 2);
		cout << "=====      =====";
		Common::gotoXY(101, 7 + 2);
		cout << "=====        =====";
		Common::gotoXY(102, 6 + 2);
		cout << "=====      =====";
		Common::gotoXY(103, 5 + 2);
		cout << "=====    =====";
		Common::gotoXY(104, 6);
		cout << "=====  =====";
		Common::gotoXY(105, 5);
		cout << "==========";
		Common::gotoXY(102, 15);
		TextColor(i); printf("PLAYER 2 IS WINNER!", false, true);
	}
	TextColor(11);
	Common::gotoXY(105, 11 + 2);
	cout << "==========";
	Common::gotoXY(104, 10 + 2);
	cout << "=====  =====";
	Common::gotoXY(103, 9 + 2);
	cout << "=====    =====";
	Common::gotoXY(102, 8 + 2);
	cout << "=====      =====";
	Common::gotoXY(101, 7 + 2);
	cout << "=====        =====";
	Common::gotoXY(102, 6 + 2);
	cout << "=====      =====";
	Common::gotoXY(103, 5 + 2);
	cout << "=====    =====";
	Common::gotoXY(104, 6);
	cout << "=====  =====";
	Common::gotoXY(105, 5);
	cout << "==========";
	Common::gotoXY(102, 15);
	TextColor(14); printf("PLAYER 2 IS WINNER!", false, true);
}

void WinOX()
{
	for (int i = 0; i <= 15; i++)
	{
		Sleep(100);
		TextColor(i);
		Common::gotoXY(103, 4);
		cout << char(13) << char(13) << char(13) << char(13) << char(13);
		Common::gotoXY(103, 5);
		cout << "=====     =====";
		Common::gotoXY(102, 6);
		cout << "=======   =======";
		Common::gotoXY(101, 7);
		cout << "========= =========";
		Common::gotoXY(101, 8);
		cout << "===================";
		Common::gotoXY(102, 9);
		cout << "=================";
		Common::gotoXY(103, 10);
		cout << "===============";
		Common::gotoXY(104, 11);
		cout << "=============";
		Common::gotoXY(105, 12);
		cout << "===========";
		Common::gotoXY(106, 13);
		cout << "=========";
		Common::gotoXY(108, 14);
		cout << "=====";
		Common::gotoXY(109, 15);
		cout << "===";

		Common::gotoXY(102, 17);
		TextColor(i); printf("DON'T HAVE WINNER!", false, true);
	}
	TextColor(13);
	Common::gotoXY(103, 4);
	cout << char(13) << char(13) << char(13) << char(13) << char(13);
	Common::gotoXY(103, 5);
	cout << "=====     =====";
	Common::gotoXY(102, 6);
	cout << "=======   =======";
	Common::gotoXY(101, 7);
	cout << "========= =========";
	Common::gotoXY(101, 8);
	cout << "===================";
	Common::gotoXY(102, 9);
	cout << "=================";
	Common::gotoXY(103, 10);
	cout << "===============";
	Common::gotoXY(104, 11);
	cout << "=============";
	Common::gotoXY(105, 12);
	cout << "===========";
	Common::gotoXY(106, 13);
	cout << "=========";
	Common::gotoXY(108, 14);
	cout << "=====";
	Common::gotoXY(109, 15);
	cout << "===";

	Common::gotoXY(102, 17);
	TextColor(14); printf("DON'T HAVE WINNER!", false, true);
}

int Game::processFinish()
{
	int pWhoWin = _b->testBoard();
	switch (pWhoWin)
	{
	case -1:
		PlaySound("win.wav", NULL, SND_ASYNC);
		WinX();
		break;
	case 1:
		PlaySound("win.wav", NULL, SND_ASYNC);
		WinO();
		break;
	case 0:
		PlaySound("win.wav", NULL, SND_ASYNC);
		WinOX();
		break;
	case 2:
		_turn = !_turn; // Đổi lượt nếu không có gì xảy ra.
	}
	Common::gotoXY(_x, _y); // Trả về vị trí hiện hành của con trỏ màn hình bàn cờ.
	return pWhoWin;
}

void Game::exitGame()
{
	if (isPlaying())
	{
		if (_b->testBoard() == 2)
		{
			Common::gotoXY(0, 30);
			TextColor(5);
			cout << "??...Do you want to Save Game?";
			Common::gotoXY(0, 31);
			cout << "->Please press 'Y' to save";
			Common::gotoXY(0, 32);
			cout << "->Any key to exit game!";
			waitKeyBoard();
			if (getCommand() == 'Y')
			{
				Save();
				Sleep(10);
				system("cls");
				FaceEnd();
				TextColor(11);
				Common::gotoXY(39, 20);
				cout << "THANKS FOR PLAYING WITH US...GOODBYE AND SEE YOU LATER" << endl;
				_loop = false;
			}
			else
			{
				system("cls");
				FaceEnd();
				TextColor(11);
				Common::gotoXY(39, 20);
				cout << "THANKS FOR PLAYING WITH US...GOODBYE AND SEE YOU LATER" << endl;
				_loop = false;
			}
		}
		else
		{
			system("cls");
			FaceEnd();
			TextColor(11);
			Common::gotoXY(39, 20);
			cout << "THANKS FOR PLAYING WITH US...GOODBYE AND SEE YOU LATER" << endl;
			_loop = false;
		}
	}
	else
	{
		system("cls");
		FaceEnd();
		TextColor(11);
		Common::gotoXY(39, 20);
		cout << "THANKS FOR PLAYING WITH US...GOODBYE AND SEE YOU LATER" << endl;
		_loop = false;
	}
}

bool Game::processCheckBoard()
{
	switch (_b->checkBoard(_x, _y, _turn))
	{
	case -1:
		PlaySound("check.wav", NULL, SND_ASYNC);
		TextColor(12);	printf("X"); countX++;
		break;
	case  1:
		PlaySound("check.wav", NULL, SND_ASYNC);
		TextColor(11); printf("O"); countO++;
		break;
	case 0: return false; // Khi đánh vào ô đã đánh rồi!
	}
	return true;
}

bool Game::processCheckBoard_Easy()
{
	int n[14];
	for (int i = 0; i < 14; i++)
	{
		n[i] = 37 + 4 * i;
	}
	int m[14];
	for (int i = 0; i < 14; i++)
	{
		m[i] = 3 + 2 * i;
	}
	int x = rand() % 14;
	int y = rand() % 14;
	Common::gotoXY(n[x] + 1, m[y]);
	switch (_b->checkBoard(n[x] + 1, m[y], _turn))
	{
	case -1:
		PlaySound("check.wav", NULL, SND_ASYNC);
		TextColor(12); printf("X"); countX++;
		break;
	case 1:
		PlaySound("check.wav", NULL, SND_ASYNC);
		TextColor(11); printf("O"); countO++;
		break;
	case 0: return false; // Khi đánh vào ô đã đánh rồi!
	}
	return true;
}

void Game::moveRight()
{
	if (_x < _b->getXAt(_b->Size() - 1, _b->Size() - 1))
	{
		_x += 4;
		Common::gotoXY(_x, _y);
	}
}

void Game::moveLeft()
{
	if (_x > _b->getXAt(0, 0))
	{
		_x -= 4;
		Common::gotoXY(_x, _y);
	}
}

void Game::moveDown()
{
	if (_y < _b->getYAt(_b->Size() - 1, _b->Size() - 1))
	{
		_y += 2;
		Common::gotoXY(_x, _y);
	}
}

void Game::moveUp()
{
	if (_y > _b->getYAt(0, 0))
	{
		_y -= 2;
		Common::gotoXY(_x, _y);
	}
}

Game::Game(int pSize, int pLeft, int pTop)
{
	_b = new Board(pSize, pLeft, pTop);
	_loop = _turn = true;
	_command = -1; // Gán lượt và phím mặc định
	_x = pLeft; _y = pTop;
}

Game::~Game() { delete _b; }

//-----------------------------------------------------------------------------------
//Hàm phụ xây dựng hoàn thiện Game
void Game::Play()
{
	countX = 0;
	countO = 0;
	startGame();
	_playing = true;
	InFor();
	while (isContinue())
	{
		waitKeyBoard();	if (getCommand() == 27) exitGame();
		else
		{
			switch (getCommand())
			{
			case 'A': case 'a':
				moveLeft();
				break;
			case 'W': case 'w':
				moveUp();
				break;
			case 'S': case 's':
				moveDown();
				break;
			case 'D': case 'd':
				moveRight();
				break;
			case 13: case 32:
				if (processCheckBoard())
				{
					Common::gotoXY(20, 21);
					TextColor(8); cout << countX;
					Common::gotoXY(20, 22);
					TextColor(8); cout << countO;
					Common::gotoXY(17, 23);
					Coordinate();
					Turn();
					switch (processFinish())
					{
					case 1:case -1:case 0:
						AskContinue();
						break;
					}
				}
				break;
			case 'L':
				Save();
				break;
			case 'T':
				Load();
				break;
			}
		}
	}
}

void Game::InFor() {
	int countX = 0;
	int countO = 0;
	TextColor(14);
	Common::gotoXY(10, 1);
	cout << "THE CARO GAME" << endl;
	TextColor(8); cout << "\n----------------------------------";
	TextColor(7);
	//Trang tri
	for (int i = 0; i < 33; i++)
	{
		Common::gotoXY(33, i);
		cout << "|\n";
	}
	Common::gotoXY(7, 4); TextColor(11); cout << "!===HOW TO MOVE===? " << endl;
	Common::gotoXY(0, 5);
	cout << "\t_Move left: A.\n\t_Move ringht: D.\n\t_Move up: S.\n\t_Move up: W.\n";
	TextColor(8); cout << "\n---------------------------------";
	Common::gotoXY(7, 10);
	TextColor(7); cout << "\n      !===HOW TO PLAY====?" << endl;
	cout << "\t_First Player: \n   Press"; TextColor(12); cout << " Enter Key"; TextColor(7); cout << " to play." << endl;
	Common::gotoXY(7, 14);
	TextColor(7); cout << "\n      !===HOW TO PLAY====?" << endl;
	cout << "\t_Secornd Player: \n   Press"; TextColor(12); cout << " Space Key"; TextColor(7); cout << " to play.";
	TextColor(8); cout << "\n---------------------------------!";
	TextColor(3); cout << "\n      !===PLAYER'S INFOR===?" << endl;
	cout << "->TURN: ";
	cout << endl;
	TextColor(3); cout << "_Number of check"; TextColor(12); cout << " X"; TextColor(8); cout << ": " << endl;
	TextColor(3); cout << "_Number of check"; TextColor(11); cout << " O"; TextColor(8); cout << ": " << endl;
	TextColor(3); cout << "Coordinates of check: ";
	TextColor(7); cout << "\n---------------------------------!";
	TextColor(6);
	Common::gotoXY(7, 25);
	cout << "!===SAVE DATA===?";
	Common::gotoXY(0, 26);
	cout << "   Press 'L' to save data!";
	Common::gotoXY(0, 28); TextColor(8); cout << "\n---------------------------------!";
	Common::gotoXY(0, 31); TextColor(8); cout << "\n\n---------------------------------!";
}

bool Game::Music(int choose)
{
	if (choose == 1)
	{
		PlaySound("sound.wav", NULL, SND_ASYNC | SND_LOOP);
		return true;
	}
	else if (choose == 0)
	{
		PlaySound(NULL, NULL, SND_ASYNC | SND_LOOP);
		return false;
	}
}

void Game::SelectSetting()
{
	system("cls");
	InterFace();

	TextColor(8);
	Common::gotoXY(50, 22);
	cout << "SECLECT THE GAME'S SETTING:";
	Common::gotoXY(50, 24);
	cout << "1|=> BOARD SIZE\n";
	Common::gotoXY(50, 25);
	cout << "2|=> MUSIC\n";
	waitKeyBoard();
	switch (getCommand())
	{
	case '1':
		Setting();
		break;
	case '2':
		system("cls");
		Common::gotoXY(57, 15);
		cout << "|1|->ON MUSIC";
		Common::gotoXY(57, 16);
		cout << "|0|->OFF MUSIC";
		int choose;
		Common::gotoXY(57, 17);
		cout << "Enter your selection: ";
		cin >> choose;
		Music(choose);
		Back(BOARD_SIZE);
		break;
	}
}

int Game::SettingSize()
{
	int size;
	TextColor(8);
	Common::gotoXY(33, 15);
	cout << "Press 'C' key to change setting of board's size or any key to continue...";
	waitKeyBoard();
	if (getCommand() == 'C' || getCommand() == 'c')
	{
		Common::gotoXY(33, 16);
		cout << "Enter the value of new Board's size: ";
		cin >> size;
		if (size < 15 && size>4)
		{
			Common::gotoXY(73, 16);
			TextColor(2); cout << " V V V";
		}
		while (size > 14 || size < 5)
		{
			if (size > 14 || size < 5)
			{
				Common::gotoXY(33, 17);
				cout << "New size is not valid!"; TextColor(12); cout << " X X X";
				Common::gotoXY(33, 18);
				TextColor(8);
				cout << "Please enter different value: ";
				cin >> size;
			}
			else if (size < 15 && size>4) { Common::gotoXY(65, 18); TextColor(2); cout << " V V V"; }
		}
		return size;
	}
	else return BOARD_SIZE;
}

void Game::Setting()
{
	system("cls");

	TextColor(11);
	Common::gotoXY(50, 5);
	cout << "||_____THE CARO GAME_____||" << endl;
	Common::gotoXY(54, 6);
	cout << "Automatic Setting:" << endl;
	Common::gotoXY(54, 7);
	cout << "_TOP: 2";
	Common::gotoXY(54, 8);
	cout << "_LEFT: 40";
	Common::gotoXY(54, 9);
	cout << "_BOARD'S SIZE: 14x14";
	Back(SettingSize());
}

void Game::Information()
{
	system("cls");
	Common::gotoXY(57, 10);
	cout << "THE CARO GAME" << endl;
	Common::gotoXY(42, 11);
	cout << "||=======================================||" << endl;
	Common::gotoXY(51, 12);
	cout << "||_Dev: Alastor Garthor" << endl;
	Common::gotoXY(51, 13);
	cout << "||_Name: Nguyen Trong Van" << endl;
	Common::gotoXY(51, 14);
	cout << "||_ID: 1712202" << endl;
	Common::gotoXY(42, 15);
	cout << "Contact with me: "; TextColor(11); cout << "www.fb.com/nguyentrongvan34" << endl;
	Back(BOARD_SIZE);
}

void Game::Easy_AutoPlay()
{
	countX = 0;
	countO = 0;
	startGame();
	_playing = true;
	InFor();
	_turn = true;
	while (isContinue())
	{
		if (_turn)
		{
			waitKeyBoard();	if (getCommand() == 27) exitGame();
			else
			{
				switch (getCommand())
				{
				case 'A': case 'a':
					moveLeft();
					break;
				case 'W': case 'w':
					moveUp();
					break;
				case 'S': case 's':
					moveDown();
					break;
				case 'D': case 'd':
					moveRight();
					break;
				case 13: case 32:
					if (processCheckBoard())
					{
						Common::gotoXY(20, 21);
						TextColor(8); cout << countX;
						Common::gotoXY(20, 22);
						TextColor(8); cout << countO;
						Coordinate();
						Turn();

						switch (processFinish())
						{
						case 1:case -1:case 0:
							AskContinue();
							break;
						}
						break;
					}
					break;
				case 'L':
					Save();
					break;
				case 'T':
					Load();
					break;
				}
			}
		}
		else
		{
			if (processCheckBoard_Easy())
			{
				switch (processFinish())
				{
				case 1:case -1:case 0:
					AskContinue();
					break;
				}
			}
		}
	}
}

void Game::SelectAutoPlay()
{
	system("cls");
	InterFace();

	TextColor(8);
	Common::gotoXY(50, 22);
	cout << "SECLECT THE LEVEL:";
	Common::gotoXY(50, 24);
	cout << "1|=> EASY\n";
	Common::gotoXY(50, 25);
	cout << "2|=> HIGHER\n";
	waitKeyBoard();
	switch (getCommand())
	{
	case '1':
		Easy_AutoPlay();
		break;
	case '2':
		system("cls");
		Common::gotoXY(46, 15);
		cout << "COMMING SOON...PLEASE COME BACK LATER";
		Back(BOARD_SIZE);
		break;
	}
}

void Game::Back(int size)
{
	TextColor(7);
	Common::gotoXY(57, 20);
	cout << "_M: BACK MENU" << endl;
	Common::gotoXY(57, 21);
	cout << "_P: PLAY GAME" << endl;
	Common::gotoXY(57, 22);
	cout << "_E: EXIT GAME" << endl << endl;
	Common::gotoXY(46, 24);
	cout << "Press key to continue or exit game...";
	waitKeyBoard();
	Game g(size, LEFT, TOP);
	switch (getCommand())
	{
	case 'M': case 'm':
		int choose;
		Menu();
		cin >> choose;
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
		break;
	case 'P': case 'p':
		g.Play();
		break;
	case 'E': case 'e':
		g.exitGame();
		break;
	}
}

void Game::AskContinue()
{
	TextColor(14);
	Common::gotoXY(0, 30);
	cout << "_Press: 'Y' to play again" << endl;
	Common::gotoXY(7, 31);
	cout << " 'M' to back Menu";
	Common::gotoXY(7, 32);
	cout << " Any key to exit game!";
	waitKeyBoard();
	if (getCommand() == 'M')
	{
		int choose;
		Menu();
		cin >> choose;
		switch (choose)
		{
		case 1:
			Play();
			break;
		case 2:
			SelectAutoPlay();
			break;
		case 3:
			Information();
			break;
		case 4:
			SelectSetting();
			break;
		case 5:
			exitGame();
			break;
		}
	}
	else if (getCommand() == 'Y')
	{
		countX = 0;
		countO = 0;
		startGame();
		InFor();
	}
	else exitGame();

}

void Game::Save()
{
	TextColor(6);
	Common::gotoXY(0, 27);
	char *filename = new char();
	cout << "->Enter name's file: ";
	TextColor(8);
	cin >> filename;
	ofstream fout(filename, ios::out);
	fout << _b->Size() << " ";
	for (int i = 0; i < _b->Size(); i++)
	{
		for (int j = 0; j < _b->Size(); j++)
		{
			if (_b->getcheckBoard(i, j) != 0)
				fout << _b->getXAt(i, j) << " " << _b->getYAt(i, j) << " " << _b->getcheckBoard(i, j) << " ";
		}
	}
	fout.close();
	Common::gotoXY(0, 27); TextColor(6);
	cout << "->Data's saved in file: "; TextColor(8); cout << filename;
}

void Game::Coordinate()
{
	Common::gotoXY(22, 23);
	TextColor(13); cout << "x="; TextColor(8); cout << 1 + (getX() - 42) / 4 << " ";
	Common::gotoXY(27, 23);
	TextColor(13); cout << "y="; TextColor(8); cout << 1 + (getY() - 3) / 2 << " ";
}

void Game::Load()
{
	TextColor(2);
	char *filename = new char();
	Common::gotoXY(0, 28);
	cout << "->Enter file name:   ";
	TextColor(8); cin >> filename;
	ifstream fin(filename, ios::in);
	int a[200];
	int i = 0;
	while (!fin.eof())
	{
		fin >> a[i];
		i++;
	}
	system("cls");
	_b = new Board(a[0], LEFT, TOP);
	startGame();
	InFor();
	countX = 0;
	countO = 0;
	for (int j = 1; j < i; j += 3)
	{
		switch (a[j + 2])
		{
		case -1:
			Common::gotoXY(a[j], a[j + 1]);
			_b->checkBoard(a[j], a[j + 1], 1);
			TextColor(12);	printf("X"); countX++;
			break;
		case  1:
			Common::gotoXY(a[j], a[j + 1]);
			_b->checkBoard(a[j], a[j + 1], 0);
			TextColor(11); printf("O"); countO++;
			break;
		case 0:
			break;
		}
	}
	Common::gotoXY(22, 23);
	TextColor(13); cout << "x="; TextColor(8); cout << 1 + (a[i - 4] - 42) / 4; TextColor(13); cout << " y="; TextColor(8); cout << 1 + (a[i - 3] - 3) / 2 << " ";
	Common::gotoXY(8, 20);
	switch (_turn)
	{
	case true:
		TextColor(11); cout << "O";
		break;
	case false:
		TextColor(12); cout << "X";
		break;
	}

	int pWhoWin = _b->testBoard();
	switch (pWhoWin)
	{
	case -1:
		WinX();
		break;
	case 1:
		WinO();
		break;
	case 0:
		WinOX();
		break;
	case 2:
		_turn = !_turn; // Đổi lượt nếu không có gì xảy ra.
	}

	Common::gotoXY(_x, _y); // Trả về vị trí hiện hành của con trỏ màn hình bàn cờ.
	Common::gotoXY(20, 21);
	TextColor(8); cout << countX;
	Common::gotoXY(20, 22);
	TextColor(8); cout << countO;
	fin.close();
	TextColor(2);
	Common::gotoXY(0, 28); cout << "Data is loaded from: " << filename;

}

void Game::Turn()
{
	Common::gotoXY(8, 20);
	switch (_turn)
	{
	case true:
		TextColor(11); cout << "O";
		break;
	case false:
		TextColor(12); cout << "X";
		break;
	}
}

