#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x1, x2, y1, y2, r;
	cout << "введите координаты 1й точки(x1,y1):";
	cin >> x1 >> y1;
	cout << "введите координаты 2й точки(x2,y2):";
	cin >> x2 >> y2;
	r = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "расстояние между точками:" << r;
	return 0;
}