#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int ugol_g;
	float ugol_r;
	cout << "введите угол в градусах(0-360):";
	cin >> ugol_g;
	if (ugol_g >= 0 && ugol_g <= 360)
	{
		ugol_r = ugol_g / 180.0;
		cout << ugol_g << " градусов=" << ugol_r << " pi радиан";
	}
	else
		cout << "значение угла должно лежать в промежутке(0-360)";
	return 0;
}