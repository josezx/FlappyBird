#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
using namespace std;

void goToXY(int x, int y) {
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

const int hurdleCount = 4;



