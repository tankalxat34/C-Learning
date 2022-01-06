#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;

	cout << "Введите три числа: " << endl;
	cin >> a >> b >> c;

	cout << "Сумма: " << a + b + c << endl;
	cout << "Произведение: " << a * b * c << endl;
	cout << "Среднее: " << (double)(a + b + c)/3 << endl;
}