#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	srand(time(NULL));

	// system("pause");

	// cout << "Hello world!" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << rand() % 10 + 5 << endl;
	};
	// system("explorer.exe C:\\Users\\podst\\OneDrive\\Рабочий стол\\РАНХиГС\\РАНХиГС Литература и Лекции\\Логика\\27.10.2021\\");
}

