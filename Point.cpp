#include"Point.h"

//---------------------------------------------------------------------
//Class Point
Point::Point()
{
	_x = 0;
	_y = 0;
	_check = 0;
}

Point::Point(int pX, int pY)
{
	_x = pX;
	_y = pY;
	_check = 0;
}

bool Point::setCheck(int pCheck)
{
	if (pCheck == -1 || pCheck == 0 || pCheck == 1)
	{
		_check = pCheck;
		return true;
	}
	return false;
}