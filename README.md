![alt](https://itproger.com/paid_courses/img/cpp_profi_icon.png)

[![alt](https://img.shields.io/badge/download-exe-green?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/raw/main/Debug/C%2B%2B%20Learning.exe) [![alt](https://img.shields.io/badge/view-cpp-F34B7D?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/blob/main/C%2B%2B%20Learning.cpp)

[![alt](https://img.shields.io/badge/-ONLINE%20COURSE-ff0000?style=for-the-badge&logo=youtube)](https://www.youtube.com/playlist?list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r)
# C++ Learning
Здесь я размещаю свои записи по ходу изучения С++ по онлайн курсу, автором которого является ютуб канал [SimpleCode](https://www.youtube.com/c/SimpleCodeIT)

@tankalxat34

# Файлы
- [`C++ Learning.cpp`](https://github.com/tankalxat34/C-Learning/blob/main/C%2B%2B%20Learning.cpp) - главный файл с кодом.
- [`C-Learning/Debug/C++ Learning.exe`](https://github.com/tankalxat34/C-Learning/raw/main/Debug/C%2B%2B%20Learning.exe) - скомпилированный exe файл.

# Программы

## Квадратный корень числа

```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	double c;
	double shot;

	cout << "Введите число: ";
	cin >> c;

	int i = 2;

	for (i; i < c; i++) {
		if (i * i > c) {
			i--;
			break;
		}
		else if (i * i == c) {
			break;
		}
	}

	shot = (c - i * i) / (double)(2 * i);

	cout << "sqrt(" << c << ") = " << i + shot << endl;
}
```

# Быстрые советы по С++

## [Отладка](https://www.youtube.com/watch?v=_ZairtpcXTs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=30)

### Основные понятия и работа

Отладка - процесс поиска ошибок в работе программы. Если есть ошибка на какой-то строчке, ставим *точку останова*. Точка останова - маркер, до которого в режиме отладки выполнится программа и остановится для ожидания "ручного" продолжения работы.

В Visual Studio запуск откладки делается на клавишу F5, либо во вкладке "Отладка". Дальнейший запуск отладчика делается на клавишу `F10`.

Наведя курсор мыши на переменную или выражение в режиме отладки VS выведет ее значение на экран в маленьком окошке. Эти окошки можно закрепить 

Остановка отладки делается комбинацей "Shift + F5".

### Шаги

- *шаг с заходом* - позволяет пройти в функцию, которая у нас есть в программе.
- *шаг с обходом* - отладчик не заходит в фукнкцию, просто получает из нее значение.

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
### №1
Разработать программу, которая выводит на экран линию из 
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

### №2
Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователем.

Мое решение:
```c++
#include <iostream>
using namespace std;

/* Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, 
указанном пользователем. */

void main()
{
	setlocale(0, "ru");

	int start_number;
	int end_number;
	int local_number;
	int sum = 0;

	cout << "Данная программа находит сумму всех целых нечетных чисел в поьзовальтельском диапазоне" << endl;
	
	cout << "Начало диапазона: ";
	cin >> start_number;

	cout << "Конец диапазона: ";
	cin >> end_number;

	local_number = start_number;
	while (local_number < end_number)
	{
		if (local_number % 2 != 0)
		{
			// если число нечетное - прибавляем к сумме
			sum = sum + local_number;
		};
		local_number++;
	};
	cout << "Искомая сумма: " << sum << endl;
}
```

Решение с урока: 

```c++
#include <iostream>
using namespace std;

/* Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, 
указанном пользователем. */

void main()
{
	setlocale(0, "ru");

	int sum = 0;
	int rangeBegin, rangeEnd;

	cout << "Введите начало диапазона: ";
	cin >> rangeBegin;

	cout << "Введите конец диапазона: ";
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		};
		rangeBegin++;
	} while (rangeBegin<rangeEnd);
	cout << "Сумма всех нечетных чисел в указанном диапазоне: " << sum << endl;
}
```

# Цикл for
Последний цикл, который есть в C++.

В круглых спобках цикла есть три части:
1. Какая переменная инициалихируется итератором цикла?
2. Проверка какого либо условия. Если оно возвращает `True` - программа продолжает работу, иначе заканчивает работу.
3. Постфиксный инкремент для переменной, которая выступает итератором.

Данные части не обязательны. Можно оставлять пустыми эти части, но они обязательно должны быть отделены символом `;`.

Синтаксис:
```c++
for (int i = 0; i < length; i++)
{
	cout << "Hello world" << endl;
};
```

## Фишки и особенности цикла for

1. Итератор цикла, объявленный в цикле, виден только в этом цикле.
2. Части можно выносить из цикла `for` и оставлять в скобках пустоты, разделенные `;`.


# Ключевое слово `break`

`break` необходимо для того, чтобы прервать работу цикла при определенных условиях

Пример:
```c++
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

}
```

Цикл отработает так:
```
начало цикла
переменная i = 0
переменная i = 1
переменная i = 2
переменная i = 3
переменная i = 4
переменная i = 5
переменная i = 6
переменная i = 7
переменная i = 8
переменная i = 9
переменная i = 10
переменная i = 11
переменная i = 12
переменная i = 13
переменная i = 14
переменная i = 15
переменная i = 16
переменная i = 17
переменная i = 18
переменная i = 19
переменная i = 20
конец цикла
```

# Ключевое слово `continue`

Оно необходимо для того, чтобы не выполнить некоторую часть кода в цикле и при этом не выйти из самого цикла.



# Ключевое слово `goto`

Позволяет пропустить кусок кода и перейти к выполнению того кода, который идет после "ссылки".

Пример:

```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	cout << "один" << endl;

	goto link;

	cout << "два" << endl;

	cout << "три" << endl;

	cout << "четыре" << endl;

	link:

	cout << "пять" << endl;
}
```

Консоль:
```c++
один
пять
```

# Вложенные циклы

Нужны для реализации более сложных алгоритмов (например: сортировка массива, работа в n-мерными циклами).

Пример простого вложенного цикла:

```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");
	
	for (int i = 0; i < 10; i++) {
		cout << "1й цикл итерация №" << i << endl;
		for (int j = 0; j < 10; j++) {
			cout << "\t2й цикл итерация №" << j << endl;
		}
	}
}
```

## [Домашнее задание](https://www.youtube.com/watch?v=k1s1tnoVH9U&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=32)

Написать программу с помощью вложенных циклов, которая выводит прямоугольник на экран.

Мой код:

```c++
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
```

# Массивы

Массив - совокупность переменных (элементов), которая позволяет хранить несколько однотипных значений.

Виды массивов:
- Статический (хранится в программе, запущенной в оперативной памяти)
- Динамический (хранится вне программы. На него будет указывать адрес)

В зависимости от типа массив может хранить определенный тип данных.

**Нумерация элементов в массиве всегда начинается с 0**

## На практике

Создание массива: `тип_данных имя[количество_элементов]`.

```c++
// создание массива
int arr[4];

// запись значений в массив
arr[0] = 5;
arr[1] = 7;
arr[2] = 10;
arr[3] = 3333;
```

**Если обратиться к индексу, которого нет, то программа может работать корректно (элемент будет равен какому-то мусору из памяти), либо вылетать и падать.**

## [Способы инициализации](https://www.youtube.com/watch?v=7q-SbRdW_24&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=35)

Можно сразу при инициализации массива указать его содержимое:

```c++
int arr[] = {1, 66, 12, 2};

// более новая запись
int arr[]{1, 66, 12, 2};

// указание количества элементов
int arr[4]{1, 66, 12, 2};
```

Если мы указываем количество элементов массива больше, чем присвоили туда при инициализации, то все остальные элементы будут нулями

```c++
int arr[10]{1, 66, 12, 2};
// arr 0x00000021aaeff7c8 {1, 66, 12, 2, 0, 0, 0, 0, 0, 0}
```

Создание массива с нулями:

```c++
int arr[4]{};
```

## [Вывод массива на экран](https://www.youtube.com/watch?v=gKOgCG1PHKI&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=35)

Код:

```c++
#include <iostream>
using namespace std;

void main()
{
	setlocale(0, "ru");

	const int SIZE = 10;

	int arr[SIZE]{};

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}
```

## [Ключевое слово `sizeof`](https://www.youtube.com/watch?v=8-HR57Jfaz4&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=36)

**`sizeof`** - Возвращает длину в байтах типа данных либо переменной, которую мы используем вместе с этим ключевым словом.

Пример:

```c++
cout << sizeof(4) << endl;
```

### Пробежка по элементам массива

Измерение количества элементов массива:

```c++
int arr[]{ 5, 33, 545, 111, 326 };
cout << sizeof(arr) / sizeof(int) << endl; // вернет 5
```

Вес массива в байтах в памяти (20 байта) делим на вес типа int (4 байта) даст нам **5 байт**.

Самый универсальный способ:

```c++
int arr[]{ 5, 33, 545, 111, 326 };
cout << sizeof(arr) / sizeof(arr[0]) << endl; // не зависит от типа данных в массиве
```

# Генератор случайных чисел

Одноразовая генерация псевдослучайного числа, которое будет постоянно одним и тем же.
```c++
int a = rand();
cout << a << endl;
```

Для того, чтобы генерировать действительно разные числа, написать в начале программы следующее:
```c++
srand(целое_число);
```

А чтобы было прям ваще все красиво, используй функцию `time`, которая возвращает количество секунд, прошедшее с 01.01.1970. Она находится в библиотеке `ctime`.

```c++
// каждый раз будет устанавливаться новая точка отсчета для генератора случайных чисел
// эту функцию вызывать один раз в начале программы
srand(time(NULL));
```

## Диапазоны генерации

```c++
int a;

a = rand() % 10 // [0; 10]
a = rand() % 10 + 5 // [5; 15]
```

## Домашнее задание

Сделать генератор случайных чисел для массива на 10 элементов. Элементы должны быть уникальным. Диапазон: [0; 20].

Мой код:

```c++
#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(0, "ru");

	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	int a;

	for (int i = 0; i < SIZE; i++) 
	{
		a = rand() % 20;
		for (int j = 0; j < i; )
		{
			if (a == arr[j]) {
				a = rand() % 20;
				j = 0;
			}
			else {
				j++;
			}
		}
		arr[i] = a;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}
```

# [Минимальное значение массива](https://www.youtube.com/watch?v=V9Ab0Xqhu0A&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=39)

Суть: переменную для хранения минимума сделаем равной нулевому элементу массива. Далее пробежимся по нему с первого элемента и будем проверять - является ли текущий элемент меньшим минимума - если да, переприсвоим минимум.

Код с дополнением из прошлого урока:

```c++
#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(0, "ru");

	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	int a;

	for (int i = 0; i < SIZE; i++) {
		a = rand() % 20;
		for (int j = 0; j < i; ) {
			if (a == arr[j]) {
				a = rand() % 20;
				j = 0;
			}
			else {
				j++;
			}
		}
		arr[i] = a;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	cout << "************************" << endl;

	int minDigit = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < minDigit) {
			minDigit = arr[i];
		}
	}
	cout << "Минимальное число: " << minDigit << endl;
}
```

# [Двумерные массивы](https://www.youtube.com/watch?v=JqwUUCZe62M&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=40)

Двумерный массив лучше всего представлять в виде таблицы - СТРОКА-СТОЛБЕЦ.

## Обращение к двумерному массиву

Код вывода элемента:

```
a[строка][столбец]
```

```c++
cout << a[0][0] << endl;
```

## [Инициализация двумерного массива](https://www.youtube.com/watch?v=JqwUUCZe62M&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=41)

```c++
const int ROW = 2, COL = 4;

// инициализация "мусорного" массива
int arr[ROW][COL];

// инициализация массива с нулями
int arr[ROW][COL]{};

// инициализация массива сразу
int arr[ROW][COL]
{
	{2, 4, 66, 7},
	{5, 76, 23, 13}
};
```

# Функции

Функция - конструкция, которая позволяет вынести некоторый частоповторяющийся участок кода в отдельное место.

Синтаксис:

```c++
тип_возвращаемого_значения имя_функции(параметры) {
	блок_кода;
	return некое_значение;
}
```

## [Передача аргументов (параметров)](https://www.youtube.com/watch?v=0QvNhSN_ivs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=44)

Код ниже выведет на экран `1`:

```c++
#include <iostream>
using namespace std;

void foo(int a) {
	a++;
};

void main()
{
	setlocale(0, "ru");

	int a = 1;

	foo(a);

	cout << a << endl;
}
```

Аргументы функции никак не относятся к переменным, поэтому при передаче `a` в качестве параметра `a` функции `foo()` в результате переменная `a` не изменилась, так как функция ничего не вернула.

А такой код выведет на экран цифру 2:

```c++
#include <iostream>
using namespace std;

int foo(int a) {
	return ++a;
};

void main()
{
	setlocale(0, "ru");

	int a = 1;

	a = foo(a);

	cout << a << endl;
}
```

## [Передача массива в функцию](https://www.youtube.com/watch?v=r1wWlUCZW08&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=45)

**Массив не передается по значению** - мы можем передавать массив в функцию, которая его будет изменять, не боясь того, что массив не будет изменен в функции `main`. Тут передается **указатель массива**.

**Указатель** - так называемый "ярлычок", который ссылается (указывает) на переменную/массив и т.п.

В нашем случае **имя массива есть указатель на этот массив**.

Код с урока:

```c++
#include <iostream>
using namespace std;

void fillArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}

void coutArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}

void main()
{
	setlocale(0, "ru");

	const int SIZE = 10;

	int arr[SIZE];

	coutArray(arr, SIZE);
	fillArray(arr, SIZE);
	coutArray(arr, SIZE);

	int a;
}
```

Передавать размер массива в функцию обработки массива НЕОБХОДИМО, так как при измерении количества элементов через `sizeof` мы измерим **указатель (ярлык на массив)**, а **не сам массив**.

## Прототипы функций

В языке C++ есть проблема - если мы не описали функцию перед её вызовом, то возникнет ошибка: `Идентификатор не найден`. В некоторых других языках такой проблемы нет. Чтобы решить такую проблему, придумали **прототипы функций**.

Для того, чтобы написать прототип, достаточно написать функцию не полностью:

```c++
void foo();
```

Обычно прототипы объявляют вверху файла с программой.