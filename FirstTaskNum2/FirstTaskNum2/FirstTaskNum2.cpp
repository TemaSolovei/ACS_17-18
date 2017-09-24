// FirstTaskNum2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;


int inSize()
{
	int size; // ����������� �������
	cout << "������� ����������� �������� (����� �����): ";
	cin >> size;
	cout << endl;
	return size;
}

double* inVector(int size)
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

double* calculate(double* masOne, double* masTwo, int size) // ���������� ������������
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

	double *result = calculate(vectorOne, vectorTwo, size);

	cout << "������������ ���� �������� �������� ��������� �������:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << result[i] << " ";
	}

	cout << endl;

    return 0;
}


//// FirstTaskNum1.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//
//#include "stdafx.h"
//#include <iomanip> 
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
///// �������� ���������, ������� ������� �� ����� �������� ���������� ��� ������������ 
///// �����, ������� �������� � ����������. ���������� ����������� � ������� �������.
///// ������������ �������, �����������:
///// �) ������������ ��������;
///// �) ����������� ��������.
//
//double checkInt() // �������� ����� �� int
//{
//	double input;
//
//	std::cin >> input;
//	if (!std::cin)
//	{
//		std::cout << "� ��������� ��� ������� �����! � ���������� ��������� ����� �������� �����������" << std::endl;
//	}
//
//	return input;
//}
//
//double iteration(double num) // ���������� ������������ �������
//{
//	double result = 1;
//
//	if (num < 0) return 0;
//	else if (num == 0) return 1;
//	else for (int i = 1; i <= num; i++)
//	{
//		result *= i;
//	}
//
//	return result;
//}
//
//double recursion(double num) // ��������� ���������
//{
//	if (num < 0) return 0;
//	else if (num == 0) return 1;
//	else return num*recursion(num - 1);
//}
//
//double input() // ���� �����
//{
//	double num; // ������� �����
//	cout << "������� ����� ��� ���������� ����������: ";
//	num = checkInt();
//	cout << endl;
//	return num;
//}
//
//int choiceMethod() // ���� ���������� ������ ��� ���������� ����������
//{
//	int choice; // ��������� ����� ����
//	cout << "��� ����� ��������� ���������? 1. ������������� ���������� 2. ������������ ����������" << endl << "������� ��������� �������: ";
//	choice = checkInt();
//	cout << endl;
//	return choice;
//}
//
//int main()
//{
//	SetConsoleCP(1251);       // �������� ����������� ���������
//	SetConsoleOutputCP(1251); // �������� ����������� ���������
//	double fact = input(); // ���� �����
//	double factOld = fact; // �������� ����� ��� ������
//	int choice = choiceMethod();
//
//	switch (choice)
//	{
//	case 1:
//		fact = iteration(fact);
//		break;
//
//	case 2:
//		fact = recursion(fact);
//		break;
//	}
//
//	cout << "��������� ����� " << factOld << " ����� " << fact << endl;
//	return 0;
//}
