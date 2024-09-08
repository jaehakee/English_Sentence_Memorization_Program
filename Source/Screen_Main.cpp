#include <iostream>
#include <Screen_Main.h>
#include <Mode_Index.h>
#include <Windows.h>
#include <string>

using namespace std;

void MainScreen_UI()
{
	string mode;
	int errorchk = ERROR_INPUT;

	while (errorchk == 1)
	{
		PrintScreen_Main();
		getline(cin, mode);

		if (mode.length() == 1 && mode[0] == '1')
		{
			SCREEN_MODE = 1;
			errorchk = ERROR_NONE;
		}
		else if (mode.length() == 1 && mode[0] == '2')
		{
			SCREEN_MODE = 2;
			errorchk = ERROR_NONE;
		}
		else if (mode.length() == 1 && mode[0] == '3')
		{
			SCREEN_MODE = 3;
			errorchk = ERROR_NONE;
		}
		else
		{
			errorchk = ERROR_INPUT;
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
	cout << "���ϴ� �н� ��� ��ȣ�� �Է����ּ��� (���ڸ� �Է�)  : ";
}