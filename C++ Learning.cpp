#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	int width;
	int height;

	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	cout << "Введите высоту прямоугольника: ";
	cin >> height;

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << "*";
		}
		cout << endl;
	}
}