#include"Function.h"
#include"Common.h"
#include"Game.h"

void InterFace()
{
	//C
	TextColor(11);
	Common::gotoXY(35 + 3, 2 + 1);
	cout << "================";
	Common::gotoXY(33 + 3, 3 + 1);
	cout << "=================";
	Common::gotoXY(30 + 3, 5 + 1);
	cout << "======" << endl;
	Common::gotoXY(29 + 3, 6 + 1);
	cout << "======" << endl;
	Common::gotoXY(28 + 3, 7 + 1);
	cout << "======";
	Common::gotoXY(29 + 3, 8 + 1);
	cout << "======";
	Common::gotoXY(30 + 3, 9 + 1);
	cout << "======";
	Common::gotoXY(31 + 3, 10 + 1);
	cout << "=======";
	Common::gotoXY(31 + 3, 4 + 1);
	cout << "=======";
	Common::gotoXY(33 + 3, 11 + 1);
	cout << "==========";
	Common::gotoXY(35 + 3, 12 + 1);
	cout << "=======";

	//A
	TextColor(12);
	Common::gotoXY(55 + 3, 1);
	cout << "=====";
	Common::gotoXY(54 + 3, 2);
	cout << "======";
	Common::gotoXY(53 + 3, 3);
	cout << "=======";
	Common::gotoXY(52 + 3, 4);
	cout << "========";
	Common::gotoXY(51 + 3, 5);
	cout << "=========";
	Common::gotoXY(50 + 3, 6);
	cout << "====  ====";
	Common::gotoXY(49 + 3, 7);
	cout << "====   ====";
	Common::gotoXY(48 + 3, 8);
	cout << "============";
	Common::gotoXY(47 + 3, 9);
	cout << "=============";
	Common::gotoXY(46 + 3, 10);
	cout << "=====     ====";
	Common::gotoXY(45 + 3, 11);
	cout << "=====      ====";
	Common::gotoXY(44 + 3, 12);
	cout << "=====       ====";
	Common::gotoXY(43 + 3, 13);
	cout << "=====        ====";
	Common::gotoXY(42 + 3, 14);
	cout << "=====";
	Common::gotoXY(41 + 3, 15);
	cout << "=====";
	Common::gotoXY(56 + 3, 14);
	cout << "=================================";
	Common::gotoXY(56 + 3, 15);
	cout << "================================";

	//R
	TextColor(14);
	for (int i = 5; i <= 13; i++)
	{
		Common::gotoXY(63 + 3, i);
		cout << "=====";
	}
	Common::gotoXY(69 + 3, 5);
	cout << "====";
	Common::gotoXY(70 + 3, 6);
	cout << "====";
	Common::gotoXY(71 + 3, 7);
	cout << "====";
	Common::gotoXY(70 + 3, 8);
	cout << "====";
	Common::gotoXY(69 + 3, 9);
	cout << "====";
	Common::gotoXY(70 + 3, 10);
	cout << "====";
	Common::gotoXY(71 + 3, 11);
	cout << "====";
	Common::gotoXY(72 + 3, 12);
	cout << "====";
	Common::gotoXY(73 + 3, 13);
	cout << "====";

	//O
	TextColor(9);
	Common::gotoXY(80 + 3, 11 + 2);
	cout << "==========";
	Common::gotoXY(79 + 3, 10 + 2);
	cout << "=====  =====";
	Common::gotoXY(78 + 3, 9 + 2);
	cout << "=====    =====";
	Common::gotoXY(77 + 3, 8 + 2);
	cout << "=====      =====";
	Common::gotoXY(76 + 3, 7 + 2);
	cout << "=====        =====";
	Common::gotoXY(77 + 3, 6 + 2);
	cout << "=====      =====";
	Common::gotoXY(78 + 3, 5 + 2);
	cout << "=====    =====";
	Common::gotoXY(79 + 3, 6);
	cout << "=====  =====";
	Common::gotoXY(80 + 3, 5);
	cout << "==========";
}

void Menu()
{
	system("cls");
	InterFace();

	TextColor(8);
	Common::gotoXY(50, 20);
	{
		cout << "1|=> PLAY WITH OTHER PLAYER\n";
		Common::gotoXY(50, 21);
		cout << "2|=> PLAY WITH COMPUTER SYSTEM\n";
		Common::gotoXY(50, 22);
		cout << "3|=> INFORMATION\n";
		Common::gotoXY(50, 23);
		cout << "4|=> SETTING\n";
		Common::gotoXY(50, 24);
		cout << "5|=> EXIT GAME\n";
		Common::gotoXY(50, 26);
		cout << "Enter your Selection: ";
	}
}

void FaceEnd()
{
	TextColor(14);
	//E
	for (int i = 9; i <= 15; i++)
	{
		Common::gotoXY(30 - 8 - 4, i);
		cout << "====";
	}
	Common::gotoXY(33 - 8 - 4, 9);
	cout << "======";
	Common::gotoXY(33 - 8 - 4, 9 + 3);
	cout << "======";
	Common::gotoXY(33 - 8 - 4, 9 + 6);
	cout << "======";
	for (int i = 9; i <= 15; i++)
	{
		Common::gotoXY(41 - 8 - 4, i);
		cout << "====";
	}

	//N
	Common::gotoXY(45 - 8 - 4, 9);
	cout << "=======";
	for (int i = 10; i <= 15; i++)
	{
		Common::gotoXY(48 - 8 - 4, i);
		cout << "====";
	}


	for (int i = 9; i <= 15; i++)
	{
		Common::gotoXY(54 - 8 - 4, i);
		cout << "====";
	}
	//D
	Common::gotoXY(58 - 8 - 4, 9);
	cout << "======";
	Common::gotoXY(58 - 8 - 4, 15);
	cout << "======";
	Common::gotoXY(61 - 8 - 4, 10);
	cout << "====";
	Common::gotoXY(62 - 8 - 4, 11);
	cout << "====";
	Common::gotoXY(63 - 8 - 4, 12);
	cout << "====";
	Common::gotoXY(62 - 8 - 4, 13);
	cout << "====";
	Common::gotoXY(61 - 8 - 4, 14);
	cout << "====";

	//G
	for (int i = 9; i <= 15; i++)
	{
		Common::gotoXY(71 - 5 - 4, i);
		cout << "====";
	}
	Common::gotoXY(75 - 5 - 4, 9);
	cout << "======";
	Common::gotoXY(75 - 5 - 4, 15);
	cout << "======";
	Common::gotoXY(79 - 5 - 4, 13);
	cout << "==";
	Common::gotoXY(79 - 5 - 4, 14);
	cout << "==";
	Common::gotoXY(77 - 5 - 4, 12);
	cout << "====";
	//A
	Common::gotoXY(88 - 5 - 4, 9);
	cout << "=======";
	Common::gotoXY(86 - 5 - 4, 10);
	cout << "====";
	Common::gotoXY(85 - 5 - 4, 11);
	cout << "====";
	for (int i = 12; i <= 15; i++)
	{
		Common::gotoXY(84 - 5 - 4, i);
		cout << "====";
	}
	Common::gotoXY(93 - 5 - 4, 10);
	cout << "====";
	Common::gotoXY(94 - 5 - 4, 11);
	cout << "====";
	for (int i = 12; i <= 15; i++)
	{
		Common::gotoXY(95 - 5 - 4, i);
		cout << "====";
	}
	Common::gotoXY(85 - 5 - 4, 13);
	cout << "==========";
	//M
	Common::gotoXY(101 - 5 - 4, 9);
	cout << "=============";
	for (int i = 10; i <= 15; i++)
	{
		Common::gotoXY(101 - 5 - 4, i);
		cout << "===";
	}
	for (int i = 10; i <= 15; i++)
	{
		Common::gotoXY(106 - 5 - 4, i);
		cout << "===";
	}
	for (int i = 10; i <= 15; i++)
	{
		Common::gotoXY(111 - 5 - 4, i);
		cout << "===";
	}
	for (int i = 9; i <= 15; i++)
	{
		Common::gotoXY(116 - 5 - 4, i);
		cout << "====";
	}
	Common::gotoXY(119 - 5 - 4, 9);
	cout << "======";
	Common::gotoXY(119 - 5 - 4, 9 + 3);
	cout << "======";
	Common::gotoXY(119 - 5 - 4, 9 + 6);
	cout << "======";

}

void TextColor(int x)//Xac dinh mau cua chu
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
} //hÀM HIỆU CHỈNH MÀU CỦA CHỮ

 