#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите трехзначное число a:";
	cin >> a;
	if (a / 100 < (a % 100 / 10) && (a % 100 / 10) < a % 10 || a / 100 > (a % 100 / 10) && (a % 100 / 10) > a % 10)
	{
		cout << "высказывание истинно";
	}
	else
		cout << "высказывание ложно";
	return 0;
}