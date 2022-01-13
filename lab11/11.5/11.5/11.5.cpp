#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите число a:";
	cin >> a;
	if (a > 0)
	{
		cout << "положительное ";
		{
			if (a % 2 == 0)
			{
				cout << "четное число";
			}
			else
			{
				cout << "нечетное число";
			}
		}
	}
	else if (a < 0)
	{
		cout << "отрицательное ";
		if (a % 2 == 0)
		{
			cout << "четное число";
		}
		else
		{
			cout << "нечетное число";
		}
	}
	else
	{
		cout << "нулевое число";
	}
	return 0;
}