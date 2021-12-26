#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, avg;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	avg = (a + b) / 2;
	cout << "среднее арифметическое:" << avg;
	return 0;
}