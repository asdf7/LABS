#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "введите сторону a:";
	cin >> a;
	cout << "введите сторону b:";
	cin >> b;
	cout << "введите сторону c:";
	cin >> c;
	if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
	{
		cout << "высказывание истинно";
	}
	else
	{
		cout << "высказывание ложно";
	}
	return 0;
}