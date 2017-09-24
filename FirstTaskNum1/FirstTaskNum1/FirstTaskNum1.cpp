// FirstTaskNum1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>
using namespace std;

/// 
/// 
///
///

int main()
{
	setlocale(LC_COLLATE, "rus"); // Вызов функции настройки локали, включаем отображение кириллицы
	int fact = Input(); // Ввод числа
	int choice = Choice();

	switch (choice)
	{
	case 1:
		break;

	case 2:
		break;
	}

    return 0;
}

int Input()
{
	int num; // Введёное число
	cout << "Введите число для вычисления факториала: ";
	num = CheckInt();
	cout << endl;
	return num;
}

int Choice()
{
	int choice; // Выбранный пункт меню
	cout << "Как будем вычислять факториал? 1. Итерационнным алгоритмом 2. Рекурсионным алгоритмом" << endl << "Введите выбранный вариант: ";
	choice = CheckInt();
	cout << endl;
	return choice;
}

int CheckInt() // Проверка ввода на int
{
	int input;
	std::cin >> i;
	if (!std::cin)
	{
		std::cout << "Введите число!" << std::endl;
	}

	return input;
}
