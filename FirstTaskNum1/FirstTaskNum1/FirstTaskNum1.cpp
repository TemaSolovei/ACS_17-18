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
	int fact = input(); // ���� �����
	int factOld = fact; // �������� ����� ��� ������
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

	cout << "��������� ����� " << factOld << " ����� " << fact;
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
	int num; // ������� �����
	cout << "������� ����� ��� ���������� ����������: ";
	num = checkInt();
	cout << endl;
	return num;
}

int choiceMethod()
{
	int choice; // ��������� ����� ����
	cout << "��� ����� ��������� ���������? 1. ������������� ���������� 2. ������������ ����������" << endl << "������� ��������� �������: ";
	choice = checkInt();
	cout << endl;
	return choice;
}

int checkInt() // �������� ����� �� int
{
	int input;
	std::cin >> input;
	if (!std::cin)
	{
		std::cout << "������� �����!" << std::endl;
	}

	return input;
}
