#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, ac, bc, s;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	cout << "введите c:";
	cin >> c;
	ac = c - a;
	bc = c - b;
	s = ac + bc;
	cout << "длина отрезка ac:" << ac << "\nдлина отрезка bc:" << bc << "\nсумма их длинн:" << s;
	return 0;
}