#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, c;
	cout << "введите стоимость 1кг конфет:";
	cin >> a;
	float b = 0.1;
	while (b < 1.1)
	{
		c = a * b;
		cout << "стоимость " << b << "кг конфет:" << c << endl;
		b += 0.1;
	}
	return 0;
}