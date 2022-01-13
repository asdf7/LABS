#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c, s;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	cout << "введите c:";
	cin >> c;
	if (a <= b && b <= c)
	{
		s = b + c;
	}
	else if (a >= b && b <= c)
	{
		s = a + c;
	}
	else if (a >= b && b >= c)
	{
		s = a + b;
	}
	cout << "сумма:" << s;
	return 0;
}