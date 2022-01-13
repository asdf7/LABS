#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	cout << "введите c:";
	cin >> c;
	if (a < b && b < c)
	{
		cout << "высказывание истинно";
	}
	else
	{
		cout << "высказывание ложно";
	}
	return 0;
}