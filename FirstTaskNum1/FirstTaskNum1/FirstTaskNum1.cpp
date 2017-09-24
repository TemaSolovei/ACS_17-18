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
	int fact = input(); // Ввод числа
	int factOld = fact; // Введённое число для вывода
	int choice = choiceMethod();

	switch (choice)
	{
	case 1:
		fact = iteration(fact);
		break;

	case 2:
		fact = recursion(fact);
		break;
	}

	cout << "Факториал числа " << factOld << " равен " << fact;
    return 0;
}

int iteration(int num)
{
	int result = 1;

	if (num < 0) return 0;
	else if (num == 0) return 1;
	else for (int i = 1; i <= num; i++)
			{ 
				result *= i;
			}

	return result;
}

int recursion(int num)
{
	if (num < 0) return 0;
	else if (num == 0) return 1;
	else return num*recursion(num - 1);
}

int input()
{
	int num; // Введёное число
	cout << "Введите число для вычисления факториала: ";
	num = checkInt();
	cout << endl;
	return num;
}

int choiceMethod()
{
	int choice; // Выбранный пункт меню
	cout << "Как будем вычислять факториал? 1. Итерационнным алгоритмом 2. Рекурсионным алгоритмом" << endl << "Введите выбранный вариант: ";
	choice = checkInt();
	cout << endl;
	return choice;
}

int checkInt() // Проверка ввода на int
{
	int input;
	std::cin >> input;
	if (!std::cin)
	{
		std::cout << "Введите число!" << std::endl;
	}

	return input;
}
