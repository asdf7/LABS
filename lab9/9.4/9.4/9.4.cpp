#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, p, o;
	cout << "введите 1ю сторону прямоугольника:";
	cin >> a;
	cout << "введите 2ю сторону прямоугольника:";
	cin >> b;
	cout << "введите сторону квадрата:";
	cin >> c;
	p = (a / c) * (b / c);
	o = a * b - (c * c) * p;
	cout << "кол-во квадратов, размещенных на прямоугольнике:" << p << "\nплощадь незанятой части:" << o;
	return 0;
}