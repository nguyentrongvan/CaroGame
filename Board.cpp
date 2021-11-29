#include"Board.h"
#include"Common.h"
#include"Function.h"

//---------------------------------------------------------------------
//Class Board
Board::Board(int pSize, int pX, int pY)
{
	_size = pSize;
	_left = pX;
	_top = pY;
	_pArray = new Point*[pSize];
	for (int i = 0; i < pSize; i++)
	{
		_pArray[i] = new Point[pSize];
	}
}

Board::~Board()
{
	for (int i = 0; i < _size; i++)
	{
		delete[] _pArray[i];
	}
	delete[] _pArray;
}

int Board::getXAt(int i, int j)
{
	return _pArray[i][j].X();
}

int Board::getYAt(int i, int j)
{
	return _pArray[i][j].Y();
}

void Board::resetData()
{
	if (_size == 0) return; //Gọi consstructor trước khi reset data.
	{
		for (int i = 0; i < _size; i++)
		{
			for (int j = 0; j < _size; j++)
			{
				_pArray[i][j].setX(4 * j + _left + 2); //Trùng với hoành độ màn hình bàn cờ.
				_pArray[i][j].setY(2 * i + _top + 1); //Trùng với tung độ màn hình bàn cờ.
				_pArray[i][j].setCheck(0);
			}
		}
	}
}

void Board::drawBoard()
{
	if (_pArray == NULL) return; //Phải gọi Constructor trước
	for (int i = 0; i <= _size; i++)
	{
		for (int j = 0; j <= _size; j++)
		{
			TextColor(7);
			Common::gotoXY(_left + 4 * i, _top + 2 * j);
			printf(".");
		}
	}

	for (int j = 0; j <= _size; j++)
	{
		TextColor(8);
		Common::gotoXY(_left + 4 * (-1), _top + 2 * j - 1);
		cout << j << endl << endl;
	}
	for (int j = 0; j < _size; j++)
	{
		TextColor(8);
		Common::gotoXY(_left + 4 * j + 1, _top + 2 * 0 - 1);
		cout << j + 1 << endl << endl;
	}
	Common::gotoXY(_pArray[0][0].X(), _pArray[0][0].Y());//Di chuyển vào ô đầu.
}

int Board::checkBoard(int pX, int pY, bool pTurn)
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			if (_pArray[i][j].X() == pX && _pArray[i][j].Y() == pY && _pArray[i][j].Check() == 0)
			{
				if (pTurn)
				{
					_pArray[i][j].setCheck(-1);// Nếu lượt hiện hành là true: c = -1.
				}
				else
				{
					_pArray[i][j].setCheck(1);// Nếu lượt hiện hành là false: c = 1.
				}
				return _pArray[i][j].Check();
			}
		}
	}
	return 0;
}

int Board::testBoard()
{
	int countCheck = 0; //Đặt 1 biến đếm các nước cờ
						//Cho các biến chạy khắp tọa độ bàn cờ để tìm ra chôc đánh dấu
	for (int i = 0; i < _size; i++)
		for (int j = 0; j < _size; j++)
			switch (_pArray[i][j].Check()) //Tiến hành xử lý khi tìm được chỗ đánh dấu
			{
			case -1: //Xét con cờ X
			{
				//Hàng dọc:
				if (_pArray[i][j].Check() == _pArray[i][j + 1].Check() && _pArray[i][j].Check() == _pArray[i][j + 2].Check())
					if (_pArray[i][j].Check() == _pArray[i][j + 3].Check() && _pArray[i][j].Check() == _pArray[i][j + 4].Check())
						return -1;
				//Nếu vị trí của i phù hợp (Nếu tiến thêm 4 nước không vượt quá kích thước bàn cờ)
				if (i < _size - 4)
				{
					//Xét tiếp vị các phương trên bàn cờ:
					//Hàng ngang
					if (_pArray[i][j].Check() == _pArray[i + 1][j].Check() && _pArray[i][j].Check() == _pArray[i + 2][j].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j].Check() && _pArray[i][j].Check() == _pArray[i + 4][j].Check())
							return -1;
					//Chéo chính
					if (_pArray[i][j].Check() == _pArray[i + 1][j + 1].Check() && _pArray[i][j].Check() == _pArray[2 + i][j + 2].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j + 3].Check() && _pArray[i][j].Check() == _pArray[i + 4][j + 4].Check())
							return -1;
					//Chéo phụ:
					if (_pArray[i][j].Check() == _pArray[i + 1][j - 1].Check() && _pArray[i][j].Check() == _pArray[i + 2][j - 2].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j - 3].Check() && _pArray[i][j].Check() == _pArray[i + 4][j - 4].Check())
							return -1;
				}
				countCheck++; //Tăng biến đếm số lượng con cờ
				break;
			}
			case 1: //Tương tự cho con cờ O:
			{
				//Hàng dọc:
				if (_pArray[i][j].Check() == _pArray[i][j + 1].Check() && _pArray[i][j].Check() == _pArray[i][j + 2].Check())
					if (_pArray[i][j].Check() == _pArray[i][j + 3].Check() && _pArray[i][j].Check() == _pArray[i][j + 4].Check())
						return 1;
				if (i < _size - 4)
				{
					//Hàng ngang:
					if (_pArray[i][j].Check() == _pArray[i + 1][j].Check() && _pArray[i][j].Check() == _pArray[i + 2][j].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j].Check() && _pArray[i][j].Check() == _pArray[i + 4][j].Check())
							return 1;
					//Chéo chính:
					if (_pArray[i][j].Check() == _pArray[i + 1][j + 1].Check() && _pArray[i][j].Check() == _pArray[2 + i][j + 2].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j + 3].Check() && _pArray[i][j].Check() == _pArray[i + 4][j + 4].Check())
							return 1;
					//Chéo phụ:
					if (_pArray[i][j].Check() == _pArray[i + 1][j - 1].Check() && _pArray[i][j].Check() == _pArray[i + 2][j - 2].Check())
						if (_pArray[i][j].Check() == _pArray[i + 3][j - 3].Check() && _pArray[i][j].Check() == _pArray[i + 4][j - 4].Check())
							return 1;
				}
				countCheck++; //Tăng biến đếm số lượng con cờ
				break;
			}
			}
	if (countCheck == _size * _size) //Nếu cố lượng con cờ phủ kín bề mặt bàn cờ
		return 0;//Trả về hòa
	return 2; //Không có gì xảy ra thì tiếp tục đánh!
}

int Board::getcheckBoard(int x, int y)
{
	if (_pArray[x][y].Check() == 1)
		return 1;
	else if (_pArray[x][y].Check() == -1)
		return -1;
	else return 0;
}

void Board::setData(int x, int y, int check)
{
	_pArray[x][y].setCheck(check);
}

int Board::testBoardtoPlay(int x, int y)
{
	switch (_pArray[x][y].Check())
	{
	case 1:
		if (_pArray[x][y].Check() == _pArray[x][y + 1].Check() && _pArray[x][y].Check() == _pArray[x][y + 2].Check())
			return 11;
		if (x < _size - 4)
		{
			//Hàng ngang:
			if (_pArray[x][y].Check() == _pArray[x + 1][y].Check() && _pArray[x][y].Check() == _pArray[x + 2][y].Check())
				return 12;
			//Chéo chính:
			if (_pArray[x][y].Check() == _pArray[x + 1][y + 1].Check() && _pArray[x][y].Check() == _pArray[2 + x][y + 2].Check())
				return 13;
			//Chéo phụ:
			if (_pArray[x][y].Check() == _pArray[x + 1][y - 1].Check() && _pArray[x][y].Check() == _pArray[x + 2][y - 2].Check())
				return 14;
		}
		break;
	case -1:
		if (_pArray[x][y].Check() == _pArray[x][y + 1].Check() && _pArray[x][y].Check() == _pArray[x][y + 2].Check())
			return 11;
		if (x < _size - 4)
		{
			//Hàng ngang:
			if (_pArray[x][y].Check() == _pArray[x + 1][y].Check() && _pArray[x][y].Check() == _pArray[x + 2][y].Check())
				return 12;
			//Chéo chính:
			if (_pArray[x][y].Check() == _pArray[x + 1][y + 1].Check() && _pArray[x][y].Check() == _pArray[2 + x][y + 2].Check())
				return 13;
			//Chéo phụ:
			if (_pArray[x][y].Check() == _pArray[x + 1][y - 1].Check() && _pArray[x][y].Check() == _pArray[x + 2][y - 2].Check())
				return 14;
		}
		break;
	}
	return 0;
}