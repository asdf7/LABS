#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "введите размер файла(байт):";
	cin >> a;
	b = a / 1024;
	if (a % 1024 == 0)
		cout << "размер файла(бит):" << b;
	else
		cout << "размер файла(бит):" << b + 1;
	return 0;
}