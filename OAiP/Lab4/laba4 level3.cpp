#include<iostream>
using namespace std;
void Show(int n, int* nums);
int* massiv(int n)
{
	int* nums = new int[n];
	for (int i = 0; i < n; i++)
	{
		nums[i] = rand() % 21;

	}
	Show(n,nums);
	return nums;
}
void Show(int n,int* nums)
{ 
	cout << "¬аш массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}
void delmassiv(int* nums, int n)
{
	int* arr = new int[n - (n / 3)];
	for (int i = 0, k = 0, j = 1; i < n - (n / 3); i++, j++, k++)
	{

		if (j % 3 == 0)
		{
			arr[i] = nums[k + 1];
			k++;
			j++;
		}
		else
		{
			arr[i] = nums[k];
		}
	}
	Show(n - (n / 3), arr);
	delete[] arr;
}
void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "¬ведите размер массива: ";
	cin >> n;
	int* mass = massiv(n);
	delmassiv(mass, n);
	delete[] mass;

}