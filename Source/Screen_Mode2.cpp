#include <iostream>
#include <Screen_Mode2.h>
#include <Mode_Index.h>
#include <Windows.h>
#include <string>

using namespace std;

string answer_mode2;
string question_mode2 = "��";

void Screen_Mode2_UI(vector<string> data1, vector<string> data2)
{
	while (true)
	{
		PrintScreen_Mode2();
		getline(cin, answer_mode2);
		if (answer_mode2 == question_mode2)
		{
			cout << "\n";
			cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
			Sleep(800);
			system("cls");
		}
		else if (answer_mode2[0] == '1' && answer_mode2.length() == 1)
		{
			cout << "\n";
			cout << "���� ȭ������ ���ư��ϴ�....\n";
			SCREEN_MODE = 0;
			Sleep(300);
			break;
		}
		else if (answer_mode2[0] == '9' && answer_mode2.length() == 1)
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
			getline(cin, answer_mode2);
			if (answer_mode2 == question_mode2)
			{
				cout << "\n";
				cout << "�� �����Դϴ�! ���������� �Ѿ�ϴ�. ��" << endl;
				Sleep(800);
				system("cls");
			}
			else if (answer_mode2[0] == '1' && answer_mode2.length() == 1)
			{
				cout << "\n";
				cout << "���� ȭ������ ���ư��ϴ�....\n";
				SCREEN_MODE = 0;
				Sleep(300);
				break;
			}
			else if (answer_mode2[0] == '9' && answer_mode2.length() == 1)
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
				cout << "!! �����Դϴ�. ���������� �Ѿ�ϴ�. !! " << endl;
				cout << "\n";
				Sleep(800);
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