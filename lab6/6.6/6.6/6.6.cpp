#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, a1, a2, a3;
	cout << "введите a:";
	cin >> a;
	a1 = a * a;
	a2 = a1 * a1;
	a3 = a2 * a2;
	cout << "a^8=" << a3;
	return 0;
}