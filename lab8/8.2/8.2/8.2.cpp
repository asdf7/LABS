#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "введите размер отрезка a:";
	cin >> a;
	cout << "введите размер отрезка b(a>b):";
	cin >> b;
	if (a > b)
	{
		c = a / b;
		cout << "кол-во отрезков b, размещенных на отрезке a:" << c;
	}
	else
		cout << "отрезок a должен быть длинне отрезка b";
	return 0;
}