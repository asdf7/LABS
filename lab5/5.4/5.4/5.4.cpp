#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x1, x2, y1, y2, a, b, p, s;
	cout << "введите координаты вершины прямоугольника(x1,y1):";
	cin >> x1 >> y1;
	cout << "введите координаты противоположной вершины прямоугольника(x2,y2):";
	cin >> x2 >> y2;
	a = y2 - y1;
	b = x2 - x1;
	p = 2 * (a + b);
	s = a * b;
	cout << "периметр прямоугольника:" << p << "\nплощадь прямоугольника:" << s;
	return 0;
}