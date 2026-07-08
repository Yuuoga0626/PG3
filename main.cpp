#include<iostream>
#include<Windows.h>

int Saiki(int hour) {
	if (hour == 1) {
		return 100;
	}

	return Saiki(hour - 1) * 2 - 50;
}

int main() {

	//SetConsoleOutputCP(65001);
	
	int totalsaiki = 0;
	int hour;

	std::cout << "働く時間を入力してください : ";
	std::cin >> hour;
	
	std::cout << hour << "時間働いた場合" << std::endl;

	for (int i = 1; i <= hour; i++) {
		totalsaiki += Saiki(i);
	}

	int totaltingin = 1072 * hour;

	std::cout << "一般 : " << totaltingin << std::endl;
	std::cout << "再帰 : " << totalsaiki << std::endl;

	if (totalsaiki > totaltingin) {
		std::cout << "再帰的な賃金体系の方が高いです。" << std::endl;
	}
	else if (totalsaiki < totaltingin) {
		std::cout << "一般的な賃金体系の方が高いです。" << std::endl;
	}
	else {
		std::cout << "同じ金額です。" << std::endl;
	}

	return 0;
}