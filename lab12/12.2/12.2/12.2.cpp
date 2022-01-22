#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char c;
	int n;
	cout << "введите исходное направление робота(«N» — север, «W» — запад, «S» — юг, «E» — восток):";
	cin >> c;
	cout << "введите комманду(0 — продолжать движение, 1 — поворот налево, −1 — поворот направо):";
	cin >> n;
	switch (c)
	{
	case 'N':
		switch (n)
		{
		case 0: cout << "N"; break;
		case 1: cout << "W"; break;
		case -1: cout << "E"; break;
		}
		break;
	case 'W':
		switch (n)
		{
		case 0: cout << "W"; break;
		case 1: cout << "S"; break;
		case -1: cout << "N"; break;
		}
		break;
	case 'S':
		switch (n)
		{
		case 0: cout << "S"; break;
		case 1: cout << "E"; break;
		case -1: cout << "W"; break;
		}
		break;
	case 'E':
		switch (n)
		{
		case 0: cout << "E"; break;
		case 1: cout << "N"; break;
		case -1: cout << "S"; break;
		}
		break;
	}
	return 0;
}