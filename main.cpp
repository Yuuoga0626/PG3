#include<iostream>
#include<Windows.h>

template<typename T>
T Min(T a, T b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}
//char型
template<>
char Min(char a, char b) {
	printf("数字以外を代入できません\n");
	return 0;
}

int main() {

	SetConsoleOutputCP(65001);
	
	int i1 = 10;
	int i2 = 5;

	float f1 = 3.5f;
	float f2 = 7.2f;

	double d1 = 8.9;
	double d2 = 7.5;

	char c1 = 'A';
	char c2 = 'B';

	printf("%d\n", Min(i1, i2));
	printf("%.1f\n", Min(f1, f2));
	printf("%.1lf\n", Min(d1, d2));

	Min(c1, c2);

	return 0;
}