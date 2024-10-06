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
			mode_decision = ENG_MODE; // ������ ������. ����� �� ������.
		}
		else
		{
			mode_decision = KOR_MODE; // ������ �ѱ���. �溸�� ���� ������.
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
			cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
			Sleep(800);
			system("cls");
		}
		else if (reply_mode3[0] == '1' && reply_mode3.length() == 1)
		{
			cout << "\n";
			cout << "���� ȭ������ ���ư��ϴ�....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (reply_mode3[0] == '9' && reply_mode3.length() == 1)
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
			getline(cin, reply_mode3);
			if (reply_mode3 == answer_mode3)
			{
				cout << "\n";
				cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
				Sleep(800);
				system("cls");
			}
			else if (reply_mode3[0] == '1' && reply_mode3.length() == 1)
			{
				cout << "\n";
				cout << "���� ȭ������ ���ư��ϴ�....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (reply_mode3[0] == '9' && reply_mode3.length() == 1)
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
				cout << "!! �����Դϴ�. ������ ... \n" << answer_mode3 << "\n" << "2�� �� ���������� �Ѿ�ϴ�. !!" << endl;
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
	cout << " �� ���� ���� ����Դϴ�. ������ ���� ���� ���ų� ���� ������ �����ּ���. " << endl;
	cout << "\n";
	cout << " ����ȭ������ ���ư����� ���� 1�� �Է�, ���α׷��� �����Ϸ��� 9���� �Է��ϼ���." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "���� : " << question_mode3 << endl;
	cout << "������ ���� ���� �����ּ��� : ";
}