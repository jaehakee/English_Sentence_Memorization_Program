#include <iostream>
#include <Screen_Mode2.h>
#include <Mode_Index.h>
#include <Main_data.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string answer_mode2;
string question_mode2;
string reply_mode2;
int data_index2;

void Screen_Mode2_UI(vector<string> data1, vector<string> data2)
{
	int randcnt = 0;
	int* chkdata = new int[data_num];

	chkDataClear(chkdata);

	srand(static_cast<unsigned int> (time(0)));

	while (true)
	{
		data_index2 = rand() % data_num;

		if (chkdata[data_index2] == 1) // 별도 array(chkdata)에 풀었던 문제인지 체크해서 풀었던 것은 자동으로 패스하게 함.
		{
			if (randcnt == data_num)
			{
				chkDataClear(chkdata);
				randcnt = 0;
				data_index2 = rand() % data_num;
				question_mode2 = data1[data_index2];
				answer_mode2 = data2[data_index2];
				chkdata[data_index2] = 1;
				randcnt++;
			}
			else
			{
				while (chkdata[data_index2] == 1)
				{
					data_index2 = rand() % data_num;
				}
				question_mode2 = data1[data_index2];
				answer_mode2 = data2[data_index2];
				chkdata[data_index2] = 1;
				randcnt++;
			}
		}
		else
		{
			question_mode2 = data1[data_index2];
			answer_mode2 = data2[data_index2];
			chkdata[data_index2] = 1;	// 풀었던 애는 1로 바꿔놓음.
			randcnt++;
		}

		PrintScreen_Mode2();
		getline(cin, reply_mode2);

		reply_mode2.erase(0, reply_mode2.find_first_not_of(" \n\r\t"));
		reply_mode2.erase(reply_mode2.find_last_not_of(" \n\r\t") + 1);

		if (reply_mode2 == answer_mode2)
		{
			cout << "\n";
			cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
			Sleep(800);
			system("cls");
		}
		else if (reply_mode2[0] == '1' && reply_mode2.length() == 1)
		{
			cout << "\n";
			cout << "메인 화면으로 돌아갑니다....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (reply_mode2[0] == '9' && reply_mode2.length() == 1)
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
			getline(cin, reply_mode2);
			if (reply_mode2 == answer_mode2)
			{
				cout << "\n";
				cout << "★ 정답입니다! 다음문제로 넘어갑니다. ★" << endl;
				Sleep(800);
				system("cls");
			}
			else if (reply_mode2[0] == '1' && reply_mode2.length() == 1)
			{
				cout << "\n";
				cout << "메인 화면으로 돌아갑니다....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (reply_mode2[0] == '9' && reply_mode2.length() == 1)
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
				cout << "!! 오답입니다. 정답은 ... \n" << answer_mode2 << "\n" << "2초 후 다음문제로 넘어갑니다. !!" << endl;
				cout << "\n";
				Sleep(2300);
				system("cls");
			}
		}


	}
}


void PrintScreen_Mode2()
{
	cout << "******************************************************************************************" << endl;
	cout << "                       English Sentence Memorization Program                              " << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n";
	cout << " 이 모드는 뜻을 보고 영어 문장을 적는 형태입니다. 다음 뜻에 맞는 영어 문장을 적어주세요. " << endl;
	cout << "\n";
	cout << " 메인화면으로 돌아가려면 숫자 1을 입력, 프로그램을 종료하려면 9번을 입력하세요." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "문제 : " << question_mode2 << endl;
	cout << "문제에 대한 답을 적어주세요 : ";
}