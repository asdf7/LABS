#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	float a = 1;
	float b = 1.1;
	cout << "введите число n(n>0):";
	cin >> n;
	int i = 0;
	while (i < n)
	{
		a *= b;
		b += 0.1;
		i++;
	}
	cout << a;
	return 0;
}