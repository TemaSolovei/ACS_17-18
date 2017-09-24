// FirstTaskNum2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

/// Напишите программу, которая выводит на экран значение скалярного произведения двух векторов, 
/// значения элементов которых вводятся с клавиатуры. Для ввода значений элементов массива
/// напишите процедуру. Вычисление скалярного произведения реализуется как 
/// функция (векторы передаются как параметры).


int inSize() // Получение размерности массива
{
	int size; // Размерность вектора
	cout << "Введите размерность векторов (целое число): ";
	cin >> size;
	cout << endl;
	return size;
}

double* inVector(int size) // Ввод векторов
{
	double *mas = new double[size]; // Выделение памяти под массив

	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " элемент вектора: ";
		cin >> mas[i];
		cout << endl;
	}

	return mas;
}

double* calculate(double* masOne, double* masTwo, int size) // Вычисление произведения векторов
{
	double *newMas = new double[size]; // Выделение памяти под массив

	for (int i = 0; i < size; i++) // Составление нового вектора
	{
		newMas[i] = masOne[i] * masTwo[i];
	}

	return newMas;
}

int main()
{
	SetConsoleCP(1251);       // Включаем отображение кириллицы
	SetConsoleOutputCP(1251); // Включаем отображение кириллицы

	int size = inSize(); // Получаем размерность массива

	cout << "Ввод первого вектора. Вводите только числа!" << endl;
	double *vectorOne = inVector(size);
	cout << "Ввод второго вектора. Вводите только числа!" << endl;
	double *vectorTwo = inVector(size);

	double *result = calculate(vectorOne, vectorTwo, size); // Вычисление произведения

	cout << "Произведение двух векторов выглядит следующим образом:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << result[i] << " ";
	}

	cout << endl;

    return 0;
}