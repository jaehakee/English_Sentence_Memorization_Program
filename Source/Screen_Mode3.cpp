#include <iostream>
#include <Screen_Mode3.h>
#include <Mode_Index.h>
#include <Main_data.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string answer_mode3;
string question_mode3;
string reply_mode3;
int data_index3;
int mode_decision;

void Screen_Mode3_UI(vector<string> data1, vector<string> data2)
{
	int dec;
	srand(static_cast<unsigned int> (time(0)));

	while (true)
	{
		dec = rand() % 2;

		if (dec == 1)
		{
			mode_decision = ENG_MODE; // 문제가 영어임. 영어보고 뜻 맞히기.
		}
		else
		{
			mode_decision = KOR_MODE; // 문제가 한글임. 뜻보고 영어 맞히기.
		}


		data_index3 = rand() % data_num;

		if (mode_decision == ENG_MODE)
		{
			question_mode3 = data1[data_index3];
			answer_mode3 = data2[data_index3];
		}
		else
		{
			question_mode3 = data2[data_index3];
			answer_mode3 = data1[data_index3];
		}

		PrintScreen_Mode3();
		getline(cin, reply_mode3);

		reply_mode3.erase(0, reply_mode3.find_first_not_of(" \n\r\t"));
		reply_mode3.erase(reply_mode3.find_last_not_of(" \n\r\t") + 1);

		if (reply_mode3 == answer_mode3)
		{
			cout << "\n";
			cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
			Sleep(800);
			system("cls");
		}
		else if (reply_mode3[0] == '1' && reply_mode3.length() == 1)
		{
			cout << "\n";
			cout << "메인 화면으로 돌아갑니다....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (reply_mode3[0] == '9' && reply_mode3.length() == 1)
		{
			cout << "\n";
			cout << "프로그램을 종료합니다....\n";
			SCREEN_MODE = 5;
			Sleep(800);
			break;
		}
		else
		{
			cout << "\n";
			cout << "!! 오답입니다. 다시 입력해 주세요 !! " << endl;
			cout << "\n";
			cout << "답 : ";
			getline(cin, reply_mode3);
			if (reply_mode3 == answer_mode3)
			{
				cout << "\n";
				cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
				Sleep(800);
				system("cls");
			}
			else if (reply_mode3[0] == '1' && reply_mode3.length() == 1)
			{
				cout << "\n";
				cout << "메인 화면으로 돌아갑니다....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (reply_mode3[0] == '9' && reply_mode3.length() == 1)
			{
				cout << "\n";
				cout << "프로그램을 종료합니다....\n";
				SCREEN_MODE = 5;
				Sleep(800);
				break;
			}
			else
			{
				cout << "\n";
				cout << "!! 오답입니다. 정답은 ... \n" << answer_mode3 << "\n" << "2초 후 다음문제로 넘어갑니다. !!" << endl;
				cout << "\n";
				Sleep(2300);
				system("cls");
			}
		}


	}
}


void PrintScreen_Mode3()
{

	cout << "******************************************************************************************" << endl;
	cout << "                       English Sentence Memorization Program                              " << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n";
	cout << " 이 모드는 랜덤 모드입니다. 문제를 보고 뜻을 적거나 영어 문장을 적어주세요. " << endl;
	cout << "\n";
	cout << " 메인화면으로 돌아가려면 숫자 1을 입력, 프로그램을 종료하려면 9번을 입력하세요." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "문제 : " << question_mode3 << endl;
	cout << "문제에 대한 답을 적어주세요 : ";
}