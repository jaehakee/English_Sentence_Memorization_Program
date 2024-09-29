#pragma once
#ifndef MAIN_DATA
#define MAIN_DATA
#include <vector>
#include <string>

using namespace std;

extern vector<string> Eng_data;
extern vector<string> Kor_data;

void Load_Eng_data(const string &filename);
void Load_Kor_data(const string& filename);

#endif // !MAIN_DATA

