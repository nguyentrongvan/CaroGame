#pragma once
#include"Point.h"
#include"Common.h"

class Board {
private:
	int _size;
	int _left, _top;
	Point ** _pArray;
public:
	Board(int, int, int);
	~Board();
public:
	int Size() { return _size; }
	int Left() { return _left; }
	int Top() { return _top; }
	int getXAt(int, int);
	int getYAt(int, int);
	int getcheckBoard(int, int);
	void setData(int, int, int);
public:
	void resetData();
	void drawBoard();
	int checkBoard(int, int, bool);
public:
	int testBoard();
	int testBoardtoPlay(int, int);
};
