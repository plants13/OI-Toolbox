#ifndef OI_TOOLBOX_H
#define OI_TOOLBOX_H
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <stack>
#include <vector>
#include <cctype>
#include <ctime>
#include <Windows.h>
void GoTuFunc(const std::string func);
void DataCreate();
void ClearScreen()
{
	for (size_t i = 0; i < 50; i++)
	{
		std::cout << "\n";
	}
}
void PrintInfo(const std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	std::cout << "[Info]" << str << '\n';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
void PrintERR(const std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
	std::cout << "[ERROR]" << str << '\n';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
#endif
