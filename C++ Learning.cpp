#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	cout << "начало цикла" << endl;

	for (int i = 0; ; i++) {
		cout << "переменная i = " << i << endl;
		if (i == 20) {
			break;
		}
	}

	cout << "конец цикла" << endl;


	int i = 0;

	while (true) {
		cout << "i = " << ++i << endl;
		if (i == 6) {
			break;
		}
	}


}