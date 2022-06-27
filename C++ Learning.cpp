#include <iostream>
using namespace std;

void foo(int n);


void main()
{
	setlocale(0, "ru");
	foo(5);

}

void foo(int n)
{
	if (n > 0) {
		foo(n - 1);
	}
	cout << "Я функция и меня вызвали!" << endl;
}