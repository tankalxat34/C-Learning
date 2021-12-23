#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int WIDTH = 0;
	int HEIGHT = 0;

	cout << "Введите длину: ";
	cin >> WIDTH;
	
	cout << "Введите высоту: ";
	cin >> HEIGHT;

	for (int j = 0; j < HEIGHT; j++)
	{
		for (int i = 0; i < WIDTH; i++)
		{
			if (j == 0 or j == HEIGHT - 1 or i == 0 or i == WIDTH - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			};
		};
		cout << endl;
	};	
}