#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int k;
	cout << "введите номер дня года k(1-365):";
	cin >> k;
	if (k > 0 && k < 366)
	{
		cout << "номер дня недели:" << k % 7;
	}
	else
		cout << "номер дня года должен лежать в диапазоне(1-365)";
	return 0;
}