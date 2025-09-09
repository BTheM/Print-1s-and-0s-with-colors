#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <map>

using namespace std;


enum enColors{Red = 1, Green = 2, Yellow = 3, Blue = 4, Magenta = 5, Cyan = 6, RedBright = 7, GreenBright = 8, YellowBright = 9, BlueBright = 10, MagentaBright = 11, CyanBright = 12};


map<enColors, string> ColorsToString =
{
    {Red, "\033[31m"},
    {Green, "\033[32m"},
    {Yellow, "\033[33m"},
    {Blue, "\033[34m"},
    {Magenta, "\033[35m"},
    {Cyan, "\033[36m"},
    {RedBright, "\033[91m"},
    {GreenBright, "\033[92m"},
    {YellowBright, "\033[93m"},
    {BlueBright, "\033[94m"},
    {MagentaBright, "\033[95m"},
    {CyanBright, "\033[96m"}
};


int RandomNumber(int from, int to)
{
    int RandNum = rand() % (to - from + 1) + from;
    return RandNum;
}


const string GetRandomColor(int Num)
{
    return ColorsToString[(enColors)Num];
}


void PrintColorToNumber(short Num1, short Num2)
{
    cout << GetRandomColor(RandomNumber(1, 12)) << Num1 << "\033[0m" << flush;
    Sleep(10);
    cout << GetRandomColor(RandomNumber(1, 12)) << Num2 << "\033[0m" << flush;
    Sleep(10);
}

void PrintOneZero()
{
    while (true)
    {
        PrintColorToNumber(RandomNumber(0, 1), RandomNumber(0, 1));
    }
}

int main()
{
    srand((unsigned)time(NULL));

    PrintOneZero();

    return 0;
}