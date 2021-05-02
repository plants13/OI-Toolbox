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
extern void GoTuFunc(const std::string func);
extern void DataCreate();
inline void ClearScreen()
{
	for (size_t i = 0; i < 50; i++)
	{
		std::cout << "\n";
	}
}
inline void PrintInfo(const std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	std::cout << "[Info]" << str << '\n';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
inline void PrintERR(const std::string str)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
	std::cerr << "[ERROR]" << str << '\n';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
#endif
