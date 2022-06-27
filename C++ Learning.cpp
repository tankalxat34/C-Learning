#include <iostream>
using namespace std;

int foo(int a) {
	return ++a;
};

void main()
{
	setlocale(0, "ru");

	int a = 1;

	a = foo(a);

	cout << a << endl;
}