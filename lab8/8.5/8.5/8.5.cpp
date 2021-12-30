#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, n;
	cout << "введите трехзначное число a:";
	cin >> a;
	if (a < 1000)
	{
		n = ((a % 100) * 10) + a / 100;
		cout << "число, полученное при перестановке цифр исходного числа:" << n;
	}
	else
		cout << "число должно быть трехзначным";
	return 0;
}