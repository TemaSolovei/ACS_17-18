// FirstTaskNum4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);       // �������� ����������� ���������
	SetConsoleOutputCP(1251); // �������� ����������� ���������

	int sumAll = 0; // ����� ���� �����
	int sumPlus = 0; // ����� ���� �������������
	int max = 0; // ������������ ����� �������������
	int input; // �������� ������
	bool flag = false; // �������� �� �������� ������������� �����
	char symb[10]; // �������� ������

	do
	{
		cout << "������� ��������� �����: ";
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

	cout << "����� ���� �������� ����� = " << sumAll << endl;
	cout << "����� ���� �������� ������������� ����� = " << sumPlus << endl;
	if (max == 0) cout << "������������� ����� �� ����������" << endl;
	else cout << "������������ ������������� ����� = " << max << endl;

    return 0;
}

