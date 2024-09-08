#include <iostream>
#include <windows.h>
#include <Mode_Index.h>
#include <Screen_Main.h>
#include <Screen_Mode1.h>
#include <Screen_Mode2.h>
#include <Screen_Mode3.h>


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


int main()
{
	while (SCREEN_MODE != Screen_Mode5)
	{
		switch (SCREEN_MODE)
		{
			case Screen_Main:
				system("cls");
				MainScreen_UI();
				Sleep(1000);
				break;

			case Screen_Mode1:
				system("cls");
				Screen_Mode1_UI();
				Sleep(3000);
				break;

			case Screen_Mode2:
				system("cls");
				Screen_Mode2_UI();
				Sleep(3000);
				break;

			case Screen_Mode3:
				system("cls");
				Screen_Mode3_UI();
				Sleep(3000);
				break;

			case Screen_Mode4:
				system("cls");
				//Screen_Mode4_UI();
				Sleep(3000);
				break;
		}
	}
	return 0;
}