#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float d, l;
	const float pi = 3.14;
	cout << "введите диаметр:";
	cin >> d;
	l = pi * d;
	cout << "длина:" << l;
	return 0;
}