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
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	c = abs(a) / abs(b);
	if (a != 0 && b != 0)
		cout << "сумма модулей:" << s << "\nразность модулей:" << r << "\nпроизведение модулей:" << p << "\nчастное модулей:" << c;
	else
		cout << "a и b должны быть ненулевые";
	return 0;
}