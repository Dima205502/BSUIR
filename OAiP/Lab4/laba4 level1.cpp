#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int min_el = 9e9, ind = 0, S = 0;
	setlocale(LC_ALL, "Rus");
	cout <<"\n������� ������ ������� ������� �� 10 ����� : ";
	int arr[10];
	for (int i = 0; i < 10; i++)
	{  
		cin >> arr[i];
	}
	cout << "��� ������ : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = 0; i < 10; i++)
	{
		if (fabs(arr[i]) < min_el)
		{
			ind = i;
			min_el = fabs(arr[i]);
		}
	}
	for (int i = ind + 1; i < 10; i++)
	{
		S += fabs(arr[i]);
	}
	cout << "����� ������� ��������� ������� ����� �������� � ����������� ������� " << min_el << " ��� ������� " << ind;
	cout << endl << S;





}