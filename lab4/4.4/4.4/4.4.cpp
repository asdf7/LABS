#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, s, r, p, c;
	cout << "введите a:";
	cin >> a;
	cout << "введите b:";
	cin >> b;
	s = a * a + b * b;
	r = a * a - b * b;
	p = (a * a) * (b * b);
	c = (a * a) / (b * b);
	if (a != 0 && b != 0)
		cout << "сумма квадратов:" << s << "\nразность квадратов:" << r << "\nпроизведение квадратов:" << p << "\nчастное квадратов:" << c;
	else
		cout << "a и b должны быть ненулевые";
	return 0;
}