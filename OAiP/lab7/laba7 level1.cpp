//laba 7 level 3
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void main()
{
	
	string S;
	cin >> S;
	string S1(S);
	ofstream shifr;
	shifr.open("shifr.txt");
	if (!shifr.is_open())
	{

		cout << "Error" << endl;
	}
	else
	{
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == 'z')
			{
				S[i] = 'a';
				continue;
			}
			if (S[i] == 'Z')
			{
				S[i] = 'A';
				continue;
			}
			S[i] = (char)(S[i] + 1);
		}
		shifr << S;
	}
	shifr.close();
	ifstream deshifr;
	deshifr.open("shifr.txt");
	if (!deshifr.is_open())
	{

		cout << "Error" << endl;
	}
	else
	{
		
		char ch;
		string str;
		while (!deshifr.eof())
		{
			deshifr >> str;
			cout << "\nShifr in file: " << str << endl;

		}
		cout << "\nDeshifr: "<<S1;
		}
	deshifr.close();
}
