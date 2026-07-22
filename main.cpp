#include<iostream>
#include<Windows.h>
#include<list>

using namespace std;

int main() {

	list<const char*> yamanote;

	yamanote.push_back("Tokyo");
	yamanote.push_back("Kanda");
	yamanote.push_back("Akihabara");
	yamanote.push_back("Okachimachi");
	yamanote.push_back("Ueno");
	yamanote.push_back("Uguisudani");
	yamanote.push_back("Nippori");
	yamanote.push_back("Tabata");
	yamanote.push_back("Komagome");
	yamanote.push_back("Sugamo");
	yamanote.push_back("Otsuka");
	yamanote.push_back("Ikebukuro");
	yamanote.push_back("Mejiro");
	yamanote.push_back("Takadanobaba");
	yamanote.push_back("Shin-Okubo");
	yamanote.push_back("Shinjuku");
	yamanote.push_back("Yoyogi");
	yamanote.push_back("Harajuku");
	yamanote.push_back("Shibuya");
	yamanote.push_back("Ebisu");
	yamanote.push_back("Meguro");
	yamanote.push_back("Gotanda");
	yamanote.push_back("Osaki");
	yamanote.push_back("Shinagawa");
	yamanote.push_back("Tamachi");
	yamanote.push_back("Hamamatsucho");
	yamanote.push_back("Shimbashi");
	yamanote.push_back("Yurakucho");

	cout << "\n=====1970=====\n";

	for (const char* station : yamanote)
	{
		cout << station << endl;
	}

	auto it = yamanote.begin();

	while (it != yamanote.end()) {
		if (*it == "Nippori") {
			break;
		}
		++it;
	}

	yamanote.insert(it, "Nishi-Nippori");

	cout<<"\n=====2019=====\n";

	for (const char* station : yamanote)
	{
		cout << station << endl;
	}

	it = yamanote.begin();

	while (it != yamanote.end())
	{
		if (*it == "Tamachi")
		{
			break;
		}

		++it;
	}

	yamanote.insert(it, "Takanawa Gateway");

	cout << "\n=====2022=====\n";
	for (const char* station : yamanote)
	{
		cout << station << endl;
	}

	return 0;
}