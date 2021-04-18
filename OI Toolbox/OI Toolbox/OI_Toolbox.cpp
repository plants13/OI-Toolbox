// OI Toolbox.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include"OI_Toolbox.h"
void Lobby();
void GoTuFunc(const std::string func);
void DataCreate();
int main()
{
    std::cout << "Copyleft by The GNU General Public License v3.0.\n\n\n";
    std::cout << "这是一份在制品。\n该软件不可避免的存在漏洞，如果你发现了漏洞，欢迎来我们的Github仓库\nhttps://github.com/plants13/OI-Toolbox\n提交Issues，如果你能帮助解决，你也可以提交Pull Request。\n";
    std::cout << "\n\n\n\n\n";
    while (1)
    {
        Lobby(); 
    }
    system("pause");
}
void Lobby()
{
    std::cout << "输入一个字符串以使用该串对应的功能\n";
    std::cout << "DataCreate:数据生成器\nEXIT:退出\n";
    std::string func;
    std::cin >> func;
    GoTuFunc(func);
}
void GoTuFunc(const std::string func)
{
    if (func=="EXIT")
    {
        exit(0);
    }
    if (func == "DataCreate")
    {
        DataCreate();
    }
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
