﻿#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите число(100-999):";
	cin >> a;
    switch (a / 100)
    {
    case 1: cout << "сто "; break;
    case 2: cout << "двести "; break;
    case 3: cout << "триста "; break;
    case 4: cout << "четыреста "; break;
    case 5: cout << "пятьсот "; break;
    case 6: cout << "шестьсот "; break;
    case 7: cout << "семьсот "; break;
    case 8: cout << "восемьсот "; break;
    case 9: cout << "девятьсот "; break;
    }
    switch ((a % 100) / 10)
    {
    case 0: break;
    case 2: cout << "двадцать "; break;
    case 3: cout << "тридцать "; break;
    case 4: cout << "сорок "; break;
    case 5: cout << "пятьдесят "; break;
    case 6: cout << "шестьдесят "; break;
    case 7: cout << "семьдесят "; break;
    case 8: cout << "восемьдесят "; break;
    case 9: cout << "девяносто "; break;
    case 1:
        switch (a % 100)
        {
        case 11: cout << "одиннадцать "; break;
        case 12: cout << "двенадцать "; break;
        case 13: cout << "тринадцать "; break;
        case 14: cout << "четырнадцать "; break;
        case 15: cout << "пятнадцать "; break;
        case 16: cout << "шестнадцать "; break;
        case 17: cout << "семнадцать "; break;
        case 18: cout << "восемнадцать "; break;
        case 19: cout << "девятнадцать "; break;
        case 10: cout << "десять "; break;
        }
    }
    if ((a % 100 / 10) != 1)
    {
        switch (a % 10)
        {
        case 0: break;
        case 1: cout << "один "; break;
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        }
    }
	return 0;
}