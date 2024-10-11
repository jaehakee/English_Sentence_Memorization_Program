#include <iostream>
#include <fstream>
#include <windows.h>
#include <Mode_Index.h>
#include <Screen_Main.h>
#include <Screen_Mode1.h>
#include <Screen_Mode2.h>
#include <Screen_Mode3.h>
#include <Main_data.h>
#include <locale>
#include <codecvt>
#include <algorithm>
#include <string>

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
int Eng_data_size = 0;
int Kor_data_size = 0;
int data_size_check = 0;
vector<string> Eng_data;
vector<string> Kor_data;
int data_num = 0;


int main()
{
	/* data load */
	cout << "\n";
	cout << "**************************************" << endl;
	cout << "       데이터를 불러옵니다....." << endl;
	cout << "**************************************" << endl;
	Sleep(500);
	Load_Eng_data("C://Users//JJH//Desktop//JaeHak//2024//Eng_study//ESMP//Data//Eng_data.dat");
	Sleep(500);
	Load_Kor_data("C://Users//JJH//Desktop//JaeHak//2024//Eng_study//ESMP//Data//Kor_data.dat");
	Sleep(1000);

	Eng_data_size = Eng_data.size();
	Kor_data_size = Kor_data.size();

	if (Eng_data_size == Kor_data_size)
	{
		data_size_check = 1;
	}

	/* screen change */
	while (SCREEN_MODE != Screen_Mode5)
	{
		if (!data_size_check)
		{
			cout << "\n";
			cout << "데이터 수가 일치하지 않습니다. 데이터 파일을 확인해 주세요.. \n";
			cout << "Eng 데이터 수 : " << Eng_data_size << endl;
			cout << "Kor 데이터 수 : " << Kor_data_size << endl;
			cout << "\n";
			cout << "3초 뒤 프로그램을 종료합니다...\n";
			Sleep(3000);
			break;
		}

		data_num = Eng_data_size; // 데이터 수 저장

		switch (SCREEN_MODE)
		{
			case Screen_Main:
				system("cls");
				MainScreen_UI();
				Sleep(1000);
				break;

			case Screen_Mode1:
				system("cls");
				Screen_Mode1_UI(Eng_data, Kor_data);
				Sleep(500);
				break;

			case Screen_Mode2:
				system("cls");
				Screen_Mode2_UI(Eng_data, Kor_data);
				Sleep(500);
				break;

			case Screen_Mode3:
				system("cls");
				Screen_Mode3_UI(Eng_data, Kor_data);
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
	while (getline(file, line))
	{
		Eng_data.push_back(line);
	}
}


void Load_Kor_data(const string& filename)
{
	cout << "Korean data 를 불러왔습니다..." << endl;
	ifstream file(filename);
	string line;
	while (getline(file, line))
	{
		Kor_data.push_back(line);
	}
}