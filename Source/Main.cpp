#include <iostream>
#include <windows.h>
#include <Mode_Index.h>
#include <Screen_Main.h>
#include <Screen_Mode1.h>
#include <Screen_Mode2.h>
#include <Screen_Mode3.h>
#include <Screen_Mode4.h>

using namespace std;

enum {
	Screen_Main = 0,   //Main Screen
	Screen_Mode1 = 1,  //Eng Mode
	Screen_Mode2 = 2,  //Kor Mode
	Screen_Mode3 = 3,  //Random Mode
	Screen_Mode4 = 4,  //Result
	Screen_Mode5 = 5   //Close
};


int SCREEN_MODE = Screen_Main;


void Screen_Main();
void Screen_Mode1();
void Screen_Mode2();
void Screen_Mode3();
void Screen_Mode4();




int main()
{
	while (SCREEN_MODE != Screen_Mode5)
	{
		switch (SCREEN_MODE)
		{
			case Screen_Main:
				Screen_Main();
				break;

			case Screen_Mode1:
				Screen_Mode1();
				break;

			case Screen_Mode2:
				Screen_Mode2();
				break;

			case Screen_Mode3:
				Screen_Mode3();
				break;

			case Screen_Mode4:
				Screen_Mode4();
				break;
		}
	}
	return 0;
}