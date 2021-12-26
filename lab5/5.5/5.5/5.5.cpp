#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, x3, y1, y2, y3, a, b, c, p, s;
	cout << "введите координаты 1й вершины треугольника(x1,y1):";
	cin >> x1 >> y1;
	cout << "введите координаты 2й вершины треугольника(x2,y2):";
	cin >> x2 >> y2;
	cout << "введите координаты 3й вершины треугольника(x3,y3):";
	cin >> x3 >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = a + b + c;
	s = sqrt((p / 2) * ((p / 2) - a) * ((p / 2) - b) * ((p / 2) - c));
	cout << "периметр треугольника:" << p << "\nплощадь треугольника:" << s;
	return 0;
}