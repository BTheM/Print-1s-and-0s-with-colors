#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <random>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int RandomNumber(int from, int to)
{
    int RandNum = rand() % (to - from + 1) + from;
    return RandNum;
}


string GetRandomColor(short Num)
{
    switch (Num)
    {
    case 1:
        return "\033[31m";
    case 2:
        return "\033[32m";
    case 3:
        return "\033[33m";
    case 4:
        return "\033[34m";
    case 5:
        return "\033[35m";
    case 6:
        return "\033[36m";
    case 7:
        return "\033[91m";
    case 8:
        return "\033[92m";
    case 9:
        return "\033[93m";
    case 10:
        return "\033[94m";
    case 11:
        return "\033[95m";
    case 12:
        return "\033[96m";
    default:
        return "\033[37m";
    }
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
    int i = 0;

    while (i == 0)
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