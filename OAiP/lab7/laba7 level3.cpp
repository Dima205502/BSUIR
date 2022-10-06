#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
void main()
{
	FILE* f;
	setlocale(LC_ALL, "Rus");
	cout << "\tМЕНЮ " << endl;
	cout << "1) Создание\n" << "2) Просмотр" << endl << "3) Добавление\n" << "4) Решение индивидуального задания" << endl;
	cout << " Укажите пункт меню ( введите число ) : ";
	int number;
	cin >> number;
	switch (number) {
	case  1:

		f = fopen("infa.txt", "w");
		if (f == NULL)
		{
			cout << "Ошибка открытия файла" << endl;
		}
		else
		{
			cout << "Файл создан" << endl;
		}
		break;
	default:
		cout << "Все хорошо\n";
	}
}