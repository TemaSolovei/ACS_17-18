// FirstTaskNum5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int maxELement(int* mas) // Вычисление максимального элемента
{
	int maximal = mas[0];

	for (int i = 1; i < 15; i++)
	{
		if (mas[i] > maximal) maximal = mas[i];
	}

	return maximal;
}

int minELement(int* mas) // Вычисление минимального элемента
{
	int minimal = mas[0];

	for (int i = 1; i < 15; i++)
	{
		if (mas[i] < minimal) minimal = mas[i];
	}
	
	return minimal;
}

int* inputMas() // Ввод массива
{
	int *mas = new int[15];
	
	cout << "Не забывайте, что вводить можно только целые числа!!!" << endl;

	for (int i = 0; i < 15; i++)
	{
		cout << "Введите " << i + 1 << " из 15 элемент массива: ";
		cin >> mas[i];
		cout << endl;
	}

	return mas;
}

int main()
{
	SetConsoleCP(1251);       // Включаем отображение кириллицы
	SetConsoleOutputCP(1251); // Включаем отображение кириллицы

	int* mas = inputMas(); // Получение массива
	int min = minELement(mas); // Вычисление минимального элемента
	int max = maxELement(mas); // Вычисление максимального элемента

	cout << "Минимальный элемент массива = " << min << endl;
	cout << "Максимальный элемент массива = " << max << endl;

    return 0;
}

