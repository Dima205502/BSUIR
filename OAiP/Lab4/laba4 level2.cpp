#include<iostream>
#include<string>
using namespace std;
int main()
{
	srand(time(NULL));
	int arr[10];
	setlocale(LC_ALL, "Rus");
	cout << "������� �������� �������(� ��������� ������ ����� ������� ��������� �����) ";
	start:
	cout << "\nYes/No" << endl;
	string S;
	cin >> S;
	switch (S[0])
	{ case 'Y':
		cout << "������� ������ ������� ������� �� 10 ��������� : ";
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		break;
	case 'N':
			for (int i = 0; i < 10; i++)
			{
		    arr[i]=rand()%21;
			}
			break;
	default:
		cout << "������������ ����";
		goto start;
	}

	cout << "��� ������ : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n������ ��������� �� ������������� ����� : ";
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] >0)
		{
			arr[i] = 0;
		}
		else
		{
			cout << arr[i] << " ";
		}
	}


}
