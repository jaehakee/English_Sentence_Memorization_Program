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
			cout << "���α׷��� �����մϴ�....\n";
			break;
		}
		else
		{
			cout << "\n";
			cout << "!!  �߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.  !!";
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
	cout << " �� ���α׷��� ���� ���� �ϱ� ���α׷��Դϴ�. ���� �� ���ϴ� �н� ����� ����ּ���." << endl;
	cout << "\n";
	cout << "1. ���� �� ������ : ���� ������ �����ָ� �׿� �´� �ؼ��� ������ �˴ϴ�." << endl;
	cout << "2. �� ���� ���� ���� ���� : �ѱ� ������ �����ָ� �׿� �´� ������ ����� ������ �˴ϴ�." << endl;
	cout << "3. ���� ��� : �������� ���� ������ ������ �ѱ� ���� ���� �ѱ� ������ ������ ����� ���� ������ �˴ϴ�. " << endl;
	cout << "\n";
	cout << "���α׷��� �����Ϸ��� ���� 9�� �Է��� �ּ���." << endl;
	cout << "���ϴ� �н� ��� ��ȣ�� �Է����ּ��� (���ڸ� �Է�)  : ";
}