﻿#include <iostream>
#include "paintprint.h"

using namespace std;

/* 
№1 - 1. Разработать программу, которая выводит на экран линию из
символов. Число символов, какой использовать символ, и какая будет
линия - вертикальная, или горизонтальная - указывает пользователь.
*/


void main()
{
	setlocale(0, "ru");
	
	cout << "\033[92m" << "Привет мир!" << "\033[0m" << endl;

	cout << RED "Hello world!" << endl;
}