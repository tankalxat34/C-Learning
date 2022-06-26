#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	int arr[4];

	arr[0] = 5;
	arr[1] = 7;
	arr[2] = 10;
	arr[3] = 3333;

	cout << arr[55555] << endl;
}