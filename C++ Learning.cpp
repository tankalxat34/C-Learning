#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(0, "ru");

	srand(time(NULL));

	const int ROW = 3, COL = 4;

	int arr[ROW][COL]{};

	for (int rows = 0; rows < ROW; rows++) {
		for (int columns = 0; columns < COL; columns++) {
			arr[rows][columns] = rand() % 10;
		}
	}


}