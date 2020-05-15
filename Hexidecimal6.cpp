#include <iostream>
#include<Windows.h>
using namespace std;
int StringLength(char str[], const int n)
{
	int temp = 0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i] != '\0')temp++; else return temp;
	}
}
int pow(16, p)
{
	int m = 1;
	for (int i = 0; i < p; i++)
	{
		if (p > 0);

		{
			m *= 16;
		}
		else
		{
			m = 1;
		}
	}
	return m;
}
int HEX_TO_DEC(char str[n])
{
	int  s, k, p;
	s = 0;
	p = (StringLength() - 1);
	for (int i = 0; str[i] != '\0'; i++)
	{
		switch (StringLength(str[i]))
		{
		case 'A': k = 10; break;
		case 'B':k = 11; break;
		case 'C':k = 12; break;
		case 'D': k = 13; break;
		case 'E': k = 14; break;
		case 'F':k = 15; break;
		case '1': k = 1; break;
		case '2':k = 2; break;
		case '3':k = 3; break;
		case '4': k = 4; break;
		case '5': k = 5; break;
		case '6':k = 6; break;
		case '7':k = 7; break;
		case '8': k = 8; break;
		case '9':k = 9; break;
		case '0':k = 0; break;
		}
		s = s + k * pow(16, p);
		p--
	}
	cout << "Число в десятиричной системе счисления:" << s << endl;
	return 0;
}
void main()
{
	setlocale(LC_ALL, "");
	const int n = 256;
	char str[n] = {};
	cout << "Введите число в шестнадцатиричной системе счисления: ";
	cin >> str;
	cout << "Число в десятиричной системе счисления:" << HEX_TO_DEC() << endl;
}