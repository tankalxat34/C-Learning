#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	bool isRain = true;

	if (isRain)
	{
		cout << "Возьми зонт!" << endl;
	}
	else
	{
		cout << "Зонт не нужен!" << endl;
	}
}

