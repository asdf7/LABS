#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int ugol_g;
	float ugol_r;
	cout << "введите угол в радианах(0-2):";
	cin >> ugol_r;
	if (ugol_r >= 0 && ugol_r <= 2)
	{
		ugol_g = ugol_r * 180;
		cout << ugol_r << " pi радиан=" << ugol_g << " градусов";
	}
	else
		cout << "значение угла должно лежать в промежутке(0-2)";
	return 0;
}