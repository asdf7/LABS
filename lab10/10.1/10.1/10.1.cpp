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
	if (a > 2 && b <= 3)
	{
		cout << "высказывание истинно";
	}
	else
	{
		cout << "высказывание ложно";
	}
	return 0;
}