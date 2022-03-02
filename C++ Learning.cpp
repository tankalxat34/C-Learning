#include <iostream>
using namespace std;


/* 
№1 - 1. Разработать программу, которая выводит на экран линию из
символов. Число символов, какой использовать символ, и какая будет
линия - вертикальная, или горизонтальная - указывает пользователь.
*/


void main()
{
	setlocale(0, "ru");
	
	int count_of_symbols;
	int counter = 0;
	char symbol;
	int orient;

	cout << "Данная программа выводит линию из символов на экран" << endl;

	cout << "Введите длину линии>>> ";
	cin >> count_of_symbols;

	cout << "Введите символ>>> ";
	cin >> symbol;

	cout << "Введите ориентацию\n\t1. горизонтальная\n\t2. вертикальная\n\n>>> ";
	cin >> orient;

	while (counter < count_of_symbols)
	{
		switch (orient)
		{
		case 1:
			cout << symbol;
			break;
		case 2:
			cout << symbol << endl;
			break;
		default:
			cout << "Введено неверное значение для ориентации. Программа завершена." << endl;
			break;
		}
		counter++;
	}
}