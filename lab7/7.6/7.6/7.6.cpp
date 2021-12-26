#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a1, b1, c1, a2, b2, c2, d, d1, d2, x, y;
	cout << "введите коэффициент a1:";
	cin >> a1;
	cout << "введите коэффициент b1:";
	cin >> b1;
	cout << "введите коэффициент c1:";
	cin >> c1;
	cout << "введите коэффициент a2:";
	cin >> a2;
	cout << "введите коэффициент b2:";
	cin >> b2;
	cout << "введите коэффициент c2:";
	cin >> c2;
	d = a1 * b2 - b1 * a2;
	d1 = c1 * b2 - b1 * c2;
	d2 = a1 * c2 - c1 * a2;
	x = d1 / d;
	y = d2 / d;
	cout << "x=" << x << "\ny=" << y;
	return 0;
}