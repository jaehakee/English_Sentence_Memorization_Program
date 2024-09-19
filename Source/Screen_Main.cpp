#include <iostream>
#include <Screen_Main.h>
#include <Mode_Index.h>
#include <Windows.h>
#include <string>

using namespace std;

void MainScreen_UI()
{
	string mode;

	while (true)
	{
		PrintScreen_Main();
		getline(cin, mode);

		if (mode.length() == 1 && mode[0] == '1')
		{
			SCREEN_MODE = 1;
			break;
		}
		else if (mode.length() == 1 && mode[0] == '2')
		{
			SCREEN_MODE = 2;
			break;
		}
		else if (mode.length() == 1 && mode[0] == '3')
		{
			SCREEN_MODE = 3;
			break;
		}
		else if (mode.length() == 1 && mode[0] == '9')
		{
			SCREEN_MODE = 5;
			cout << "\n";
			cout << "프로그램을 종료합니다....\n";
			break;
		}
		else
		{
			cout << "\n";
			cout << "!!  잘못된 입력입니다. 다시 입력해주세요.  !!";
			Sleep(800);
			system("cls");
		}
	}

}


void PrintScreen_Main()
{
	cout << "******************************************************************************************" << endl;
	cout << "                       English Sentence Memorization Program                              " << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n";
	cout << " 이 프로그램은 영어 문장 암기 프로그램입니다. 다음 중 원하는 학습 방법을 골라주세요." << endl;
	cout << "\n";
	cout << "1. 영어 뜻 맞히기 : 영어 문장을 보여주면 그에 맞는 해석을 적으면 됩니다." << endl;
	cout << "2. 뜻 보고 영어 문장 적기 : 한글 문장을 보여주면 그에 맞는 번역을 영어로 적으면 됩니다." << endl;
	cout << "3. 랜덤 모드 : 무작위로 영어 문장이 나오면 한글 뜻을 적고 한글 문장이 나오면 영어로 답을 적으면 됩니다. " << endl;
	cout << "\n";
	cout << "프로그램을 종료하려면 숫자 9를 입력해 주세요." << endl;
	cout << "원하는 학습 방법 번호를 입력해주세요 (숫자만 입력)  : ";
}