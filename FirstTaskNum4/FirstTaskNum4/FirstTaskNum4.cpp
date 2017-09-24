// FirstTaskNum4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);       // Включаем отображение кириллицы
	SetConsoleOutputCP(1251); // Включаем отображение кириллицы

	int sumAll = 0; // Сумма всех чисел
	int sumPlus = 0; // Сумма всех положительных
	int max = 0; // Максимальное среди отрицательных
	int input; // Введённый символ
	bool flag = false; // Проверка на введённые отрицательные числа
	char symb[10]; // Введённый символ

	do
	{
		cout << "Введите следующее число: ";
		cin >> symb;
		cout << endl;
		input = atoi(symb);
		if (symb[0] == '*') break;
		
			sumAll += input;
			if (input > 0) sumPlus += input;
			if ((flag == false) && (input < 0))
			{
				max = input;
				flag = true;
			}
			if ((flag == true) && (input < 0))
			{
				if (input > max) max = input;
			}
		

	} while (symb[0] != '*');

	cout << "Сумма всех введённых чисел = " << sumAll << endl;
	cout << "Сумма всех введённых положительных чисел = " << sumPlus << endl;
	if (max == 0) cout << "Отрицательных чисел не обнаружено" << endl;
	else cout << "Максимальное отрицательное число = " << max << endl;

    return 0;
}

