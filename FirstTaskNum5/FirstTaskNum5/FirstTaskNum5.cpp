// FirstTaskNum5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int maxELement(int* mas)
{
	int maximal = mas[0];

	for (int i = 1; i < 15; i++)
	{
		if (mas[i] < maximal) maximal = mas[i];
	}

	return maximal;
}

int minELement(int* mas)
{
	int minimal = mas[0];

	for (int i = 1; i < 15; i++)
	{
		if (mas[i] < minimal) minimal = mas[i];
	}
	
	return minimal;
}

int* inputMas()
{
	int *mas = new int[15];
	
	cout << "�� ���������, ��� ������� ����� ������ ����� �����!!!" << endl;

	for (int i = 0; i < 15; i++)
	{
		cout << "������� " << i + 1 << " �� 15 ������� �������: ";
		cin >> mas[i];
		cout << endl;
	}

	return mas;
}

int main()
{
	SetConsoleCP(1251);       // �������� ����������� ���������
	SetConsoleOutputCP(1251); // �������� ����������� ���������

	int* mas = inputMas();
	int min = minELement();
	int max = maxELement();

	cout << "����������� ������� ������� = " << min << endl;
	cout << "������������ ������� ������� = " << max << endl;

    return 0;
}

