#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float v1, v2, s, s1, t;
	cout << "введите скорость 1го автомобиля v1(км/ч):";
	cin >> v1;
	cout << "введите скорость 2го автомобиля v2(км/ч):";
	cin >> v2;
	cout << "введите расстояние между ними s(км):";
	cin >> s;
	cout << "введите время t(ч):";
	cin >> t;
	s1 = s + v1 * t + v2 * t;
	cout << "расстояние между автомобилями через " << t << "ч=" << s1 << "км";
	return 0;
}