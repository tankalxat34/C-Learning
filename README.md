![alt](https://itproger.com/paid_courses/img/cpp_profi_icon.png)

[![alt](https://img.shields.io/badge/download-exe-green?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/raw/main/Debug/C%2B%2B%20Learning.exe) [![alt](https://img.shields.io/badge/view-cpp-F34B7D?style=for-the-badge)](https://github.com/tankalxat34/C-Learning/blob/main/C%2B%2B%20Learning.cpp)

[![alt](https://img.shields.io/badge/-ONLINE%20COURSE-ff0000?style=for-the-badge&logo=youtube)](https://www.youtube.com/playlist?list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r)
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

## Переменные
__Переменная__ - область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных, содержимое которой может быть изменено.

Объявление *(создание)* переменной: `тип_данных имя_переменной;`

### Как можно объявить переменную?
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

### Вывод переменной на экран
```c++
cout << a;
```

### Примечания
- Имя переменной должно быть читаемым!
- Дробная часть в типе `int` *будет отброшена*
- Тип `char` инициализируется с одинарными кавычками: `char a = 'f';`

## Константы
__Константа__ - область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных, содержимое которой _НЕ МОЖЕТ_ быть изменено

### Объявление константы
```c++
const int COUNT_DAYS_IN_WEEK = 7;
const char NEW_LINE = '\n';
```

## Ввод данных
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

### Ввод двух переменных за один раз
```c++
cin >> var1 >> var2;
```

## Операторы
Виды операторов:
- унарные
- бинарные
- тернарные

На данном этапе могут быть перичислены не все операторы ввиду поэтапного прохождения курса

### Унарные операторы
Для действий нужен только 1 операнд


#### Унарный минус
Меняет знак числа на противоположный
```c++
int a = 5;
cout << a << endl; // выведет 5
a = -a;
cout << a << endl; // выведет -5
```


### Бинарные
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


### Тернарные
Для действий нужен только 3 операнда

### Домашнее задание
__Введите три числа и выведите на экран значение суммы произведения и среднее арифметическое этих чисел__

#### Мое решение
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

#### Решение с урока
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

## Инкремент и декремент
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

### Главное различие

Префиксный инкремент: `++a;` - увеличивает сразу

Постфиксный инкремент: `a++;` - увеличивает потом, после остальных операций

Префиксный декремент: `--a;` - уменьшает сразу

Постфиксный декремент: `a--;` - уменьшает потом, после остальных операций

### Примеры

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

## Сокращенные арифметические операции
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

## Логические операторы
|              Название              | Обозначение | Пример |
|------------------------------------|-------------|--------|
| Логическое И                       | &&          |        |
| Логическое ИЛИ                     | ||          |        |
| Логическое НЕ                      | !=          |        |
| Логическое следование (импликация) | <=          |        |
