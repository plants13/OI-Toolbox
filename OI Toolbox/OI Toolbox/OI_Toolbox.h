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
#endif
