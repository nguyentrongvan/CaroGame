#pragma once

#include<iostream>
#include<Windows.h>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<sstream>
#include<MMsystem.h>
#include<time.h>
#include<fstream>
#define _CRT_SECURE_NO_WARNNINGS_

using namespace std;

class Common
{
public:
	static void fixConsoleWindow();
	static void gotoXY(int, int);
};
