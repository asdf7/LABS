#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "введите кол-во секунд, прошедших с начала суток:";
	cin >> n;
	cout << "с начала последней минуты прошло " << n % 60 << " сек";
	return 0;
}