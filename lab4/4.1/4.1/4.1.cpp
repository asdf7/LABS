#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, s, p;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	s = a * b;
	p = (a + b) * 2;
	cout << "площадь:" << s << "\nпериметр:" << p;
	return 0;
}