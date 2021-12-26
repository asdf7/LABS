#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, a1;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	cout << "введите c:";
	cin >> c;
	a1 = a;
	a = b;
	b = c;
	c = a1;
	cout << "a=" << a << "\nb=" << b << "\nc=" << c;
	return 0;
}