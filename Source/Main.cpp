#include <iostream>
#include <fstream>
#include <windows.h>
#include <Mode_Index.h>
#include <Screen_Main.h>
#include <Screen_Mode1.h>
#include <Screen_Mode2.h>
#include <Screen_Mode3.h>
#include <Main_data.h>

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
	/* data load */
	Load_Eng_data("C://Users//JJH//Desktop//JaeHak//2024//Eng_study//ESMP//Data//Eng_data.dat");
	Load_Kor_data("C://Users//JJH//Desktop//JaeHak//2024//Eng_study//ESMP//Data//Kor_data.dat");
	Sleep(5000);


	/* screen change */
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
				Sleep(500);
				break;

			case Screen_Mode2:
				system("cls");
				Screen_Mode2_UI();
				Sleep(500);
				break;

			case Screen_Mode3:
				system("cls");
				Screen_Mode3_UI();
				Sleep(500);
				break;

			case Screen_Mode4:
				system("cls");
				//Screen_Mode4_UI();
				Sleep(500);
				break;
		}
	}
	return 0;
}


void Load_Eng_data(const string& filename)
{
	cout << "English data 를 불러왔습니다.." << endl;
	ifstream file(filename);
	string line;
	getline(file, line);
	cout << "영어 첫 문장은 : " << line << endl;
	
}

void Load_Kor_data(const string& filename)
{
	cout << "Korean data 를 불러왔습니다..." << endl;
	ifstream file(filename);
	string line;
	getline(file, line);
	cout << "한글 첫 문장은 : " << line << endl;
}