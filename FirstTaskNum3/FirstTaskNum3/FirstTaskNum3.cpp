// FirstTaskNum3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

/// Напишите программу, которая выводит на экран последовательность чисел Фибоначчи 
/// (до заданного значения с номером N). Значение N вводится с клавиатуры. 
/// Разработайте процедуру, реализующую:
/// а) итерационный алгоритм;
/// б) рекурсивный алгоритм.

void iteration(int size) // Итерационный алгоритм
{
	if (size <= 0) cout << "Длина последовательности меньше или равна 0"; 
	else if (size == 1) cout << "0"; 
	else {
		int first = 1;
		int second = 0;
		cout << "0 "; // Вывод первого члена последовательности

		for (int i = 1; i < size; i++)
		{
			cout << first << " ";
			first += second;
			second = first - second;
		}

		cout << endl;
	}
}

int recursion(int num) // Рекурсионный алгоритм
{
	int fib = 0;
	if (num < 1) return 0;
	if (num == 1) return 1;
	return recursion(num - 1) + recursion(num - 2);
}

int inChoice() // Выбор способа вычисления
{
	int choice;
	cout << "Как будем вычислять числа Фибоначчи? 1. Итерационный алгоритм 2. Рекурсивный алгоритм"
		<< endl << "Введите номер выбранного способа: ";
	cin >> choice;
	cout << endl;
	return choice;
}

int inSize() // Выбор размера последовательности
{
	int size;
	cout << "Введите длину последовательности из чисел Фибоначчи: ";
	cin >> size;
	cout << endl;
	return size;
}

int main()
{
	SetConsoleCP(1251);       // Включаем отображение кириллицы
	SetConsoleOutputCP(1251); // Включаем отображение кириллицы

	int size = inSize(); // Получение длины последовательности
	int choice = inChoice(); // Получение способа вычисления чисел Фибоначчи

	switch (choice)
	{
	case 1:
		iteration(size);
		break;

	case 2:
		int i = 0;
		while (i < size)
		{
			cout << recursion(i) << " ";
			i++;
		}

		cout << endl;
		break;
	}

    return 0;
}

