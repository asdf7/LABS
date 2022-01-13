#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "введите строну треугольника a:";
	cin >> a;
	cout << "введите строну треугольника b:";
	cin >> b;
	cout << "введите строну треугольника c:";
	cin >> c;
	if (c * c == a * a + b * b || a * a == c * c - b * b || b * b == c * c - a * a)
	{
		cout << "треугольник является прямоугольным";
	}
	else
	{
		cout << "треугольник не является прямоугольным";
	}
	return 0;
}