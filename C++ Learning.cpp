#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	double c;
	double shot;

	cout << "Введите число: ";
	cin >> c;

	int i = 2;

	for (i; i < c; i++) {
		if (i * i > c) {
			i--;
			break;
		}
		else if (i * i == c) {
			break;
		}
	}

	shot = (c - i * i) / (double)(2*i);

	cout << "sqrt(" << c << ") = " << i + shot << endl;
}