![alt](https://itproger.com/paid_courses/img/cpp_profi_icon.png)

[![alt](https://img.shields.io/badge/download-exe-green?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/raw/main/Debug/C%2B%2B%20Learning.exe) [![alt](https://img.shields.io/badge/view-cpp-F34B7D?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/blob/main/C%2B%2B%20Learning.cpp)

[![alt](https://img.shields.io/badge/-ONLINE%20COURSE-ff0000?style=for-the-badge&logo=youtube)](https://www.youtube.com/playlist?list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r)
# C++ Learning
Здесь я размещаю свои записи по ходу изучения С++ по онлайн курсу, автором которого является ютуб канал [SimpleCode](https://www.youtube.com/c/SimpleCodeIT)

@tankalxat34

# Файлы
- [`C++ Learning.cpp`](https://github.com/tankalxat34/C-Learning/blob/main/C%2B%2B%20Learning.cpp) - главный файл с кодом.
- [`C-Learning/Debug/C++ Learning.exe`](https://github.com/tankalxat34/C-Learning/raw/main/Debug/C%2B%2B%20Learning.exe) - скомпилированный exe файл.

# Быстрые советы по С++
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
| char   |               1 | Описывает символы. Имеет возможность хранить только 1 символ!                    | нет                         |
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

# Переменные
__Переменная__ - область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных, содержимое которой может быть изменено.

Объявление *(создание)* переменной: `тип_данных имя_переменной;`

## Как можно объявить переменную?
```c++
int a = 5;
```
```c++
int a;
a = 5;
```
```c++
int a, b, c;
```
```c++
int a = 15, b = 2, c = 4;
```

## Вывод переменной на экран
```c++
cout << a;
```

## Примечания
- Имя переменной должно быть читаемым!
- Дробная часть в типе `int` *будет отброшена*
- Тип `char` инициализируется с одинарными кавычками: `char a = 'f';`

# Константы
__Константа__ - область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных, содержимое которой _НЕ МОЖЕТ_ быть изменено

## Объявление константы
```c++
const int COUNT_DAYS_IN_WEEK = 7;
const char NEW_LINE = '\n';
```

# Ввод данных
Ввод данных в переменную осуществляется с помощью оператора `cin` из пространства имен `std` следующим образом:
```c++
int Var; //объявление переменной

cout << "Введите число: "; //сообщение
cin >> Var; //сохранение введенного числа в переменную Var
cout << "Вы ввели число " << Var << endl; //вывод Var на экран
```

Еще пример
```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	int Var, Var2; 

	cout << "Введите первое число: ";
	cin >> Var;
	cout << "Введите второе число: ";
	cin >> Var2;

	cout << "Вы ввели числа " << Var << " и " << Var2;
}
```

## Ввод двух переменных за один раз
```c++
cin >> var1 >> var2;
```

# Операторы
Виды операторов:
- унарные
- бинарные
- тернарные

На данном этапе могут быть перичислены не все операторы ввиду поэтапного прохождения курса

## Унарные операторы
Для действий нужен только 1 операнд


### Унарный минус
Меняет знак числа на противоположный
```c++
int a = 5;
cout << a << endl; // выведет 5
a = -a;
cout << a << endl; // выведет -5
```


## Бинарные
Для действий нужен 2 операнда - слева и справа.

|              Название              | Обозначение | Пример |
|------------------------------------|-------------|--------|
| Сложение                           | +           | 5+3=8  |
| Вычитание                          | -           | 8-3=5  |
| Умножение                          | *           | 2*3=6  |
| Деление                            | /           | 5/2=2  |
| Деление по модулю                  | %           | 5%2=1  |
|                                    |             |        |
| Равен                              | ==          |        |
| Неравен                            | !=          |        |
| Меньше                             | <           |        |
| Больше                             | >           |        |
| Меньше или равно                   | <=          |        |
| Больше или равно                   | >=          |        |
|                                    |             |        |
| Логическое И                       | &&          |        |
| Логическое ИЛИ                     | ||          |        |
| Логическое НЕ                      | !=          |        |
| Логическое следование (импликация) | <=          |        |


## Тернарные
Для действий нужен только 3 операнда

## Домашнее задание
__Введите три числа и выведите на экран значение суммы произведения и среднее арифметическое этих чисел__

### Мое решение
```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;

	cout << "Введите три числа: ";
	cin >> a >> b >> c;

	cout << "Сумма: " << a + b + c << endl;
	cout << "Произведение: " << a * b * c << endl;
	cout << "Среднее: " << (a + b + c)/3 << endl;
}
```

### Решение с урока
В этом решении используется приведение типов.

Для того, чтобы изменить тип данных результата какого либо действия нужно написать в скобках необходимый тип данных перед действием, которое выдает этот результат:
```c++
cout << "Среднее: " << (double)(a + b + c)/3 << endl;
```


```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;

	cout << "Введите три числа: " << endl;
	cin >> a >> b >> c;

	cout << "Сумма: " << a + b + c << endl;
	cout << "Произведение: " << a * b * c << endl;
	cout << "Среднее: " << (double)(a + b + c)/3 << endl;
}
```

# Инкремент и декремент
Это унарные операторы. Отчасти они являются арифметическими.

__Инкремент__- `a++;` увеличение на 1

__Декремент__ - `a--;` уменьшение на 1

Сразу пример:
```c++
// необходимо увеличить переменную a на 1
int a = 1;
a = a + 1;
a++;
cout << a << endl; // выведется 3
```

## Главное различие

Префиксный инкремент: `++a;` - увеличивает сразу

Постфиксный инкремент: `a++;` - увеличивает потом, после остальных операций

Префиксный декремент: `--a;` - уменьшает сразу

Постфиксный декремент: `a--;` - уменьшает потом, после остальных операций

## Примеры

Постфиксный инкремент:
```c++
int a = 1;
cout << a << endl;	
cout << a++ << endl; // выведет 1
```

Префиксный инкремент:
```c++
int a = 1;
cout << a << endl;	
cout << ++a << endl; // выведет 2
```

# Сокращенные арифметические операции
Арифметические операции с C++ можно сокращать. Например:
- `a += 20;` - увеличить `a` на 20
- `a -= 20;` - уменьшить `a` на 20
- `a *= 20;` - умножить `a` на 20
- `a /= 20;` - разделить `a` на 20

```с++
int a = 1;
a += 20;
cout << a << endl; // выведет 21
```

# Логические операторы
|              Название              | Обозначение | Пример |
|------------------------------------|-------------|--------|
| Логическое И                       | &&          |        |
| Логическое ИЛИ                     | Две вертикальные черты          |        |
| Логическое НЕ                      | !=          |        |
| Логическое следование (импликация) | <=          |        |


# Конструкция логического выбора if
Лесенка `if - else if`

Синтаксис:
```c++
if (выражение или утверждение)
{
	действие1;
	действие2;
	...
	действиеN;
}
else if (выражение или действие)
{
	действие1;
	действие2;
	...
	действиеN;
}
else
{
	действие1;
	действие2;
	...
	действиеN;
}
```



# Оператор множественного выбора switch

Проверяется результат выражения в равенстве условиям в `case`

Синтаксис выглядит так:

```c++
switch (выражение)
{
case значение1:
	действие1;
	break;

// так switch тоже можно записывать
case значение2:
{
	действие2;
}
break;

default:
	действие_по_умолчанию;
	break
}
```

Ключевое слово `break` означает, что после этого слова программа ничего не выполняет.
Если `break` в первом кейсе убрать, то программа продолжит свое выполнение, и **все действия во втором кейсе также выполнятся**


## Домашнее задание ""Калькулятор"
Задача: Написать простой калькулятор. Пользователь вводит значение двух переменных. Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. Через оператор switch реализовать математическую операцию соответствующую пункту меню.

Я решил эту задачу так:
```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	int value1;
	int value2;
	char operation;

	cout << "Введите первое число: ";
	cin >> value1;

	cout << "Введите оператор (+; -; *; /): ";
	cin >> operation;

	cout << "Введите второе число: ";
	cin >> value2;

	switch (operation)
	{
	case '+':
		cout << value1 + value2;
		break;
	case '-':
		cout << value1 - value2;
		break;
	case '*':
		cout << value1 * value2;
		break;
	case '/':
		cout << value1 / value2;
		break;
	default:
		cout << "Получено неверное значение!";
		break;
	}
}
```

В разборе предложено следующее решение:

```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	int a, b, selection;

	cout << "Введите два числа : ";
		cin >> a >> b;

	cout << "Выберите математическую операцию" << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление" << endl;

	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "Сложение: " << a + b;
		break;
	case 2:
		cout << "Вычитание: " << a - b;
		break;
	case 3:
		cout << "Умножение: " << a * b;
		break;
	case 4:
		cout << "Деление: " << a / b;
		break;
	default:
		cout << "Ошибка! Пункт меню отсутствует!" << endl;
		break;
	}
}
```

# Циклы

Здесь начинается большая тема по циклам. Начинаем с цикла `while`

## Цикл while
Этот цикл выполняется, пока какое-либо условие истинно

Синтаксис:
```c++
while (утверждение)
{
	действие_для_повторения;
};
```

## Цикл do while
Выражение, которое попадает в этот цикл, выполнется обязательно в первый раз. Такой цикл называется "цикл с постусловием"

Например этот код выведет надпись один раз:
```c++
int a=20;

do
{
	cout << "Переменная a = " << a << endl;
	a++;
} while (a < 20);
```

Этот цикл используется достаточно редко, но всё равно про него не стоит забывать

## Домашние задания
№1 - 1. Разработать программу, которая выводит на экран линию из 
символов. Число символов, какой использовать символ, и какая будет 
линия - вертикальная, или горизонтальная - указывает пользователь. 

Мое решение:
```c++
#include <iostream>
using namespace std;


void main()
{
	setlocale(0, "ru");
	
	int count_of_symbols;
	int counter = 0;
	char symbol;
	int orient;

	cout << "Данная программа выводит линию из символов на экран" << endl;

	cout << "Введите длину линии>>> ";
	cin >> count_of_symbols;

	cout << "Введите символ>>> ";
	cin >> symbol;

	cout << "Введите ориентацию\n\n\t1. горизонтальная\n\t2. вертикальная\n\n>>> ";
	cin >> orient;

	switch (orient)
	{
	case 1:
		while (counter < count_of_symbols)
		{
			cout << symbol;
			counter++;
		};
		break;
	case 2:
		while (counter < count_of_symbols)
		{
			cout << symbol << endl;
			counter++;
		}
		break;
	default:
		break;
	}
}
```

Мой второй вариант. Здесь switch находится во внешней части программы. 

```c++
#include <iostream>
using namespace std;


void main()
{
	setlocale(0, "ru");
	
	int count_of_symbols;
	int counter = 0;
	char symbol;
	int orient;

	cout << "Данная программа выводит линию из символов на экран" << endl;

	cout << "Введите длину линии>>> ";
	cin >> count_of_symbols;

	cout << "Введите символ>>> ";
	cin >> symbol;

	cout << "Введите ориентацию\n\t1. горизонтальная\n\t2. вертикальная\n\n>>> ";
	cin >> orient;

	while (counter < count_of_symbols)
	{
		switch (orient)
		{
		case 1:
			cout << symbol;
			break;
		case 2:
			cout << symbol << endl;
			break;
		default:
			cout << "Введено неверное значение для ориентации. Программа завершена." << endl;
			break;
		}
		counter++;
	}
}
```



