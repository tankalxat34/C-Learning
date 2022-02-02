#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	int digit;

	cout << "Введите число: ";
	cin >> digit;

	if (digit % 2 == 0)
	{
		cout << "Число " << digit << " четное" << endl;
	}
	else
	{
		cout << "Число " << digit << " нечетное" << endl;
	}
}

