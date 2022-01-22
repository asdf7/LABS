#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	int r = 0;
	cout << "введите число n(n>0):";
	cin >> n;
	int i = 1;
	while (i <= n * 2 - 1)
	{
		r += i;
		i += 2;
		cout << r << endl;
	}
	return 0;
}