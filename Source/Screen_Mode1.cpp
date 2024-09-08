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
	cout << " 이 모드는 영어 문장을 보고 뜻을 적는 형태입니다. 다음 문장을 보고 뜻을 적어주세요. " << endl;
	cout << "\n";
	cout << " 메인화면으로 돌아가려면 숫자 1을 입력, 프로그램을 종료하려면 9번을 입력하세요." << endl;
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "문제 : (아직 구현 중)";
	cout << "\n";
	cout << "문제에 대한 뜻을 적어주세요 : ";
}