#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	if (a != b)
	{
		if (a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}
	}
	else
	{
		a = 0;
		b = 0;
	}
	cout << "a=" << a << "\nb=" << b;
	return 0;
}