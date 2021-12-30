#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите номер года n:";
	cin >> n;
	if (n > 0)
	{
		if (n % 100 != 0)
			cout << n << " год:" << n / 100 + 1 << " столетие";
		else if (n % 100 == 0)
			cout << n << " год:" << n / 100 << " столетие";
	}
	else
		cout << "год не может быть отрицательным";
	return 0;
}