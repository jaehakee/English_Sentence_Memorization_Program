#include <iostream>
#include <Screen_Mode1.h>
#include <Mode_Index.h>

using namespace std;

void Screen_Mode1_UI()
{
	PrintScreen_Mode1();
	SCREEN_MODE = 2;
}



void PrintScreen_Mode1()
{
	cout << "******************************************************************************************" << endl;
	cout << "                       English Sentence Memorization Program                              " << endl;
	cout << "******************************************************************************************" << endl;
	cout << "\n";
	cout << " �� ���� ���� ������ ���� ���� ���� �����Դϴ�. ���� ������ ���� ���� �����ּ���. " << endl;
	cout << "\n";
	cout << " ����ȭ������ ���ư����� ���� 1�� �Է�, ���α׷��� �����Ϸ��� 9���� �Է��ϼ���." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "���� : (���� ���� ��)";
	cout << "\n";
	cout << "������ ���� ���� �����ּ��� : ";
}