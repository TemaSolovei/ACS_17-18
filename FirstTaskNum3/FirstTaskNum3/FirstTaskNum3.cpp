// FirstTaskNum3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

/// �������� ���������, ������� ������� �� ����� ������������������ ����� ��������� 
/// (�� ��������� �������� � ������� N). �������� N �������� � ����������. 
/// ������������ ���������, �����������:
/// �) ������������ ��������;
/// �) ����������� ��������.

void iteration(int size) // ������������ ��������
{
	if (size <= 0) cout << "����� ������������������ ������ ��� ����� 0"; 
	else if (size == 1) cout << "0"; 
	else {
		int first = 1;
		int second = 0;
		cout << "0 "; // ����� ������� ����� ������������������

		for (int i = 1; i < size; i++)
		{
			cout << first << " ";
			first += second;
			second = first - second;
		}

		cout << endl;
	}
}

int recursion(int num) // ������������ ��������
{
	int fib = 0;
	if (num < 1) return 0;
	if (num == 1) return 1;
	return recursion(num - 1) + recursion(num - 2);
}

int inChoice() // ����� ������� ����������
{
	int choice;
	cout << "��� ����� ��������� ����� ���������? 1. ������������ �������� 2. ����������� ��������"
		<< endl << "������� ����� ���������� �������: ";
	cin >> choice;
	cout << endl;
	return choice;
}

int inSize() // ����� ������� ������������������
{
	int size;
	cout << "������� ����� ������������������ �� ����� ���������: ";
	cin >> size;
	cout << endl;
	return size;
}

int main()
{
	SetConsoleCP(1251);       // �������� ����������� ���������
	SetConsoleOutputCP(1251); // �������� ����������� ���������

	int size = inSize(); // ��������� ����� ������������������
	int choice = inChoice(); // ��������� ������� ���������� ����� ���������

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

