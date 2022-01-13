#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите число a(1-999):";
	cin >> a;
	if (a > 0 && a < 1000)
	{
		if (a % 2 == 0)
		{
			cout << "четное ";
			if (a < 100 && a > 9)
			{
				cout << "двузначное число";
			}
			else if (a > 99 && a < 1000)
			{
				cout << "трехзначное число";
			}
		}
		else
		{
			cout << "нечетное ";
			if (a < 100 && a > 9)
			{
				cout << "двузначное число";
			}
			else if (a > 99 && a < 1000)
			{
				cout << "трехзначное число";
			}
		}
	}
	return 0;
}