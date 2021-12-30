#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, n;
	cout << "введите двузначное число a:";
	cin >> a;
	if (a < 100)
	{
		n = a % 10 * 10 + a / 10;
		cout << "число, полученное при перестановке цифр исходного числа:" << n;
	}
	else
		cout << "число должно быть двузначным";
	return 0;
}