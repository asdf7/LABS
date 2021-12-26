#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, y;
	cout << "введите коэффициент x:";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * (x * x) - 7;
	cout << "y=" << y;
	return 0;
}