#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
void main()
{
	FILE* f;
	setlocale(LC_ALL, "Rus");
	cout << "\t���� " << endl;
	cout << "1) ��������\n" << "2) ��������" << endl << "3) ����������\n" << "4) ������� ��������������� �������" << endl;
	cout << " ������� ����� ���� ( ������� ����� ) : ";
	int number;
	cin >> number;
	switch (number) {
	case  1:

		f = fopen("infa.txt", "w");
		if (f == NULL)
		{
			cout << "������ �������� �����" << endl;
		}
		else
		{
			cout << "���� ������" << endl;
		}
		break;
	default:
		cout << "��� ������\n";
	}
}