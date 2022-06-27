#include <iostream>
#include <ctime>
using namespace std;

void foo() {
	cout << "Я функция, меня вызвали!" << endl;
};

int summa(int a, int b) {
	return a + b;
}

void main()
{
	setlocale(0, "ru");

	cout << summa(5, 3) << endl;

}