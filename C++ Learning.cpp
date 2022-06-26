#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(0, "ru");

	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	int a;

	for (int i = 0; i < SIZE; i++) {
		a = rand() % 20;
		for (int j = 0; j < i; ) {
			if (a == arr[j]) {
				a = rand() % 20;
				j = 0;
			}
			else {
				j++;
			}
		}
		arr[i] = a;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	cout << "************************" << endl;

	int minDigit = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < minDigit) {
			minDigit = arr[i];
		}
	}
	cout << "Минимальное число: " << minDigit << endl;
}