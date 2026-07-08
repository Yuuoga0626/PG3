#include <iostream>
#include <Windows.h>
#include <ctime>

void Correct()
{
    std::cout << "正解です！\n";
}

void Incorrect()
{
    std::cout << "不正解です...\n";
}

void Judge(bool result, void(*callback)())
{
    Sleep(3000);

    if (result)
    {
        callback();
    }
}

int main()
{
    srand((unsigned int)time(nullptr));

    int input;

    std::cout << "半(1) 丁(2) を入力してください：";
    std::cin >> input;

    int dice = rand() % 6 + 1;

    std::cout << "サイコロ：" << dice << std::endl;

    bool answer;

    if (dice % 2 == 1)
    {
        answer = (input == 1);
    }
    else
    {
        answer = (input == 2);
    }

    if (answer)
    {
        Judge(true, Correct);
    }
    else
    {
        Judge(true, Incorrect);
    }

    return 0;
}