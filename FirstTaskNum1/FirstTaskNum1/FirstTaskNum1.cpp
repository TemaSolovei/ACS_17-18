// FirstTaskNum1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	setlocale(LC_COLLATE, "rus"); // ����� ������� ��������� ������, �������� ����������� ���������
	int fact = Input(); // ���� �����
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
	int num; // ������� �����
	cout << "������� ����� ��� ���������� ����������: ";
	num = CheckInt();
	cout << endl;
	return num;
}

int Choice()
{
	int choice; // ��������� ����� ����
	cout << "��� ����� ��������� ���������? 1. ������������� ���������� 2. ������������ ����������" << endl << "������� ��������� �������: ";
	choice = CheckInt();
	cout << endl;
	return choice;
}

int CheckInt() // �������� ����� �� int
{
	int input;
	std::cin >> i;
	if (!std::cin)
	{
		std::cout << "������� �����!" << std::endl;
	}

	return input;
}
