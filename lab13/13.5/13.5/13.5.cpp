#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, a1, s;
	int n;
	cout << "введите число a:";
	cin >> a;
	cout << "введите число n(n>0):";
	cin >> n;
	s = 1;
	a1 = 1;
	for (int i = 0; i < n; i++)
	{
		a1 *= -a;
		s += a1;
	}
	cout << "сумма:" << s;
	return 0;
}