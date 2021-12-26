#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, x, b;
	cout << "введите коэффициент a:";
	cin >> a;
	cout << "введите коэффициент b:";
	cin >> b;
	if (a == 0)
		cout << "коэффициент a не может быть равен 0";
	else
	{
		x = -(b / a);
		cout << "x=" << x;
	}
	return 0;
}