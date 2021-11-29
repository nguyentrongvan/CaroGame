#pragma once

#include"Common.h"

class Point
{
private:
	int _x, _y, _check;
public:
	Point();
	Point(int, int);
	~Point() {};
public:
	int X() { return _x; }
	int Y() { return _y; }
	int Check() { return _check; }
	void setX(const int value) { _x = value; }
	void setY(const int value) { _y = value; }
	bool setCheck(int);
};
