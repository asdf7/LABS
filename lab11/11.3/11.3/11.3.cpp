#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x1, x2, x3, y1, y2, y3, ab, ac;
	cout << "введите координаты точки a(x1,y1):";
	cin >> x1 >> y1;
	cout << "введите координаты точки b(x2,y2):";
	cin >> x2 >> y2;
	cout << "введите координаты точки c(x3,y3):";
	cin >> x3 >> y3;
	ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if (ab < ac)
	{
		cout << "b, " << ab;
	}
	else
	{
		cout << "c, " << ac;
	}
	return 0;
}