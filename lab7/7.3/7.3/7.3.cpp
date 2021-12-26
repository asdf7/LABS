#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, a, kg1, y, ykg;
	cout << "введите x(кг):";
	cin >> x;
	cout << "введите a(руб):";
	cin >> a;
	kg1 = a / x;
	cout << "введите y(кг)";
	cin >> y;
	ykg = kg1 * y;
	cout << "вес 1кг конфет:" << kg1 << "руб\nвес " << y << "кг конфет:" << ykg << "руб";
	return 0;
}