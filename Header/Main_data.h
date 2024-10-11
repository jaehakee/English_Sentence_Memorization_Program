#pragma once
#ifndef MAIN_DATA
#define MAIN_DATA
#include <vector>
#include <string>

using namespace std;

//extern vector<string> Eng_data;  // 인식을 못해서 그냥 메인 소스파일에 정의하고 함수 인자로 넘겨주기로 함.
//extern vector<string> Kor_data;

void Load_Eng_data(const string &filename);
void Load_Kor_data(const string& filename);


extern int data_num;
#endif // !MAIN_DATA

