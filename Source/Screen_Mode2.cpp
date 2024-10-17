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

		if (chkdata[data_index2] == 1) // ���� array(chkdata)�� Ǯ���� �������� üũ�ؼ� Ǯ���� ���� �ڵ����� �н��ϰ� ��.
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
			chkdata[data_index2] = 1;	// Ǯ���� �ִ� 1�� �ٲ����.
			randcnt++;
		}

		PrintScreen_Mode2();
		getline(cin, reply_mode2);

		reply_mode2.erase(0, reply_mode2.find_first_not_of(" \n\r\t"));
		reply_mode2.erase(reply_mode2.find_last_not_of(" \n\r\t") + 1);

		if (reply_mode2 == answer_mode2)
		{
			cout << "\n";
			cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
			Sleep(800);
			system("cls");
		}
		else if (reply_mode2[0] == '1' && reply_mode2.length() == 1)
		{
			cout << "\n";
			cout << "���� ȭ������ ���ư��ϴ�....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (reply_mode2[0] == '9' && reply_mode2.length() == 1)
		{
			cout << "\n";
			cout << "���α׷��� �����մϴ�....\n";
			SCREEN_MODE = 5;
			Sleep(800);
			break;
		}
		else
		{
			cout << "\n";
			cout << "!! �����Դϴ�. �ٽ� �Է��� �ּ��� !! " << endl;
			cout << "\n";
			cout << "�� : ";
			getline(cin, reply_mode2);
			if (reply_mode2 == answer_mode2)
			{
				cout << "\n";
				cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
				Sleep(800);
				system("cls");
			}
			else if (reply_mode2[0] == '1' && reply_mode2.length() == 1)
			{
				cout << "\n";
				cout << "���� ȭ������ ���ư��ϴ�....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (reply_mode2[0] == '9' && reply_mode2.length() == 1)
			{
				cout << "\n";
				cout << "���α׷��� �����մϴ�....\n";
				SCREEN_MODE = 5;
				Sleep(800);
				break;
			}
			else
			{
				cout << "\n";
				cout << "!! �����Դϴ�. ������ ... \n" << answer_mode2 << "\n" << "2�� �� ���������� �Ѿ�ϴ�. !!" << endl;
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
	cout << " �� ���� ���� ���� ���� ������ ���� �����Դϴ�. ���� �濡 �´� ���� ������ �����ּ���. " << endl;
	cout << "\n";
	cout << " ����ȭ������ ���ư����� ���� 1�� �Է�, ���α׷��� �����Ϸ��� 9���� �Է��ϼ���." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "���� : " << question_mode2 << endl;
	cout << "������ ���� ���� �����ּ��� : ";
}