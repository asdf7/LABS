#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int k, n;
	cout << "введите номер дня года k(1-365):";
	cin >> k;
	if (k > 0 && k < 366)
	{
		cout << "введите номер дня, с которого начался год n(1-7):";
		cin >> n;
		if (n > 0 && n < 8)
			cout << "номер дня недели:" << (k + (n - 1)) % 7;
		else
			cout << "номер дня, с которого начался год должен лежать в диапазоне(1-7)";
	}
	else
		cout << "номер дня года должен лежать в диапазоне(1-365)";
	return 0;
}