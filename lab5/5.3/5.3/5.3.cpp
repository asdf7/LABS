#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, ac, bc, s;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	cout << "введите c(a<c<b):";
	cin >> c;
	if (c > a && c < b)
	{
		ac = c - a;
		bc = b - c;
		s = ac + bc;
		cout << "сумма длин отрезков ac и bc:" << s;
	}
	else
		cout << "точка c должна лежать между точками a и b";
	return 0;
}