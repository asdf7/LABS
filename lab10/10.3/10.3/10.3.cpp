#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите a(a!=0):";
	cin >> a;
	if (a % 2 == 0 && a < 100)
	{
		cout << "высказывание истинно";
	}
	else
	{
		cout << "высказывание ложно";
	}
	return 0;
}