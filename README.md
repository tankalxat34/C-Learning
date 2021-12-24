![alt](https://pros-cons.net/wp-content/uploads/2018/12/cpp-programming.png)
# C++ Learning
Here I'm placing my C++ training programs

@tankalxat34

# How to use?
- `C++ Learning.cpp` - the main file

- `C-Learning/Debug/C++ Learning.exe` - exe file

# Quick tips
## Типы данных

|  Тип   | Размер в байтах |                                    Пояснение                                     |      Диапазон значений      |
|--------|-----------------|----------------------------------------------------------------------------------|-----------------------------|
| float  |               4 | Описывает Вещественные числа одинарной точности                                  | нет                         |
| double |               8 | Описывает Вещественные числа двойной точности. Хранит больше диапазонов значений | нет                         |
|        |                 |                                                                                  |                             |
| void   |               - | Переменная не может иметь тип void. Обозначает отсутствие любого типа данных.    | нет                         |
| int    |               4 | Описывает целые числа                                                            | от -2147...68 до -2147...68 |
| short  |               2 | Описывает короткие целые числа                                                   | от -32768 до 32768          |
| long   |               4 | Описывает длинные целые числа                                                    | от -2147...68 до -2147...68 |
|        |                 |                                                                                  |                             |
| char   |               1 | Описывает символы                                                                | нет                         |
| bool   |               1 | Описывает логические значения                                                    | false true                  |


## Базовые конструкции
### Читаемая кириллица
```c++
setlocale(LC_ALL, "ru");
```
или
```c++
setlocale(0, "ru");
```

### Консоль не закрывается после выполнения программы
```c++
system("pause");
```

### Пояснение к include
```c++
#include<iostream> 
```
Данная строчка подключает в программу библиотеку под названием iostream. 

Библиотека - файл, в котором содержатся описания различных функций, реализованных другими программистами.
Программа получила возможность использовать функции находящиеся в библиотека iostream

`#include` - директива препроцессора. То, что выполняется еще на этапе компиляции.

### Пространства имен
```c++
using namespace std;
```
Используем пространство имен.

Пространство имен - некая область, на которой приходятся действия оператора или функции.
Для того, тчобы использовать оператор, находящийся в определенном пространстве, необхордимо 
подключить это пространство в свою программу. Ниже подключается пространство под названием std

Например для `cout` без использования `using namespace std;` надо писать:
```c++
std::cout << "Hello" << std::endl;
```

## Программы
### Закрашенный прямоугольник из звездочек
```c++
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
			cout << "*";
		};
		cout << endl;
	};	
}
```

### Прямоугольник из звездочек
```c++
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
```

