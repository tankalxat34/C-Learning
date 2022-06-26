#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	int arr[]{ 5, 33, 545, 111, 326 };

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << endl;
	}

}