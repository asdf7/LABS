#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, s;
	int n;
	cout << "введите число a:";
	cin >> a;
	cout << "введите число n(n>0):";
	cin >> n;
	s = 1;
	float a1 = a;
	for (int i = 0; i < n; i++)
	{
		s += a1;
		a1 *= a;
	}
	cout << "сумма:" << s;
	return 0;
}