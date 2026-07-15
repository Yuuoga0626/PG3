#include<iostream>
#include<Windows.h>
#include"Enemy.h"


int main() {

	Enemy enemy;

	for (int i = 0; i < 9; i++)
	{
		enemy.Update();
	}

	return 0;
}