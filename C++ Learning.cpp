#include <iostream>
using namespace std;

void fillArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}

void coutArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}

void main()
{
	setlocale(0, "ru");

	const int SIZE = 10;

	int arr[SIZE];

	coutArray(arr, SIZE);
	fillArray(arr, SIZE);
	coutArray(arr, SIZE);

	int a;
}