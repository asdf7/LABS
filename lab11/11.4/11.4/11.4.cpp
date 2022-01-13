#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, y;
	cout << "введите координаты точки(x,y):";
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << "1 координатная чертверть";
	}
	else if (x < 0 && y > 0)
	{
		cout << "2 координатная чертверть";
	}
	else if (x < 0 && y < 0)
	{
		cout << "3 координатная чертверть";
	}
	else
	{
		cout << "4 координатная чертверть";
	}
	return 0;
}