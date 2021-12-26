#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, a1;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	a1 = a;
	a = b;
	b = a1;
	cout << "a=" << a << "\nb=" << b;
	return 0;
}