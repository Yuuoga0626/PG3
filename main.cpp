#include <iostream>
#include <Windows.h>
#include <ctime>
#include <functional>


void SetTimeout(std::function<void()> func)
{
	Sleep(3000);
	func();
}

int main() {

    // 乱数の初期化
    srand((unsigned)time(nullptr));

    // サイコロを振る
    int dice = rand() % 6 + 1;

    // ユーザー入力
    int input;

    std::cout << "半なら1、丁なら2を入力してください：";
    std::cin >> input;

    // 判定するラムダ式
    std::function<void()> judge = [input, dice]()
        {
            std::cout << "\nサイコロの目は " << dice << " でした。\n";

            if ((dice % 2 == 1 && input == 1) ||
                (dice % 2 == 0 && input == 2))
            {
                std::cout << "当たり！\n";
            }
            else
            {
                std::cout << "はずれ！\n";
            }
        };

    std::cout << "\n抽選中...\n";

    SetTimeout(judge);

	

	return 0;
}