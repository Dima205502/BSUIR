#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int min_el = 9e9, ind = 0, S = 0;
	setlocale(LC_ALL, "Rus");
	cout <<"\nВведите каждый элемент массива из 10 чисел : ";
	int arr[10];
	for (int i = 0; i < 10; i++)
	{  
		cin >> arr[i];
	}
	cout << "Ваш массив : ";
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
	cout << "Сумма модулей элементов массива после элемента с минимальным модулем " << min_el << " под номером " << ind;
	cout << endl << S;





}