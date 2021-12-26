#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, a1, a2, a3, a4, a5;
	cout << "введите a:";
	cin >> a;
	a1 = a * a;
	a2 = a1 * a;
	a3 = a2 * a1;
	a4 = a3 * a3;
	a5 = a4 * a3;
	cout << "a^15=" << a5;
	return 0;
}