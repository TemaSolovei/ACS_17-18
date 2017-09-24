// FirstTaskNum1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iomanip> 
#include <iostream>
#include <Windows.h>
using namespace std;

/// Напишите программу, которая выводит на экран значение факториала для натурального 
/// числа, которое вводится с клавиатуры. Вычисление реализуется с помощью функции.
/// Разработайте функцию, реализующую:
/// а) итерационный алгоритм;
/// б) рекурсивный алгоритм.

double checkInt() // Проверка ввода на int
{
	double input;

	std::cin >> input;
	if (!std::cin)
	{
		std::cout << "В следующий раз введите число! В дальнейшем программа будет работать некорректно" << std::endl;
	}

	return input;
}

double iteration(double num) // Вычисление итерационным методом
{
	double result = 1;

	if (num < 0) return 0;
	else if (num == 0) return 1;
	else for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	return result;
}

double recursion(double num) // Вычислние рекурсией
{
	if (num < 0) return 0;
	else if (num == 0) return 1;
	else return num*recursion(num - 1);
}

double input() // Ввод числа
{
	double num; // Введёное число
	cout << "Введите число для вычисления факториала: ";
	num = checkInt();
	cout << endl;
	return num;
}

int choiceMethod() // Ввод выбранного метода для вычисления факториала
{
	int choice; // Выбранный пункт меню
	cout << "Как будем вычислять факториал? 1. Итерационнным алгоритмом 2. Рекурсионным алгоритмом" << endl << "Введите выбранный вариант: ";
	choice = checkInt();
	cout << endl;
	return choice;
}

int main()
{
	SetConsoleCP(1251);       // Включаем отображение кириллицы
	SetConsoleOutputCP(1251); // Включаем отображение кириллицы
	double fact = input(); // Ввод числа
	double factOld = fact; // Введённое число для вывода
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

	cout << "Факториал числа " << factOld << " равен " << fact << endl;
    return 0;
}