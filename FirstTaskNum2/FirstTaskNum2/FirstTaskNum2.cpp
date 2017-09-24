// FirstTaskNum2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

/// �������� ���������, ������� ������� �� ����� �������� ���������� ������������ ���� ��������, 
/// �������� ��������� ������� �������� � ����������. ��� ����� �������� ��������� �������
/// �������� ���������. ���������� ���������� ������������ ����������� ��� 
/// ������� (������� ���������� ��� ���������).


int inSize() // ��������� ����������� �������
{
	int size; // ����������� �������
	cout << "������� ����������� �������� (����� �����): ";
	cin >> size;
	cout << endl;
	return size;
}

double* inVector(int size) // ���� ��������
{
	double *mas = new double[size]; // ��������� ������ ��� ������

	for (int i = 0; i < size; i++)
	{
		cout << "������� " << i + 1 << " ������� �������: ";
		cin >> mas[i];
		cout << endl;
	}

	return mas;
}

double* calculate(double* masOne, double* masTwo, int size) // ���������� ������������ ��������
{
	double *newMas = new double[size]; // ��������� ������ ��� ������

	for (int i = 0; i < size; i++) // ����������� ������ �������
	{
		newMas[i] = masOne[i] * masTwo[i];
	}

	return newMas;
}

int main()
{
	SetConsoleCP(1251);       // �������� ����������� ���������
	SetConsoleOutputCP(1251); // �������� ����������� ���������

	int size = inSize(); // �������� ����������� �������

	cout << "���� ������� �������. ������� ������ �����!" << endl;
	double *vectorOne = inVector(size);
	cout << "���� ������� �������. ������� ������ �����!" << endl;
	double *vectorTwo = inVector(size);

	double *result = calculate(vectorOne, vectorTwo, size); // ���������� ������������

	cout << "������������ ���� �������� �������� ��������� �������:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << result[i] << " ";
	}

	cout << endl;

    return 0;
}