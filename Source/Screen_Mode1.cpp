#include <iostream>
#include <Screen_Mode1.h>
#include <Mode_Index.h>
#include <Main_data.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string answer_mode1;
string question_mode1;
string reply_mode1;
int data_index1;

void Screen_Mode1_UI(vector<string> data1, vector<string> data2)
{
	srand(static_cast<unsigned int> (time(0)));

	while (true)
	{
		data_index1 = rand() % data_num;
		question_mode1 = data1[data_index1];
		answer_mode1 = data2[data_index1];

		PrintScreen_Mode1();
		getline(cin, reply_mode1);

		reply_mode1.erase(0, reply_mode1.find_first_not_of(" \n\r\t"));
		reply_mode1.erase(reply_mode1.find_last_not_of(" \n\r\t") + 1);
		
		if (reply_mode1 == answer_mode1)
		{
			cout << "\n";
			cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
			Sleep(800);
			system("cls");
		}
		else if (reply_mode1[0] == '1' && reply_mode1.length() == 1)
		{
			cout << "\n";
			cout << "메인 화면으로 돌아갑니다....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (reply_mode1[0] == '9' && reply_mode1.length() == 1)
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
			getline(cin, reply_mode1);
			if (reply_mode1 == answer_mode1)
			{
				cout << "\n";
				cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
				Sleep(800);
				system("cls");
			}
			else if (reply_mode1[0] == '1' && reply_mode1.length() == 1)
			{
				cout << "\n";
				cout << "메인 화면으로 돌아갑니다....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (reply_mode1[0] == '9' && reply_mode1.length() == 1)
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
				cout << "!! 오답입니다. 정답은 ... \n" << answer_mode1 << "\n" << "2초 후 다음문제로 넘어갑니다. !!" << endl;
				cout << "\n";
				Sleep(2300);
				system("cls");
			}
		}


	}
}


void PrintScreen_Mode1()
{
	cout << "******************************************************************************************" << endl;
	cout << "                       English Sentence Memorization Program                              " << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n";
	cout << " 이 모드는 영어 문장을 보고 뜻을 적는 형태입니다. 다음 문장을 보고 뜻을 적어주세요. " << endl;
	cout << "\n";
	cout << " 메인화면으로 돌아가려면 숫자 1을 입력, 프로그램을 종료하려면 9번을 입력하세요." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "문제 : " << question_mode1 << endl;
	cout << "문제에 대한 답을 적어주세요 : ";
}