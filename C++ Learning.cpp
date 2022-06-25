#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	cout << "начало цикла" << endl;

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		cout << "переменная i = " << i << endl;
	}

	cout << "конец цикла" << endl;


}