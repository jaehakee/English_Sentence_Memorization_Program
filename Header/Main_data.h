#pragma once
#ifndef MAIN_DATA
#define MAIN_DATA
#include <vector>
#include <string>

using namespace std;

//extern vector<string> Eng_data;  // �ν��� ���ؼ� �׳� ���� �ҽ����Ͽ� �����ϰ� �Լ� ���ڷ� �Ѱ��ֱ�� ��.
//extern vector<string> Kor_data;

void Load_Eng_data(const string &filename);
void Load_Kor_data(const string& filename);


extern int data_num;
#endif // !MAIN_DATA

