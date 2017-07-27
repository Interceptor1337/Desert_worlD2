// Desert_World2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GameClasses.h"
#include <Windows.h>
#include <stdio.h> 
#include <list>
#include <iterator>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_EXIT 27
#define KEY_Y 121
#define KEY_N 110



int main()
{
	DObject object(7, 7, '?', 1, 0);
	Unit hm(8, 8, '?', 1, 0);
	player me(5, 5, '@', 0, 0);
	bot kek(6, 6, '&', 2, 0);
	cout << me.getName() << endl << kek.getName() << endl << hm.getName() << endl << object.getName();

    return 0;
}

